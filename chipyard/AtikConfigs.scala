package chipyard

import atik.WithAtikMinimalRoCC
import org.chipsalliance.cde.config.Config

class AtikMinimalRoCCConfig extends Config(
  new WithAtikMinimalRoCC ++
    new freechips.rocketchip.subsystem.WithoutTLMonitors ++
    new freechips.rocketchip.rocket.WithNHugeCores(1) ++
    new chipyard.config.WithSystemBusWidth(128) ++
    new chipyard.config.AbstractConfig
)
