##############################
# Country definition for BLZ #
##############################

country = {
  tag                = BLZ
  capital            = 795
  dissent            = 0
  manpower           = 100
  energy             = 800
  metal              = 400
  rare_materials     = 200
  oil                = 0
  supplies           = 300
  money              = 15
  transports         = 20

  ownedprovinces         = { 170 171 172 795 }
  controlledprovinces    = { 170 171 172 795 }
  nationalprovinces      = { 170 171 172 795 }

  techapps               = { 1010 1020 1030 1040 1160 1170 1180 2290 2800 3010 3020 3030 3110 3120 3130 3210 3220 3230 3410 3420 3430 4500 5600 5700 8010 8020 8040 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic = 2
    political_left = 3
    freedom = 2
    open_society = 2
    interventionism = 8
    professional_army = 9
    defense_lobby = 9
    market_economy = 3
  }

  landunit = {
    id       = { type = 14000 id = 52600 }
    name     = "BLZ Army"
    location = 795
    division = {
      id             = { type = 14000 id = 52601 }
      name           = "BLZ Infantry Division"
      type           = infantry
      model          = 1
      strength       = 50
    }
    division = {
      id             = { type = 14000 id = 52602 }
      name           = "BLZ Cavalry"
      type           = cavalry
      model          = 1
      strength       = 40
    }
  }
}
