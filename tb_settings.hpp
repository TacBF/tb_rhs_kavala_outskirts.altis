class ICE {
    class vehicles {
        class armaments { startFullyRearmed = 1; };
    };
    class zones {
        #include "zoneList.hpp"
    };

  class mission {
    gameMode = "A&S";
    missionScale = "tiny";
    recommendedTotalPlayers = 16;

        class briefings {
            class west { original = "briefing_blue.hpp"; };
            class east { original = "briefing_red.hpp"; };
        };

    class factions {
      class faction {
        bluFor = "TB_faction_NLD";
        opFor = "TB_faction_JOR";
      };
    };
    class scoring {
      class tickets {
        bluFor = 100;
        opFor = 100;
      };
    };
  };
  class respawn {
        class vehicles {
            class respawnDelay {
                multiplier = -1;
            };
        };
    class FO {
      minSpacingDist = 600;
      maxFriendlySiteDist = 900;
      minZoneDist = 300;
      minEnemyFBDist = 500;
      minEnemyBaseDist = 1000;
            minEnemyZoneDist = 450;
    };
    class SRP {
      maxFriendlySiteDist = 300;
    };
    class HO {
      minSpacingDist = 250;
    };

        class infantry {
            baseDuration = 60;
            class unevenTeamsPenaltyTime
            {
                ratioDuration = 60;
                maxDuration = 150;
            };
        };
  };
  class gameModes {
      class objectives {
            class zones {
                class captureRates {
                    heldZoneMultiplier = 2;
                    neutralZoneMultiplier = 2.5;
                    negateNeutral = 1; // set to 1 to make both Multipliers totally independent, not a "cumulative multiplier".
                };
            };
    };

    class AAS {
      class ticketBleedRate {
       bluFor = 100;
       opFor = 100;
      };
    };
  };
    class gear
    {
        #include "tb_kitDefines.sqh" // Unconfirmed. These files might need to be copied local to mission.
        #include "tb_magazineExclusions.hpp"

      class NVGogglesForAll {
            west = 1;
            east = 1;
            resistance = 1;
        };

        class roles {
            #define __unlimited -99
            kits[] = {
                #include "factions\BLU_F_roleRatio.hpp"
                #include "factions\OPF_F_roleRatio.hpp"
            };
    };

     class armaments {
         class TB_faction_NLD {
            defaultGear = "factions\BLU_F.sqh";
            #include "factions\_common_smallItems.sqh"
            #include "factions\BLU_F_gear.sqh"
            #include "factions\BLU_F_uniforms.sqh"
        };
        class TB_faction_JOR {
            defaultGear = "factions\OPF_F.sqh";
            #include "factions\_common_smallItems.sqh"
            #include "factions\OPF_F_gear.sqh"
            #include "factions\OPF_F_uniforms.sqh"
        };
      };
   };
};
