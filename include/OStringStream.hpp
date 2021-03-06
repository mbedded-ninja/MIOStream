//!
//! @file				OStringStream.hpp
//! @author				Geoffrey Hunter <gbmhunter@gmail.com> (www.mbedded.ninja)
//! @created			2014-10-12
//! @last-modified		2014-10-29
//! @brief
//! @details
//!						See README.rst in repo root dir for more info.

#ifndef __cplusplus
	#error Please build with C++ compiler
#endif

//===============================================================================================//
//======================================== HEADER GUARD =========================================//
//===============================================================================================//

#ifndef M_IO_STREAM_O_STRING_STREAM_H
#define M_IO_STREAM_O_STRING_STREAM_H

//===============================================================================================//
//==================================== FORWARD DECLARATION ======================================//
//===============================================================================================//

namespace MbeddedNinja
{
	class OStringStream;
}

//===============================================================================================//
//========================================== INCLUDES ===========================================//
//===============================================================================================//

//===== SYSTEM LIBRARIES =====//
#include <stdint.h>		// uint8_t, uint32_t, e.t.c
#include <iostream>

//===== USER LIBRARIES =====//
#include "MString/api/MStringApi.hpp"

//===== USER SOURCE =====//
#include "OStringStream.hpp"

//===============================================================================================//
//======================================== NAMESPACE ============================================//
//===============================================================================================//

namespace MbeddedNinja
{

	//! @brief
	//! @details	Exceptions are not used.
	class OStringStream : public OStream
	{	
		
		public:

			//======================================================================================//
			//==================================== PUBLIC METHODS ==================================//
			//======================================================================================//

			//! @brief		Constructor.
			//! @details
			OStringStream(){};

			//! @brief		Copy constructor.
			//! @details	Delegates to normal constructor.
			//MIOStringStream(const MIOStream &obj);

			//! @brief		Destructor.
			//! @details	Deletes memory that was allocated for the string.
			~OStringStream(){};



			//======================================================================================//
			//============================ PUBLIC OPERATOR OVERLOAD DECLARATIONS ===================//
			//======================================================================================//

			//! \defgroup{Shift Operators}
			//! @{

			//! @brief		Allows you to append the RHS C-style string onto the LHS
			//!				string object with LHS << RHS.
			OStringStream & operator << (const char * rhs)
			{
				// Append the C-style string onto the end
				this->myString.Append(rhs);
				return (*this);
			}

			OStringStream & operator << (uint8_t myUint8)
			{
				OStream::operator << (myUint8);
				return *this;
			}

			//! @brief		Operator overload for int8_t. Appends integer onto the end of the string.
			OStringStream & operator << (int8_t myInt8)
			{
				OStream::operator << (myInt8);
				return *this;
			}

			//! @brief		Operator overload for uint16_t. Appends unsigned integer onto the end of the string.
			OStringStream & operator << (uint16_t myUint16)
			{
				OStream::operator << (myUint16);
				return *this;
			}

			//! @brief		Operator overload for int16_t. Appends integer onto the end of the string.
			OStringStream & operator << (int16_t myInt16)
			{
				OStream::operator << (myInt16);
				return *this;
			}

			//! @brief		Operator overload for uint32_t. Appends unsigned integer onto the end of the string.
			OStringStream & operator << (uint32_t myUint32)
			{
				OStream::operator << (myUint32);
				return *this;
			}

			//! @brief		Operator overload for int32_t. Appends integer onto the end of the string.
			OStringStream & operator << (int32_t myInt32)
			{
				OStream::operator << (myInt32);
				return *this;
			}

			//! @brief		Operator overload for uint64_t. Appends unsigned integer onto the end of the string.
			OStringStream & operator << (uint64_t myUint64)
			{
				OStream::operator << (myUint64);
				return *this;
			}

			//! @brief		Operator overload for int64_t. Appends integer onto the end of the string.
			OStringStream & operator << (int64_t myInt64)
			{
				OStream::operator << (myInt64);
				return *this;
			}

			//! @brief		Operator overload for double. Appends double onto the end of the string.
			OStringStream & operator << (double myDouble)
			{
				OStream::operator << (myDouble);
				return *this;
			}

			//! @}

			//======================================================================================//
			//================================= PUBLIC VARIABLES ===================================//
			//======================================================================================//

			//! @brief		This is the internal string object that the MIOStringStream reads and writes to.
			MString myString;

		protected:

			//======================================================================================//
			//=================================== PROTECTED METHODS ================================//
			//======================================================================================//
			
			

			//===================================================================================//
			//=============================== PROTECTED VARIABLES ===============================//
			//===================================================================================//

			// none


		private:

			//======================================================================================//
			//=================================== PRIVATE METHODS ==================================//
			//======================================================================================//
			
			// none
			
			//======================================================================================//
			//================================== PRIVATE VARIABLES =================================//
			//======================================================================================//


		
	}; // class OStringStream

} // namespace MbeddedNinja

#endif	// #ifndef M_IO_STREAM_O_STRING_STREAM_H

// EOF
