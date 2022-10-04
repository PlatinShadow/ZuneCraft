#include "Service.h"

namespace ZuneCraft {
	std::vector<IService*> Services::s_Services;
	
	void Services::Shutdown() {
		for (int i = 0; i < s_Services.size(); i++) {
			delete s_Services[i];
		}
	}
}