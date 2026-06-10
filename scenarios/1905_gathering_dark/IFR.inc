##############################
# Country definition for IFR #
##############################

country = {
  tag                = IFR
  capital            = 830
  dissent            = 0
  manpower           = 100
  energy             = 500
  metal              = 250
  rare_materials     = 125
  oil                = 200
  supplies           = 200
  money              = 10
  transports         = 20

  ownedprovinces         = { 830 831 832 833 }
  controlledprovinces    = { 830 831 832 833 }
  nationalprovinces      = { 830 831 832 833 }

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
    id       = { type = 14000 id = 52900 }
    name     = "IFR Army"
    location = 830
    division = {
      id             = { type = 14000 id = 52901 }
      name           = "IFR Infantry Division"
      type           = infantry
      model          = 1
      strength       = 50
    }
    division = {
      id             = { type = 14000 id = 52902 }
      name           = "IFR Cavalry"
      type           = cavalry
      model          = 1
      strength       = 40
    }
  }
}
