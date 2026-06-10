##############################
# Country definition for MRD #
##############################

country = {
  tag                = MRD
  capital            = 388
  dissent            = 0
  manpower           = 80
  energy             = 1000
  metal              = 500
  rare_materials     = 250
  oil                = 500
  supplies           = 400
  money              = 25
  transports         = 20

  ownedprovinces         = { 94 371 378 379 380 381 382 383 387 388 429 430 431 432 433 434 435 }
  controlledprovinces    = { 94 371 378 379 380 381 382 383 387 388 429 430 431 432 433 434 435 }
  nationalprovinces      = { 94 371 378 379 380 381 382 383 387 388 429 430 431 432 433 434 435 }

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
    id       = { type = 14000 id = 53100 }
    name     = "MRD Army"
    location = 388
    division = {
      id             = { type = 14000 id = 53101 }
      name           = "MRD Infantry Division"
      type           = infantry
      model          = 1
      strength       = 50
    }
    division = {
      id             = { type = 14000 id = 53102 }
      name           = "MRD Cavalry"
      type           = cavalry
      model          = 1
      strength       = 40
    }
  }
}
