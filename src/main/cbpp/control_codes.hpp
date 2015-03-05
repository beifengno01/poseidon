// 这个文件是 Poseidon 服务器应用程序框架的一部分。
// Copyleft 2014 - 2015, LH_Mouse. All wrongs reserved.

#ifndef POSEIDON_CBPP_CONTROL_CODES_HPP_
#define POSEIDON_CBPP_CONTROL_CODES_HPP_

namespace Poseidon {

namespace Cbpp {
	typedef unsigned ControlCode;

	namespace ControlCodes {
		enum {
			CTL_HEARTBEAT	= 0,
		};
	}

	using namespace ControlCodes;
};

}

#endif
