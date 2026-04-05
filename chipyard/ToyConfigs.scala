package chipyard

import org.chipsalliance.cde.config.Config
import toyrocc.{MatmulAccel2x2, MatmulAccel4x4, SoftmaxAccel, WithToyRoCC}

class SoftmaxAccelConfig extends Config(
  new SoftmaxAccel ++
    new freechips.rocketchip.rocket.With1TinyCore ++
    new chipyard.config.WithSystemBusWidth(128) ++
    new chipyard.config.AbstractConfig
)

class MatmulAccel2x2Config extends Config(
  new MatmulAccel2x2 ++
  new freechips.rocketchip.rocket.WithNHugeCores(1) ++
  new chipyard.config.WithSystemBusWidth(128) ++
  new chipyard.config.AbstractConfig
)

class MatmulAccel4x4Config extends Config(
  new MatmulAccel4x4 ++
    new freechips.rocketchip.rocket.WithNHugeCores(1) ++
    new chipyard.config.WithSystemBusWidth(128) ++
    new chipyard.config.AbstractConfig
)


class DummyToyRoCCConfig extends Config(
  new WithToyRoCC ++
  new freechips.rocketchip.rocket.WithNHugeCores(1) ++
  new chipyard.config.WithSystemBusWidth(128) ++
  new chipyard.config.AbstractConfig
)
