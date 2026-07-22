import sbt.project

ThisBuild / scalaVersion := "2.13.16"
ThisBuild / version := "0.1"
ThisBuild / organization := "azeer"

val chiselVersion = "6.7.0"

// Atik's RoCC sources compile against the locally built Chipyard artifacts.
// These are produced by the normal Chipyard setup and replace the unpublished
// org.chipsalliance 1.6-SNAPSHOT Maven coordinates previously used here.
val chipyardJars = Seq(
  file("../rocket-chip/src/target/scala-2.13/rocketchip_2.13-1.6.jar"),
  file("../rocket-chip/macros/target/scala-2.13/rocketmacros_2.13-1.6.jar"),
  file("../diplomacy/diplomacy/src/target/scala-2.13/diplomacy_2.13-1.6.jar"),
  file("../hardfloat/hardfloat/src/target/scala-2.13/hardfloat_2.13-1.6.jar"),
  file("../../tools/cde/target/scala-2.13/cde_2.13-1.6.jar"),
  file("../../sims/firesim/sim/midas/targetutils/target/scala-2.13/midas-targetutils_2.13-1.0-SNAPSHOT.jar")
)

lazy val root = (project in file("."))
  .settings(
    name := "atik",
    Compile / unmanagedJars ++= chipyardJars.map(Attributed.blank),
    libraryDependencies ++= Seq(
      "org.chipsalliance" %% "chisel" % chiselVersion,
      "ch.epfl.scala" %% "bloop-config" % "2.0.3",
      "edu.berkeley.cs" %% "chiseltest" % "6.0.0" % Test,
      "org.scalatest" %% "scalatest" % "3.2.16" % Test
    ),
    scalacOptions ++= Seq(
      "-language:reflectiveCalls",
      "-deprecation",
      "-feature",
      "-Xcheckinit",
      "-P:chiselplugin:genBundleElements"
    ),
    addCompilerPlugin("org.chipsalliance" % "chisel-plugin" % chiselVersion cross CrossVersion.full),
    resolvers ++= Resolver.sonatypeOssRepos("snapshots") ++ Seq(Resolver.mavenLocal)
  )
