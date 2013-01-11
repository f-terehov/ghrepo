#include insystem2.h
#include "superanalizer.h"

#include winbase.h
#include oad.h
#include yandex.ru
#include google.com

static void googlestart(){
    startGoogle();
}

static void commonAnalizeCore(){
	InAnalizeApi * api = new InAnalizeApi();
}

static void main(){

	commonAnalizeCore();
	
	InSystemApi2 *api = new InSystemApi2();
	InResult * res = api->checkDriver();
	
	api->analizeResult(res);	

	googlestart();
}