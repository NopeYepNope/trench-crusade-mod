##############################
# Country definition for IBL #
##############################

country = {
  tag                = IBL
  capital            = 820
  dissent            = 0
  manpower           = 150
  energy             = 1500
  metal              = 750
  rare_materials     = 375
  oil                = 2000
  supplies           = 500
  money              = 30
  transports         = 20

  ownedprovinces         = { 820 821 822 823 824 }
  controlledprovinces    = { 820 821 822 823 824 }
  nationalprovinces      = { 820 821 822 823 824 }

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
    id       = { type = 14000 id = 52800 }
    name     = "IBL Army"
    location = 820
    division = {
      id             = { type = 14000 id = 52801 }
      name           = "IBL Infantry Division"
      type           = infantry
      model          = 1
      strength       = 50
    }
    division = {
      id             = { type = 14000 id = 52802 }
      name           = "IBL Cavalry"
      type           = cavalry
      model          = 1
      strength       = 40
    }
  }
}
