##############################
# PAP country definition  #
##############################

country = {
  tag                = PAP
  capital            = 411
  dissent            = 3
  manpower           = 30
  energy             = 2000
  metal              = 1000
  rare_materials     = 500
  oil                = 500
  supplies           = 500
  money              = 20
  transports         = 20

  ownedprovinces         = { 408 410 411 412 413 414 415 416 417 418 419 420 421 422 423 424 425 426 427 428 429 430 431 432 433 434 435 }
  controlledprovinces    = { 408 410 411 412 413 414 415 416 417 418 419 420 421 422 423 424 425 426 427 428 429 430 431 432 433 434 435 }
  nationalprovinces      = { 408 410 411 412 413 414 415 416 417 418 419 420 421 422 423 424 425 426 427 428 429 430 431 432 433 434 435 }

  techapps = { 1010 1020 1030 1040 1160 1170 1180 2290 2800 3010 3020 3030 3110 3120 3130 3210 3220 3230 3410 3420 3430 4500 5600 5700 8010 8020 8040 }

  policy = {
    date = { year = 0 month = january day = 0 }
    democratic = 7
    political_left = 5
    freedom = 7
        interventionism = 4
    professional_army = 6
    defense_lobby = 7
    free_market = 6
  }

  landunit = {
    id       = { type = 14000 id = 50700 }
    name     = "PAP Army"
    location = 411
    division = {
      id    = { type = 14000 id = 50701 }
      name  = "PAP Infantry Division"
      type  = infantry
      model = 1
      strength = 50
    }
  }
}
