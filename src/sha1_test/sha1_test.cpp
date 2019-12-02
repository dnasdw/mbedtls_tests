#include <sdw.h>
#include <mbedtls/sha1.h>

int UMain(int argc, UChar* argv[])
{
	string sTest = "test";
	u8 uSHA1[20] = {};
	mbedtls_sha1(reinterpret_cast<const u8*>(sTest.c_str()), sTest.size(), uSHA1);
	printf("%s SHA1: ", sTest.c_str());
	for (n32 i = 0; i < SDW_ARRAY_COUNT(uSHA1); i++)
	{
		printf("%02X", uSHA1[i]);
	}
	printf("\n");
	return 0;
}
