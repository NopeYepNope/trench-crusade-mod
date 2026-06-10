##############################
# Country definition for SIB #
##############################

country = {
  tag                = SIB
  capital            = 500
  dissent            = 5
  manpower           = 80
  energy             = 500
  metal              = 250
  rare_materials     = 125
  oil                = 200
  supplies           = 200
  money              = 5
  transports         = 20

  ownedprovinces         = { 500 501 502 503 504 }
  controlledprovinces    = { 500 501 502 503 504 }
  nationalprovinces      = { 500 501 502 503 504 }

  techapps               = { 1010 1020 1030 1040 1160 1170 1180 2290 2800 3010 3020 3030 3110 3120 3130 3210 3220 3230 3410 3420 3430 4500 5600 5700 8010 8020 8040 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic = 5
    political_left = 5
    freedom = 5
    open_society = 5
    interventionism = 5
    professional_army = 5
    defense_lobby = 5
    market_economy = 5
  }

  landunit = {
    id       = { type = 14000 id = 52200 }
    name     = "SIB Army"
    location = 500
    division = {
      id             = { type = 14000 id = 52201 }
      name           = "SIB Infantry Division"
      type           = infantry
      model          = 1
      strength       = 50
    }
    division = {
      id             = { type = 14000 id = 52202 }
      name           = "SIB Cavalry"
      type           = cavalry
      model          = 1
      strength       = 40
    }
  }
}
