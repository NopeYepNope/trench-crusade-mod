##############################
# Country definition for HBK #
##############################

country = {
  tag                = HBK
  capital            = 801
  dissent            = 2
  manpower           = 40
  energy             = 500
  metal              = 250
  rare_materials     = 125
  oil                = 0
  supplies           = 200
  money              = 15
  transports         = 20

  ownedprovinces         = { 801 804 805 }
  controlledprovinces    = { 801 804 805 }
  nationalprovinces      = { 801 804 805 }

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
    id       = { type = 14000 id = 51200 }
    name     = "HBK Army"
    location = 801
    division = {
      id             = { type = 14000 id = 51201 }
      name           = "HBK Infantry Division"
      type           = infantry
      model          = 1
      strength       = 50
    }
    division = {
      id             = { type = 14000 id = 51202 }
      name           = "HBK Cavalry"
      type           = cavalry
      model          = 1
      strength       = 40
    }
  }
}
