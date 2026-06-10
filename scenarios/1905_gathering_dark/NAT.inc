##############################
# Country definition for NAT #
##############################

country = {
  tag                = NAT
  capital            = 799
  dissent            = 5
  manpower           = 120
  energy             = 1500
  metal              = 750
  rare_materials     = 375
  oil                = 100
  supplies           = 500
  money              = 30
  transports         = 20

  ownedprovinces         = { 799 800 802 803 }
  controlledprovinces    = { 799 800 802 803 }
  nationalprovinces      = { 799 800 802 803 }

  techapps               = { 1010 1020 1030 1040 1160 1170 1180 2290 2800 3010 3020 3030 3110 3120 3130 3210 3220 3230 3410 3420 3430 4500 5600 5700 8010 8020 8040 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic = 7
    political_left = 5
    freedom = 7
    open_society = 6
    interventionism = 4
    professional_army = 6
    defense_lobby = 7
    market_economy = 6
  }

  landunit = {
    id       = { type = 14000 id = 51300 }
    name     = "NAT Army"
    location = 799
    division = {
      id             = { type = 14000 id = 51301 }
      name           = "NAT Infantry Division"
      type           = infantry
      model          = 1
      strength       = 50
    }
    division = {
      id             = { type = 14000 id = 51302 }
      name           = "NAT Cavalry"
      type           = cavalry
      model          = 1
      strength       = 40
    }
  }
}
