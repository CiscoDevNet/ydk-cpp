
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_DOCS_EXT_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_DOCS_EXT_MIB {

CISCODOCSEXTMIB::CISCODOCSEXTMIB()
    :
    cdxcmtscmcpeobjects(std::make_shared<CISCODOCSEXTMIB::CdxCmtsCmCpeObjects>())
    , cdxwbresilobjects(std::make_shared<CISCODOCSEXTMIB::CdxWBResilObjects>())
    , cdxcmtsdocsislbobjects(std::make_shared<CISCODOCSEXTMIB::CdxCmtsDocsisLBObjects>())
    , cdxqosctrluptable(std::make_shared<CISCODOCSEXTMIB::CdxQosCtrlUpTable>())
    , cdxqosifratelimittable(std::make_shared<CISCODOCSEXTMIB::CdxQosIfRateLimitTable>())
    , cdxcmtsserviceexttable(std::make_shared<CISCODOCSEXTMIB::CdxCmtsServiceExtTable>())
    , cdxupinfoelemstatstable(std::make_shared<CISCODOCSEXTMIB::CdxUpInfoElemStatsTable>())
    , cdxbwqueuetable(std::make_shared<CISCODOCSEXTMIB::CdxBWQueueTable>())
    , cdxcmcpetable(std::make_shared<CISCODOCSEXTMIB::CdxCmCpeTable>())
    , cdxcmtscmstatusexttable(std::make_shared<CISCODOCSEXTMIB::CdxCmtsCmStatusExtTable>())
    , cdxcmtsmacexttable(std::make_shared<CISCODOCSEXTMIB::CdxCmtsMacExtTable>())
    , cdxcmtscmchovertable(std::make_shared<CISCODOCSEXTMIB::CdxCmtsCmChOverTable>())
    , cdxcmtscmtable(std::make_shared<CISCODOCSEXTMIB::CdxCmtsCmTable>())
    , cdxcmtscmstatusdmictable(std::make_shared<CISCODOCSEXTMIB::CdxCmtsCmStatusDMICTable>())
    , cdxcmtocpetable(std::make_shared<CISCODOCSEXTMIB::CdxCmToCpeTable>())
    , cdxcpetocmtable(std::make_shared<CISCODOCSEXTMIB::CdxCpeToCmTable>())
    , cdxcpeipprefixtable(std::make_shared<CISCODOCSEXTMIB::CdxCpeIpPrefixTable>())
    , cdxifupstreamchannelexttable(std::make_shared<CISCODOCSEXTMIB::CdxIfUpstreamChannelExtTable>())
    , cdxwbresilcmtable(std::make_shared<CISCODOCSEXTMIB::CdxWBResilCmTable>())
    , cdxrftoprimarychannelmappingtable(std::make_shared<CISCODOCSEXTMIB::CdxRFtoPrimaryChannelMappingTable>())
    , cdxprimarychanneltorfmappingtable(std::make_shared<CISCODOCSEXTMIB::CdxPrimaryChanneltoRFMappingTable>())
    , cdxcmtsmtccmtable(std::make_shared<CISCODOCSEXTMIB::CdxCmtsMtcCmTable>())
    , cdxcmtsuscbsflowtable(std::make_shared<CISCODOCSEXTMIB::CdxCmtsUscbSflowTable>())
    , cdxrpdgs7ktable(std::make_shared<CISCODOCSEXTMIB::CdxRPDGS7KTable>())
    , cdxbundleiphelpertable(std::make_shared<CISCODOCSEXTMIB::CdxBundleIpHelperTable>())
    , cdxbundleipv6dhcprelaytable(std::make_shared<CISCODOCSEXTMIB::CdxBundleIPv6DHCPRelayTable>())
    , cdxbundleipv6dhcprelaydesttable(std::make_shared<CISCODOCSEXTMIB::CdxBundleIPv6DHCPRelayDestTable>())
{
    cdxcmtscmcpeobjects->parent = this;
    cdxwbresilobjects->parent = this;
    cdxcmtsdocsislbobjects->parent = this;
    cdxqosctrluptable->parent = this;
    cdxqosifratelimittable->parent = this;
    cdxcmtsserviceexttable->parent = this;
    cdxupinfoelemstatstable->parent = this;
    cdxbwqueuetable->parent = this;
    cdxcmcpetable->parent = this;
    cdxcmtscmstatusexttable->parent = this;
    cdxcmtsmacexttable->parent = this;
    cdxcmtscmchovertable->parent = this;
    cdxcmtscmtable->parent = this;
    cdxcmtscmstatusdmictable->parent = this;
    cdxcmtocpetable->parent = this;
    cdxcpetocmtable->parent = this;
    cdxcpeipprefixtable->parent = this;
    cdxifupstreamchannelexttable->parent = this;
    cdxwbresilcmtable->parent = this;
    cdxrftoprimarychannelmappingtable->parent = this;
    cdxprimarychanneltorfmappingtable->parent = this;
    cdxcmtsmtccmtable->parent = this;
    cdxcmtsuscbsflowtable->parent = this;
    cdxrpdgs7ktable->parent = this;
    cdxbundleiphelpertable->parent = this;
    cdxbundleipv6dhcprelaytable->parent = this;
    cdxbundleipv6dhcprelaydesttable->parent = this;

    yang_name = "CISCO-DOCS-EXT-MIB"; yang_parent_name = "CISCO-DOCS-EXT-MIB"; is_top_level_class = true; has_list_ancestor = false; 
}

CISCODOCSEXTMIB::~CISCODOCSEXTMIB()
{
}

bool CISCODOCSEXTMIB::has_data() const
{
    if (is_presence_container) return true;
    return (cdxcmtscmcpeobjects !=  nullptr && cdxcmtscmcpeobjects->has_data())
	|| (cdxwbresilobjects !=  nullptr && cdxwbresilobjects->has_data())
	|| (cdxcmtsdocsislbobjects !=  nullptr && cdxcmtsdocsislbobjects->has_data())
	|| (cdxqosctrluptable !=  nullptr && cdxqosctrluptable->has_data())
	|| (cdxqosifratelimittable !=  nullptr && cdxqosifratelimittable->has_data())
	|| (cdxcmtsserviceexttable !=  nullptr && cdxcmtsserviceexttable->has_data())
	|| (cdxupinfoelemstatstable !=  nullptr && cdxupinfoelemstatstable->has_data())
	|| (cdxbwqueuetable !=  nullptr && cdxbwqueuetable->has_data())
	|| (cdxcmcpetable !=  nullptr && cdxcmcpetable->has_data())
	|| (cdxcmtscmstatusexttable !=  nullptr && cdxcmtscmstatusexttable->has_data())
	|| (cdxcmtsmacexttable !=  nullptr && cdxcmtsmacexttable->has_data())
	|| (cdxcmtscmchovertable !=  nullptr && cdxcmtscmchovertable->has_data())
	|| (cdxcmtscmtable !=  nullptr && cdxcmtscmtable->has_data())
	|| (cdxcmtscmstatusdmictable !=  nullptr && cdxcmtscmstatusdmictable->has_data())
	|| (cdxcmtocpetable !=  nullptr && cdxcmtocpetable->has_data())
	|| (cdxcpetocmtable !=  nullptr && cdxcpetocmtable->has_data())
	|| (cdxcpeipprefixtable !=  nullptr && cdxcpeipprefixtable->has_data())
	|| (cdxifupstreamchannelexttable !=  nullptr && cdxifupstreamchannelexttable->has_data())
	|| (cdxwbresilcmtable !=  nullptr && cdxwbresilcmtable->has_data())
	|| (cdxrftoprimarychannelmappingtable !=  nullptr && cdxrftoprimarychannelmappingtable->has_data())
	|| (cdxprimarychanneltorfmappingtable !=  nullptr && cdxprimarychanneltorfmappingtable->has_data())
	|| (cdxcmtsmtccmtable !=  nullptr && cdxcmtsmtccmtable->has_data())
	|| (cdxcmtsuscbsflowtable !=  nullptr && cdxcmtsuscbsflowtable->has_data())
	|| (cdxrpdgs7ktable !=  nullptr && cdxrpdgs7ktable->has_data())
	|| (cdxbundleiphelpertable !=  nullptr && cdxbundleiphelpertable->has_data())
	|| (cdxbundleipv6dhcprelaytable !=  nullptr && cdxbundleipv6dhcprelaytable->has_data())
	|| (cdxbundleipv6dhcprelaydesttable !=  nullptr && cdxbundleipv6dhcprelaydesttable->has_data());
}

bool CISCODOCSEXTMIB::has_operation() const
{
    return is_set(yfilter)
	|| (cdxcmtscmcpeobjects !=  nullptr && cdxcmtscmcpeobjects->has_operation())
	|| (cdxwbresilobjects !=  nullptr && cdxwbresilobjects->has_operation())
	|| (cdxcmtsdocsislbobjects !=  nullptr && cdxcmtsdocsislbobjects->has_operation())
	|| (cdxqosctrluptable !=  nullptr && cdxqosctrluptable->has_operation())
	|| (cdxqosifratelimittable !=  nullptr && cdxqosifratelimittable->has_operation())
	|| (cdxcmtsserviceexttable !=  nullptr && cdxcmtsserviceexttable->has_operation())
	|| (cdxupinfoelemstatstable !=  nullptr && cdxupinfoelemstatstable->has_operation())
	|| (cdxbwqueuetable !=  nullptr && cdxbwqueuetable->has_operation())
	|| (cdxcmcpetable !=  nullptr && cdxcmcpetable->has_operation())
	|| (cdxcmtscmstatusexttable !=  nullptr && cdxcmtscmstatusexttable->has_operation())
	|| (cdxcmtsmacexttable !=  nullptr && cdxcmtsmacexttable->has_operation())
	|| (cdxcmtscmchovertable !=  nullptr && cdxcmtscmchovertable->has_operation())
	|| (cdxcmtscmtable !=  nullptr && cdxcmtscmtable->has_operation())
	|| (cdxcmtscmstatusdmictable !=  nullptr && cdxcmtscmstatusdmictable->has_operation())
	|| (cdxcmtocpetable !=  nullptr && cdxcmtocpetable->has_operation())
	|| (cdxcpetocmtable !=  nullptr && cdxcpetocmtable->has_operation())
	|| (cdxcpeipprefixtable !=  nullptr && cdxcpeipprefixtable->has_operation())
	|| (cdxifupstreamchannelexttable !=  nullptr && cdxifupstreamchannelexttable->has_operation())
	|| (cdxwbresilcmtable !=  nullptr && cdxwbresilcmtable->has_operation())
	|| (cdxrftoprimarychannelmappingtable !=  nullptr && cdxrftoprimarychannelmappingtable->has_operation())
	|| (cdxprimarychanneltorfmappingtable !=  nullptr && cdxprimarychanneltorfmappingtable->has_operation())
	|| (cdxcmtsmtccmtable !=  nullptr && cdxcmtsmtccmtable->has_operation())
	|| (cdxcmtsuscbsflowtable !=  nullptr && cdxcmtsuscbsflowtable->has_operation())
	|| (cdxrpdgs7ktable !=  nullptr && cdxrpdgs7ktable->has_operation())
	|| (cdxbundleiphelpertable !=  nullptr && cdxbundleiphelpertable->has_operation())
	|| (cdxbundleipv6dhcprelaytable !=  nullptr && cdxbundleipv6dhcprelaytable->has_operation())
	|| (cdxbundleipv6dhcprelaydesttable !=  nullptr && cdxbundleipv6dhcprelaydesttable->has_operation());
}

std::string CISCODOCSEXTMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-DOCS-EXT-MIB:CISCO-DOCS-EXT-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCODOCSEXTMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCODOCSEXTMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cdxCmtsCmCpeObjects")
    {
        if(cdxcmtscmcpeobjects == nullptr)
        {
            cdxcmtscmcpeobjects = std::make_shared<CISCODOCSEXTMIB::CdxCmtsCmCpeObjects>();
        }
        return cdxcmtscmcpeobjects;
    }

    if(child_yang_name == "cdxWBResilObjects")
    {
        if(cdxwbresilobjects == nullptr)
        {
            cdxwbresilobjects = std::make_shared<CISCODOCSEXTMIB::CdxWBResilObjects>();
        }
        return cdxwbresilobjects;
    }

    if(child_yang_name == "cdxCmtsDocsisLBObjects")
    {
        if(cdxcmtsdocsislbobjects == nullptr)
        {
            cdxcmtsdocsislbobjects = std::make_shared<CISCODOCSEXTMIB::CdxCmtsDocsisLBObjects>();
        }
        return cdxcmtsdocsislbobjects;
    }

    if(child_yang_name == "cdxQosCtrlUpTable")
    {
        if(cdxqosctrluptable == nullptr)
        {
            cdxqosctrluptable = std::make_shared<CISCODOCSEXTMIB::CdxQosCtrlUpTable>();
        }
        return cdxqosctrluptable;
    }

    if(child_yang_name == "cdxQosIfRateLimitTable")
    {
        if(cdxqosifratelimittable == nullptr)
        {
            cdxqosifratelimittable = std::make_shared<CISCODOCSEXTMIB::CdxQosIfRateLimitTable>();
        }
        return cdxqosifratelimittable;
    }

    if(child_yang_name == "cdxCmtsServiceExtTable")
    {
        if(cdxcmtsserviceexttable == nullptr)
        {
            cdxcmtsserviceexttable = std::make_shared<CISCODOCSEXTMIB::CdxCmtsServiceExtTable>();
        }
        return cdxcmtsserviceexttable;
    }

    if(child_yang_name == "cdxUpInfoElemStatsTable")
    {
        if(cdxupinfoelemstatstable == nullptr)
        {
            cdxupinfoelemstatstable = std::make_shared<CISCODOCSEXTMIB::CdxUpInfoElemStatsTable>();
        }
        return cdxupinfoelemstatstable;
    }

    if(child_yang_name == "cdxBWQueueTable")
    {
        if(cdxbwqueuetable == nullptr)
        {
            cdxbwqueuetable = std::make_shared<CISCODOCSEXTMIB::CdxBWQueueTable>();
        }
        return cdxbwqueuetable;
    }

    if(child_yang_name == "cdxCmCpeTable")
    {
        if(cdxcmcpetable == nullptr)
        {
            cdxcmcpetable = std::make_shared<CISCODOCSEXTMIB::CdxCmCpeTable>();
        }
        return cdxcmcpetable;
    }

    if(child_yang_name == "cdxCmtsCmStatusExtTable")
    {
        if(cdxcmtscmstatusexttable == nullptr)
        {
            cdxcmtscmstatusexttable = std::make_shared<CISCODOCSEXTMIB::CdxCmtsCmStatusExtTable>();
        }
        return cdxcmtscmstatusexttable;
    }

    if(child_yang_name == "cdxCmtsMacExtTable")
    {
        if(cdxcmtsmacexttable == nullptr)
        {
            cdxcmtsmacexttable = std::make_shared<CISCODOCSEXTMIB::CdxCmtsMacExtTable>();
        }
        return cdxcmtsmacexttable;
    }

    if(child_yang_name == "cdxCmtsCmChOverTable")
    {
        if(cdxcmtscmchovertable == nullptr)
        {
            cdxcmtscmchovertable = std::make_shared<CISCODOCSEXTMIB::CdxCmtsCmChOverTable>();
        }
        return cdxcmtscmchovertable;
    }

    if(child_yang_name == "cdxCmtsCmTable")
    {
        if(cdxcmtscmtable == nullptr)
        {
            cdxcmtscmtable = std::make_shared<CISCODOCSEXTMIB::CdxCmtsCmTable>();
        }
        return cdxcmtscmtable;
    }

    if(child_yang_name == "cdxCmtsCmStatusDMICTable")
    {
        if(cdxcmtscmstatusdmictable == nullptr)
        {
            cdxcmtscmstatusdmictable = std::make_shared<CISCODOCSEXTMIB::CdxCmtsCmStatusDMICTable>();
        }
        return cdxcmtscmstatusdmictable;
    }

    if(child_yang_name == "cdxCmToCpeTable")
    {
        if(cdxcmtocpetable == nullptr)
        {
            cdxcmtocpetable = std::make_shared<CISCODOCSEXTMIB::CdxCmToCpeTable>();
        }
        return cdxcmtocpetable;
    }

    if(child_yang_name == "cdxCpeToCmTable")
    {
        if(cdxcpetocmtable == nullptr)
        {
            cdxcpetocmtable = std::make_shared<CISCODOCSEXTMIB::CdxCpeToCmTable>();
        }
        return cdxcpetocmtable;
    }

    if(child_yang_name == "cdxCpeIpPrefixTable")
    {
        if(cdxcpeipprefixtable == nullptr)
        {
            cdxcpeipprefixtable = std::make_shared<CISCODOCSEXTMIB::CdxCpeIpPrefixTable>();
        }
        return cdxcpeipprefixtable;
    }

    if(child_yang_name == "cdxIfUpstreamChannelExtTable")
    {
        if(cdxifupstreamchannelexttable == nullptr)
        {
            cdxifupstreamchannelexttable = std::make_shared<CISCODOCSEXTMIB::CdxIfUpstreamChannelExtTable>();
        }
        return cdxifupstreamchannelexttable;
    }

    if(child_yang_name == "cdxWBResilCmTable")
    {
        if(cdxwbresilcmtable == nullptr)
        {
            cdxwbresilcmtable = std::make_shared<CISCODOCSEXTMIB::CdxWBResilCmTable>();
        }
        return cdxwbresilcmtable;
    }

    if(child_yang_name == "cdxRFtoPrimaryChannelMappingTable")
    {
        if(cdxrftoprimarychannelmappingtable == nullptr)
        {
            cdxrftoprimarychannelmappingtable = std::make_shared<CISCODOCSEXTMIB::CdxRFtoPrimaryChannelMappingTable>();
        }
        return cdxrftoprimarychannelmappingtable;
    }

    if(child_yang_name == "cdxPrimaryChanneltoRFMappingTable")
    {
        if(cdxprimarychanneltorfmappingtable == nullptr)
        {
            cdxprimarychanneltorfmappingtable = std::make_shared<CISCODOCSEXTMIB::CdxPrimaryChanneltoRFMappingTable>();
        }
        return cdxprimarychanneltorfmappingtable;
    }

    if(child_yang_name == "cdxCmtsMtcCmTable")
    {
        if(cdxcmtsmtccmtable == nullptr)
        {
            cdxcmtsmtccmtable = std::make_shared<CISCODOCSEXTMIB::CdxCmtsMtcCmTable>();
        }
        return cdxcmtsmtccmtable;
    }

    if(child_yang_name == "cdxCmtsUscbSflowTable")
    {
        if(cdxcmtsuscbsflowtable == nullptr)
        {
            cdxcmtsuscbsflowtable = std::make_shared<CISCODOCSEXTMIB::CdxCmtsUscbSflowTable>();
        }
        return cdxcmtsuscbsflowtable;
    }

    if(child_yang_name == "cdxRPDGS7KTable")
    {
        if(cdxrpdgs7ktable == nullptr)
        {
            cdxrpdgs7ktable = std::make_shared<CISCODOCSEXTMIB::CdxRPDGS7KTable>();
        }
        return cdxrpdgs7ktable;
    }

    if(child_yang_name == "cdxBundleIpHelperTable")
    {
        if(cdxbundleiphelpertable == nullptr)
        {
            cdxbundleiphelpertable = std::make_shared<CISCODOCSEXTMIB::CdxBundleIpHelperTable>();
        }
        return cdxbundleiphelpertable;
    }

    if(child_yang_name == "cdxBundleIPv6DHCPRelayTable")
    {
        if(cdxbundleipv6dhcprelaytable == nullptr)
        {
            cdxbundleipv6dhcprelaytable = std::make_shared<CISCODOCSEXTMIB::CdxBundleIPv6DHCPRelayTable>();
        }
        return cdxbundleipv6dhcprelaytable;
    }

    if(child_yang_name == "cdxBundleIPv6DHCPRelayDestTable")
    {
        if(cdxbundleipv6dhcprelaydesttable == nullptr)
        {
            cdxbundleipv6dhcprelaydesttable = std::make_shared<CISCODOCSEXTMIB::CdxBundleIPv6DHCPRelayDestTable>();
        }
        return cdxbundleipv6dhcprelaydesttable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCODOCSEXTMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(cdxcmtscmcpeobjects != nullptr)
    {
        children["cdxCmtsCmCpeObjects"] = cdxcmtscmcpeobjects;
    }

    if(cdxwbresilobjects != nullptr)
    {
        children["cdxWBResilObjects"] = cdxwbresilobjects;
    }

    if(cdxcmtsdocsislbobjects != nullptr)
    {
        children["cdxCmtsDocsisLBObjects"] = cdxcmtsdocsislbobjects;
    }

    if(cdxqosctrluptable != nullptr)
    {
        children["cdxQosCtrlUpTable"] = cdxqosctrluptable;
    }

    if(cdxqosifratelimittable != nullptr)
    {
        children["cdxQosIfRateLimitTable"] = cdxqosifratelimittable;
    }

    if(cdxcmtsserviceexttable != nullptr)
    {
        children["cdxCmtsServiceExtTable"] = cdxcmtsserviceexttable;
    }

    if(cdxupinfoelemstatstable != nullptr)
    {
        children["cdxUpInfoElemStatsTable"] = cdxupinfoelemstatstable;
    }

    if(cdxbwqueuetable != nullptr)
    {
        children["cdxBWQueueTable"] = cdxbwqueuetable;
    }

    if(cdxcmcpetable != nullptr)
    {
        children["cdxCmCpeTable"] = cdxcmcpetable;
    }

    if(cdxcmtscmstatusexttable != nullptr)
    {
        children["cdxCmtsCmStatusExtTable"] = cdxcmtscmstatusexttable;
    }

    if(cdxcmtsmacexttable != nullptr)
    {
        children["cdxCmtsMacExtTable"] = cdxcmtsmacexttable;
    }

    if(cdxcmtscmchovertable != nullptr)
    {
        children["cdxCmtsCmChOverTable"] = cdxcmtscmchovertable;
    }

    if(cdxcmtscmtable != nullptr)
    {
        children["cdxCmtsCmTable"] = cdxcmtscmtable;
    }

    if(cdxcmtscmstatusdmictable != nullptr)
    {
        children["cdxCmtsCmStatusDMICTable"] = cdxcmtscmstatusdmictable;
    }

    if(cdxcmtocpetable != nullptr)
    {
        children["cdxCmToCpeTable"] = cdxcmtocpetable;
    }

    if(cdxcpetocmtable != nullptr)
    {
        children["cdxCpeToCmTable"] = cdxcpetocmtable;
    }

    if(cdxcpeipprefixtable != nullptr)
    {
        children["cdxCpeIpPrefixTable"] = cdxcpeipprefixtable;
    }

    if(cdxifupstreamchannelexttable != nullptr)
    {
        children["cdxIfUpstreamChannelExtTable"] = cdxifupstreamchannelexttable;
    }

    if(cdxwbresilcmtable != nullptr)
    {
        children["cdxWBResilCmTable"] = cdxwbresilcmtable;
    }

    if(cdxrftoprimarychannelmappingtable != nullptr)
    {
        children["cdxRFtoPrimaryChannelMappingTable"] = cdxrftoprimarychannelmappingtable;
    }

    if(cdxprimarychanneltorfmappingtable != nullptr)
    {
        children["cdxPrimaryChanneltoRFMappingTable"] = cdxprimarychanneltorfmappingtable;
    }

    if(cdxcmtsmtccmtable != nullptr)
    {
        children["cdxCmtsMtcCmTable"] = cdxcmtsmtccmtable;
    }

    if(cdxcmtsuscbsflowtable != nullptr)
    {
        children["cdxCmtsUscbSflowTable"] = cdxcmtsuscbsflowtable;
    }

    if(cdxrpdgs7ktable != nullptr)
    {
        children["cdxRPDGS7KTable"] = cdxrpdgs7ktable;
    }

    if(cdxbundleiphelpertable != nullptr)
    {
        children["cdxBundleIpHelperTable"] = cdxbundleiphelpertable;
    }

    if(cdxbundleipv6dhcprelaytable != nullptr)
    {
        children["cdxBundleIPv6DHCPRelayTable"] = cdxbundleipv6dhcprelaytable;
    }

    if(cdxbundleipv6dhcprelaydesttable != nullptr)
    {
        children["cdxBundleIPv6DHCPRelayDestTable"] = cdxbundleipv6dhcprelaydesttable;
    }

    return children;
}

void CISCODOCSEXTMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCODOCSEXTMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> CISCODOCSEXTMIB::clone_ptr() const
{
    return std::make_shared<CISCODOCSEXTMIB>();
}

std::string CISCODOCSEXTMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CISCODOCSEXTMIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CISCODOCSEXTMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CISCODOCSEXTMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CISCODOCSEXTMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cdxCmtsCmCpeObjects" || name == "cdxWBResilObjects" || name == "cdxCmtsDocsisLBObjects" || name == "cdxQosCtrlUpTable" || name == "cdxQosIfRateLimitTable" || name == "cdxCmtsServiceExtTable" || name == "cdxUpInfoElemStatsTable" || name == "cdxBWQueueTable" || name == "cdxCmCpeTable" || name == "cdxCmtsCmStatusExtTable" || name == "cdxCmtsMacExtTable" || name == "cdxCmtsCmChOverTable" || name == "cdxCmtsCmTable" || name == "cdxCmtsCmStatusDMICTable" || name == "cdxCmToCpeTable" || name == "cdxCpeToCmTable" || name == "cdxCpeIpPrefixTable" || name == "cdxIfUpstreamChannelExtTable" || name == "cdxWBResilCmTable" || name == "cdxRFtoPrimaryChannelMappingTable" || name == "cdxPrimaryChanneltoRFMappingTable" || name == "cdxCmtsMtcCmTable" || name == "cdxCmtsUscbSflowTable" || name == "cdxRPDGS7KTable" || name == "cdxBundleIpHelperTable" || name == "cdxBundleIPv6DHCPRelayTable" || name == "cdxBundleIPv6DHCPRelayDestTable")
        return true;
    return false;
}

CISCODOCSEXTMIB::CdxCmtsCmCpeObjects::CdxCmtsCmCpeObjects()
    :
    cdxcmtscmchovertimeexpiration{YType::int32, "cdxCmtsCmChOverTimeExpiration"}
{

    yang_name = "cdxCmtsCmCpeObjects"; yang_parent_name = "CISCO-DOCS-EXT-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCODOCSEXTMIB::CdxCmtsCmCpeObjects::~CdxCmtsCmCpeObjects()
{
}

bool CISCODOCSEXTMIB::CdxCmtsCmCpeObjects::has_data() const
{
    if (is_presence_container) return true;
    return cdxcmtscmchovertimeexpiration.is_set;
}

bool CISCODOCSEXTMIB::CdxCmtsCmCpeObjects::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cdxcmtscmchovertimeexpiration.yfilter);
}

std::string CISCODOCSEXTMIB::CdxCmtsCmCpeObjects::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-DOCS-EXT-MIB:CISCO-DOCS-EXT-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCODOCSEXTMIB::CdxCmtsCmCpeObjects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdxCmtsCmCpeObjects";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCODOCSEXTMIB::CdxCmtsCmCpeObjects::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cdxcmtscmchovertimeexpiration.is_set || is_set(cdxcmtscmchovertimeexpiration.yfilter)) leaf_name_data.push_back(cdxcmtscmchovertimeexpiration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCODOCSEXTMIB::CdxCmtsCmCpeObjects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCODOCSEXTMIB::CdxCmtsCmCpeObjects::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCODOCSEXTMIB::CdxCmtsCmCpeObjects::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cdxCmtsCmChOverTimeExpiration")
    {
        cdxcmtscmchovertimeexpiration = value;
        cdxcmtscmchovertimeexpiration.value_namespace = name_space;
        cdxcmtscmchovertimeexpiration.value_namespace_prefix = name_space_prefix;
    }
}

void CISCODOCSEXTMIB::CdxCmtsCmCpeObjects::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cdxCmtsCmChOverTimeExpiration")
    {
        cdxcmtscmchovertimeexpiration.yfilter = yfilter;
    }
}

bool CISCODOCSEXTMIB::CdxCmtsCmCpeObjects::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cdxCmtsCmChOverTimeExpiration")
        return true;
    return false;
}

CISCODOCSEXTMIB::CdxWBResilObjects::CdxWBResilObjects()
    :
    cdxwbresilrfchangedampentime{YType::int32, "cdxWBResilRFChangeDampenTime"},
    cdxwbresilrfchangetriggerpercentage{YType::int32, "cdxWBResilRFChangeTriggerPercentage"},
    cdxwbresilrfchangetriggercount{YType::int32, "cdxWBResilRFChangeTriggerCount"},
    cdxwbresilrfchangetriggermovesecondary{YType::boolean, "cdxWBResilRFChangeTriggerMoveSecondary"},
    cdxwbresilnotificationenable{YType::bits, "cdxWBResilNotificationEnable"},
    cdxwbresilnotificationsinterval{YType::int32, "cdxWBResilNotificationsInterval"}
{

    yang_name = "cdxWBResilObjects"; yang_parent_name = "CISCO-DOCS-EXT-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCODOCSEXTMIB::CdxWBResilObjects::~CdxWBResilObjects()
{
}

bool CISCODOCSEXTMIB::CdxWBResilObjects::has_data() const
{
    if (is_presence_container) return true;
    return cdxwbresilrfchangedampentime.is_set
	|| cdxwbresilrfchangetriggerpercentage.is_set
	|| cdxwbresilrfchangetriggercount.is_set
	|| cdxwbresilrfchangetriggermovesecondary.is_set
	|| cdxwbresilnotificationenable.is_set
	|| cdxwbresilnotificationsinterval.is_set;
}

bool CISCODOCSEXTMIB::CdxWBResilObjects::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cdxwbresilrfchangedampentime.yfilter)
	|| ydk::is_set(cdxwbresilrfchangetriggerpercentage.yfilter)
	|| ydk::is_set(cdxwbresilrfchangetriggercount.yfilter)
	|| ydk::is_set(cdxwbresilrfchangetriggermovesecondary.yfilter)
	|| ydk::is_set(cdxwbresilnotificationenable.yfilter)
	|| ydk::is_set(cdxwbresilnotificationsinterval.yfilter);
}

std::string CISCODOCSEXTMIB::CdxWBResilObjects::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-DOCS-EXT-MIB:CISCO-DOCS-EXT-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCODOCSEXTMIB::CdxWBResilObjects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdxWBResilObjects";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCODOCSEXTMIB::CdxWBResilObjects::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cdxwbresilrfchangedampentime.is_set || is_set(cdxwbresilrfchangedampentime.yfilter)) leaf_name_data.push_back(cdxwbresilrfchangedampentime.get_name_leafdata());
    if (cdxwbresilrfchangetriggerpercentage.is_set || is_set(cdxwbresilrfchangetriggerpercentage.yfilter)) leaf_name_data.push_back(cdxwbresilrfchangetriggerpercentage.get_name_leafdata());
    if (cdxwbresilrfchangetriggercount.is_set || is_set(cdxwbresilrfchangetriggercount.yfilter)) leaf_name_data.push_back(cdxwbresilrfchangetriggercount.get_name_leafdata());
    if (cdxwbresilrfchangetriggermovesecondary.is_set || is_set(cdxwbresilrfchangetriggermovesecondary.yfilter)) leaf_name_data.push_back(cdxwbresilrfchangetriggermovesecondary.get_name_leafdata());
    if (cdxwbresilnotificationenable.is_set || is_set(cdxwbresilnotificationenable.yfilter)) leaf_name_data.push_back(cdxwbresilnotificationenable.get_name_leafdata());
    if (cdxwbresilnotificationsinterval.is_set || is_set(cdxwbresilnotificationsinterval.yfilter)) leaf_name_data.push_back(cdxwbresilnotificationsinterval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCODOCSEXTMIB::CdxWBResilObjects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCODOCSEXTMIB::CdxWBResilObjects::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCODOCSEXTMIB::CdxWBResilObjects::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cdxWBResilRFChangeDampenTime")
    {
        cdxwbresilrfchangedampentime = value;
        cdxwbresilrfchangedampentime.value_namespace = name_space;
        cdxwbresilrfchangedampentime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxWBResilRFChangeTriggerPercentage")
    {
        cdxwbresilrfchangetriggerpercentage = value;
        cdxwbresilrfchangetriggerpercentage.value_namespace = name_space;
        cdxwbresilrfchangetriggerpercentage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxWBResilRFChangeTriggerCount")
    {
        cdxwbresilrfchangetriggercount = value;
        cdxwbresilrfchangetriggercount.value_namespace = name_space;
        cdxwbresilrfchangetriggercount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxWBResilRFChangeTriggerMoveSecondary")
    {
        cdxwbresilrfchangetriggermovesecondary = value;
        cdxwbresilrfchangetriggermovesecondary.value_namespace = name_space;
        cdxwbresilrfchangetriggermovesecondary.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxWBResilNotificationEnable")
    {
        cdxwbresilnotificationenable[value] = true;
    }
    if(value_path == "cdxWBResilNotificationsInterval")
    {
        cdxwbresilnotificationsinterval = value;
        cdxwbresilnotificationsinterval.value_namespace = name_space;
        cdxwbresilnotificationsinterval.value_namespace_prefix = name_space_prefix;
    }
}

void CISCODOCSEXTMIB::CdxWBResilObjects::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cdxWBResilRFChangeDampenTime")
    {
        cdxwbresilrfchangedampentime.yfilter = yfilter;
    }
    if(value_path == "cdxWBResilRFChangeTriggerPercentage")
    {
        cdxwbresilrfchangetriggerpercentage.yfilter = yfilter;
    }
    if(value_path == "cdxWBResilRFChangeTriggerCount")
    {
        cdxwbresilrfchangetriggercount.yfilter = yfilter;
    }
    if(value_path == "cdxWBResilRFChangeTriggerMoveSecondary")
    {
        cdxwbresilrfchangetriggermovesecondary.yfilter = yfilter;
    }
    if(value_path == "cdxWBResilNotificationEnable")
    {
        cdxwbresilnotificationenable.yfilter = yfilter;
    }
    if(value_path == "cdxWBResilNotificationsInterval")
    {
        cdxwbresilnotificationsinterval.yfilter = yfilter;
    }
}

bool CISCODOCSEXTMIB::CdxWBResilObjects::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cdxWBResilRFChangeDampenTime" || name == "cdxWBResilRFChangeTriggerPercentage" || name == "cdxWBResilRFChangeTriggerCount" || name == "cdxWBResilRFChangeTriggerMoveSecondary" || name == "cdxWBResilNotificationEnable" || name == "cdxWBResilNotificationsInterval")
        return true;
    return false;
}

CISCODOCSEXTMIB::CdxCmtsDocsisLBObjects::CdxCmtsDocsisLBObjects()
    :
    cdxcmtsdocsislbenable{YType::enumeration, "cdxCmtsDocsisLBEnable"},
    cdxcmtsd30lbenable{YType::enumeration, "cdxCmtsD30LBEnable"},
    cdxcmtsd30lbupstreamenable{YType::enumeration, "cdxCmtsD30LBUpstreamEnable"},
    cdxcmtsd30lbstaticenable{YType::enumeration, "cdxCmtsD30LBStaticEnable"},
    cdxcmtsd30lbdynenable{YType::enumeration, "cdxCmtsD30LBDynEnable"}
{

    yang_name = "cdxCmtsDocsisLBObjects"; yang_parent_name = "CISCO-DOCS-EXT-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCODOCSEXTMIB::CdxCmtsDocsisLBObjects::~CdxCmtsDocsisLBObjects()
{
}

bool CISCODOCSEXTMIB::CdxCmtsDocsisLBObjects::has_data() const
{
    if (is_presence_container) return true;
    return cdxcmtsdocsislbenable.is_set
	|| cdxcmtsd30lbenable.is_set
	|| cdxcmtsd30lbupstreamenable.is_set
	|| cdxcmtsd30lbstaticenable.is_set
	|| cdxcmtsd30lbdynenable.is_set;
}

bool CISCODOCSEXTMIB::CdxCmtsDocsisLBObjects::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cdxcmtsdocsislbenable.yfilter)
	|| ydk::is_set(cdxcmtsd30lbenable.yfilter)
	|| ydk::is_set(cdxcmtsd30lbupstreamenable.yfilter)
	|| ydk::is_set(cdxcmtsd30lbstaticenable.yfilter)
	|| ydk::is_set(cdxcmtsd30lbdynenable.yfilter);
}

std::string CISCODOCSEXTMIB::CdxCmtsDocsisLBObjects::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-DOCS-EXT-MIB:CISCO-DOCS-EXT-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCODOCSEXTMIB::CdxCmtsDocsisLBObjects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdxCmtsDocsisLBObjects";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCODOCSEXTMIB::CdxCmtsDocsisLBObjects::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cdxcmtsdocsislbenable.is_set || is_set(cdxcmtsdocsislbenable.yfilter)) leaf_name_data.push_back(cdxcmtsdocsislbenable.get_name_leafdata());
    if (cdxcmtsd30lbenable.is_set || is_set(cdxcmtsd30lbenable.yfilter)) leaf_name_data.push_back(cdxcmtsd30lbenable.get_name_leafdata());
    if (cdxcmtsd30lbupstreamenable.is_set || is_set(cdxcmtsd30lbupstreamenable.yfilter)) leaf_name_data.push_back(cdxcmtsd30lbupstreamenable.get_name_leafdata());
    if (cdxcmtsd30lbstaticenable.is_set || is_set(cdxcmtsd30lbstaticenable.yfilter)) leaf_name_data.push_back(cdxcmtsd30lbstaticenable.get_name_leafdata());
    if (cdxcmtsd30lbdynenable.is_set || is_set(cdxcmtsd30lbdynenable.yfilter)) leaf_name_data.push_back(cdxcmtsd30lbdynenable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCODOCSEXTMIB::CdxCmtsDocsisLBObjects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCODOCSEXTMIB::CdxCmtsDocsisLBObjects::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCODOCSEXTMIB::CdxCmtsDocsisLBObjects::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cdxCmtsDocsisLBEnable")
    {
        cdxcmtsdocsislbenable = value;
        cdxcmtsdocsislbenable.value_namespace = name_space;
        cdxcmtsdocsislbenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxCmtsD30LBEnable")
    {
        cdxcmtsd30lbenable = value;
        cdxcmtsd30lbenable.value_namespace = name_space;
        cdxcmtsd30lbenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxCmtsD30LBUpstreamEnable")
    {
        cdxcmtsd30lbupstreamenable = value;
        cdxcmtsd30lbupstreamenable.value_namespace = name_space;
        cdxcmtsd30lbupstreamenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxCmtsD30LBStaticEnable")
    {
        cdxcmtsd30lbstaticenable = value;
        cdxcmtsd30lbstaticenable.value_namespace = name_space;
        cdxcmtsd30lbstaticenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxCmtsD30LBDynEnable")
    {
        cdxcmtsd30lbdynenable = value;
        cdxcmtsd30lbdynenable.value_namespace = name_space;
        cdxcmtsd30lbdynenable.value_namespace_prefix = name_space_prefix;
    }
}

void CISCODOCSEXTMIB::CdxCmtsDocsisLBObjects::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cdxCmtsDocsisLBEnable")
    {
        cdxcmtsdocsislbenable.yfilter = yfilter;
    }
    if(value_path == "cdxCmtsD30LBEnable")
    {
        cdxcmtsd30lbenable.yfilter = yfilter;
    }
    if(value_path == "cdxCmtsD30LBUpstreamEnable")
    {
        cdxcmtsd30lbupstreamenable.yfilter = yfilter;
    }
    if(value_path == "cdxCmtsD30LBStaticEnable")
    {
        cdxcmtsd30lbstaticenable.yfilter = yfilter;
    }
    if(value_path == "cdxCmtsD30LBDynEnable")
    {
        cdxcmtsd30lbdynenable.yfilter = yfilter;
    }
}

bool CISCODOCSEXTMIB::CdxCmtsDocsisLBObjects::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cdxCmtsDocsisLBEnable" || name == "cdxCmtsD30LBEnable" || name == "cdxCmtsD30LBUpstreamEnable" || name == "cdxCmtsD30LBStaticEnable" || name == "cdxCmtsD30LBDynEnable")
        return true;
    return false;
}

CISCODOCSEXTMIB::CdxQosCtrlUpTable::CdxQosCtrlUpTable()
    :
    cdxqosctrlupentry(this, {"ifindex"})
{

    yang_name = "cdxQosCtrlUpTable"; yang_parent_name = "CISCO-DOCS-EXT-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCODOCSEXTMIB::CdxQosCtrlUpTable::~CdxQosCtrlUpTable()
{
}

bool CISCODOCSEXTMIB::CdxQosCtrlUpTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cdxqosctrlupentry.len(); index++)
    {
        if(cdxqosctrlupentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCODOCSEXTMIB::CdxQosCtrlUpTable::has_operation() const
{
    for (std::size_t index=0; index<cdxqosctrlupentry.len(); index++)
    {
        if(cdxqosctrlupentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCODOCSEXTMIB::CdxQosCtrlUpTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-DOCS-EXT-MIB:CISCO-DOCS-EXT-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCODOCSEXTMIB::CdxQosCtrlUpTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdxQosCtrlUpTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCODOCSEXTMIB::CdxQosCtrlUpTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCODOCSEXTMIB::CdxQosCtrlUpTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cdxQosCtrlUpEntry")
    {
        auto c = std::make_shared<CISCODOCSEXTMIB::CdxQosCtrlUpTable::CdxQosCtrlUpEntry>();
        c->parent = this;
        cdxqosctrlupentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCODOCSEXTMIB::CdxQosCtrlUpTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cdxqosctrlupentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCODOCSEXTMIB::CdxQosCtrlUpTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCODOCSEXTMIB::CdxQosCtrlUpTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCODOCSEXTMIB::CdxQosCtrlUpTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cdxQosCtrlUpEntry")
        return true;
    return false;
}

CISCODOCSEXTMIB::CdxQosCtrlUpTable::CdxQosCtrlUpEntry::CdxQosCtrlUpEntry()
    :
    ifindex{YType::str, "ifIndex"},
    cdxqosctrlupadmissionctrl{YType::boolean, "cdxQosCtrlUpAdmissionCtrl"},
    cdxqosctrlupmaxrsvdbwpercent{YType::int32, "cdxQosCtrlUpMaxRsvdBWPercent"},
    cdxqosctrlupadmissionrejects{YType::uint32, "cdxQosCtrlUpAdmissionRejects"},
    cdxqosctrlupreservedbw{YType::int32, "cdxQosCtrlUpReservedBW"},
    cdxqosctrlupmaxvirtualbw{YType::int32, "cdxQosCtrlUpMaxVirtualBW"}
{

    yang_name = "cdxQosCtrlUpEntry"; yang_parent_name = "cdxQosCtrlUpTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCODOCSEXTMIB::CdxQosCtrlUpTable::CdxQosCtrlUpEntry::~CdxQosCtrlUpEntry()
{
}

bool CISCODOCSEXTMIB::CdxQosCtrlUpTable::CdxQosCtrlUpEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| cdxqosctrlupadmissionctrl.is_set
	|| cdxqosctrlupmaxrsvdbwpercent.is_set
	|| cdxqosctrlupadmissionrejects.is_set
	|| cdxqosctrlupreservedbw.is_set
	|| cdxqosctrlupmaxvirtualbw.is_set;
}

bool CISCODOCSEXTMIB::CdxQosCtrlUpTable::CdxQosCtrlUpEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(cdxqosctrlupadmissionctrl.yfilter)
	|| ydk::is_set(cdxqosctrlupmaxrsvdbwpercent.yfilter)
	|| ydk::is_set(cdxqosctrlupadmissionrejects.yfilter)
	|| ydk::is_set(cdxqosctrlupreservedbw.yfilter)
	|| ydk::is_set(cdxqosctrlupmaxvirtualbw.yfilter);
}

std::string CISCODOCSEXTMIB::CdxQosCtrlUpTable::CdxQosCtrlUpEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-DOCS-EXT-MIB:CISCO-DOCS-EXT-MIB/cdxQosCtrlUpTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCODOCSEXTMIB::CdxQosCtrlUpTable::CdxQosCtrlUpEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdxQosCtrlUpEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCODOCSEXTMIB::CdxQosCtrlUpTable::CdxQosCtrlUpEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (cdxqosctrlupadmissionctrl.is_set || is_set(cdxqosctrlupadmissionctrl.yfilter)) leaf_name_data.push_back(cdxqosctrlupadmissionctrl.get_name_leafdata());
    if (cdxqosctrlupmaxrsvdbwpercent.is_set || is_set(cdxqosctrlupmaxrsvdbwpercent.yfilter)) leaf_name_data.push_back(cdxqosctrlupmaxrsvdbwpercent.get_name_leafdata());
    if (cdxqosctrlupadmissionrejects.is_set || is_set(cdxqosctrlupadmissionrejects.yfilter)) leaf_name_data.push_back(cdxqosctrlupadmissionrejects.get_name_leafdata());
    if (cdxqosctrlupreservedbw.is_set || is_set(cdxqosctrlupreservedbw.yfilter)) leaf_name_data.push_back(cdxqosctrlupreservedbw.get_name_leafdata());
    if (cdxqosctrlupmaxvirtualbw.is_set || is_set(cdxqosctrlupmaxvirtualbw.yfilter)) leaf_name_data.push_back(cdxqosctrlupmaxvirtualbw.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCODOCSEXTMIB::CdxQosCtrlUpTable::CdxQosCtrlUpEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCODOCSEXTMIB::CdxQosCtrlUpTable::CdxQosCtrlUpEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCODOCSEXTMIB::CdxQosCtrlUpTable::CdxQosCtrlUpEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxQosCtrlUpAdmissionCtrl")
    {
        cdxqosctrlupadmissionctrl = value;
        cdxqosctrlupadmissionctrl.value_namespace = name_space;
        cdxqosctrlupadmissionctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxQosCtrlUpMaxRsvdBWPercent")
    {
        cdxqosctrlupmaxrsvdbwpercent = value;
        cdxqosctrlupmaxrsvdbwpercent.value_namespace = name_space;
        cdxqosctrlupmaxrsvdbwpercent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxQosCtrlUpAdmissionRejects")
    {
        cdxqosctrlupadmissionrejects = value;
        cdxqosctrlupadmissionrejects.value_namespace = name_space;
        cdxqosctrlupadmissionrejects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxQosCtrlUpReservedBW")
    {
        cdxqosctrlupreservedbw = value;
        cdxqosctrlupreservedbw.value_namespace = name_space;
        cdxqosctrlupreservedbw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxQosCtrlUpMaxVirtualBW")
    {
        cdxqosctrlupmaxvirtualbw = value;
        cdxqosctrlupmaxvirtualbw.value_namespace = name_space;
        cdxqosctrlupmaxvirtualbw.value_namespace_prefix = name_space_prefix;
    }
}

void CISCODOCSEXTMIB::CdxQosCtrlUpTable::CdxQosCtrlUpEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "cdxQosCtrlUpAdmissionCtrl")
    {
        cdxqosctrlupadmissionctrl.yfilter = yfilter;
    }
    if(value_path == "cdxQosCtrlUpMaxRsvdBWPercent")
    {
        cdxqosctrlupmaxrsvdbwpercent.yfilter = yfilter;
    }
    if(value_path == "cdxQosCtrlUpAdmissionRejects")
    {
        cdxqosctrlupadmissionrejects.yfilter = yfilter;
    }
    if(value_path == "cdxQosCtrlUpReservedBW")
    {
        cdxqosctrlupreservedbw.yfilter = yfilter;
    }
    if(value_path == "cdxQosCtrlUpMaxVirtualBW")
    {
        cdxqosctrlupmaxvirtualbw.yfilter = yfilter;
    }
}

bool CISCODOCSEXTMIB::CdxQosCtrlUpTable::CdxQosCtrlUpEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "cdxQosCtrlUpAdmissionCtrl" || name == "cdxQosCtrlUpMaxRsvdBWPercent" || name == "cdxQosCtrlUpAdmissionRejects" || name == "cdxQosCtrlUpReservedBW" || name == "cdxQosCtrlUpMaxVirtualBW")
        return true;
    return false;
}

CISCODOCSEXTMIB::CdxQosIfRateLimitTable::CdxQosIfRateLimitTable()
    :
    cdxqosifratelimitentry(this, {"ifindex"})
{

    yang_name = "cdxQosIfRateLimitTable"; yang_parent_name = "CISCO-DOCS-EXT-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCODOCSEXTMIB::CdxQosIfRateLimitTable::~CdxQosIfRateLimitTable()
{
}

bool CISCODOCSEXTMIB::CdxQosIfRateLimitTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cdxqosifratelimitentry.len(); index++)
    {
        if(cdxqosifratelimitentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCODOCSEXTMIB::CdxQosIfRateLimitTable::has_operation() const
{
    for (std::size_t index=0; index<cdxqosifratelimitentry.len(); index++)
    {
        if(cdxqosifratelimitentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCODOCSEXTMIB::CdxQosIfRateLimitTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-DOCS-EXT-MIB:CISCO-DOCS-EXT-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCODOCSEXTMIB::CdxQosIfRateLimitTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdxQosIfRateLimitTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCODOCSEXTMIB::CdxQosIfRateLimitTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCODOCSEXTMIB::CdxQosIfRateLimitTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cdxQosIfRateLimitEntry")
    {
        auto c = std::make_shared<CISCODOCSEXTMIB::CdxQosIfRateLimitTable::CdxQosIfRateLimitEntry>();
        c->parent = this;
        cdxqosifratelimitentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCODOCSEXTMIB::CdxQosIfRateLimitTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cdxqosifratelimitentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCODOCSEXTMIB::CdxQosIfRateLimitTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCODOCSEXTMIB::CdxQosIfRateLimitTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCODOCSEXTMIB::CdxQosIfRateLimitTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cdxQosIfRateLimitEntry")
        return true;
    return false;
}

CISCODOCSEXTMIB::CdxQosIfRateLimitTable::CdxQosIfRateLimitEntry::CdxQosIfRateLimitEntry()
    :
    ifindex{YType::str, "ifIndex"},
    cdxqosifratelimitalgm{YType::enumeration, "cdxQosIfRateLimitAlgm"},
    cdxqosifratelimitexpwt{YType::int32, "cdxQosIfRateLimitExpWt"},
    cdxqosifratelimitshpmaxdelay{YType::enumeration, "cdxQosIfRateLimitShpMaxDelay"},
    cdxqosifratelimitshpgranularity{YType::enumeration, "cdxQosIfRateLimitShpGranularity"}
{

    yang_name = "cdxQosIfRateLimitEntry"; yang_parent_name = "cdxQosIfRateLimitTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCODOCSEXTMIB::CdxQosIfRateLimitTable::CdxQosIfRateLimitEntry::~CdxQosIfRateLimitEntry()
{
}

bool CISCODOCSEXTMIB::CdxQosIfRateLimitTable::CdxQosIfRateLimitEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| cdxqosifratelimitalgm.is_set
	|| cdxqosifratelimitexpwt.is_set
	|| cdxqosifratelimitshpmaxdelay.is_set
	|| cdxqosifratelimitshpgranularity.is_set;
}

bool CISCODOCSEXTMIB::CdxQosIfRateLimitTable::CdxQosIfRateLimitEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(cdxqosifratelimitalgm.yfilter)
	|| ydk::is_set(cdxqosifratelimitexpwt.yfilter)
	|| ydk::is_set(cdxqosifratelimitshpmaxdelay.yfilter)
	|| ydk::is_set(cdxqosifratelimitshpgranularity.yfilter);
}

std::string CISCODOCSEXTMIB::CdxQosIfRateLimitTable::CdxQosIfRateLimitEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-DOCS-EXT-MIB:CISCO-DOCS-EXT-MIB/cdxQosIfRateLimitTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCODOCSEXTMIB::CdxQosIfRateLimitTable::CdxQosIfRateLimitEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdxQosIfRateLimitEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCODOCSEXTMIB::CdxQosIfRateLimitTable::CdxQosIfRateLimitEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (cdxqosifratelimitalgm.is_set || is_set(cdxqosifratelimitalgm.yfilter)) leaf_name_data.push_back(cdxqosifratelimitalgm.get_name_leafdata());
    if (cdxqosifratelimitexpwt.is_set || is_set(cdxqosifratelimitexpwt.yfilter)) leaf_name_data.push_back(cdxqosifratelimitexpwt.get_name_leafdata());
    if (cdxqosifratelimitshpmaxdelay.is_set || is_set(cdxqosifratelimitshpmaxdelay.yfilter)) leaf_name_data.push_back(cdxqosifratelimitshpmaxdelay.get_name_leafdata());
    if (cdxqosifratelimitshpgranularity.is_set || is_set(cdxqosifratelimitshpgranularity.yfilter)) leaf_name_data.push_back(cdxqosifratelimitshpgranularity.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCODOCSEXTMIB::CdxQosIfRateLimitTable::CdxQosIfRateLimitEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCODOCSEXTMIB::CdxQosIfRateLimitTable::CdxQosIfRateLimitEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCODOCSEXTMIB::CdxQosIfRateLimitTable::CdxQosIfRateLimitEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxQosIfRateLimitAlgm")
    {
        cdxqosifratelimitalgm = value;
        cdxqosifratelimitalgm.value_namespace = name_space;
        cdxqosifratelimitalgm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxQosIfRateLimitExpWt")
    {
        cdxqosifratelimitexpwt = value;
        cdxqosifratelimitexpwt.value_namespace = name_space;
        cdxqosifratelimitexpwt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxQosIfRateLimitShpMaxDelay")
    {
        cdxqosifratelimitshpmaxdelay = value;
        cdxqosifratelimitshpmaxdelay.value_namespace = name_space;
        cdxqosifratelimitshpmaxdelay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxQosIfRateLimitShpGranularity")
    {
        cdxqosifratelimitshpgranularity = value;
        cdxqosifratelimitshpgranularity.value_namespace = name_space;
        cdxqosifratelimitshpgranularity.value_namespace_prefix = name_space_prefix;
    }
}

void CISCODOCSEXTMIB::CdxQosIfRateLimitTable::CdxQosIfRateLimitEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "cdxQosIfRateLimitAlgm")
    {
        cdxqosifratelimitalgm.yfilter = yfilter;
    }
    if(value_path == "cdxQosIfRateLimitExpWt")
    {
        cdxqosifratelimitexpwt.yfilter = yfilter;
    }
    if(value_path == "cdxQosIfRateLimitShpMaxDelay")
    {
        cdxqosifratelimitshpmaxdelay.yfilter = yfilter;
    }
    if(value_path == "cdxQosIfRateLimitShpGranularity")
    {
        cdxqosifratelimitshpgranularity.yfilter = yfilter;
    }
}

bool CISCODOCSEXTMIB::CdxQosIfRateLimitTable::CdxQosIfRateLimitEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "cdxQosIfRateLimitAlgm" || name == "cdxQosIfRateLimitExpWt" || name == "cdxQosIfRateLimitShpMaxDelay" || name == "cdxQosIfRateLimitShpGranularity")
        return true;
    return false;
}

CISCODOCSEXTMIB::CdxCmtsServiceExtTable::CdxCmtsServiceExtTable()
    :
    cdxcmtsserviceextentry(this, {"ifindex", "docsifcmtsserviceid"})
{

    yang_name = "cdxCmtsServiceExtTable"; yang_parent_name = "CISCO-DOCS-EXT-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCODOCSEXTMIB::CdxCmtsServiceExtTable::~CdxCmtsServiceExtTable()
{
}

bool CISCODOCSEXTMIB::CdxCmtsServiceExtTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cdxcmtsserviceextentry.len(); index++)
    {
        if(cdxcmtsserviceextentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCODOCSEXTMIB::CdxCmtsServiceExtTable::has_operation() const
{
    for (std::size_t index=0; index<cdxcmtsserviceextentry.len(); index++)
    {
        if(cdxcmtsserviceextentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCODOCSEXTMIB::CdxCmtsServiceExtTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-DOCS-EXT-MIB:CISCO-DOCS-EXT-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCODOCSEXTMIB::CdxCmtsServiceExtTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdxCmtsServiceExtTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCODOCSEXTMIB::CdxCmtsServiceExtTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCODOCSEXTMIB::CdxCmtsServiceExtTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cdxCmtsServiceExtEntry")
    {
        auto c = std::make_shared<CISCODOCSEXTMIB::CdxCmtsServiceExtTable::CdxCmtsServiceExtEntry>();
        c->parent = this;
        cdxcmtsserviceextentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCODOCSEXTMIB::CdxCmtsServiceExtTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cdxcmtsserviceextentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCODOCSEXTMIB::CdxCmtsServiceExtTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCODOCSEXTMIB::CdxCmtsServiceExtTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCODOCSEXTMIB::CdxCmtsServiceExtTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cdxCmtsServiceExtEntry")
        return true;
    return false;
}

CISCODOCSEXTMIB::CdxCmtsServiceExtTable::CdxCmtsServiceExtEntry::CdxCmtsServiceExtEntry()
    :
    ifindex{YType::str, "ifIndex"},
    docsifcmtsserviceid{YType::str, "docsIfCmtsServiceId"},
    cdxifcmtsserviceoutoctets{YType::uint32, "cdxIfCmtsServiceOutOctets"},
    cdxifcmtsserviceoutpackets{YType::uint32, "cdxIfCmtsServiceOutPackets"},
    cdxqosmaxupbwexcessrequests{YType::uint32, "cdxQosMaxUpBWExcessRequests"},
    cdxqosmaxdownbwexcesspackets{YType::uint32, "cdxQosMaxDownBWExcessPackets"},
    cdxifcmtsservicehcinoctets{YType::uint64, "cdxIfCmtsServiceHCInOctets"},
    cdxifcmtsservicehcinpackets{YType::uint64, "cdxIfCmtsServiceHCInPackets"},
    cdxifcmtsservicehcoutoctets{YType::uint64, "cdxIfCmtsServiceHCOutOctets"},
    cdxifcmtsservicehcoutpackets{YType::uint64, "cdxIfCmtsServiceHCOutPackets"}
{

    yang_name = "cdxCmtsServiceExtEntry"; yang_parent_name = "cdxCmtsServiceExtTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCODOCSEXTMIB::CdxCmtsServiceExtTable::CdxCmtsServiceExtEntry::~CdxCmtsServiceExtEntry()
{
}

bool CISCODOCSEXTMIB::CdxCmtsServiceExtTable::CdxCmtsServiceExtEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| docsifcmtsserviceid.is_set
	|| cdxifcmtsserviceoutoctets.is_set
	|| cdxifcmtsserviceoutpackets.is_set
	|| cdxqosmaxupbwexcessrequests.is_set
	|| cdxqosmaxdownbwexcesspackets.is_set
	|| cdxifcmtsservicehcinoctets.is_set
	|| cdxifcmtsservicehcinpackets.is_set
	|| cdxifcmtsservicehcoutoctets.is_set
	|| cdxifcmtsservicehcoutpackets.is_set;
}

bool CISCODOCSEXTMIB::CdxCmtsServiceExtTable::CdxCmtsServiceExtEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(docsifcmtsserviceid.yfilter)
	|| ydk::is_set(cdxifcmtsserviceoutoctets.yfilter)
	|| ydk::is_set(cdxifcmtsserviceoutpackets.yfilter)
	|| ydk::is_set(cdxqosmaxupbwexcessrequests.yfilter)
	|| ydk::is_set(cdxqosmaxdownbwexcesspackets.yfilter)
	|| ydk::is_set(cdxifcmtsservicehcinoctets.yfilter)
	|| ydk::is_set(cdxifcmtsservicehcinpackets.yfilter)
	|| ydk::is_set(cdxifcmtsservicehcoutoctets.yfilter)
	|| ydk::is_set(cdxifcmtsservicehcoutpackets.yfilter);
}

std::string CISCODOCSEXTMIB::CdxCmtsServiceExtTable::CdxCmtsServiceExtEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-DOCS-EXT-MIB:CISCO-DOCS-EXT-MIB/cdxCmtsServiceExtTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCODOCSEXTMIB::CdxCmtsServiceExtTable::CdxCmtsServiceExtEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdxCmtsServiceExtEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    ADD_KEY_TOKEN(docsifcmtsserviceid, "docsIfCmtsServiceId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCODOCSEXTMIB::CdxCmtsServiceExtTable::CdxCmtsServiceExtEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (docsifcmtsserviceid.is_set || is_set(docsifcmtsserviceid.yfilter)) leaf_name_data.push_back(docsifcmtsserviceid.get_name_leafdata());
    if (cdxifcmtsserviceoutoctets.is_set || is_set(cdxifcmtsserviceoutoctets.yfilter)) leaf_name_data.push_back(cdxifcmtsserviceoutoctets.get_name_leafdata());
    if (cdxifcmtsserviceoutpackets.is_set || is_set(cdxifcmtsserviceoutpackets.yfilter)) leaf_name_data.push_back(cdxifcmtsserviceoutpackets.get_name_leafdata());
    if (cdxqosmaxupbwexcessrequests.is_set || is_set(cdxqosmaxupbwexcessrequests.yfilter)) leaf_name_data.push_back(cdxqosmaxupbwexcessrequests.get_name_leafdata());
    if (cdxqosmaxdownbwexcesspackets.is_set || is_set(cdxqosmaxdownbwexcesspackets.yfilter)) leaf_name_data.push_back(cdxqosmaxdownbwexcesspackets.get_name_leafdata());
    if (cdxifcmtsservicehcinoctets.is_set || is_set(cdxifcmtsservicehcinoctets.yfilter)) leaf_name_data.push_back(cdxifcmtsservicehcinoctets.get_name_leafdata());
    if (cdxifcmtsservicehcinpackets.is_set || is_set(cdxifcmtsservicehcinpackets.yfilter)) leaf_name_data.push_back(cdxifcmtsservicehcinpackets.get_name_leafdata());
    if (cdxifcmtsservicehcoutoctets.is_set || is_set(cdxifcmtsservicehcoutoctets.yfilter)) leaf_name_data.push_back(cdxifcmtsservicehcoutoctets.get_name_leafdata());
    if (cdxifcmtsservicehcoutpackets.is_set || is_set(cdxifcmtsservicehcoutpackets.yfilter)) leaf_name_data.push_back(cdxifcmtsservicehcoutpackets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCODOCSEXTMIB::CdxCmtsServiceExtTable::CdxCmtsServiceExtEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCODOCSEXTMIB::CdxCmtsServiceExtTable::CdxCmtsServiceExtEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCODOCSEXTMIB::CdxCmtsServiceExtTable::CdxCmtsServiceExtEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIfCmtsServiceId")
    {
        docsifcmtsserviceid = value;
        docsifcmtsserviceid.value_namespace = name_space;
        docsifcmtsserviceid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxIfCmtsServiceOutOctets")
    {
        cdxifcmtsserviceoutoctets = value;
        cdxifcmtsserviceoutoctets.value_namespace = name_space;
        cdxifcmtsserviceoutoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxIfCmtsServiceOutPackets")
    {
        cdxifcmtsserviceoutpackets = value;
        cdxifcmtsserviceoutpackets.value_namespace = name_space;
        cdxifcmtsserviceoutpackets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxQosMaxUpBWExcessRequests")
    {
        cdxqosmaxupbwexcessrequests = value;
        cdxqosmaxupbwexcessrequests.value_namespace = name_space;
        cdxqosmaxupbwexcessrequests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxQosMaxDownBWExcessPackets")
    {
        cdxqosmaxdownbwexcesspackets = value;
        cdxqosmaxdownbwexcesspackets.value_namespace = name_space;
        cdxqosmaxdownbwexcesspackets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxIfCmtsServiceHCInOctets")
    {
        cdxifcmtsservicehcinoctets = value;
        cdxifcmtsservicehcinoctets.value_namespace = name_space;
        cdxifcmtsservicehcinoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxIfCmtsServiceHCInPackets")
    {
        cdxifcmtsservicehcinpackets = value;
        cdxifcmtsservicehcinpackets.value_namespace = name_space;
        cdxifcmtsservicehcinpackets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxIfCmtsServiceHCOutOctets")
    {
        cdxifcmtsservicehcoutoctets = value;
        cdxifcmtsservicehcoutoctets.value_namespace = name_space;
        cdxifcmtsservicehcoutoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxIfCmtsServiceHCOutPackets")
    {
        cdxifcmtsservicehcoutpackets = value;
        cdxifcmtsservicehcoutpackets.value_namespace = name_space;
        cdxifcmtsservicehcoutpackets.value_namespace_prefix = name_space_prefix;
    }
}

void CISCODOCSEXTMIB::CdxCmtsServiceExtTable::CdxCmtsServiceExtEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "docsIfCmtsServiceId")
    {
        docsifcmtsserviceid.yfilter = yfilter;
    }
    if(value_path == "cdxIfCmtsServiceOutOctets")
    {
        cdxifcmtsserviceoutoctets.yfilter = yfilter;
    }
    if(value_path == "cdxIfCmtsServiceOutPackets")
    {
        cdxifcmtsserviceoutpackets.yfilter = yfilter;
    }
    if(value_path == "cdxQosMaxUpBWExcessRequests")
    {
        cdxqosmaxupbwexcessrequests.yfilter = yfilter;
    }
    if(value_path == "cdxQosMaxDownBWExcessPackets")
    {
        cdxqosmaxdownbwexcesspackets.yfilter = yfilter;
    }
    if(value_path == "cdxIfCmtsServiceHCInOctets")
    {
        cdxifcmtsservicehcinoctets.yfilter = yfilter;
    }
    if(value_path == "cdxIfCmtsServiceHCInPackets")
    {
        cdxifcmtsservicehcinpackets.yfilter = yfilter;
    }
    if(value_path == "cdxIfCmtsServiceHCOutOctets")
    {
        cdxifcmtsservicehcoutoctets.yfilter = yfilter;
    }
    if(value_path == "cdxIfCmtsServiceHCOutPackets")
    {
        cdxifcmtsservicehcoutpackets.yfilter = yfilter;
    }
}

bool CISCODOCSEXTMIB::CdxCmtsServiceExtTable::CdxCmtsServiceExtEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "docsIfCmtsServiceId" || name == "cdxIfCmtsServiceOutOctets" || name == "cdxIfCmtsServiceOutPackets" || name == "cdxQosMaxUpBWExcessRequests" || name == "cdxQosMaxDownBWExcessPackets" || name == "cdxIfCmtsServiceHCInOctets" || name == "cdxIfCmtsServiceHCInPackets" || name == "cdxIfCmtsServiceHCOutOctets" || name == "cdxIfCmtsServiceHCOutPackets")
        return true;
    return false;
}

CISCODOCSEXTMIB::CdxUpInfoElemStatsTable::CdxUpInfoElemStatsTable()
    :
    cdxupinfoelemstatsentry(this, {"ifindex", "cdxupinfoelemstatsnamecode"})
{

    yang_name = "cdxUpInfoElemStatsTable"; yang_parent_name = "CISCO-DOCS-EXT-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCODOCSEXTMIB::CdxUpInfoElemStatsTable::~CdxUpInfoElemStatsTable()
{
}

bool CISCODOCSEXTMIB::CdxUpInfoElemStatsTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cdxupinfoelemstatsentry.len(); index++)
    {
        if(cdxupinfoelemstatsentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCODOCSEXTMIB::CdxUpInfoElemStatsTable::has_operation() const
{
    for (std::size_t index=0; index<cdxupinfoelemstatsentry.len(); index++)
    {
        if(cdxupinfoelemstatsentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCODOCSEXTMIB::CdxUpInfoElemStatsTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-DOCS-EXT-MIB:CISCO-DOCS-EXT-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCODOCSEXTMIB::CdxUpInfoElemStatsTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdxUpInfoElemStatsTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCODOCSEXTMIB::CdxUpInfoElemStatsTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCODOCSEXTMIB::CdxUpInfoElemStatsTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cdxUpInfoElemStatsEntry")
    {
        auto c = std::make_shared<CISCODOCSEXTMIB::CdxUpInfoElemStatsTable::CdxUpInfoElemStatsEntry>();
        c->parent = this;
        cdxupinfoelemstatsentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCODOCSEXTMIB::CdxUpInfoElemStatsTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cdxupinfoelemstatsentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCODOCSEXTMIB::CdxUpInfoElemStatsTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCODOCSEXTMIB::CdxUpInfoElemStatsTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCODOCSEXTMIB::CdxUpInfoElemStatsTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cdxUpInfoElemStatsEntry")
        return true;
    return false;
}

CISCODOCSEXTMIB::CdxUpInfoElemStatsTable::CdxUpInfoElemStatsEntry::CdxUpInfoElemStatsEntry()
    :
    ifindex{YType::str, "ifIndex"},
    cdxupinfoelemstatsnamecode{YType::enumeration, "cdxUpInfoElemStatsNameCode"},
    cdxupinfoelemstatsietype{YType::int32, "cdxUpInfoElemStatsIEType"}
{

    yang_name = "cdxUpInfoElemStatsEntry"; yang_parent_name = "cdxUpInfoElemStatsTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCODOCSEXTMIB::CdxUpInfoElemStatsTable::CdxUpInfoElemStatsEntry::~CdxUpInfoElemStatsEntry()
{
}

bool CISCODOCSEXTMIB::CdxUpInfoElemStatsTable::CdxUpInfoElemStatsEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| cdxupinfoelemstatsnamecode.is_set
	|| cdxupinfoelemstatsietype.is_set;
}

bool CISCODOCSEXTMIB::CdxUpInfoElemStatsTable::CdxUpInfoElemStatsEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(cdxupinfoelemstatsnamecode.yfilter)
	|| ydk::is_set(cdxupinfoelemstatsietype.yfilter);
}

std::string CISCODOCSEXTMIB::CdxUpInfoElemStatsTable::CdxUpInfoElemStatsEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-DOCS-EXT-MIB:CISCO-DOCS-EXT-MIB/cdxUpInfoElemStatsTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCODOCSEXTMIB::CdxUpInfoElemStatsTable::CdxUpInfoElemStatsEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdxUpInfoElemStatsEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    ADD_KEY_TOKEN(cdxupinfoelemstatsnamecode, "cdxUpInfoElemStatsNameCode");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCODOCSEXTMIB::CdxUpInfoElemStatsTable::CdxUpInfoElemStatsEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (cdxupinfoelemstatsnamecode.is_set || is_set(cdxupinfoelemstatsnamecode.yfilter)) leaf_name_data.push_back(cdxupinfoelemstatsnamecode.get_name_leafdata());
    if (cdxupinfoelemstatsietype.is_set || is_set(cdxupinfoelemstatsietype.yfilter)) leaf_name_data.push_back(cdxupinfoelemstatsietype.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCODOCSEXTMIB::CdxUpInfoElemStatsTable::CdxUpInfoElemStatsEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCODOCSEXTMIB::CdxUpInfoElemStatsTable::CdxUpInfoElemStatsEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCODOCSEXTMIB::CdxUpInfoElemStatsTable::CdxUpInfoElemStatsEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxUpInfoElemStatsNameCode")
    {
        cdxupinfoelemstatsnamecode = value;
        cdxupinfoelemstatsnamecode.value_namespace = name_space;
        cdxupinfoelemstatsnamecode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxUpInfoElemStatsIEType")
    {
        cdxupinfoelemstatsietype = value;
        cdxupinfoelemstatsietype.value_namespace = name_space;
        cdxupinfoelemstatsietype.value_namespace_prefix = name_space_prefix;
    }
}

void CISCODOCSEXTMIB::CdxUpInfoElemStatsTable::CdxUpInfoElemStatsEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "cdxUpInfoElemStatsNameCode")
    {
        cdxupinfoelemstatsnamecode.yfilter = yfilter;
    }
    if(value_path == "cdxUpInfoElemStatsIEType")
    {
        cdxupinfoelemstatsietype.yfilter = yfilter;
    }
}

bool CISCODOCSEXTMIB::CdxUpInfoElemStatsTable::CdxUpInfoElemStatsEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "cdxUpInfoElemStatsNameCode" || name == "cdxUpInfoElemStatsIEType")
        return true;
    return false;
}

CISCODOCSEXTMIB::CdxBWQueueTable::CdxBWQueueTable()
    :
    cdxbwqueueentry(this, {"ifindex", "cdxbwqueuenamecode"})
{

    yang_name = "cdxBWQueueTable"; yang_parent_name = "CISCO-DOCS-EXT-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCODOCSEXTMIB::CdxBWQueueTable::~CdxBWQueueTable()
{
}

bool CISCODOCSEXTMIB::CdxBWQueueTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cdxbwqueueentry.len(); index++)
    {
        if(cdxbwqueueentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCODOCSEXTMIB::CdxBWQueueTable::has_operation() const
{
    for (std::size_t index=0; index<cdxbwqueueentry.len(); index++)
    {
        if(cdxbwqueueentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCODOCSEXTMIB::CdxBWQueueTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-DOCS-EXT-MIB:CISCO-DOCS-EXT-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCODOCSEXTMIB::CdxBWQueueTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdxBWQueueTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCODOCSEXTMIB::CdxBWQueueTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCODOCSEXTMIB::CdxBWQueueTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cdxBWQueueEntry")
    {
        auto c = std::make_shared<CISCODOCSEXTMIB::CdxBWQueueTable::CdxBWQueueEntry>();
        c->parent = this;
        cdxbwqueueentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCODOCSEXTMIB::CdxBWQueueTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cdxbwqueueentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCODOCSEXTMIB::CdxBWQueueTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCODOCSEXTMIB::CdxBWQueueTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCODOCSEXTMIB::CdxBWQueueTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cdxBWQueueEntry")
        return true;
    return false;
}

CISCODOCSEXTMIB::CdxBWQueueTable::CdxBWQueueEntry::CdxBWQueueEntry()
    :
    ifindex{YType::str, "ifIndex"},
    cdxbwqueuenamecode{YType::enumeration, "cdxBWQueueNameCode"},
    cdxbwqueueorder{YType::int32, "cdxBWQueueOrder"},
    cdxbwqueuenumservedbeforeyield{YType::int32, "cdxBWQueueNumServedBeforeYield"},
    cdxbwqueuetype{YType::enumeration, "cdxBWQueueType"},
    cdxbwqueuemaxdepth{YType::int32, "cdxBWQueueMaxDepth"},
    cdxbwqueuedepth{YType::int32, "cdxBWQueueDepth"},
    cdxbwqueuediscards{YType::uint32, "cdxBWQueueDiscards"}
{

    yang_name = "cdxBWQueueEntry"; yang_parent_name = "cdxBWQueueTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCODOCSEXTMIB::CdxBWQueueTable::CdxBWQueueEntry::~CdxBWQueueEntry()
{
}

bool CISCODOCSEXTMIB::CdxBWQueueTable::CdxBWQueueEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| cdxbwqueuenamecode.is_set
	|| cdxbwqueueorder.is_set
	|| cdxbwqueuenumservedbeforeyield.is_set
	|| cdxbwqueuetype.is_set
	|| cdxbwqueuemaxdepth.is_set
	|| cdxbwqueuedepth.is_set
	|| cdxbwqueuediscards.is_set;
}

bool CISCODOCSEXTMIB::CdxBWQueueTable::CdxBWQueueEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(cdxbwqueuenamecode.yfilter)
	|| ydk::is_set(cdxbwqueueorder.yfilter)
	|| ydk::is_set(cdxbwqueuenumservedbeforeyield.yfilter)
	|| ydk::is_set(cdxbwqueuetype.yfilter)
	|| ydk::is_set(cdxbwqueuemaxdepth.yfilter)
	|| ydk::is_set(cdxbwqueuedepth.yfilter)
	|| ydk::is_set(cdxbwqueuediscards.yfilter);
}

std::string CISCODOCSEXTMIB::CdxBWQueueTable::CdxBWQueueEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-DOCS-EXT-MIB:CISCO-DOCS-EXT-MIB/cdxBWQueueTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCODOCSEXTMIB::CdxBWQueueTable::CdxBWQueueEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdxBWQueueEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    ADD_KEY_TOKEN(cdxbwqueuenamecode, "cdxBWQueueNameCode");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCODOCSEXTMIB::CdxBWQueueTable::CdxBWQueueEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (cdxbwqueuenamecode.is_set || is_set(cdxbwqueuenamecode.yfilter)) leaf_name_data.push_back(cdxbwqueuenamecode.get_name_leafdata());
    if (cdxbwqueueorder.is_set || is_set(cdxbwqueueorder.yfilter)) leaf_name_data.push_back(cdxbwqueueorder.get_name_leafdata());
    if (cdxbwqueuenumservedbeforeyield.is_set || is_set(cdxbwqueuenumservedbeforeyield.yfilter)) leaf_name_data.push_back(cdxbwqueuenumservedbeforeyield.get_name_leafdata());
    if (cdxbwqueuetype.is_set || is_set(cdxbwqueuetype.yfilter)) leaf_name_data.push_back(cdxbwqueuetype.get_name_leafdata());
    if (cdxbwqueuemaxdepth.is_set || is_set(cdxbwqueuemaxdepth.yfilter)) leaf_name_data.push_back(cdxbwqueuemaxdepth.get_name_leafdata());
    if (cdxbwqueuedepth.is_set || is_set(cdxbwqueuedepth.yfilter)) leaf_name_data.push_back(cdxbwqueuedepth.get_name_leafdata());
    if (cdxbwqueuediscards.is_set || is_set(cdxbwqueuediscards.yfilter)) leaf_name_data.push_back(cdxbwqueuediscards.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCODOCSEXTMIB::CdxBWQueueTable::CdxBWQueueEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCODOCSEXTMIB::CdxBWQueueTable::CdxBWQueueEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCODOCSEXTMIB::CdxBWQueueTable::CdxBWQueueEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxBWQueueNameCode")
    {
        cdxbwqueuenamecode = value;
        cdxbwqueuenamecode.value_namespace = name_space;
        cdxbwqueuenamecode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxBWQueueOrder")
    {
        cdxbwqueueorder = value;
        cdxbwqueueorder.value_namespace = name_space;
        cdxbwqueueorder.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxBWQueueNumServedBeforeYield")
    {
        cdxbwqueuenumservedbeforeyield = value;
        cdxbwqueuenumservedbeforeyield.value_namespace = name_space;
        cdxbwqueuenumservedbeforeyield.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxBWQueueType")
    {
        cdxbwqueuetype = value;
        cdxbwqueuetype.value_namespace = name_space;
        cdxbwqueuetype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxBWQueueMaxDepth")
    {
        cdxbwqueuemaxdepth = value;
        cdxbwqueuemaxdepth.value_namespace = name_space;
        cdxbwqueuemaxdepth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxBWQueueDepth")
    {
        cdxbwqueuedepth = value;
        cdxbwqueuedepth.value_namespace = name_space;
        cdxbwqueuedepth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxBWQueueDiscards")
    {
        cdxbwqueuediscards = value;
        cdxbwqueuediscards.value_namespace = name_space;
        cdxbwqueuediscards.value_namespace_prefix = name_space_prefix;
    }
}

void CISCODOCSEXTMIB::CdxBWQueueTable::CdxBWQueueEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "cdxBWQueueNameCode")
    {
        cdxbwqueuenamecode.yfilter = yfilter;
    }
    if(value_path == "cdxBWQueueOrder")
    {
        cdxbwqueueorder.yfilter = yfilter;
    }
    if(value_path == "cdxBWQueueNumServedBeforeYield")
    {
        cdxbwqueuenumservedbeforeyield.yfilter = yfilter;
    }
    if(value_path == "cdxBWQueueType")
    {
        cdxbwqueuetype.yfilter = yfilter;
    }
    if(value_path == "cdxBWQueueMaxDepth")
    {
        cdxbwqueuemaxdepth.yfilter = yfilter;
    }
    if(value_path == "cdxBWQueueDepth")
    {
        cdxbwqueuedepth.yfilter = yfilter;
    }
    if(value_path == "cdxBWQueueDiscards")
    {
        cdxbwqueuediscards.yfilter = yfilter;
    }
}

bool CISCODOCSEXTMIB::CdxBWQueueTable::CdxBWQueueEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "cdxBWQueueNameCode" || name == "cdxBWQueueOrder" || name == "cdxBWQueueNumServedBeforeYield" || name == "cdxBWQueueType" || name == "cdxBWQueueMaxDepth" || name == "cdxBWQueueDepth" || name == "cdxBWQueueDiscards")
        return true;
    return false;
}

CISCODOCSEXTMIB::CdxCmCpeTable::CdxCmCpeTable()
    :
    cdxcmcpeentry(this, {"cdxcmcpemacaddress"})
{

    yang_name = "cdxCmCpeTable"; yang_parent_name = "CISCO-DOCS-EXT-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCODOCSEXTMIB::CdxCmCpeTable::~CdxCmCpeTable()
{
}

bool CISCODOCSEXTMIB::CdxCmCpeTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cdxcmcpeentry.len(); index++)
    {
        if(cdxcmcpeentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCODOCSEXTMIB::CdxCmCpeTable::has_operation() const
{
    for (std::size_t index=0; index<cdxcmcpeentry.len(); index++)
    {
        if(cdxcmcpeentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCODOCSEXTMIB::CdxCmCpeTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-DOCS-EXT-MIB:CISCO-DOCS-EXT-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCODOCSEXTMIB::CdxCmCpeTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdxCmCpeTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCODOCSEXTMIB::CdxCmCpeTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCODOCSEXTMIB::CdxCmCpeTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cdxCmCpeEntry")
    {
        auto c = std::make_shared<CISCODOCSEXTMIB::CdxCmCpeTable::CdxCmCpeEntry>();
        c->parent = this;
        cdxcmcpeentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCODOCSEXTMIB::CdxCmCpeTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cdxcmcpeentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCODOCSEXTMIB::CdxCmCpeTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCODOCSEXTMIB::CdxCmCpeTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCODOCSEXTMIB::CdxCmCpeTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cdxCmCpeEntry")
        return true;
    return false;
}

CISCODOCSEXTMIB::CdxCmCpeTable::CdxCmCpeEntry::CdxCmCpeEntry()
    :
    cdxcmcpemacaddress{YType::str, "cdxCmCpeMacAddress"},
    cdxcmcpetype{YType::enumeration, "cdxCmCpeType"},
    cdxcmcpeipaddress{YType::str, "cdxCmCpeIpAddress"},
    cdxcmcpeifindex{YType::int32, "cdxCmCpeIfIndex"},
    cdxcmcpecmtsserviceid{YType::int32, "cdxCmCpeCmtsServiceId"},
    cdxcmcpecmstatusindex{YType::int32, "cdxCmCpeCmStatusIndex"},
    cdxcmcpeaccessgroup{YType::str, "cdxCmCpeAccessGroup"},
    cdxcmcperesetnow{YType::boolean, "cdxCmCpeResetNow"},
    cdxcmcpedeletenow{YType::boolean, "cdxCmCpeDeleteNow"}
{

    yang_name = "cdxCmCpeEntry"; yang_parent_name = "cdxCmCpeTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCODOCSEXTMIB::CdxCmCpeTable::CdxCmCpeEntry::~CdxCmCpeEntry()
{
}

bool CISCODOCSEXTMIB::CdxCmCpeTable::CdxCmCpeEntry::has_data() const
{
    if (is_presence_container) return true;
    return cdxcmcpemacaddress.is_set
	|| cdxcmcpetype.is_set
	|| cdxcmcpeipaddress.is_set
	|| cdxcmcpeifindex.is_set
	|| cdxcmcpecmtsserviceid.is_set
	|| cdxcmcpecmstatusindex.is_set
	|| cdxcmcpeaccessgroup.is_set
	|| cdxcmcperesetnow.is_set
	|| cdxcmcpedeletenow.is_set;
}

bool CISCODOCSEXTMIB::CdxCmCpeTable::CdxCmCpeEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cdxcmcpemacaddress.yfilter)
	|| ydk::is_set(cdxcmcpetype.yfilter)
	|| ydk::is_set(cdxcmcpeipaddress.yfilter)
	|| ydk::is_set(cdxcmcpeifindex.yfilter)
	|| ydk::is_set(cdxcmcpecmtsserviceid.yfilter)
	|| ydk::is_set(cdxcmcpecmstatusindex.yfilter)
	|| ydk::is_set(cdxcmcpeaccessgroup.yfilter)
	|| ydk::is_set(cdxcmcperesetnow.yfilter)
	|| ydk::is_set(cdxcmcpedeletenow.yfilter);
}

std::string CISCODOCSEXTMIB::CdxCmCpeTable::CdxCmCpeEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-DOCS-EXT-MIB:CISCO-DOCS-EXT-MIB/cdxCmCpeTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCODOCSEXTMIB::CdxCmCpeTable::CdxCmCpeEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdxCmCpeEntry";
    ADD_KEY_TOKEN(cdxcmcpemacaddress, "cdxCmCpeMacAddress");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCODOCSEXTMIB::CdxCmCpeTable::CdxCmCpeEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cdxcmcpemacaddress.is_set || is_set(cdxcmcpemacaddress.yfilter)) leaf_name_data.push_back(cdxcmcpemacaddress.get_name_leafdata());
    if (cdxcmcpetype.is_set || is_set(cdxcmcpetype.yfilter)) leaf_name_data.push_back(cdxcmcpetype.get_name_leafdata());
    if (cdxcmcpeipaddress.is_set || is_set(cdxcmcpeipaddress.yfilter)) leaf_name_data.push_back(cdxcmcpeipaddress.get_name_leafdata());
    if (cdxcmcpeifindex.is_set || is_set(cdxcmcpeifindex.yfilter)) leaf_name_data.push_back(cdxcmcpeifindex.get_name_leafdata());
    if (cdxcmcpecmtsserviceid.is_set || is_set(cdxcmcpecmtsserviceid.yfilter)) leaf_name_data.push_back(cdxcmcpecmtsserviceid.get_name_leafdata());
    if (cdxcmcpecmstatusindex.is_set || is_set(cdxcmcpecmstatusindex.yfilter)) leaf_name_data.push_back(cdxcmcpecmstatusindex.get_name_leafdata());
    if (cdxcmcpeaccessgroup.is_set || is_set(cdxcmcpeaccessgroup.yfilter)) leaf_name_data.push_back(cdxcmcpeaccessgroup.get_name_leafdata());
    if (cdxcmcperesetnow.is_set || is_set(cdxcmcperesetnow.yfilter)) leaf_name_data.push_back(cdxcmcperesetnow.get_name_leafdata());
    if (cdxcmcpedeletenow.is_set || is_set(cdxcmcpedeletenow.yfilter)) leaf_name_data.push_back(cdxcmcpedeletenow.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCODOCSEXTMIB::CdxCmCpeTable::CdxCmCpeEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCODOCSEXTMIB::CdxCmCpeTable::CdxCmCpeEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCODOCSEXTMIB::CdxCmCpeTable::CdxCmCpeEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cdxCmCpeMacAddress")
    {
        cdxcmcpemacaddress = value;
        cdxcmcpemacaddress.value_namespace = name_space;
        cdxcmcpemacaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxCmCpeType")
    {
        cdxcmcpetype = value;
        cdxcmcpetype.value_namespace = name_space;
        cdxcmcpetype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxCmCpeIpAddress")
    {
        cdxcmcpeipaddress = value;
        cdxcmcpeipaddress.value_namespace = name_space;
        cdxcmcpeipaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxCmCpeIfIndex")
    {
        cdxcmcpeifindex = value;
        cdxcmcpeifindex.value_namespace = name_space;
        cdxcmcpeifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxCmCpeCmtsServiceId")
    {
        cdxcmcpecmtsserviceid = value;
        cdxcmcpecmtsserviceid.value_namespace = name_space;
        cdxcmcpecmtsserviceid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxCmCpeCmStatusIndex")
    {
        cdxcmcpecmstatusindex = value;
        cdxcmcpecmstatusindex.value_namespace = name_space;
        cdxcmcpecmstatusindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxCmCpeAccessGroup")
    {
        cdxcmcpeaccessgroup = value;
        cdxcmcpeaccessgroup.value_namespace = name_space;
        cdxcmcpeaccessgroup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxCmCpeResetNow")
    {
        cdxcmcperesetnow = value;
        cdxcmcperesetnow.value_namespace = name_space;
        cdxcmcperesetnow.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxCmCpeDeleteNow")
    {
        cdxcmcpedeletenow = value;
        cdxcmcpedeletenow.value_namespace = name_space;
        cdxcmcpedeletenow.value_namespace_prefix = name_space_prefix;
    }
}

void CISCODOCSEXTMIB::CdxCmCpeTable::CdxCmCpeEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cdxCmCpeMacAddress")
    {
        cdxcmcpemacaddress.yfilter = yfilter;
    }
    if(value_path == "cdxCmCpeType")
    {
        cdxcmcpetype.yfilter = yfilter;
    }
    if(value_path == "cdxCmCpeIpAddress")
    {
        cdxcmcpeipaddress.yfilter = yfilter;
    }
    if(value_path == "cdxCmCpeIfIndex")
    {
        cdxcmcpeifindex.yfilter = yfilter;
    }
    if(value_path == "cdxCmCpeCmtsServiceId")
    {
        cdxcmcpecmtsserviceid.yfilter = yfilter;
    }
    if(value_path == "cdxCmCpeCmStatusIndex")
    {
        cdxcmcpecmstatusindex.yfilter = yfilter;
    }
    if(value_path == "cdxCmCpeAccessGroup")
    {
        cdxcmcpeaccessgroup.yfilter = yfilter;
    }
    if(value_path == "cdxCmCpeResetNow")
    {
        cdxcmcperesetnow.yfilter = yfilter;
    }
    if(value_path == "cdxCmCpeDeleteNow")
    {
        cdxcmcpedeletenow.yfilter = yfilter;
    }
}

bool CISCODOCSEXTMIB::CdxCmCpeTable::CdxCmCpeEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cdxCmCpeMacAddress" || name == "cdxCmCpeType" || name == "cdxCmCpeIpAddress" || name == "cdxCmCpeIfIndex" || name == "cdxCmCpeCmtsServiceId" || name == "cdxCmCpeCmStatusIndex" || name == "cdxCmCpeAccessGroup" || name == "cdxCmCpeResetNow" || name == "cdxCmCpeDeleteNow")
        return true;
    return false;
}

CISCODOCSEXTMIB::CdxCmtsCmStatusExtTable::CdxCmtsCmStatusExtTable()
    :
    cdxcmtscmstatusextentry(this, {"docsifcmtscmstatusindex"})
{

    yang_name = "cdxCmtsCmStatusExtTable"; yang_parent_name = "CISCO-DOCS-EXT-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCODOCSEXTMIB::CdxCmtsCmStatusExtTable::~CdxCmtsCmStatusExtTable()
{
}

bool CISCODOCSEXTMIB::CdxCmtsCmStatusExtTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cdxcmtscmstatusextentry.len(); index++)
    {
        if(cdxcmtscmstatusextentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCODOCSEXTMIB::CdxCmtsCmStatusExtTable::has_operation() const
{
    for (std::size_t index=0; index<cdxcmtscmstatusextentry.len(); index++)
    {
        if(cdxcmtscmstatusextentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCODOCSEXTMIB::CdxCmtsCmStatusExtTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-DOCS-EXT-MIB:CISCO-DOCS-EXT-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCODOCSEXTMIB::CdxCmtsCmStatusExtTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdxCmtsCmStatusExtTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCODOCSEXTMIB::CdxCmtsCmStatusExtTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCODOCSEXTMIB::CdxCmtsCmStatusExtTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cdxCmtsCmStatusExtEntry")
    {
        auto c = std::make_shared<CISCODOCSEXTMIB::CdxCmtsCmStatusExtTable::CdxCmtsCmStatusExtEntry>();
        c->parent = this;
        cdxcmtscmstatusextentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCODOCSEXTMIB::CdxCmtsCmStatusExtTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cdxcmtscmstatusextentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCODOCSEXTMIB::CdxCmtsCmStatusExtTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCODOCSEXTMIB::CdxCmtsCmStatusExtTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCODOCSEXTMIB::CdxCmtsCmStatusExtTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cdxCmtsCmStatusExtEntry")
        return true;
    return false;
}

CISCODOCSEXTMIB::CdxCmtsCmStatusExtTable::CdxCmtsCmStatusExtEntry::CdxCmtsCmStatusExtEntry()
    :
    docsifcmtscmstatusindex{YType::str, "docsIfCmtsCmStatusIndex"},
    cdxcmtscmstatusvalue{YType::enumeration, "cdxCmtsCmStatusValue"},
    cdxifcmtscmstatusonlinetimes{YType::uint32, "cdxIfCmtsCmStatusOnlineTimes"},
    cdxifcmtscmstatuspercentonline{YType::int32, "cdxIfCmtsCmStatusPercentOnline"},
    cdxifcmtscmstatusminonlinetime{YType::int32, "cdxIfCmtsCmStatusMinOnlineTime"},
    cdxifcmtscmstatusavgonlinetime{YType::int32, "cdxIfCmtsCmStatusAvgOnlineTime"},
    cdxifcmtscmstatusmaxonlinetime{YType::int32, "cdxIfCmtsCmStatusMaxOnlineTime"},
    cdxifcmtscmstatusminofflinetime{YType::int32, "cdxIfCmtsCmStatusMinOfflineTime"},
    cdxifcmtscmstatusavgofflinetime{YType::int32, "cdxIfCmtsCmStatusAvgOfflineTime"},
    cdxifcmtscmstatusmaxofflinetime{YType::int32, "cdxIfCmtsCmStatusMaxOfflineTime"},
    cdxifcmtscmstatusdynsidcount{YType::int32, "cdxIfCmtsCmStatusDynSidCount"},
    cdxifcmtscmstatusaddlinfo{YType::bits, "cdxIfCmtsCmStatusAddlInfo"},
    cdxifcmtscmstatusonlinetimesnum{YType::uint32, "cdxIfCmtsCmStatusOnlineTimesNum"},
    cdxifcmtscmstatuslastresettime{YType::uint32, "cdxIfCmtsCmStatusLastResetTime"}
{

    yang_name = "cdxCmtsCmStatusExtEntry"; yang_parent_name = "cdxCmtsCmStatusExtTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCODOCSEXTMIB::CdxCmtsCmStatusExtTable::CdxCmtsCmStatusExtEntry::~CdxCmtsCmStatusExtEntry()
{
}

bool CISCODOCSEXTMIB::CdxCmtsCmStatusExtTable::CdxCmtsCmStatusExtEntry::has_data() const
{
    if (is_presence_container) return true;
    return docsifcmtscmstatusindex.is_set
	|| cdxcmtscmstatusvalue.is_set
	|| cdxifcmtscmstatusonlinetimes.is_set
	|| cdxifcmtscmstatuspercentonline.is_set
	|| cdxifcmtscmstatusminonlinetime.is_set
	|| cdxifcmtscmstatusavgonlinetime.is_set
	|| cdxifcmtscmstatusmaxonlinetime.is_set
	|| cdxifcmtscmstatusminofflinetime.is_set
	|| cdxifcmtscmstatusavgofflinetime.is_set
	|| cdxifcmtscmstatusmaxofflinetime.is_set
	|| cdxifcmtscmstatusdynsidcount.is_set
	|| cdxifcmtscmstatusaddlinfo.is_set
	|| cdxifcmtscmstatusonlinetimesnum.is_set
	|| cdxifcmtscmstatuslastresettime.is_set;
}

bool CISCODOCSEXTMIB::CdxCmtsCmStatusExtTable::CdxCmtsCmStatusExtEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(docsifcmtscmstatusindex.yfilter)
	|| ydk::is_set(cdxcmtscmstatusvalue.yfilter)
	|| ydk::is_set(cdxifcmtscmstatusonlinetimes.yfilter)
	|| ydk::is_set(cdxifcmtscmstatuspercentonline.yfilter)
	|| ydk::is_set(cdxifcmtscmstatusminonlinetime.yfilter)
	|| ydk::is_set(cdxifcmtscmstatusavgonlinetime.yfilter)
	|| ydk::is_set(cdxifcmtscmstatusmaxonlinetime.yfilter)
	|| ydk::is_set(cdxifcmtscmstatusminofflinetime.yfilter)
	|| ydk::is_set(cdxifcmtscmstatusavgofflinetime.yfilter)
	|| ydk::is_set(cdxifcmtscmstatusmaxofflinetime.yfilter)
	|| ydk::is_set(cdxifcmtscmstatusdynsidcount.yfilter)
	|| ydk::is_set(cdxifcmtscmstatusaddlinfo.yfilter)
	|| ydk::is_set(cdxifcmtscmstatusonlinetimesnum.yfilter)
	|| ydk::is_set(cdxifcmtscmstatuslastresettime.yfilter);
}

std::string CISCODOCSEXTMIB::CdxCmtsCmStatusExtTable::CdxCmtsCmStatusExtEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-DOCS-EXT-MIB:CISCO-DOCS-EXT-MIB/cdxCmtsCmStatusExtTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCODOCSEXTMIB::CdxCmtsCmStatusExtTable::CdxCmtsCmStatusExtEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdxCmtsCmStatusExtEntry";
    ADD_KEY_TOKEN(docsifcmtscmstatusindex, "docsIfCmtsCmStatusIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCODOCSEXTMIB::CdxCmtsCmStatusExtTable::CdxCmtsCmStatusExtEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (docsifcmtscmstatusindex.is_set || is_set(docsifcmtscmstatusindex.yfilter)) leaf_name_data.push_back(docsifcmtscmstatusindex.get_name_leafdata());
    if (cdxcmtscmstatusvalue.is_set || is_set(cdxcmtscmstatusvalue.yfilter)) leaf_name_data.push_back(cdxcmtscmstatusvalue.get_name_leafdata());
    if (cdxifcmtscmstatusonlinetimes.is_set || is_set(cdxifcmtscmstatusonlinetimes.yfilter)) leaf_name_data.push_back(cdxifcmtscmstatusonlinetimes.get_name_leafdata());
    if (cdxifcmtscmstatuspercentonline.is_set || is_set(cdxifcmtscmstatuspercentonline.yfilter)) leaf_name_data.push_back(cdxifcmtscmstatuspercentonline.get_name_leafdata());
    if (cdxifcmtscmstatusminonlinetime.is_set || is_set(cdxifcmtscmstatusminonlinetime.yfilter)) leaf_name_data.push_back(cdxifcmtscmstatusminonlinetime.get_name_leafdata());
    if (cdxifcmtscmstatusavgonlinetime.is_set || is_set(cdxifcmtscmstatusavgonlinetime.yfilter)) leaf_name_data.push_back(cdxifcmtscmstatusavgonlinetime.get_name_leafdata());
    if (cdxifcmtscmstatusmaxonlinetime.is_set || is_set(cdxifcmtscmstatusmaxonlinetime.yfilter)) leaf_name_data.push_back(cdxifcmtscmstatusmaxonlinetime.get_name_leafdata());
    if (cdxifcmtscmstatusminofflinetime.is_set || is_set(cdxifcmtscmstatusminofflinetime.yfilter)) leaf_name_data.push_back(cdxifcmtscmstatusminofflinetime.get_name_leafdata());
    if (cdxifcmtscmstatusavgofflinetime.is_set || is_set(cdxifcmtscmstatusavgofflinetime.yfilter)) leaf_name_data.push_back(cdxifcmtscmstatusavgofflinetime.get_name_leafdata());
    if (cdxifcmtscmstatusmaxofflinetime.is_set || is_set(cdxifcmtscmstatusmaxofflinetime.yfilter)) leaf_name_data.push_back(cdxifcmtscmstatusmaxofflinetime.get_name_leafdata());
    if (cdxifcmtscmstatusdynsidcount.is_set || is_set(cdxifcmtscmstatusdynsidcount.yfilter)) leaf_name_data.push_back(cdxifcmtscmstatusdynsidcount.get_name_leafdata());
    if (cdxifcmtscmstatusaddlinfo.is_set || is_set(cdxifcmtscmstatusaddlinfo.yfilter)) leaf_name_data.push_back(cdxifcmtscmstatusaddlinfo.get_name_leafdata());
    if (cdxifcmtscmstatusonlinetimesnum.is_set || is_set(cdxifcmtscmstatusonlinetimesnum.yfilter)) leaf_name_data.push_back(cdxifcmtscmstatusonlinetimesnum.get_name_leafdata());
    if (cdxifcmtscmstatuslastresettime.is_set || is_set(cdxifcmtscmstatuslastresettime.yfilter)) leaf_name_data.push_back(cdxifcmtscmstatuslastresettime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCODOCSEXTMIB::CdxCmtsCmStatusExtTable::CdxCmtsCmStatusExtEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCODOCSEXTMIB::CdxCmtsCmStatusExtTable::CdxCmtsCmStatusExtEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCODOCSEXTMIB::CdxCmtsCmStatusExtTable::CdxCmtsCmStatusExtEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "docsIfCmtsCmStatusIndex")
    {
        docsifcmtscmstatusindex = value;
        docsifcmtscmstatusindex.value_namespace = name_space;
        docsifcmtscmstatusindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxCmtsCmStatusValue")
    {
        cdxcmtscmstatusvalue = value;
        cdxcmtscmstatusvalue.value_namespace = name_space;
        cdxcmtscmstatusvalue.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxIfCmtsCmStatusOnlineTimes")
    {
        cdxifcmtscmstatusonlinetimes = value;
        cdxifcmtscmstatusonlinetimes.value_namespace = name_space;
        cdxifcmtscmstatusonlinetimes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxIfCmtsCmStatusPercentOnline")
    {
        cdxifcmtscmstatuspercentonline = value;
        cdxifcmtscmstatuspercentonline.value_namespace = name_space;
        cdxifcmtscmstatuspercentonline.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxIfCmtsCmStatusMinOnlineTime")
    {
        cdxifcmtscmstatusminonlinetime = value;
        cdxifcmtscmstatusminonlinetime.value_namespace = name_space;
        cdxifcmtscmstatusminonlinetime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxIfCmtsCmStatusAvgOnlineTime")
    {
        cdxifcmtscmstatusavgonlinetime = value;
        cdxifcmtscmstatusavgonlinetime.value_namespace = name_space;
        cdxifcmtscmstatusavgonlinetime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxIfCmtsCmStatusMaxOnlineTime")
    {
        cdxifcmtscmstatusmaxonlinetime = value;
        cdxifcmtscmstatusmaxonlinetime.value_namespace = name_space;
        cdxifcmtscmstatusmaxonlinetime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxIfCmtsCmStatusMinOfflineTime")
    {
        cdxifcmtscmstatusminofflinetime = value;
        cdxifcmtscmstatusminofflinetime.value_namespace = name_space;
        cdxifcmtscmstatusminofflinetime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxIfCmtsCmStatusAvgOfflineTime")
    {
        cdxifcmtscmstatusavgofflinetime = value;
        cdxifcmtscmstatusavgofflinetime.value_namespace = name_space;
        cdxifcmtscmstatusavgofflinetime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxIfCmtsCmStatusMaxOfflineTime")
    {
        cdxifcmtscmstatusmaxofflinetime = value;
        cdxifcmtscmstatusmaxofflinetime.value_namespace = name_space;
        cdxifcmtscmstatusmaxofflinetime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxIfCmtsCmStatusDynSidCount")
    {
        cdxifcmtscmstatusdynsidcount = value;
        cdxifcmtscmstatusdynsidcount.value_namespace = name_space;
        cdxifcmtscmstatusdynsidcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxIfCmtsCmStatusAddlInfo")
    {
        cdxifcmtscmstatusaddlinfo[value] = true;
    }
    if(value_path == "cdxIfCmtsCmStatusOnlineTimesNum")
    {
        cdxifcmtscmstatusonlinetimesnum = value;
        cdxifcmtscmstatusonlinetimesnum.value_namespace = name_space;
        cdxifcmtscmstatusonlinetimesnum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxIfCmtsCmStatusLastResetTime")
    {
        cdxifcmtscmstatuslastresettime = value;
        cdxifcmtscmstatuslastresettime.value_namespace = name_space;
        cdxifcmtscmstatuslastresettime.value_namespace_prefix = name_space_prefix;
    }
}

void CISCODOCSEXTMIB::CdxCmtsCmStatusExtTable::CdxCmtsCmStatusExtEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "docsIfCmtsCmStatusIndex")
    {
        docsifcmtscmstatusindex.yfilter = yfilter;
    }
    if(value_path == "cdxCmtsCmStatusValue")
    {
        cdxcmtscmstatusvalue.yfilter = yfilter;
    }
    if(value_path == "cdxIfCmtsCmStatusOnlineTimes")
    {
        cdxifcmtscmstatusonlinetimes.yfilter = yfilter;
    }
    if(value_path == "cdxIfCmtsCmStatusPercentOnline")
    {
        cdxifcmtscmstatuspercentonline.yfilter = yfilter;
    }
    if(value_path == "cdxIfCmtsCmStatusMinOnlineTime")
    {
        cdxifcmtscmstatusminonlinetime.yfilter = yfilter;
    }
    if(value_path == "cdxIfCmtsCmStatusAvgOnlineTime")
    {
        cdxifcmtscmstatusavgonlinetime.yfilter = yfilter;
    }
    if(value_path == "cdxIfCmtsCmStatusMaxOnlineTime")
    {
        cdxifcmtscmstatusmaxonlinetime.yfilter = yfilter;
    }
    if(value_path == "cdxIfCmtsCmStatusMinOfflineTime")
    {
        cdxifcmtscmstatusminofflinetime.yfilter = yfilter;
    }
    if(value_path == "cdxIfCmtsCmStatusAvgOfflineTime")
    {
        cdxifcmtscmstatusavgofflinetime.yfilter = yfilter;
    }
    if(value_path == "cdxIfCmtsCmStatusMaxOfflineTime")
    {
        cdxifcmtscmstatusmaxofflinetime.yfilter = yfilter;
    }
    if(value_path == "cdxIfCmtsCmStatusDynSidCount")
    {
        cdxifcmtscmstatusdynsidcount.yfilter = yfilter;
    }
    if(value_path == "cdxIfCmtsCmStatusAddlInfo")
    {
        cdxifcmtscmstatusaddlinfo.yfilter = yfilter;
    }
    if(value_path == "cdxIfCmtsCmStatusOnlineTimesNum")
    {
        cdxifcmtscmstatusonlinetimesnum.yfilter = yfilter;
    }
    if(value_path == "cdxIfCmtsCmStatusLastResetTime")
    {
        cdxifcmtscmstatuslastresettime.yfilter = yfilter;
    }
}

bool CISCODOCSEXTMIB::CdxCmtsCmStatusExtTable::CdxCmtsCmStatusExtEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsIfCmtsCmStatusIndex" || name == "cdxCmtsCmStatusValue" || name == "cdxIfCmtsCmStatusOnlineTimes" || name == "cdxIfCmtsCmStatusPercentOnline" || name == "cdxIfCmtsCmStatusMinOnlineTime" || name == "cdxIfCmtsCmStatusAvgOnlineTime" || name == "cdxIfCmtsCmStatusMaxOnlineTime" || name == "cdxIfCmtsCmStatusMinOfflineTime" || name == "cdxIfCmtsCmStatusAvgOfflineTime" || name == "cdxIfCmtsCmStatusMaxOfflineTime" || name == "cdxIfCmtsCmStatusDynSidCount" || name == "cdxIfCmtsCmStatusAddlInfo" || name == "cdxIfCmtsCmStatusOnlineTimesNum" || name == "cdxIfCmtsCmStatusLastResetTime")
        return true;
    return false;
}

CISCODOCSEXTMIB::CdxCmtsMacExtTable::CdxCmtsMacExtTable()
    :
    cdxcmtsmacextentry(this, {"ifindex"})
{

    yang_name = "cdxCmtsMacExtTable"; yang_parent_name = "CISCO-DOCS-EXT-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCODOCSEXTMIB::CdxCmtsMacExtTable::~CdxCmtsMacExtTable()
{
}

bool CISCODOCSEXTMIB::CdxCmtsMacExtTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cdxcmtsmacextentry.len(); index++)
    {
        if(cdxcmtsmacextentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCODOCSEXTMIB::CdxCmtsMacExtTable::has_operation() const
{
    for (std::size_t index=0; index<cdxcmtsmacextentry.len(); index++)
    {
        if(cdxcmtsmacextentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCODOCSEXTMIB::CdxCmtsMacExtTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-DOCS-EXT-MIB:CISCO-DOCS-EXT-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCODOCSEXTMIB::CdxCmtsMacExtTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdxCmtsMacExtTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCODOCSEXTMIB::CdxCmtsMacExtTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCODOCSEXTMIB::CdxCmtsMacExtTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cdxCmtsMacExtEntry")
    {
        auto c = std::make_shared<CISCODOCSEXTMIB::CdxCmtsMacExtTable::CdxCmtsMacExtEntry>();
        c->parent = this;
        cdxcmtsmacextentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCODOCSEXTMIB::CdxCmtsMacExtTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cdxcmtsmacextentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCODOCSEXTMIB::CdxCmtsMacExtTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCODOCSEXTMIB::CdxCmtsMacExtTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCODOCSEXTMIB::CdxCmtsMacExtTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cdxCmtsMacExtEntry")
        return true;
    return false;
}

CISCODOCSEXTMIB::CdxCmtsMacExtTable::CdxCmtsMacExtEntry::CdxCmtsMacExtEntry()
    :
    ifindex{YType::str, "ifIndex"},
    cdxcmtscmonofftrapenable{YType::boolean, "cdxCmtsCmOnOffTrapEnable"},
    cdxcmtscmonofftrapinterval{YType::int32, "cdxCmtsCmOnOffTrapInterval"},
    cdxcmtscmdefaultmaxcpes{YType::int32, "cdxCmtsCmDefaultMaxCpes"},
    cdxcmtscmtotal{YType::int32, "cdxCmtsCmTotal"},
    cdxcmtscmactive{YType::int32, "cdxCmtsCmActive"},
    cdxcmtscmregistered{YType::int32, "cdxCmtsCmRegistered"},
    cdxcmtscmdmicmode{YType::enumeration, "cdxCmtsCmDMICMode"},
    cdxcmtscmdmiclockqos{YType::int32, "cdxCmtsCmDMICLockQos"}
{

    yang_name = "cdxCmtsMacExtEntry"; yang_parent_name = "cdxCmtsMacExtTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCODOCSEXTMIB::CdxCmtsMacExtTable::CdxCmtsMacExtEntry::~CdxCmtsMacExtEntry()
{
}

bool CISCODOCSEXTMIB::CdxCmtsMacExtTable::CdxCmtsMacExtEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| cdxcmtscmonofftrapenable.is_set
	|| cdxcmtscmonofftrapinterval.is_set
	|| cdxcmtscmdefaultmaxcpes.is_set
	|| cdxcmtscmtotal.is_set
	|| cdxcmtscmactive.is_set
	|| cdxcmtscmregistered.is_set
	|| cdxcmtscmdmicmode.is_set
	|| cdxcmtscmdmiclockqos.is_set;
}

bool CISCODOCSEXTMIB::CdxCmtsMacExtTable::CdxCmtsMacExtEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(cdxcmtscmonofftrapenable.yfilter)
	|| ydk::is_set(cdxcmtscmonofftrapinterval.yfilter)
	|| ydk::is_set(cdxcmtscmdefaultmaxcpes.yfilter)
	|| ydk::is_set(cdxcmtscmtotal.yfilter)
	|| ydk::is_set(cdxcmtscmactive.yfilter)
	|| ydk::is_set(cdxcmtscmregistered.yfilter)
	|| ydk::is_set(cdxcmtscmdmicmode.yfilter)
	|| ydk::is_set(cdxcmtscmdmiclockqos.yfilter);
}

std::string CISCODOCSEXTMIB::CdxCmtsMacExtTable::CdxCmtsMacExtEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-DOCS-EXT-MIB:CISCO-DOCS-EXT-MIB/cdxCmtsMacExtTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCODOCSEXTMIB::CdxCmtsMacExtTable::CdxCmtsMacExtEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdxCmtsMacExtEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCODOCSEXTMIB::CdxCmtsMacExtTable::CdxCmtsMacExtEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (cdxcmtscmonofftrapenable.is_set || is_set(cdxcmtscmonofftrapenable.yfilter)) leaf_name_data.push_back(cdxcmtscmonofftrapenable.get_name_leafdata());
    if (cdxcmtscmonofftrapinterval.is_set || is_set(cdxcmtscmonofftrapinterval.yfilter)) leaf_name_data.push_back(cdxcmtscmonofftrapinterval.get_name_leafdata());
    if (cdxcmtscmdefaultmaxcpes.is_set || is_set(cdxcmtscmdefaultmaxcpes.yfilter)) leaf_name_data.push_back(cdxcmtscmdefaultmaxcpes.get_name_leafdata());
    if (cdxcmtscmtotal.is_set || is_set(cdxcmtscmtotal.yfilter)) leaf_name_data.push_back(cdxcmtscmtotal.get_name_leafdata());
    if (cdxcmtscmactive.is_set || is_set(cdxcmtscmactive.yfilter)) leaf_name_data.push_back(cdxcmtscmactive.get_name_leafdata());
    if (cdxcmtscmregistered.is_set || is_set(cdxcmtscmregistered.yfilter)) leaf_name_data.push_back(cdxcmtscmregistered.get_name_leafdata());
    if (cdxcmtscmdmicmode.is_set || is_set(cdxcmtscmdmicmode.yfilter)) leaf_name_data.push_back(cdxcmtscmdmicmode.get_name_leafdata());
    if (cdxcmtscmdmiclockqos.is_set || is_set(cdxcmtscmdmiclockqos.yfilter)) leaf_name_data.push_back(cdxcmtscmdmiclockqos.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCODOCSEXTMIB::CdxCmtsMacExtTable::CdxCmtsMacExtEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCODOCSEXTMIB::CdxCmtsMacExtTable::CdxCmtsMacExtEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCODOCSEXTMIB::CdxCmtsMacExtTable::CdxCmtsMacExtEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxCmtsCmOnOffTrapEnable")
    {
        cdxcmtscmonofftrapenable = value;
        cdxcmtscmonofftrapenable.value_namespace = name_space;
        cdxcmtscmonofftrapenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxCmtsCmOnOffTrapInterval")
    {
        cdxcmtscmonofftrapinterval = value;
        cdxcmtscmonofftrapinterval.value_namespace = name_space;
        cdxcmtscmonofftrapinterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxCmtsCmDefaultMaxCpes")
    {
        cdxcmtscmdefaultmaxcpes = value;
        cdxcmtscmdefaultmaxcpes.value_namespace = name_space;
        cdxcmtscmdefaultmaxcpes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxCmtsCmTotal")
    {
        cdxcmtscmtotal = value;
        cdxcmtscmtotal.value_namespace = name_space;
        cdxcmtscmtotal.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxCmtsCmActive")
    {
        cdxcmtscmactive = value;
        cdxcmtscmactive.value_namespace = name_space;
        cdxcmtscmactive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxCmtsCmRegistered")
    {
        cdxcmtscmregistered = value;
        cdxcmtscmregistered.value_namespace = name_space;
        cdxcmtscmregistered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxCmtsCmDMICMode")
    {
        cdxcmtscmdmicmode = value;
        cdxcmtscmdmicmode.value_namespace = name_space;
        cdxcmtscmdmicmode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxCmtsCmDMICLockQos")
    {
        cdxcmtscmdmiclockqos = value;
        cdxcmtscmdmiclockqos.value_namespace = name_space;
        cdxcmtscmdmiclockqos.value_namespace_prefix = name_space_prefix;
    }
}

void CISCODOCSEXTMIB::CdxCmtsMacExtTable::CdxCmtsMacExtEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "cdxCmtsCmOnOffTrapEnable")
    {
        cdxcmtscmonofftrapenable.yfilter = yfilter;
    }
    if(value_path == "cdxCmtsCmOnOffTrapInterval")
    {
        cdxcmtscmonofftrapinterval.yfilter = yfilter;
    }
    if(value_path == "cdxCmtsCmDefaultMaxCpes")
    {
        cdxcmtscmdefaultmaxcpes.yfilter = yfilter;
    }
    if(value_path == "cdxCmtsCmTotal")
    {
        cdxcmtscmtotal.yfilter = yfilter;
    }
    if(value_path == "cdxCmtsCmActive")
    {
        cdxcmtscmactive.yfilter = yfilter;
    }
    if(value_path == "cdxCmtsCmRegistered")
    {
        cdxcmtscmregistered.yfilter = yfilter;
    }
    if(value_path == "cdxCmtsCmDMICMode")
    {
        cdxcmtscmdmicmode.yfilter = yfilter;
    }
    if(value_path == "cdxCmtsCmDMICLockQos")
    {
        cdxcmtscmdmiclockqos.yfilter = yfilter;
    }
}

bool CISCODOCSEXTMIB::CdxCmtsMacExtTable::CdxCmtsMacExtEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "cdxCmtsCmOnOffTrapEnable" || name == "cdxCmtsCmOnOffTrapInterval" || name == "cdxCmtsCmDefaultMaxCpes" || name == "cdxCmtsCmTotal" || name == "cdxCmtsCmActive" || name == "cdxCmtsCmRegistered" || name == "cdxCmtsCmDMICMode" || name == "cdxCmtsCmDMICLockQos")
        return true;
    return false;
}

CISCODOCSEXTMIB::CdxCmtsCmChOverTable::CdxCmtsCmChOverTable()
    :
    cdxcmtscmchoverentry(this, {"cdxcmtscmchoverserialnumber"})
{

    yang_name = "cdxCmtsCmChOverTable"; yang_parent_name = "CISCO-DOCS-EXT-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCODOCSEXTMIB::CdxCmtsCmChOverTable::~CdxCmtsCmChOverTable()
{
}

bool CISCODOCSEXTMIB::CdxCmtsCmChOverTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cdxcmtscmchoverentry.len(); index++)
    {
        if(cdxcmtscmchoverentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCODOCSEXTMIB::CdxCmtsCmChOverTable::has_operation() const
{
    for (std::size_t index=0; index<cdxcmtscmchoverentry.len(); index++)
    {
        if(cdxcmtscmchoverentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCODOCSEXTMIB::CdxCmtsCmChOverTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-DOCS-EXT-MIB:CISCO-DOCS-EXT-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCODOCSEXTMIB::CdxCmtsCmChOverTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdxCmtsCmChOverTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCODOCSEXTMIB::CdxCmtsCmChOverTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCODOCSEXTMIB::CdxCmtsCmChOverTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cdxCmtsCmChOverEntry")
    {
        auto c = std::make_shared<CISCODOCSEXTMIB::CdxCmtsCmChOverTable::CdxCmtsCmChOverEntry>();
        c->parent = this;
        cdxcmtscmchoverentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCODOCSEXTMIB::CdxCmtsCmChOverTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cdxcmtscmchoverentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCODOCSEXTMIB::CdxCmtsCmChOverTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCODOCSEXTMIB::CdxCmtsCmChOverTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCODOCSEXTMIB::CdxCmtsCmChOverTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cdxCmtsCmChOverEntry")
        return true;
    return false;
}

CISCODOCSEXTMIB::CdxCmtsCmChOverTable::CdxCmtsCmChOverEntry::CdxCmtsCmChOverEntry()
    :
    cdxcmtscmchoverserialnumber{YType::int32, "cdxCmtsCmChOverSerialNumber"},
    cdxcmtscmchovermacaddress{YType::str, "cdxCmtsCmChOverMacAddress"},
    cdxcmtscmchoverdownfrequency{YType::int32, "cdxCmtsCmChOverDownFrequency"},
    cdxcmtscmchoverupchannelid{YType::int32, "cdxCmtsCmChOverUpChannelId"},
    cdxcmtscmchovertraponcompletion{YType::boolean, "cdxCmtsCmChOverTrapOnCompletion"},
    cdxcmtscmchoveropinitiatedtime{YType::uint32, "cdxCmtsCmChOverOpInitiatedTime"},
    cdxcmtscmchoverstate{YType::enumeration, "cdxCmtsCmChOverState"},
    cdxcmtscmchoverrowstatus{YType::enumeration, "cdxCmtsCmChOverRowStatus"}
{

    yang_name = "cdxCmtsCmChOverEntry"; yang_parent_name = "cdxCmtsCmChOverTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCODOCSEXTMIB::CdxCmtsCmChOverTable::CdxCmtsCmChOverEntry::~CdxCmtsCmChOverEntry()
{
}

bool CISCODOCSEXTMIB::CdxCmtsCmChOverTable::CdxCmtsCmChOverEntry::has_data() const
{
    if (is_presence_container) return true;
    return cdxcmtscmchoverserialnumber.is_set
	|| cdxcmtscmchovermacaddress.is_set
	|| cdxcmtscmchoverdownfrequency.is_set
	|| cdxcmtscmchoverupchannelid.is_set
	|| cdxcmtscmchovertraponcompletion.is_set
	|| cdxcmtscmchoveropinitiatedtime.is_set
	|| cdxcmtscmchoverstate.is_set
	|| cdxcmtscmchoverrowstatus.is_set;
}

bool CISCODOCSEXTMIB::CdxCmtsCmChOverTable::CdxCmtsCmChOverEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cdxcmtscmchoverserialnumber.yfilter)
	|| ydk::is_set(cdxcmtscmchovermacaddress.yfilter)
	|| ydk::is_set(cdxcmtscmchoverdownfrequency.yfilter)
	|| ydk::is_set(cdxcmtscmchoverupchannelid.yfilter)
	|| ydk::is_set(cdxcmtscmchovertraponcompletion.yfilter)
	|| ydk::is_set(cdxcmtscmchoveropinitiatedtime.yfilter)
	|| ydk::is_set(cdxcmtscmchoverstate.yfilter)
	|| ydk::is_set(cdxcmtscmchoverrowstatus.yfilter);
}

std::string CISCODOCSEXTMIB::CdxCmtsCmChOverTable::CdxCmtsCmChOverEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-DOCS-EXT-MIB:CISCO-DOCS-EXT-MIB/cdxCmtsCmChOverTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCODOCSEXTMIB::CdxCmtsCmChOverTable::CdxCmtsCmChOverEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdxCmtsCmChOverEntry";
    ADD_KEY_TOKEN(cdxcmtscmchoverserialnumber, "cdxCmtsCmChOverSerialNumber");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCODOCSEXTMIB::CdxCmtsCmChOverTable::CdxCmtsCmChOverEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cdxcmtscmchoverserialnumber.is_set || is_set(cdxcmtscmchoverserialnumber.yfilter)) leaf_name_data.push_back(cdxcmtscmchoverserialnumber.get_name_leafdata());
    if (cdxcmtscmchovermacaddress.is_set || is_set(cdxcmtscmchovermacaddress.yfilter)) leaf_name_data.push_back(cdxcmtscmchovermacaddress.get_name_leafdata());
    if (cdxcmtscmchoverdownfrequency.is_set || is_set(cdxcmtscmchoverdownfrequency.yfilter)) leaf_name_data.push_back(cdxcmtscmchoverdownfrequency.get_name_leafdata());
    if (cdxcmtscmchoverupchannelid.is_set || is_set(cdxcmtscmchoverupchannelid.yfilter)) leaf_name_data.push_back(cdxcmtscmchoverupchannelid.get_name_leafdata());
    if (cdxcmtscmchovertraponcompletion.is_set || is_set(cdxcmtscmchovertraponcompletion.yfilter)) leaf_name_data.push_back(cdxcmtscmchovertraponcompletion.get_name_leafdata());
    if (cdxcmtscmchoveropinitiatedtime.is_set || is_set(cdxcmtscmchoveropinitiatedtime.yfilter)) leaf_name_data.push_back(cdxcmtscmchoveropinitiatedtime.get_name_leafdata());
    if (cdxcmtscmchoverstate.is_set || is_set(cdxcmtscmchoverstate.yfilter)) leaf_name_data.push_back(cdxcmtscmchoverstate.get_name_leafdata());
    if (cdxcmtscmchoverrowstatus.is_set || is_set(cdxcmtscmchoverrowstatus.yfilter)) leaf_name_data.push_back(cdxcmtscmchoverrowstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCODOCSEXTMIB::CdxCmtsCmChOverTable::CdxCmtsCmChOverEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCODOCSEXTMIB::CdxCmtsCmChOverTable::CdxCmtsCmChOverEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCODOCSEXTMIB::CdxCmtsCmChOverTable::CdxCmtsCmChOverEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cdxCmtsCmChOverSerialNumber")
    {
        cdxcmtscmchoverserialnumber = value;
        cdxcmtscmchoverserialnumber.value_namespace = name_space;
        cdxcmtscmchoverserialnumber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxCmtsCmChOverMacAddress")
    {
        cdxcmtscmchovermacaddress = value;
        cdxcmtscmchovermacaddress.value_namespace = name_space;
        cdxcmtscmchovermacaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxCmtsCmChOverDownFrequency")
    {
        cdxcmtscmchoverdownfrequency = value;
        cdxcmtscmchoverdownfrequency.value_namespace = name_space;
        cdxcmtscmchoverdownfrequency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxCmtsCmChOverUpChannelId")
    {
        cdxcmtscmchoverupchannelid = value;
        cdxcmtscmchoverupchannelid.value_namespace = name_space;
        cdxcmtscmchoverupchannelid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxCmtsCmChOverTrapOnCompletion")
    {
        cdxcmtscmchovertraponcompletion = value;
        cdxcmtscmchovertraponcompletion.value_namespace = name_space;
        cdxcmtscmchovertraponcompletion.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxCmtsCmChOverOpInitiatedTime")
    {
        cdxcmtscmchoveropinitiatedtime = value;
        cdxcmtscmchoveropinitiatedtime.value_namespace = name_space;
        cdxcmtscmchoveropinitiatedtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxCmtsCmChOverState")
    {
        cdxcmtscmchoverstate = value;
        cdxcmtscmchoverstate.value_namespace = name_space;
        cdxcmtscmchoverstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxCmtsCmChOverRowStatus")
    {
        cdxcmtscmchoverrowstatus = value;
        cdxcmtscmchoverrowstatus.value_namespace = name_space;
        cdxcmtscmchoverrowstatus.value_namespace_prefix = name_space_prefix;
    }
}

void CISCODOCSEXTMIB::CdxCmtsCmChOverTable::CdxCmtsCmChOverEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cdxCmtsCmChOverSerialNumber")
    {
        cdxcmtscmchoverserialnumber.yfilter = yfilter;
    }
    if(value_path == "cdxCmtsCmChOverMacAddress")
    {
        cdxcmtscmchovermacaddress.yfilter = yfilter;
    }
    if(value_path == "cdxCmtsCmChOverDownFrequency")
    {
        cdxcmtscmchoverdownfrequency.yfilter = yfilter;
    }
    if(value_path == "cdxCmtsCmChOverUpChannelId")
    {
        cdxcmtscmchoverupchannelid.yfilter = yfilter;
    }
    if(value_path == "cdxCmtsCmChOverTrapOnCompletion")
    {
        cdxcmtscmchovertraponcompletion.yfilter = yfilter;
    }
    if(value_path == "cdxCmtsCmChOverOpInitiatedTime")
    {
        cdxcmtscmchoveropinitiatedtime.yfilter = yfilter;
    }
    if(value_path == "cdxCmtsCmChOverState")
    {
        cdxcmtscmchoverstate.yfilter = yfilter;
    }
    if(value_path == "cdxCmtsCmChOverRowStatus")
    {
        cdxcmtscmchoverrowstatus.yfilter = yfilter;
    }
}

bool CISCODOCSEXTMIB::CdxCmtsCmChOverTable::CdxCmtsCmChOverEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cdxCmtsCmChOverSerialNumber" || name == "cdxCmtsCmChOverMacAddress" || name == "cdxCmtsCmChOverDownFrequency" || name == "cdxCmtsCmChOverUpChannelId" || name == "cdxCmtsCmChOverTrapOnCompletion" || name == "cdxCmtsCmChOverOpInitiatedTime" || name == "cdxCmtsCmChOverState" || name == "cdxCmtsCmChOverRowStatus")
        return true;
    return false;
}

CISCODOCSEXTMIB::CdxCmtsCmTable::CdxCmtsCmTable()
    :
    cdxcmtscmentry(this, {"docsifcmtscmstatusindex"})
{

    yang_name = "cdxCmtsCmTable"; yang_parent_name = "CISCO-DOCS-EXT-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCODOCSEXTMIB::CdxCmtsCmTable::~CdxCmtsCmTable()
{
}

bool CISCODOCSEXTMIB::CdxCmtsCmTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cdxcmtscmentry.len(); index++)
    {
        if(cdxcmtscmentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCODOCSEXTMIB::CdxCmtsCmTable::has_operation() const
{
    for (std::size_t index=0; index<cdxcmtscmentry.len(); index++)
    {
        if(cdxcmtscmentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCODOCSEXTMIB::CdxCmtsCmTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-DOCS-EXT-MIB:CISCO-DOCS-EXT-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCODOCSEXTMIB::CdxCmtsCmTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdxCmtsCmTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCODOCSEXTMIB::CdxCmtsCmTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCODOCSEXTMIB::CdxCmtsCmTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cdxCmtsCmEntry")
    {
        auto c = std::make_shared<CISCODOCSEXTMIB::CdxCmtsCmTable::CdxCmtsCmEntry>();
        c->parent = this;
        cdxcmtscmentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCODOCSEXTMIB::CdxCmtsCmTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cdxcmtscmentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCODOCSEXTMIB::CdxCmtsCmTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCODOCSEXTMIB::CdxCmtsCmTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCODOCSEXTMIB::CdxCmtsCmTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cdxCmtsCmEntry")
        return true;
    return false;
}

CISCODOCSEXTMIB::CdxCmtsCmTable::CdxCmtsCmEntry::CdxCmtsCmEntry()
    :
    docsifcmtscmstatusindex{YType::str, "docsIfCmtsCmStatusIndex"},
    cdxcmtscmmaxcpenumber{YType::int32, "cdxCmtsCmMaxCpeNumber"},
    cdxcmtscmcurrcpenumber{YType::int32, "cdxCmtsCmCurrCpeNumber"},
    cdxcmtscmqosprofile{YType::int32, "cdxCmtsCmQosProfile"}
{

    yang_name = "cdxCmtsCmEntry"; yang_parent_name = "cdxCmtsCmTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCODOCSEXTMIB::CdxCmtsCmTable::CdxCmtsCmEntry::~CdxCmtsCmEntry()
{
}

bool CISCODOCSEXTMIB::CdxCmtsCmTable::CdxCmtsCmEntry::has_data() const
{
    if (is_presence_container) return true;
    return docsifcmtscmstatusindex.is_set
	|| cdxcmtscmmaxcpenumber.is_set
	|| cdxcmtscmcurrcpenumber.is_set
	|| cdxcmtscmqosprofile.is_set;
}

bool CISCODOCSEXTMIB::CdxCmtsCmTable::CdxCmtsCmEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(docsifcmtscmstatusindex.yfilter)
	|| ydk::is_set(cdxcmtscmmaxcpenumber.yfilter)
	|| ydk::is_set(cdxcmtscmcurrcpenumber.yfilter)
	|| ydk::is_set(cdxcmtscmqosprofile.yfilter);
}

std::string CISCODOCSEXTMIB::CdxCmtsCmTable::CdxCmtsCmEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-DOCS-EXT-MIB:CISCO-DOCS-EXT-MIB/cdxCmtsCmTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCODOCSEXTMIB::CdxCmtsCmTable::CdxCmtsCmEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdxCmtsCmEntry";
    ADD_KEY_TOKEN(docsifcmtscmstatusindex, "docsIfCmtsCmStatusIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCODOCSEXTMIB::CdxCmtsCmTable::CdxCmtsCmEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (docsifcmtscmstatusindex.is_set || is_set(docsifcmtscmstatusindex.yfilter)) leaf_name_data.push_back(docsifcmtscmstatusindex.get_name_leafdata());
    if (cdxcmtscmmaxcpenumber.is_set || is_set(cdxcmtscmmaxcpenumber.yfilter)) leaf_name_data.push_back(cdxcmtscmmaxcpenumber.get_name_leafdata());
    if (cdxcmtscmcurrcpenumber.is_set || is_set(cdxcmtscmcurrcpenumber.yfilter)) leaf_name_data.push_back(cdxcmtscmcurrcpenumber.get_name_leafdata());
    if (cdxcmtscmqosprofile.is_set || is_set(cdxcmtscmqosprofile.yfilter)) leaf_name_data.push_back(cdxcmtscmqosprofile.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCODOCSEXTMIB::CdxCmtsCmTable::CdxCmtsCmEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCODOCSEXTMIB::CdxCmtsCmTable::CdxCmtsCmEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCODOCSEXTMIB::CdxCmtsCmTable::CdxCmtsCmEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "docsIfCmtsCmStatusIndex")
    {
        docsifcmtscmstatusindex = value;
        docsifcmtscmstatusindex.value_namespace = name_space;
        docsifcmtscmstatusindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxCmtsCmMaxCpeNumber")
    {
        cdxcmtscmmaxcpenumber = value;
        cdxcmtscmmaxcpenumber.value_namespace = name_space;
        cdxcmtscmmaxcpenumber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxCmtsCmCurrCpeNumber")
    {
        cdxcmtscmcurrcpenumber = value;
        cdxcmtscmcurrcpenumber.value_namespace = name_space;
        cdxcmtscmcurrcpenumber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxCmtsCmQosProfile")
    {
        cdxcmtscmqosprofile = value;
        cdxcmtscmqosprofile.value_namespace = name_space;
        cdxcmtscmqosprofile.value_namespace_prefix = name_space_prefix;
    }
}

void CISCODOCSEXTMIB::CdxCmtsCmTable::CdxCmtsCmEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "docsIfCmtsCmStatusIndex")
    {
        docsifcmtscmstatusindex.yfilter = yfilter;
    }
    if(value_path == "cdxCmtsCmMaxCpeNumber")
    {
        cdxcmtscmmaxcpenumber.yfilter = yfilter;
    }
    if(value_path == "cdxCmtsCmCurrCpeNumber")
    {
        cdxcmtscmcurrcpenumber.yfilter = yfilter;
    }
    if(value_path == "cdxCmtsCmQosProfile")
    {
        cdxcmtscmqosprofile.yfilter = yfilter;
    }
}

bool CISCODOCSEXTMIB::CdxCmtsCmTable::CdxCmtsCmEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsIfCmtsCmStatusIndex" || name == "cdxCmtsCmMaxCpeNumber" || name == "cdxCmtsCmCurrCpeNumber" || name == "cdxCmtsCmQosProfile")
        return true;
    return false;
}

CISCODOCSEXTMIB::CdxCmtsCmStatusDMICTable::CdxCmtsCmStatusDMICTable()
    :
    cdxcmtscmstatusdmicentry(this, {"docsifcmtscmstatusindex"})
{

    yang_name = "cdxCmtsCmStatusDMICTable"; yang_parent_name = "CISCO-DOCS-EXT-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCODOCSEXTMIB::CdxCmtsCmStatusDMICTable::~CdxCmtsCmStatusDMICTable()
{
}

bool CISCODOCSEXTMIB::CdxCmtsCmStatusDMICTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cdxcmtscmstatusdmicentry.len(); index++)
    {
        if(cdxcmtscmstatusdmicentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCODOCSEXTMIB::CdxCmtsCmStatusDMICTable::has_operation() const
{
    for (std::size_t index=0; index<cdxcmtscmstatusdmicentry.len(); index++)
    {
        if(cdxcmtscmstatusdmicentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCODOCSEXTMIB::CdxCmtsCmStatusDMICTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-DOCS-EXT-MIB:CISCO-DOCS-EXT-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCODOCSEXTMIB::CdxCmtsCmStatusDMICTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdxCmtsCmStatusDMICTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCODOCSEXTMIB::CdxCmtsCmStatusDMICTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCODOCSEXTMIB::CdxCmtsCmStatusDMICTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cdxCmtsCmStatusDMICEntry")
    {
        auto c = std::make_shared<CISCODOCSEXTMIB::CdxCmtsCmStatusDMICTable::CdxCmtsCmStatusDMICEntry>();
        c->parent = this;
        cdxcmtscmstatusdmicentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCODOCSEXTMIB::CdxCmtsCmStatusDMICTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cdxcmtscmstatusdmicentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCODOCSEXTMIB::CdxCmtsCmStatusDMICTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCODOCSEXTMIB::CdxCmtsCmStatusDMICTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCODOCSEXTMIB::CdxCmtsCmStatusDMICTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cdxCmtsCmStatusDMICEntry")
        return true;
    return false;
}

CISCODOCSEXTMIB::CdxCmtsCmStatusDMICTable::CdxCmtsCmStatusDMICEntry::CdxCmtsCmStatusDMICEntry()
    :
    docsifcmtscmstatusindex{YType::str, "docsIfCmtsCmStatusIndex"},
    cdxcmtscmstatusdmicmode{YType::enumeration, "cdxCmtsCmStatusDMICMode"},
    cdxcmtscmstatusdmicunlock{YType::boolean, "cdxCmtsCmStatusDMICUnLock"}
{

    yang_name = "cdxCmtsCmStatusDMICEntry"; yang_parent_name = "cdxCmtsCmStatusDMICTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCODOCSEXTMIB::CdxCmtsCmStatusDMICTable::CdxCmtsCmStatusDMICEntry::~CdxCmtsCmStatusDMICEntry()
{
}

bool CISCODOCSEXTMIB::CdxCmtsCmStatusDMICTable::CdxCmtsCmStatusDMICEntry::has_data() const
{
    if (is_presence_container) return true;
    return docsifcmtscmstatusindex.is_set
	|| cdxcmtscmstatusdmicmode.is_set
	|| cdxcmtscmstatusdmicunlock.is_set;
}

bool CISCODOCSEXTMIB::CdxCmtsCmStatusDMICTable::CdxCmtsCmStatusDMICEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(docsifcmtscmstatusindex.yfilter)
	|| ydk::is_set(cdxcmtscmstatusdmicmode.yfilter)
	|| ydk::is_set(cdxcmtscmstatusdmicunlock.yfilter);
}

std::string CISCODOCSEXTMIB::CdxCmtsCmStatusDMICTable::CdxCmtsCmStatusDMICEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-DOCS-EXT-MIB:CISCO-DOCS-EXT-MIB/cdxCmtsCmStatusDMICTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCODOCSEXTMIB::CdxCmtsCmStatusDMICTable::CdxCmtsCmStatusDMICEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdxCmtsCmStatusDMICEntry";
    ADD_KEY_TOKEN(docsifcmtscmstatusindex, "docsIfCmtsCmStatusIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCODOCSEXTMIB::CdxCmtsCmStatusDMICTable::CdxCmtsCmStatusDMICEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (docsifcmtscmstatusindex.is_set || is_set(docsifcmtscmstatusindex.yfilter)) leaf_name_data.push_back(docsifcmtscmstatusindex.get_name_leafdata());
    if (cdxcmtscmstatusdmicmode.is_set || is_set(cdxcmtscmstatusdmicmode.yfilter)) leaf_name_data.push_back(cdxcmtscmstatusdmicmode.get_name_leafdata());
    if (cdxcmtscmstatusdmicunlock.is_set || is_set(cdxcmtscmstatusdmicunlock.yfilter)) leaf_name_data.push_back(cdxcmtscmstatusdmicunlock.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCODOCSEXTMIB::CdxCmtsCmStatusDMICTable::CdxCmtsCmStatusDMICEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCODOCSEXTMIB::CdxCmtsCmStatusDMICTable::CdxCmtsCmStatusDMICEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCODOCSEXTMIB::CdxCmtsCmStatusDMICTable::CdxCmtsCmStatusDMICEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "docsIfCmtsCmStatusIndex")
    {
        docsifcmtscmstatusindex = value;
        docsifcmtscmstatusindex.value_namespace = name_space;
        docsifcmtscmstatusindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxCmtsCmStatusDMICMode")
    {
        cdxcmtscmstatusdmicmode = value;
        cdxcmtscmstatusdmicmode.value_namespace = name_space;
        cdxcmtscmstatusdmicmode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxCmtsCmStatusDMICUnLock")
    {
        cdxcmtscmstatusdmicunlock = value;
        cdxcmtscmstatusdmicunlock.value_namespace = name_space;
        cdxcmtscmstatusdmicunlock.value_namespace_prefix = name_space_prefix;
    }
}

void CISCODOCSEXTMIB::CdxCmtsCmStatusDMICTable::CdxCmtsCmStatusDMICEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "docsIfCmtsCmStatusIndex")
    {
        docsifcmtscmstatusindex.yfilter = yfilter;
    }
    if(value_path == "cdxCmtsCmStatusDMICMode")
    {
        cdxcmtscmstatusdmicmode.yfilter = yfilter;
    }
    if(value_path == "cdxCmtsCmStatusDMICUnLock")
    {
        cdxcmtscmstatusdmicunlock.yfilter = yfilter;
    }
}

bool CISCODOCSEXTMIB::CdxCmtsCmStatusDMICTable::CdxCmtsCmStatusDMICEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsIfCmtsCmStatusIndex" || name == "cdxCmtsCmStatusDMICMode" || name == "cdxCmtsCmStatusDMICUnLock")
        return true;
    return false;
}

CISCODOCSEXTMIB::CdxCmToCpeTable::CdxCmToCpeTable()
    :
    cdxcmtocpeentry(this, {"cdxcmtocpecmmacaddress", "cdxcmtocpeinetaddresstype", "cdxcmtocpeinetaddress"})
{

    yang_name = "cdxCmToCpeTable"; yang_parent_name = "CISCO-DOCS-EXT-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCODOCSEXTMIB::CdxCmToCpeTable::~CdxCmToCpeTable()
{
}

bool CISCODOCSEXTMIB::CdxCmToCpeTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cdxcmtocpeentry.len(); index++)
    {
        if(cdxcmtocpeentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCODOCSEXTMIB::CdxCmToCpeTable::has_operation() const
{
    for (std::size_t index=0; index<cdxcmtocpeentry.len(); index++)
    {
        if(cdxcmtocpeentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCODOCSEXTMIB::CdxCmToCpeTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-DOCS-EXT-MIB:CISCO-DOCS-EXT-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCODOCSEXTMIB::CdxCmToCpeTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdxCmToCpeTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCODOCSEXTMIB::CdxCmToCpeTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCODOCSEXTMIB::CdxCmToCpeTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cdxCmToCpeEntry")
    {
        auto c = std::make_shared<CISCODOCSEXTMIB::CdxCmToCpeTable::CdxCmToCpeEntry>();
        c->parent = this;
        cdxcmtocpeentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCODOCSEXTMIB::CdxCmToCpeTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cdxcmtocpeentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCODOCSEXTMIB::CdxCmToCpeTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCODOCSEXTMIB::CdxCmToCpeTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCODOCSEXTMIB::CdxCmToCpeTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cdxCmToCpeEntry")
        return true;
    return false;
}

CISCODOCSEXTMIB::CdxCmToCpeTable::CdxCmToCpeEntry::CdxCmToCpeEntry()
    :
    cdxcmtocpecmmacaddress{YType::str, "cdxCmToCpeCmMacAddress"},
    cdxcmtocpeinetaddresstype{YType::enumeration, "cdxCmToCpeInetAddressType"},
    cdxcmtocpeinetaddress{YType::str, "cdxCmToCpeInetAddress"}
{

    yang_name = "cdxCmToCpeEntry"; yang_parent_name = "cdxCmToCpeTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCODOCSEXTMIB::CdxCmToCpeTable::CdxCmToCpeEntry::~CdxCmToCpeEntry()
{
}

bool CISCODOCSEXTMIB::CdxCmToCpeTable::CdxCmToCpeEntry::has_data() const
{
    if (is_presence_container) return true;
    return cdxcmtocpecmmacaddress.is_set
	|| cdxcmtocpeinetaddresstype.is_set
	|| cdxcmtocpeinetaddress.is_set;
}

bool CISCODOCSEXTMIB::CdxCmToCpeTable::CdxCmToCpeEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cdxcmtocpecmmacaddress.yfilter)
	|| ydk::is_set(cdxcmtocpeinetaddresstype.yfilter)
	|| ydk::is_set(cdxcmtocpeinetaddress.yfilter);
}

std::string CISCODOCSEXTMIB::CdxCmToCpeTable::CdxCmToCpeEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-DOCS-EXT-MIB:CISCO-DOCS-EXT-MIB/cdxCmToCpeTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCODOCSEXTMIB::CdxCmToCpeTable::CdxCmToCpeEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdxCmToCpeEntry";
    ADD_KEY_TOKEN(cdxcmtocpecmmacaddress, "cdxCmToCpeCmMacAddress");
    ADD_KEY_TOKEN(cdxcmtocpeinetaddresstype, "cdxCmToCpeInetAddressType");
    ADD_KEY_TOKEN(cdxcmtocpeinetaddress, "cdxCmToCpeInetAddress");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCODOCSEXTMIB::CdxCmToCpeTable::CdxCmToCpeEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cdxcmtocpecmmacaddress.is_set || is_set(cdxcmtocpecmmacaddress.yfilter)) leaf_name_data.push_back(cdxcmtocpecmmacaddress.get_name_leafdata());
    if (cdxcmtocpeinetaddresstype.is_set || is_set(cdxcmtocpeinetaddresstype.yfilter)) leaf_name_data.push_back(cdxcmtocpeinetaddresstype.get_name_leafdata());
    if (cdxcmtocpeinetaddress.is_set || is_set(cdxcmtocpeinetaddress.yfilter)) leaf_name_data.push_back(cdxcmtocpeinetaddress.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCODOCSEXTMIB::CdxCmToCpeTable::CdxCmToCpeEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCODOCSEXTMIB::CdxCmToCpeTable::CdxCmToCpeEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCODOCSEXTMIB::CdxCmToCpeTable::CdxCmToCpeEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cdxCmToCpeCmMacAddress")
    {
        cdxcmtocpecmmacaddress = value;
        cdxcmtocpecmmacaddress.value_namespace = name_space;
        cdxcmtocpecmmacaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxCmToCpeInetAddressType")
    {
        cdxcmtocpeinetaddresstype = value;
        cdxcmtocpeinetaddresstype.value_namespace = name_space;
        cdxcmtocpeinetaddresstype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxCmToCpeInetAddress")
    {
        cdxcmtocpeinetaddress = value;
        cdxcmtocpeinetaddress.value_namespace = name_space;
        cdxcmtocpeinetaddress.value_namespace_prefix = name_space_prefix;
    }
}

void CISCODOCSEXTMIB::CdxCmToCpeTable::CdxCmToCpeEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cdxCmToCpeCmMacAddress")
    {
        cdxcmtocpecmmacaddress.yfilter = yfilter;
    }
    if(value_path == "cdxCmToCpeInetAddressType")
    {
        cdxcmtocpeinetaddresstype.yfilter = yfilter;
    }
    if(value_path == "cdxCmToCpeInetAddress")
    {
        cdxcmtocpeinetaddress.yfilter = yfilter;
    }
}

bool CISCODOCSEXTMIB::CdxCmToCpeTable::CdxCmToCpeEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cdxCmToCpeCmMacAddress" || name == "cdxCmToCpeInetAddressType" || name == "cdxCmToCpeInetAddress")
        return true;
    return false;
}

CISCODOCSEXTMIB::CdxCpeToCmTable::CdxCpeToCmTable()
    :
    cdxcpetocmentry(this, {"cdxcpetocmcpemacaddress"})
{

    yang_name = "cdxCpeToCmTable"; yang_parent_name = "CISCO-DOCS-EXT-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCODOCSEXTMIB::CdxCpeToCmTable::~CdxCpeToCmTable()
{
}

bool CISCODOCSEXTMIB::CdxCpeToCmTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cdxcpetocmentry.len(); index++)
    {
        if(cdxcpetocmentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCODOCSEXTMIB::CdxCpeToCmTable::has_operation() const
{
    for (std::size_t index=0; index<cdxcpetocmentry.len(); index++)
    {
        if(cdxcpetocmentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCODOCSEXTMIB::CdxCpeToCmTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-DOCS-EXT-MIB:CISCO-DOCS-EXT-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCODOCSEXTMIB::CdxCpeToCmTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdxCpeToCmTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCODOCSEXTMIB::CdxCpeToCmTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCODOCSEXTMIB::CdxCpeToCmTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cdxCpeToCmEntry")
    {
        auto c = std::make_shared<CISCODOCSEXTMIB::CdxCpeToCmTable::CdxCpeToCmEntry>();
        c->parent = this;
        cdxcpetocmentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCODOCSEXTMIB::CdxCpeToCmTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cdxcpetocmentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCODOCSEXTMIB::CdxCpeToCmTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCODOCSEXTMIB::CdxCpeToCmTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCODOCSEXTMIB::CdxCpeToCmTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cdxCpeToCmEntry")
        return true;
    return false;
}

CISCODOCSEXTMIB::CdxCpeToCmTable::CdxCpeToCmEntry::CdxCpeToCmEntry()
    :
    cdxcpetocmcpemacaddress{YType::str, "cdxCpeToCmCpeMacAddress"},
    cdxcpetocmmacaddress{YType::str, "cdxCpeToCmMacAddress"},
    cdxcpetocminetaddresstype{YType::enumeration, "cdxCpeToCmInetAddressType"},
    cdxcpetocminetaddress{YType::str, "cdxCpeToCmInetAddress"},
    cdxcpetocmstatusindex{YType::int32, "cdxCpeToCmStatusIndex"}
{

    yang_name = "cdxCpeToCmEntry"; yang_parent_name = "cdxCpeToCmTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCODOCSEXTMIB::CdxCpeToCmTable::CdxCpeToCmEntry::~CdxCpeToCmEntry()
{
}

bool CISCODOCSEXTMIB::CdxCpeToCmTable::CdxCpeToCmEntry::has_data() const
{
    if (is_presence_container) return true;
    return cdxcpetocmcpemacaddress.is_set
	|| cdxcpetocmmacaddress.is_set
	|| cdxcpetocminetaddresstype.is_set
	|| cdxcpetocminetaddress.is_set
	|| cdxcpetocmstatusindex.is_set;
}

bool CISCODOCSEXTMIB::CdxCpeToCmTable::CdxCpeToCmEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cdxcpetocmcpemacaddress.yfilter)
	|| ydk::is_set(cdxcpetocmmacaddress.yfilter)
	|| ydk::is_set(cdxcpetocminetaddresstype.yfilter)
	|| ydk::is_set(cdxcpetocminetaddress.yfilter)
	|| ydk::is_set(cdxcpetocmstatusindex.yfilter);
}

std::string CISCODOCSEXTMIB::CdxCpeToCmTable::CdxCpeToCmEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-DOCS-EXT-MIB:CISCO-DOCS-EXT-MIB/cdxCpeToCmTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCODOCSEXTMIB::CdxCpeToCmTable::CdxCpeToCmEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdxCpeToCmEntry";
    ADD_KEY_TOKEN(cdxcpetocmcpemacaddress, "cdxCpeToCmCpeMacAddress");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCODOCSEXTMIB::CdxCpeToCmTable::CdxCpeToCmEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cdxcpetocmcpemacaddress.is_set || is_set(cdxcpetocmcpemacaddress.yfilter)) leaf_name_data.push_back(cdxcpetocmcpemacaddress.get_name_leafdata());
    if (cdxcpetocmmacaddress.is_set || is_set(cdxcpetocmmacaddress.yfilter)) leaf_name_data.push_back(cdxcpetocmmacaddress.get_name_leafdata());
    if (cdxcpetocminetaddresstype.is_set || is_set(cdxcpetocminetaddresstype.yfilter)) leaf_name_data.push_back(cdxcpetocminetaddresstype.get_name_leafdata());
    if (cdxcpetocminetaddress.is_set || is_set(cdxcpetocminetaddress.yfilter)) leaf_name_data.push_back(cdxcpetocminetaddress.get_name_leafdata());
    if (cdxcpetocmstatusindex.is_set || is_set(cdxcpetocmstatusindex.yfilter)) leaf_name_data.push_back(cdxcpetocmstatusindex.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCODOCSEXTMIB::CdxCpeToCmTable::CdxCpeToCmEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCODOCSEXTMIB::CdxCpeToCmTable::CdxCpeToCmEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCODOCSEXTMIB::CdxCpeToCmTable::CdxCpeToCmEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cdxCpeToCmCpeMacAddress")
    {
        cdxcpetocmcpemacaddress = value;
        cdxcpetocmcpemacaddress.value_namespace = name_space;
        cdxcpetocmcpemacaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxCpeToCmMacAddress")
    {
        cdxcpetocmmacaddress = value;
        cdxcpetocmmacaddress.value_namespace = name_space;
        cdxcpetocmmacaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxCpeToCmInetAddressType")
    {
        cdxcpetocminetaddresstype = value;
        cdxcpetocminetaddresstype.value_namespace = name_space;
        cdxcpetocminetaddresstype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxCpeToCmInetAddress")
    {
        cdxcpetocminetaddress = value;
        cdxcpetocminetaddress.value_namespace = name_space;
        cdxcpetocminetaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxCpeToCmStatusIndex")
    {
        cdxcpetocmstatusindex = value;
        cdxcpetocmstatusindex.value_namespace = name_space;
        cdxcpetocmstatusindex.value_namespace_prefix = name_space_prefix;
    }
}

void CISCODOCSEXTMIB::CdxCpeToCmTable::CdxCpeToCmEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cdxCpeToCmCpeMacAddress")
    {
        cdxcpetocmcpemacaddress.yfilter = yfilter;
    }
    if(value_path == "cdxCpeToCmMacAddress")
    {
        cdxcpetocmmacaddress.yfilter = yfilter;
    }
    if(value_path == "cdxCpeToCmInetAddressType")
    {
        cdxcpetocminetaddresstype.yfilter = yfilter;
    }
    if(value_path == "cdxCpeToCmInetAddress")
    {
        cdxcpetocminetaddress.yfilter = yfilter;
    }
    if(value_path == "cdxCpeToCmStatusIndex")
    {
        cdxcpetocmstatusindex.yfilter = yfilter;
    }
}

bool CISCODOCSEXTMIB::CdxCpeToCmTable::CdxCpeToCmEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cdxCpeToCmCpeMacAddress" || name == "cdxCpeToCmMacAddress" || name == "cdxCpeToCmInetAddressType" || name == "cdxCpeToCmInetAddress" || name == "cdxCpeToCmStatusIndex")
        return true;
    return false;
}

CISCODOCSEXTMIB::CdxCpeIpPrefixTable::CdxCpeIpPrefixTable()
    :
    cdxcpeipprefixentry(this, {"cdxcpeipprefixcmmacaddress", "cdxcpeipprefixtype", "cdxcpeipprefixaddress", "cdxcpeipprefixlen"})
{

    yang_name = "cdxCpeIpPrefixTable"; yang_parent_name = "CISCO-DOCS-EXT-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCODOCSEXTMIB::CdxCpeIpPrefixTable::~CdxCpeIpPrefixTable()
{
}

bool CISCODOCSEXTMIB::CdxCpeIpPrefixTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cdxcpeipprefixentry.len(); index++)
    {
        if(cdxcpeipprefixentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCODOCSEXTMIB::CdxCpeIpPrefixTable::has_operation() const
{
    for (std::size_t index=0; index<cdxcpeipprefixentry.len(); index++)
    {
        if(cdxcpeipprefixentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCODOCSEXTMIB::CdxCpeIpPrefixTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-DOCS-EXT-MIB:CISCO-DOCS-EXT-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCODOCSEXTMIB::CdxCpeIpPrefixTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdxCpeIpPrefixTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCODOCSEXTMIB::CdxCpeIpPrefixTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCODOCSEXTMIB::CdxCpeIpPrefixTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cdxCpeIpPrefixEntry")
    {
        auto c = std::make_shared<CISCODOCSEXTMIB::CdxCpeIpPrefixTable::CdxCpeIpPrefixEntry>();
        c->parent = this;
        cdxcpeipprefixentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCODOCSEXTMIB::CdxCpeIpPrefixTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cdxcpeipprefixentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCODOCSEXTMIB::CdxCpeIpPrefixTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCODOCSEXTMIB::CdxCpeIpPrefixTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCODOCSEXTMIB::CdxCpeIpPrefixTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cdxCpeIpPrefixEntry")
        return true;
    return false;
}

CISCODOCSEXTMIB::CdxCpeIpPrefixTable::CdxCpeIpPrefixEntry::CdxCpeIpPrefixEntry()
    :
    cdxcpeipprefixcmmacaddress{YType::str, "cdxCpeIpPrefixCmMacAddress"},
    cdxcpeipprefixtype{YType::enumeration, "cdxCpeIpPrefixType"},
    cdxcpeipprefixaddress{YType::str, "cdxCpeIpPrefixAddress"},
    cdxcpeipprefixlen{YType::uint32, "cdxCpeIpPrefixLen"},
    cdxcpeipprefixcpemacaddress{YType::str, "cdxCpeIpPrefixCpeMacAddress"},
    cdxcpeipprefixcpetype{YType::str, "cdxCpeIpPrefixCpeType"}
{

    yang_name = "cdxCpeIpPrefixEntry"; yang_parent_name = "cdxCpeIpPrefixTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCODOCSEXTMIB::CdxCpeIpPrefixTable::CdxCpeIpPrefixEntry::~CdxCpeIpPrefixEntry()
{
}

bool CISCODOCSEXTMIB::CdxCpeIpPrefixTable::CdxCpeIpPrefixEntry::has_data() const
{
    if (is_presence_container) return true;
    return cdxcpeipprefixcmmacaddress.is_set
	|| cdxcpeipprefixtype.is_set
	|| cdxcpeipprefixaddress.is_set
	|| cdxcpeipprefixlen.is_set
	|| cdxcpeipprefixcpemacaddress.is_set
	|| cdxcpeipprefixcpetype.is_set;
}

bool CISCODOCSEXTMIB::CdxCpeIpPrefixTable::CdxCpeIpPrefixEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cdxcpeipprefixcmmacaddress.yfilter)
	|| ydk::is_set(cdxcpeipprefixtype.yfilter)
	|| ydk::is_set(cdxcpeipprefixaddress.yfilter)
	|| ydk::is_set(cdxcpeipprefixlen.yfilter)
	|| ydk::is_set(cdxcpeipprefixcpemacaddress.yfilter)
	|| ydk::is_set(cdxcpeipprefixcpetype.yfilter);
}

std::string CISCODOCSEXTMIB::CdxCpeIpPrefixTable::CdxCpeIpPrefixEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-DOCS-EXT-MIB:CISCO-DOCS-EXT-MIB/cdxCpeIpPrefixTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCODOCSEXTMIB::CdxCpeIpPrefixTable::CdxCpeIpPrefixEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdxCpeIpPrefixEntry";
    ADD_KEY_TOKEN(cdxcpeipprefixcmmacaddress, "cdxCpeIpPrefixCmMacAddress");
    ADD_KEY_TOKEN(cdxcpeipprefixtype, "cdxCpeIpPrefixType");
    ADD_KEY_TOKEN(cdxcpeipprefixaddress, "cdxCpeIpPrefixAddress");
    ADD_KEY_TOKEN(cdxcpeipprefixlen, "cdxCpeIpPrefixLen");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCODOCSEXTMIB::CdxCpeIpPrefixTable::CdxCpeIpPrefixEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cdxcpeipprefixcmmacaddress.is_set || is_set(cdxcpeipprefixcmmacaddress.yfilter)) leaf_name_data.push_back(cdxcpeipprefixcmmacaddress.get_name_leafdata());
    if (cdxcpeipprefixtype.is_set || is_set(cdxcpeipprefixtype.yfilter)) leaf_name_data.push_back(cdxcpeipprefixtype.get_name_leafdata());
    if (cdxcpeipprefixaddress.is_set || is_set(cdxcpeipprefixaddress.yfilter)) leaf_name_data.push_back(cdxcpeipprefixaddress.get_name_leafdata());
    if (cdxcpeipprefixlen.is_set || is_set(cdxcpeipprefixlen.yfilter)) leaf_name_data.push_back(cdxcpeipprefixlen.get_name_leafdata());
    if (cdxcpeipprefixcpemacaddress.is_set || is_set(cdxcpeipprefixcpemacaddress.yfilter)) leaf_name_data.push_back(cdxcpeipprefixcpemacaddress.get_name_leafdata());
    if (cdxcpeipprefixcpetype.is_set || is_set(cdxcpeipprefixcpetype.yfilter)) leaf_name_data.push_back(cdxcpeipprefixcpetype.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCODOCSEXTMIB::CdxCpeIpPrefixTable::CdxCpeIpPrefixEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCODOCSEXTMIB::CdxCpeIpPrefixTable::CdxCpeIpPrefixEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCODOCSEXTMIB::CdxCpeIpPrefixTable::CdxCpeIpPrefixEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cdxCpeIpPrefixCmMacAddress")
    {
        cdxcpeipprefixcmmacaddress = value;
        cdxcpeipprefixcmmacaddress.value_namespace = name_space;
        cdxcpeipprefixcmmacaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxCpeIpPrefixType")
    {
        cdxcpeipprefixtype = value;
        cdxcpeipprefixtype.value_namespace = name_space;
        cdxcpeipprefixtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxCpeIpPrefixAddress")
    {
        cdxcpeipprefixaddress = value;
        cdxcpeipprefixaddress.value_namespace = name_space;
        cdxcpeipprefixaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxCpeIpPrefixLen")
    {
        cdxcpeipprefixlen = value;
        cdxcpeipprefixlen.value_namespace = name_space;
        cdxcpeipprefixlen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxCpeIpPrefixCpeMacAddress")
    {
        cdxcpeipprefixcpemacaddress = value;
        cdxcpeipprefixcpemacaddress.value_namespace = name_space;
        cdxcpeipprefixcpemacaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxCpeIpPrefixCpeType")
    {
        cdxcpeipprefixcpetype = value;
        cdxcpeipprefixcpetype.value_namespace = name_space;
        cdxcpeipprefixcpetype.value_namespace_prefix = name_space_prefix;
    }
}

void CISCODOCSEXTMIB::CdxCpeIpPrefixTable::CdxCpeIpPrefixEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cdxCpeIpPrefixCmMacAddress")
    {
        cdxcpeipprefixcmmacaddress.yfilter = yfilter;
    }
    if(value_path == "cdxCpeIpPrefixType")
    {
        cdxcpeipprefixtype.yfilter = yfilter;
    }
    if(value_path == "cdxCpeIpPrefixAddress")
    {
        cdxcpeipprefixaddress.yfilter = yfilter;
    }
    if(value_path == "cdxCpeIpPrefixLen")
    {
        cdxcpeipprefixlen.yfilter = yfilter;
    }
    if(value_path == "cdxCpeIpPrefixCpeMacAddress")
    {
        cdxcpeipprefixcpemacaddress.yfilter = yfilter;
    }
    if(value_path == "cdxCpeIpPrefixCpeType")
    {
        cdxcpeipprefixcpetype.yfilter = yfilter;
    }
}

bool CISCODOCSEXTMIB::CdxCpeIpPrefixTable::CdxCpeIpPrefixEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cdxCpeIpPrefixCmMacAddress" || name == "cdxCpeIpPrefixType" || name == "cdxCpeIpPrefixAddress" || name == "cdxCpeIpPrefixLen" || name == "cdxCpeIpPrefixCpeMacAddress" || name == "cdxCpeIpPrefixCpeType")
        return true;
    return false;
}

CISCODOCSEXTMIB::CdxIfUpstreamChannelExtTable::CdxIfUpstreamChannelExtTable()
    :
    cdxifupstreamchannelextentry(this, {"ifindex"})
{

    yang_name = "cdxIfUpstreamChannelExtTable"; yang_parent_name = "CISCO-DOCS-EXT-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCODOCSEXTMIB::CdxIfUpstreamChannelExtTable::~CdxIfUpstreamChannelExtTable()
{
}

bool CISCODOCSEXTMIB::CdxIfUpstreamChannelExtTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cdxifupstreamchannelextentry.len(); index++)
    {
        if(cdxifupstreamchannelextentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCODOCSEXTMIB::CdxIfUpstreamChannelExtTable::has_operation() const
{
    for (std::size_t index=0; index<cdxifupstreamchannelextentry.len(); index++)
    {
        if(cdxifupstreamchannelextentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCODOCSEXTMIB::CdxIfUpstreamChannelExtTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-DOCS-EXT-MIB:CISCO-DOCS-EXT-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCODOCSEXTMIB::CdxIfUpstreamChannelExtTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdxIfUpstreamChannelExtTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCODOCSEXTMIB::CdxIfUpstreamChannelExtTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCODOCSEXTMIB::CdxIfUpstreamChannelExtTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cdxIfUpstreamChannelExtEntry")
    {
        auto c = std::make_shared<CISCODOCSEXTMIB::CdxIfUpstreamChannelExtTable::CdxIfUpstreamChannelExtEntry>();
        c->parent = this;
        cdxifupstreamchannelextentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCODOCSEXTMIB::CdxIfUpstreamChannelExtTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cdxifupstreamchannelextentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCODOCSEXTMIB::CdxIfUpstreamChannelExtTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCODOCSEXTMIB::CdxIfUpstreamChannelExtTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCODOCSEXTMIB::CdxIfUpstreamChannelExtTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cdxIfUpstreamChannelExtEntry")
        return true;
    return false;
}

CISCODOCSEXTMIB::CdxIfUpstreamChannelExtTable::CdxIfUpstreamChannelExtEntry::CdxIfUpstreamChannelExtEntry()
    :
    ifindex{YType::str, "ifIndex"},
    cdxifupchannelwidth{YType::int32, "cdxIfUpChannelWidth"},
    cdxifupchannelmodulationprofile{YType::uint32, "cdxIfUpChannelModulationProfile"},
    cdxifupchannelcmtotal{YType::int32, "cdxIfUpChannelCmTotal"},
    cdxifupchannelcmactive{YType::int32, "cdxIfUpChannelCmActive"},
    cdxifupchannelcmregistered{YType::int32, "cdxIfUpChannelCmRegistered"},
    cdxifupchannelinputpowerlevel{YType::int32, "cdxIfUpChannelInputPowerLevel"},
    cdxifupchannelavgutil{YType::int32, "cdxIfUpChannelAvgUtil"},
    cdxifupchannelavgcontslots{YType::int32, "cdxIfUpChannelAvgContSlots"},
    cdxifupchannelrangeslots{YType::int32, "cdxIfUpChannelRangeSlots"},
    cdxifupchannelnumactiveugs{YType::uint32, "cdxIfUpChannelNumActiveUGS"},
    cdxifupchannelmaxugslastonehour{YType::uint32, "cdxIfUpChannelMaxUGSLastOneHour"},
    cdxifupchannelminugslastonehour{YType::uint32, "cdxIfUpChannelMinUGSLastOneHour"},
    cdxifupchannelavgugslastonehour{YType::uint32, "cdxIfUpChannelAvgUGSLastOneHour"},
    cdxifupchannelmaxugslastfivemins{YType::uint32, "cdxIfUpChannelMaxUGSLastFiveMins"},
    cdxifupchannelminugslastfivemins{YType::uint32, "cdxIfUpChannelMinUGSLastFiveMins"},
    cdxifupchannelavgugslastfivemins{YType::uint32, "cdxIfUpChannelAvgUGSLastFiveMins"}
{

    yang_name = "cdxIfUpstreamChannelExtEntry"; yang_parent_name = "cdxIfUpstreamChannelExtTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCODOCSEXTMIB::CdxIfUpstreamChannelExtTable::CdxIfUpstreamChannelExtEntry::~CdxIfUpstreamChannelExtEntry()
{
}

bool CISCODOCSEXTMIB::CdxIfUpstreamChannelExtTable::CdxIfUpstreamChannelExtEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| cdxifupchannelwidth.is_set
	|| cdxifupchannelmodulationprofile.is_set
	|| cdxifupchannelcmtotal.is_set
	|| cdxifupchannelcmactive.is_set
	|| cdxifupchannelcmregistered.is_set
	|| cdxifupchannelinputpowerlevel.is_set
	|| cdxifupchannelavgutil.is_set
	|| cdxifupchannelavgcontslots.is_set
	|| cdxifupchannelrangeslots.is_set
	|| cdxifupchannelnumactiveugs.is_set
	|| cdxifupchannelmaxugslastonehour.is_set
	|| cdxifupchannelminugslastonehour.is_set
	|| cdxifupchannelavgugslastonehour.is_set
	|| cdxifupchannelmaxugslastfivemins.is_set
	|| cdxifupchannelminugslastfivemins.is_set
	|| cdxifupchannelavgugslastfivemins.is_set;
}

bool CISCODOCSEXTMIB::CdxIfUpstreamChannelExtTable::CdxIfUpstreamChannelExtEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(cdxifupchannelwidth.yfilter)
	|| ydk::is_set(cdxifupchannelmodulationprofile.yfilter)
	|| ydk::is_set(cdxifupchannelcmtotal.yfilter)
	|| ydk::is_set(cdxifupchannelcmactive.yfilter)
	|| ydk::is_set(cdxifupchannelcmregistered.yfilter)
	|| ydk::is_set(cdxifupchannelinputpowerlevel.yfilter)
	|| ydk::is_set(cdxifupchannelavgutil.yfilter)
	|| ydk::is_set(cdxifupchannelavgcontslots.yfilter)
	|| ydk::is_set(cdxifupchannelrangeslots.yfilter)
	|| ydk::is_set(cdxifupchannelnumactiveugs.yfilter)
	|| ydk::is_set(cdxifupchannelmaxugslastonehour.yfilter)
	|| ydk::is_set(cdxifupchannelminugslastonehour.yfilter)
	|| ydk::is_set(cdxifupchannelavgugslastonehour.yfilter)
	|| ydk::is_set(cdxifupchannelmaxugslastfivemins.yfilter)
	|| ydk::is_set(cdxifupchannelminugslastfivemins.yfilter)
	|| ydk::is_set(cdxifupchannelavgugslastfivemins.yfilter);
}

std::string CISCODOCSEXTMIB::CdxIfUpstreamChannelExtTable::CdxIfUpstreamChannelExtEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-DOCS-EXT-MIB:CISCO-DOCS-EXT-MIB/cdxIfUpstreamChannelExtTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCODOCSEXTMIB::CdxIfUpstreamChannelExtTable::CdxIfUpstreamChannelExtEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdxIfUpstreamChannelExtEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCODOCSEXTMIB::CdxIfUpstreamChannelExtTable::CdxIfUpstreamChannelExtEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (cdxifupchannelwidth.is_set || is_set(cdxifupchannelwidth.yfilter)) leaf_name_data.push_back(cdxifupchannelwidth.get_name_leafdata());
    if (cdxifupchannelmodulationprofile.is_set || is_set(cdxifupchannelmodulationprofile.yfilter)) leaf_name_data.push_back(cdxifupchannelmodulationprofile.get_name_leafdata());
    if (cdxifupchannelcmtotal.is_set || is_set(cdxifupchannelcmtotal.yfilter)) leaf_name_data.push_back(cdxifupchannelcmtotal.get_name_leafdata());
    if (cdxifupchannelcmactive.is_set || is_set(cdxifupchannelcmactive.yfilter)) leaf_name_data.push_back(cdxifupchannelcmactive.get_name_leafdata());
    if (cdxifupchannelcmregistered.is_set || is_set(cdxifupchannelcmregistered.yfilter)) leaf_name_data.push_back(cdxifupchannelcmregistered.get_name_leafdata());
    if (cdxifupchannelinputpowerlevel.is_set || is_set(cdxifupchannelinputpowerlevel.yfilter)) leaf_name_data.push_back(cdxifupchannelinputpowerlevel.get_name_leafdata());
    if (cdxifupchannelavgutil.is_set || is_set(cdxifupchannelavgutil.yfilter)) leaf_name_data.push_back(cdxifupchannelavgutil.get_name_leafdata());
    if (cdxifupchannelavgcontslots.is_set || is_set(cdxifupchannelavgcontslots.yfilter)) leaf_name_data.push_back(cdxifupchannelavgcontslots.get_name_leafdata());
    if (cdxifupchannelrangeslots.is_set || is_set(cdxifupchannelrangeslots.yfilter)) leaf_name_data.push_back(cdxifupchannelrangeslots.get_name_leafdata());
    if (cdxifupchannelnumactiveugs.is_set || is_set(cdxifupchannelnumactiveugs.yfilter)) leaf_name_data.push_back(cdxifupchannelnumactiveugs.get_name_leafdata());
    if (cdxifupchannelmaxugslastonehour.is_set || is_set(cdxifupchannelmaxugslastonehour.yfilter)) leaf_name_data.push_back(cdxifupchannelmaxugslastonehour.get_name_leafdata());
    if (cdxifupchannelminugslastonehour.is_set || is_set(cdxifupchannelminugslastonehour.yfilter)) leaf_name_data.push_back(cdxifupchannelminugslastonehour.get_name_leafdata());
    if (cdxifupchannelavgugslastonehour.is_set || is_set(cdxifupchannelavgugslastonehour.yfilter)) leaf_name_data.push_back(cdxifupchannelavgugslastonehour.get_name_leafdata());
    if (cdxifupchannelmaxugslastfivemins.is_set || is_set(cdxifupchannelmaxugslastfivemins.yfilter)) leaf_name_data.push_back(cdxifupchannelmaxugslastfivemins.get_name_leafdata());
    if (cdxifupchannelminugslastfivemins.is_set || is_set(cdxifupchannelminugslastfivemins.yfilter)) leaf_name_data.push_back(cdxifupchannelminugslastfivemins.get_name_leafdata());
    if (cdxifupchannelavgugslastfivemins.is_set || is_set(cdxifupchannelavgugslastfivemins.yfilter)) leaf_name_data.push_back(cdxifupchannelavgugslastfivemins.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCODOCSEXTMIB::CdxIfUpstreamChannelExtTable::CdxIfUpstreamChannelExtEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCODOCSEXTMIB::CdxIfUpstreamChannelExtTable::CdxIfUpstreamChannelExtEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCODOCSEXTMIB::CdxIfUpstreamChannelExtTable::CdxIfUpstreamChannelExtEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxIfUpChannelWidth")
    {
        cdxifupchannelwidth = value;
        cdxifupchannelwidth.value_namespace = name_space;
        cdxifupchannelwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxIfUpChannelModulationProfile")
    {
        cdxifupchannelmodulationprofile = value;
        cdxifupchannelmodulationprofile.value_namespace = name_space;
        cdxifupchannelmodulationprofile.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxIfUpChannelCmTotal")
    {
        cdxifupchannelcmtotal = value;
        cdxifupchannelcmtotal.value_namespace = name_space;
        cdxifupchannelcmtotal.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxIfUpChannelCmActive")
    {
        cdxifupchannelcmactive = value;
        cdxifupchannelcmactive.value_namespace = name_space;
        cdxifupchannelcmactive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxIfUpChannelCmRegistered")
    {
        cdxifupchannelcmregistered = value;
        cdxifupchannelcmregistered.value_namespace = name_space;
        cdxifupchannelcmregistered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxIfUpChannelInputPowerLevel")
    {
        cdxifupchannelinputpowerlevel = value;
        cdxifupchannelinputpowerlevel.value_namespace = name_space;
        cdxifupchannelinputpowerlevel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxIfUpChannelAvgUtil")
    {
        cdxifupchannelavgutil = value;
        cdxifupchannelavgutil.value_namespace = name_space;
        cdxifupchannelavgutil.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxIfUpChannelAvgContSlots")
    {
        cdxifupchannelavgcontslots = value;
        cdxifupchannelavgcontslots.value_namespace = name_space;
        cdxifupchannelavgcontslots.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxIfUpChannelRangeSlots")
    {
        cdxifupchannelrangeslots = value;
        cdxifupchannelrangeslots.value_namespace = name_space;
        cdxifupchannelrangeslots.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxIfUpChannelNumActiveUGS")
    {
        cdxifupchannelnumactiveugs = value;
        cdxifupchannelnumactiveugs.value_namespace = name_space;
        cdxifupchannelnumactiveugs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxIfUpChannelMaxUGSLastOneHour")
    {
        cdxifupchannelmaxugslastonehour = value;
        cdxifupchannelmaxugslastonehour.value_namespace = name_space;
        cdxifupchannelmaxugslastonehour.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxIfUpChannelMinUGSLastOneHour")
    {
        cdxifupchannelminugslastonehour = value;
        cdxifupchannelminugslastonehour.value_namespace = name_space;
        cdxifupchannelminugslastonehour.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxIfUpChannelAvgUGSLastOneHour")
    {
        cdxifupchannelavgugslastonehour = value;
        cdxifupchannelavgugslastonehour.value_namespace = name_space;
        cdxifupchannelavgugslastonehour.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxIfUpChannelMaxUGSLastFiveMins")
    {
        cdxifupchannelmaxugslastfivemins = value;
        cdxifupchannelmaxugslastfivemins.value_namespace = name_space;
        cdxifupchannelmaxugslastfivemins.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxIfUpChannelMinUGSLastFiveMins")
    {
        cdxifupchannelminugslastfivemins = value;
        cdxifupchannelminugslastfivemins.value_namespace = name_space;
        cdxifupchannelminugslastfivemins.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxIfUpChannelAvgUGSLastFiveMins")
    {
        cdxifupchannelavgugslastfivemins = value;
        cdxifupchannelavgugslastfivemins.value_namespace = name_space;
        cdxifupchannelavgugslastfivemins.value_namespace_prefix = name_space_prefix;
    }
}

void CISCODOCSEXTMIB::CdxIfUpstreamChannelExtTable::CdxIfUpstreamChannelExtEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "cdxIfUpChannelWidth")
    {
        cdxifupchannelwidth.yfilter = yfilter;
    }
    if(value_path == "cdxIfUpChannelModulationProfile")
    {
        cdxifupchannelmodulationprofile.yfilter = yfilter;
    }
    if(value_path == "cdxIfUpChannelCmTotal")
    {
        cdxifupchannelcmtotal.yfilter = yfilter;
    }
    if(value_path == "cdxIfUpChannelCmActive")
    {
        cdxifupchannelcmactive.yfilter = yfilter;
    }
    if(value_path == "cdxIfUpChannelCmRegistered")
    {
        cdxifupchannelcmregistered.yfilter = yfilter;
    }
    if(value_path == "cdxIfUpChannelInputPowerLevel")
    {
        cdxifupchannelinputpowerlevel.yfilter = yfilter;
    }
    if(value_path == "cdxIfUpChannelAvgUtil")
    {
        cdxifupchannelavgutil.yfilter = yfilter;
    }
    if(value_path == "cdxIfUpChannelAvgContSlots")
    {
        cdxifupchannelavgcontslots.yfilter = yfilter;
    }
    if(value_path == "cdxIfUpChannelRangeSlots")
    {
        cdxifupchannelrangeslots.yfilter = yfilter;
    }
    if(value_path == "cdxIfUpChannelNumActiveUGS")
    {
        cdxifupchannelnumactiveugs.yfilter = yfilter;
    }
    if(value_path == "cdxIfUpChannelMaxUGSLastOneHour")
    {
        cdxifupchannelmaxugslastonehour.yfilter = yfilter;
    }
    if(value_path == "cdxIfUpChannelMinUGSLastOneHour")
    {
        cdxifupchannelminugslastonehour.yfilter = yfilter;
    }
    if(value_path == "cdxIfUpChannelAvgUGSLastOneHour")
    {
        cdxifupchannelavgugslastonehour.yfilter = yfilter;
    }
    if(value_path == "cdxIfUpChannelMaxUGSLastFiveMins")
    {
        cdxifupchannelmaxugslastfivemins.yfilter = yfilter;
    }
    if(value_path == "cdxIfUpChannelMinUGSLastFiveMins")
    {
        cdxifupchannelminugslastfivemins.yfilter = yfilter;
    }
    if(value_path == "cdxIfUpChannelAvgUGSLastFiveMins")
    {
        cdxifupchannelavgugslastfivemins.yfilter = yfilter;
    }
}

bool CISCODOCSEXTMIB::CdxIfUpstreamChannelExtTable::CdxIfUpstreamChannelExtEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "cdxIfUpChannelWidth" || name == "cdxIfUpChannelModulationProfile" || name == "cdxIfUpChannelCmTotal" || name == "cdxIfUpChannelCmActive" || name == "cdxIfUpChannelCmRegistered" || name == "cdxIfUpChannelInputPowerLevel" || name == "cdxIfUpChannelAvgUtil" || name == "cdxIfUpChannelAvgContSlots" || name == "cdxIfUpChannelRangeSlots" || name == "cdxIfUpChannelNumActiveUGS" || name == "cdxIfUpChannelMaxUGSLastOneHour" || name == "cdxIfUpChannelMinUGSLastOneHour" || name == "cdxIfUpChannelAvgUGSLastOneHour" || name == "cdxIfUpChannelMaxUGSLastFiveMins" || name == "cdxIfUpChannelMinUGSLastFiveMins" || name == "cdxIfUpChannelAvgUGSLastFiveMins")
        return true;
    return false;
}

CISCODOCSEXTMIB::CdxWBResilCmTable::CdxWBResilCmTable()
    :
    cdxwbresilcmentry(this, {"cdxwbresilcmindex"})
{

    yang_name = "cdxWBResilCmTable"; yang_parent_name = "CISCO-DOCS-EXT-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCODOCSEXTMIB::CdxWBResilCmTable::~CdxWBResilCmTable()
{
}

bool CISCODOCSEXTMIB::CdxWBResilCmTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cdxwbresilcmentry.len(); index++)
    {
        if(cdxwbresilcmentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCODOCSEXTMIB::CdxWBResilCmTable::has_operation() const
{
    for (std::size_t index=0; index<cdxwbresilcmentry.len(); index++)
    {
        if(cdxwbresilcmentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCODOCSEXTMIB::CdxWBResilCmTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-DOCS-EXT-MIB:CISCO-DOCS-EXT-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCODOCSEXTMIB::CdxWBResilCmTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdxWBResilCmTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCODOCSEXTMIB::CdxWBResilCmTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCODOCSEXTMIB::CdxWBResilCmTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cdxWBResilCmEntry")
    {
        auto c = std::make_shared<CISCODOCSEXTMIB::CdxWBResilCmTable::CdxWBResilCmEntry>();
        c->parent = this;
        cdxwbresilcmentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCODOCSEXTMIB::CdxWBResilCmTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cdxwbresilcmentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCODOCSEXTMIB::CdxWBResilCmTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCODOCSEXTMIB::CdxWBResilCmTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCODOCSEXTMIB::CdxWBResilCmTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cdxWBResilCmEntry")
        return true;
    return false;
}

CISCODOCSEXTMIB::CdxWBResilCmTable::CdxWBResilCmEntry::CdxWBResilCmEntry()
    :
    cdxwbresilcmindex{YType::uint32, "cdxWBResilCmIndex"},
    cdxwbresilcmmacaddr{YType::str, "cdxWBResilCmMacAddr"},
    cdxwbresilcmtotaldsnum{YType::uint32, "cdxWBResilCmTotalDsNum"},
    cdxwbresilcmtotalusnum{YType::uint32, "cdxWBResilCmTotalUsNum"},
    cdxwbresilcmcurrentdsnum{YType::uint32, "cdxWBResilCmCurrentDsNum"},
    cdxwbresilcmcurrentusnum{YType::uint32, "cdxWBResilCmCurrentUsNum"},
    cdxwbresilcmimpaireddschindex{YType::str, "cdxWBResilCmImpairedDsChIndex"},
    cdxwbresilcmimpaireduschindex{YType::str, "cdxWBResilCmImpairedUsChIndex"}
{

    yang_name = "cdxWBResilCmEntry"; yang_parent_name = "cdxWBResilCmTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCODOCSEXTMIB::CdxWBResilCmTable::CdxWBResilCmEntry::~CdxWBResilCmEntry()
{
}

bool CISCODOCSEXTMIB::CdxWBResilCmTable::CdxWBResilCmEntry::has_data() const
{
    if (is_presence_container) return true;
    return cdxwbresilcmindex.is_set
	|| cdxwbresilcmmacaddr.is_set
	|| cdxwbresilcmtotaldsnum.is_set
	|| cdxwbresilcmtotalusnum.is_set
	|| cdxwbresilcmcurrentdsnum.is_set
	|| cdxwbresilcmcurrentusnum.is_set
	|| cdxwbresilcmimpaireddschindex.is_set
	|| cdxwbresilcmimpaireduschindex.is_set;
}

bool CISCODOCSEXTMIB::CdxWBResilCmTable::CdxWBResilCmEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cdxwbresilcmindex.yfilter)
	|| ydk::is_set(cdxwbresilcmmacaddr.yfilter)
	|| ydk::is_set(cdxwbresilcmtotaldsnum.yfilter)
	|| ydk::is_set(cdxwbresilcmtotalusnum.yfilter)
	|| ydk::is_set(cdxwbresilcmcurrentdsnum.yfilter)
	|| ydk::is_set(cdxwbresilcmcurrentusnum.yfilter)
	|| ydk::is_set(cdxwbresilcmimpaireddschindex.yfilter)
	|| ydk::is_set(cdxwbresilcmimpaireduschindex.yfilter);
}

std::string CISCODOCSEXTMIB::CdxWBResilCmTable::CdxWBResilCmEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-DOCS-EXT-MIB:CISCO-DOCS-EXT-MIB/cdxWBResilCmTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCODOCSEXTMIB::CdxWBResilCmTable::CdxWBResilCmEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdxWBResilCmEntry";
    ADD_KEY_TOKEN(cdxwbresilcmindex, "cdxWBResilCmIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCODOCSEXTMIB::CdxWBResilCmTable::CdxWBResilCmEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cdxwbresilcmindex.is_set || is_set(cdxwbresilcmindex.yfilter)) leaf_name_data.push_back(cdxwbresilcmindex.get_name_leafdata());
    if (cdxwbresilcmmacaddr.is_set || is_set(cdxwbresilcmmacaddr.yfilter)) leaf_name_data.push_back(cdxwbresilcmmacaddr.get_name_leafdata());
    if (cdxwbresilcmtotaldsnum.is_set || is_set(cdxwbresilcmtotaldsnum.yfilter)) leaf_name_data.push_back(cdxwbresilcmtotaldsnum.get_name_leafdata());
    if (cdxwbresilcmtotalusnum.is_set || is_set(cdxwbresilcmtotalusnum.yfilter)) leaf_name_data.push_back(cdxwbresilcmtotalusnum.get_name_leafdata());
    if (cdxwbresilcmcurrentdsnum.is_set || is_set(cdxwbresilcmcurrentdsnum.yfilter)) leaf_name_data.push_back(cdxwbresilcmcurrentdsnum.get_name_leafdata());
    if (cdxwbresilcmcurrentusnum.is_set || is_set(cdxwbresilcmcurrentusnum.yfilter)) leaf_name_data.push_back(cdxwbresilcmcurrentusnum.get_name_leafdata());
    if (cdxwbresilcmimpaireddschindex.is_set || is_set(cdxwbresilcmimpaireddschindex.yfilter)) leaf_name_data.push_back(cdxwbresilcmimpaireddschindex.get_name_leafdata());
    if (cdxwbresilcmimpaireduschindex.is_set || is_set(cdxwbresilcmimpaireduschindex.yfilter)) leaf_name_data.push_back(cdxwbresilcmimpaireduschindex.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCODOCSEXTMIB::CdxWBResilCmTable::CdxWBResilCmEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCODOCSEXTMIB::CdxWBResilCmTable::CdxWBResilCmEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCODOCSEXTMIB::CdxWBResilCmTable::CdxWBResilCmEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cdxWBResilCmIndex")
    {
        cdxwbresilcmindex = value;
        cdxwbresilcmindex.value_namespace = name_space;
        cdxwbresilcmindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxWBResilCmMacAddr")
    {
        cdxwbresilcmmacaddr = value;
        cdxwbresilcmmacaddr.value_namespace = name_space;
        cdxwbresilcmmacaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxWBResilCmTotalDsNum")
    {
        cdxwbresilcmtotaldsnum = value;
        cdxwbresilcmtotaldsnum.value_namespace = name_space;
        cdxwbresilcmtotaldsnum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxWBResilCmTotalUsNum")
    {
        cdxwbresilcmtotalusnum = value;
        cdxwbresilcmtotalusnum.value_namespace = name_space;
        cdxwbresilcmtotalusnum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxWBResilCmCurrentDsNum")
    {
        cdxwbresilcmcurrentdsnum = value;
        cdxwbresilcmcurrentdsnum.value_namespace = name_space;
        cdxwbresilcmcurrentdsnum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxWBResilCmCurrentUsNum")
    {
        cdxwbresilcmcurrentusnum = value;
        cdxwbresilcmcurrentusnum.value_namespace = name_space;
        cdxwbresilcmcurrentusnum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxWBResilCmImpairedDsChIndex")
    {
        cdxwbresilcmimpaireddschindex = value;
        cdxwbresilcmimpaireddschindex.value_namespace = name_space;
        cdxwbresilcmimpaireddschindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxWBResilCmImpairedUsChIndex")
    {
        cdxwbresilcmimpaireduschindex = value;
        cdxwbresilcmimpaireduschindex.value_namespace = name_space;
        cdxwbresilcmimpaireduschindex.value_namespace_prefix = name_space_prefix;
    }
}

void CISCODOCSEXTMIB::CdxWBResilCmTable::CdxWBResilCmEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cdxWBResilCmIndex")
    {
        cdxwbresilcmindex.yfilter = yfilter;
    }
    if(value_path == "cdxWBResilCmMacAddr")
    {
        cdxwbresilcmmacaddr.yfilter = yfilter;
    }
    if(value_path == "cdxWBResilCmTotalDsNum")
    {
        cdxwbresilcmtotaldsnum.yfilter = yfilter;
    }
    if(value_path == "cdxWBResilCmTotalUsNum")
    {
        cdxwbresilcmtotalusnum.yfilter = yfilter;
    }
    if(value_path == "cdxWBResilCmCurrentDsNum")
    {
        cdxwbresilcmcurrentdsnum.yfilter = yfilter;
    }
    if(value_path == "cdxWBResilCmCurrentUsNum")
    {
        cdxwbresilcmcurrentusnum.yfilter = yfilter;
    }
    if(value_path == "cdxWBResilCmImpairedDsChIndex")
    {
        cdxwbresilcmimpaireddschindex.yfilter = yfilter;
    }
    if(value_path == "cdxWBResilCmImpairedUsChIndex")
    {
        cdxwbresilcmimpaireduschindex.yfilter = yfilter;
    }
}

bool CISCODOCSEXTMIB::CdxWBResilCmTable::CdxWBResilCmEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cdxWBResilCmIndex" || name == "cdxWBResilCmMacAddr" || name == "cdxWBResilCmTotalDsNum" || name == "cdxWBResilCmTotalUsNum" || name == "cdxWBResilCmCurrentDsNum" || name == "cdxWBResilCmCurrentUsNum" || name == "cdxWBResilCmImpairedDsChIndex" || name == "cdxWBResilCmImpairedUsChIndex")
        return true;
    return false;
}

CISCODOCSEXTMIB::CdxRFtoPrimaryChannelMappingTable::CdxRFtoPrimaryChannelMappingTable()
    :
    cdxrftoprimarychannelmappingentry(this, {"ifindex"})
{

    yang_name = "cdxRFtoPrimaryChannelMappingTable"; yang_parent_name = "CISCO-DOCS-EXT-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCODOCSEXTMIB::CdxRFtoPrimaryChannelMappingTable::~CdxRFtoPrimaryChannelMappingTable()
{
}

bool CISCODOCSEXTMIB::CdxRFtoPrimaryChannelMappingTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cdxrftoprimarychannelmappingentry.len(); index++)
    {
        if(cdxrftoprimarychannelmappingentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCODOCSEXTMIB::CdxRFtoPrimaryChannelMappingTable::has_operation() const
{
    for (std::size_t index=0; index<cdxrftoprimarychannelmappingentry.len(); index++)
    {
        if(cdxrftoprimarychannelmappingentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCODOCSEXTMIB::CdxRFtoPrimaryChannelMappingTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-DOCS-EXT-MIB:CISCO-DOCS-EXT-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCODOCSEXTMIB::CdxRFtoPrimaryChannelMappingTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdxRFtoPrimaryChannelMappingTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCODOCSEXTMIB::CdxRFtoPrimaryChannelMappingTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCODOCSEXTMIB::CdxRFtoPrimaryChannelMappingTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cdxRFtoPrimaryChannelMappingEntry")
    {
        auto c = std::make_shared<CISCODOCSEXTMIB::CdxRFtoPrimaryChannelMappingTable::CdxRFtoPrimaryChannelMappingEntry>();
        c->parent = this;
        cdxrftoprimarychannelmappingentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCODOCSEXTMIB::CdxRFtoPrimaryChannelMappingTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cdxrftoprimarychannelmappingentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCODOCSEXTMIB::CdxRFtoPrimaryChannelMappingTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCODOCSEXTMIB::CdxRFtoPrimaryChannelMappingTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCODOCSEXTMIB::CdxRFtoPrimaryChannelMappingTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cdxRFtoPrimaryChannelMappingEntry")
        return true;
    return false;
}

CISCODOCSEXTMIB::CdxRFtoPrimaryChannelMappingTable::CdxRFtoPrimaryChannelMappingEntry::CdxRFtoPrimaryChannelMappingEntry()
    :
    ifindex{YType::str, "ifIndex"},
    cdxprimarychannelifindex{YType::int32, "cdxPrimaryChannelIfIndex"}
{

    yang_name = "cdxRFtoPrimaryChannelMappingEntry"; yang_parent_name = "cdxRFtoPrimaryChannelMappingTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCODOCSEXTMIB::CdxRFtoPrimaryChannelMappingTable::CdxRFtoPrimaryChannelMappingEntry::~CdxRFtoPrimaryChannelMappingEntry()
{
}

bool CISCODOCSEXTMIB::CdxRFtoPrimaryChannelMappingTable::CdxRFtoPrimaryChannelMappingEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| cdxprimarychannelifindex.is_set;
}

bool CISCODOCSEXTMIB::CdxRFtoPrimaryChannelMappingTable::CdxRFtoPrimaryChannelMappingEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(cdxprimarychannelifindex.yfilter);
}

std::string CISCODOCSEXTMIB::CdxRFtoPrimaryChannelMappingTable::CdxRFtoPrimaryChannelMappingEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-DOCS-EXT-MIB:CISCO-DOCS-EXT-MIB/cdxRFtoPrimaryChannelMappingTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCODOCSEXTMIB::CdxRFtoPrimaryChannelMappingTable::CdxRFtoPrimaryChannelMappingEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdxRFtoPrimaryChannelMappingEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCODOCSEXTMIB::CdxRFtoPrimaryChannelMappingTable::CdxRFtoPrimaryChannelMappingEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (cdxprimarychannelifindex.is_set || is_set(cdxprimarychannelifindex.yfilter)) leaf_name_data.push_back(cdxprimarychannelifindex.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCODOCSEXTMIB::CdxRFtoPrimaryChannelMappingTable::CdxRFtoPrimaryChannelMappingEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCODOCSEXTMIB::CdxRFtoPrimaryChannelMappingTable::CdxRFtoPrimaryChannelMappingEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCODOCSEXTMIB::CdxRFtoPrimaryChannelMappingTable::CdxRFtoPrimaryChannelMappingEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxPrimaryChannelIfIndex")
    {
        cdxprimarychannelifindex = value;
        cdxprimarychannelifindex.value_namespace = name_space;
        cdxprimarychannelifindex.value_namespace_prefix = name_space_prefix;
    }
}

void CISCODOCSEXTMIB::CdxRFtoPrimaryChannelMappingTable::CdxRFtoPrimaryChannelMappingEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "cdxPrimaryChannelIfIndex")
    {
        cdxprimarychannelifindex.yfilter = yfilter;
    }
}

bool CISCODOCSEXTMIB::CdxRFtoPrimaryChannelMappingTable::CdxRFtoPrimaryChannelMappingEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "cdxPrimaryChannelIfIndex")
        return true;
    return false;
}

CISCODOCSEXTMIB::CdxPrimaryChanneltoRFMappingTable::CdxPrimaryChanneltoRFMappingTable()
    :
    cdxprimarychanneltorfmappingentry(this, {"ifindex"})
{

    yang_name = "cdxPrimaryChanneltoRFMappingTable"; yang_parent_name = "CISCO-DOCS-EXT-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCODOCSEXTMIB::CdxPrimaryChanneltoRFMappingTable::~CdxPrimaryChanneltoRFMappingTable()
{
}

bool CISCODOCSEXTMIB::CdxPrimaryChanneltoRFMappingTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cdxprimarychanneltorfmappingentry.len(); index++)
    {
        if(cdxprimarychanneltorfmappingentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCODOCSEXTMIB::CdxPrimaryChanneltoRFMappingTable::has_operation() const
{
    for (std::size_t index=0; index<cdxprimarychanneltorfmappingentry.len(); index++)
    {
        if(cdxprimarychanneltorfmappingentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCODOCSEXTMIB::CdxPrimaryChanneltoRFMappingTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-DOCS-EXT-MIB:CISCO-DOCS-EXT-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCODOCSEXTMIB::CdxPrimaryChanneltoRFMappingTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdxPrimaryChanneltoRFMappingTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCODOCSEXTMIB::CdxPrimaryChanneltoRFMappingTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCODOCSEXTMIB::CdxPrimaryChanneltoRFMappingTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cdxPrimaryChanneltoRFMappingEntry")
    {
        auto c = std::make_shared<CISCODOCSEXTMIB::CdxPrimaryChanneltoRFMappingTable::CdxPrimaryChanneltoRFMappingEntry>();
        c->parent = this;
        cdxprimarychanneltorfmappingentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCODOCSEXTMIB::CdxPrimaryChanneltoRFMappingTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cdxprimarychanneltorfmappingentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCODOCSEXTMIB::CdxPrimaryChanneltoRFMappingTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCODOCSEXTMIB::CdxPrimaryChanneltoRFMappingTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCODOCSEXTMIB::CdxPrimaryChanneltoRFMappingTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cdxPrimaryChanneltoRFMappingEntry")
        return true;
    return false;
}

CISCODOCSEXTMIB::CdxPrimaryChanneltoRFMappingTable::CdxPrimaryChanneltoRFMappingEntry::CdxPrimaryChanneltoRFMappingEntry()
    :
    ifindex{YType::str, "ifIndex"},
    cdxphysicalrfifindex{YType::int32, "cdxPhysicalRFIfIndex"}
{

    yang_name = "cdxPrimaryChanneltoRFMappingEntry"; yang_parent_name = "cdxPrimaryChanneltoRFMappingTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCODOCSEXTMIB::CdxPrimaryChanneltoRFMappingTable::CdxPrimaryChanneltoRFMappingEntry::~CdxPrimaryChanneltoRFMappingEntry()
{
}

bool CISCODOCSEXTMIB::CdxPrimaryChanneltoRFMappingTable::CdxPrimaryChanneltoRFMappingEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| cdxphysicalrfifindex.is_set;
}

bool CISCODOCSEXTMIB::CdxPrimaryChanneltoRFMappingTable::CdxPrimaryChanneltoRFMappingEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(cdxphysicalrfifindex.yfilter);
}

std::string CISCODOCSEXTMIB::CdxPrimaryChanneltoRFMappingTable::CdxPrimaryChanneltoRFMappingEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-DOCS-EXT-MIB:CISCO-DOCS-EXT-MIB/cdxPrimaryChanneltoRFMappingTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCODOCSEXTMIB::CdxPrimaryChanneltoRFMappingTable::CdxPrimaryChanneltoRFMappingEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdxPrimaryChanneltoRFMappingEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCODOCSEXTMIB::CdxPrimaryChanneltoRFMappingTable::CdxPrimaryChanneltoRFMappingEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (cdxphysicalrfifindex.is_set || is_set(cdxphysicalrfifindex.yfilter)) leaf_name_data.push_back(cdxphysicalrfifindex.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCODOCSEXTMIB::CdxPrimaryChanneltoRFMappingTable::CdxPrimaryChanneltoRFMappingEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCODOCSEXTMIB::CdxPrimaryChanneltoRFMappingTable::CdxPrimaryChanneltoRFMappingEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCODOCSEXTMIB::CdxPrimaryChanneltoRFMappingTable::CdxPrimaryChanneltoRFMappingEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxPhysicalRFIfIndex")
    {
        cdxphysicalrfifindex = value;
        cdxphysicalrfifindex.value_namespace = name_space;
        cdxphysicalrfifindex.value_namespace_prefix = name_space_prefix;
    }
}

void CISCODOCSEXTMIB::CdxPrimaryChanneltoRFMappingTable::CdxPrimaryChanneltoRFMappingEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "cdxPhysicalRFIfIndex")
    {
        cdxphysicalrfifindex.yfilter = yfilter;
    }
}

bool CISCODOCSEXTMIB::CdxPrimaryChanneltoRFMappingTable::CdxPrimaryChanneltoRFMappingEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "cdxPhysicalRFIfIndex")
        return true;
    return false;
}

CISCODOCSEXTMIB::CdxCmtsMtcCmTable::CdxCmtsMtcCmTable()
    :
    cdxcmtsmtccmentry(this, {"ifindex", "cdxcmtsmtctcsid"})
{

    yang_name = "cdxCmtsMtcCmTable"; yang_parent_name = "CISCO-DOCS-EXT-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCODOCSEXTMIB::CdxCmtsMtcCmTable::~CdxCmtsMtcCmTable()
{
}

bool CISCODOCSEXTMIB::CdxCmtsMtcCmTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cdxcmtsmtccmentry.len(); index++)
    {
        if(cdxcmtsmtccmentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCODOCSEXTMIB::CdxCmtsMtcCmTable::has_operation() const
{
    for (std::size_t index=0; index<cdxcmtsmtccmentry.len(); index++)
    {
        if(cdxcmtsmtccmentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCODOCSEXTMIB::CdxCmtsMtcCmTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-DOCS-EXT-MIB:CISCO-DOCS-EXT-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCODOCSEXTMIB::CdxCmtsMtcCmTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdxCmtsMtcCmTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCODOCSEXTMIB::CdxCmtsMtcCmTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCODOCSEXTMIB::CdxCmtsMtcCmTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cdxCmtsMtcCmEntry")
    {
        auto c = std::make_shared<CISCODOCSEXTMIB::CdxCmtsMtcCmTable::CdxCmtsMtcCmEntry>();
        c->parent = this;
        cdxcmtsmtccmentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCODOCSEXTMIB::CdxCmtsMtcCmTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cdxcmtsmtccmentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCODOCSEXTMIB::CdxCmtsMtcCmTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCODOCSEXTMIB::CdxCmtsMtcCmTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCODOCSEXTMIB::CdxCmtsMtcCmTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cdxCmtsMtcCmEntry")
        return true;
    return false;
}

CISCODOCSEXTMIB::CdxCmtsMtcCmTable::CdxCmtsMtcCmEntry::CdxCmtsMtcCmEntry()
    :
    ifindex{YType::str, "ifIndex"},
    cdxcmtsmtctcsid{YType::uint32, "cdxCmtsMtcTcsId"},
    cdxcmtsmtccmtotal{YType::uint32, "cdxCmtsMtcCmTotal"},
    cdxcmtsmtccmoperational{YType::uint32, "cdxCMtsMtcCmOperational"},
    cdxcmtsmtccmregistered{YType::uint32, "cdxCmtsMtcCmRegistered"},
    cdxcmtsmtccmunregistered{YType::uint32, "cdxCmtsMtcCmUnregistered"},
    cdxcmtsmtccmoffline{YType::uint32, "cdxCmtsMtcCmOffline"},
    cdxcmtsmtccmwideband{YType::uint32, "cdxCmtsMtcCmWideband"},
    cdxcmtsmtcupstreambondgrp{YType::str, "cdxCmtsMtcUpstreamBondGrp"}
{

    yang_name = "cdxCmtsMtcCmEntry"; yang_parent_name = "cdxCmtsMtcCmTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCODOCSEXTMIB::CdxCmtsMtcCmTable::CdxCmtsMtcCmEntry::~CdxCmtsMtcCmEntry()
{
}

bool CISCODOCSEXTMIB::CdxCmtsMtcCmTable::CdxCmtsMtcCmEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| cdxcmtsmtctcsid.is_set
	|| cdxcmtsmtccmtotal.is_set
	|| cdxcmtsmtccmoperational.is_set
	|| cdxcmtsmtccmregistered.is_set
	|| cdxcmtsmtccmunregistered.is_set
	|| cdxcmtsmtccmoffline.is_set
	|| cdxcmtsmtccmwideband.is_set
	|| cdxcmtsmtcupstreambondgrp.is_set;
}

bool CISCODOCSEXTMIB::CdxCmtsMtcCmTable::CdxCmtsMtcCmEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(cdxcmtsmtctcsid.yfilter)
	|| ydk::is_set(cdxcmtsmtccmtotal.yfilter)
	|| ydk::is_set(cdxcmtsmtccmoperational.yfilter)
	|| ydk::is_set(cdxcmtsmtccmregistered.yfilter)
	|| ydk::is_set(cdxcmtsmtccmunregistered.yfilter)
	|| ydk::is_set(cdxcmtsmtccmoffline.yfilter)
	|| ydk::is_set(cdxcmtsmtccmwideband.yfilter)
	|| ydk::is_set(cdxcmtsmtcupstreambondgrp.yfilter);
}

std::string CISCODOCSEXTMIB::CdxCmtsMtcCmTable::CdxCmtsMtcCmEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-DOCS-EXT-MIB:CISCO-DOCS-EXT-MIB/cdxCmtsMtcCmTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCODOCSEXTMIB::CdxCmtsMtcCmTable::CdxCmtsMtcCmEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdxCmtsMtcCmEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    ADD_KEY_TOKEN(cdxcmtsmtctcsid, "cdxCmtsMtcTcsId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCODOCSEXTMIB::CdxCmtsMtcCmTable::CdxCmtsMtcCmEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (cdxcmtsmtctcsid.is_set || is_set(cdxcmtsmtctcsid.yfilter)) leaf_name_data.push_back(cdxcmtsmtctcsid.get_name_leafdata());
    if (cdxcmtsmtccmtotal.is_set || is_set(cdxcmtsmtccmtotal.yfilter)) leaf_name_data.push_back(cdxcmtsmtccmtotal.get_name_leafdata());
    if (cdxcmtsmtccmoperational.is_set || is_set(cdxcmtsmtccmoperational.yfilter)) leaf_name_data.push_back(cdxcmtsmtccmoperational.get_name_leafdata());
    if (cdxcmtsmtccmregistered.is_set || is_set(cdxcmtsmtccmregistered.yfilter)) leaf_name_data.push_back(cdxcmtsmtccmregistered.get_name_leafdata());
    if (cdxcmtsmtccmunregistered.is_set || is_set(cdxcmtsmtccmunregistered.yfilter)) leaf_name_data.push_back(cdxcmtsmtccmunregistered.get_name_leafdata());
    if (cdxcmtsmtccmoffline.is_set || is_set(cdxcmtsmtccmoffline.yfilter)) leaf_name_data.push_back(cdxcmtsmtccmoffline.get_name_leafdata());
    if (cdxcmtsmtccmwideband.is_set || is_set(cdxcmtsmtccmwideband.yfilter)) leaf_name_data.push_back(cdxcmtsmtccmwideband.get_name_leafdata());
    if (cdxcmtsmtcupstreambondgrp.is_set || is_set(cdxcmtsmtcupstreambondgrp.yfilter)) leaf_name_data.push_back(cdxcmtsmtcupstreambondgrp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCODOCSEXTMIB::CdxCmtsMtcCmTable::CdxCmtsMtcCmEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCODOCSEXTMIB::CdxCmtsMtcCmTable::CdxCmtsMtcCmEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCODOCSEXTMIB::CdxCmtsMtcCmTable::CdxCmtsMtcCmEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxCmtsMtcTcsId")
    {
        cdxcmtsmtctcsid = value;
        cdxcmtsmtctcsid.value_namespace = name_space;
        cdxcmtsmtctcsid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxCmtsMtcCmTotal")
    {
        cdxcmtsmtccmtotal = value;
        cdxcmtsmtccmtotal.value_namespace = name_space;
        cdxcmtsmtccmtotal.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxCMtsMtcCmOperational")
    {
        cdxcmtsmtccmoperational = value;
        cdxcmtsmtccmoperational.value_namespace = name_space;
        cdxcmtsmtccmoperational.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxCmtsMtcCmRegistered")
    {
        cdxcmtsmtccmregistered = value;
        cdxcmtsmtccmregistered.value_namespace = name_space;
        cdxcmtsmtccmregistered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxCmtsMtcCmUnregistered")
    {
        cdxcmtsmtccmunregistered = value;
        cdxcmtsmtccmunregistered.value_namespace = name_space;
        cdxcmtsmtccmunregistered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxCmtsMtcCmOffline")
    {
        cdxcmtsmtccmoffline = value;
        cdxcmtsmtccmoffline.value_namespace = name_space;
        cdxcmtsmtccmoffline.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxCmtsMtcCmWideband")
    {
        cdxcmtsmtccmwideband = value;
        cdxcmtsmtccmwideband.value_namespace = name_space;
        cdxcmtsmtccmwideband.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxCmtsMtcUpstreamBondGrp")
    {
        cdxcmtsmtcupstreambondgrp = value;
        cdxcmtsmtcupstreambondgrp.value_namespace = name_space;
        cdxcmtsmtcupstreambondgrp.value_namespace_prefix = name_space_prefix;
    }
}

void CISCODOCSEXTMIB::CdxCmtsMtcCmTable::CdxCmtsMtcCmEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "cdxCmtsMtcTcsId")
    {
        cdxcmtsmtctcsid.yfilter = yfilter;
    }
    if(value_path == "cdxCmtsMtcCmTotal")
    {
        cdxcmtsmtccmtotal.yfilter = yfilter;
    }
    if(value_path == "cdxCMtsMtcCmOperational")
    {
        cdxcmtsmtccmoperational.yfilter = yfilter;
    }
    if(value_path == "cdxCmtsMtcCmRegistered")
    {
        cdxcmtsmtccmregistered.yfilter = yfilter;
    }
    if(value_path == "cdxCmtsMtcCmUnregistered")
    {
        cdxcmtsmtccmunregistered.yfilter = yfilter;
    }
    if(value_path == "cdxCmtsMtcCmOffline")
    {
        cdxcmtsmtccmoffline.yfilter = yfilter;
    }
    if(value_path == "cdxCmtsMtcCmWideband")
    {
        cdxcmtsmtccmwideband.yfilter = yfilter;
    }
    if(value_path == "cdxCmtsMtcUpstreamBondGrp")
    {
        cdxcmtsmtcupstreambondgrp.yfilter = yfilter;
    }
}

bool CISCODOCSEXTMIB::CdxCmtsMtcCmTable::CdxCmtsMtcCmEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "cdxCmtsMtcTcsId" || name == "cdxCmtsMtcCmTotal" || name == "cdxCMtsMtcCmOperational" || name == "cdxCmtsMtcCmRegistered" || name == "cdxCmtsMtcCmUnregistered" || name == "cdxCmtsMtcCmOffline" || name == "cdxCmtsMtcCmWideband" || name == "cdxCmtsMtcUpstreamBondGrp")
        return true;
    return false;
}

CISCODOCSEXTMIB::CdxCmtsUscbSflowTable::CdxCmtsUscbSflowTable()
    :
    cdxcmtsuscbsflowentry(this, {"ifindex", "cdxcmtsusbondinggrpid"})
{

    yang_name = "cdxCmtsUscbSflowTable"; yang_parent_name = "CISCO-DOCS-EXT-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCODOCSEXTMIB::CdxCmtsUscbSflowTable::~CdxCmtsUscbSflowTable()
{
}

bool CISCODOCSEXTMIB::CdxCmtsUscbSflowTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cdxcmtsuscbsflowentry.len(); index++)
    {
        if(cdxcmtsuscbsflowentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCODOCSEXTMIB::CdxCmtsUscbSflowTable::has_operation() const
{
    for (std::size_t index=0; index<cdxcmtsuscbsflowentry.len(); index++)
    {
        if(cdxcmtsuscbsflowentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCODOCSEXTMIB::CdxCmtsUscbSflowTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-DOCS-EXT-MIB:CISCO-DOCS-EXT-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCODOCSEXTMIB::CdxCmtsUscbSflowTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdxCmtsUscbSflowTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCODOCSEXTMIB::CdxCmtsUscbSflowTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCODOCSEXTMIB::CdxCmtsUscbSflowTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cdxCmtsUscbSflowEntry")
    {
        auto c = std::make_shared<CISCODOCSEXTMIB::CdxCmtsUscbSflowTable::CdxCmtsUscbSflowEntry>();
        c->parent = this;
        cdxcmtsuscbsflowentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCODOCSEXTMIB::CdxCmtsUscbSflowTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cdxcmtsuscbsflowentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCODOCSEXTMIB::CdxCmtsUscbSflowTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCODOCSEXTMIB::CdxCmtsUscbSflowTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCODOCSEXTMIB::CdxCmtsUscbSflowTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cdxCmtsUscbSflowEntry")
        return true;
    return false;
}

CISCODOCSEXTMIB::CdxCmtsUscbSflowTable::CdxCmtsUscbSflowEntry::CdxCmtsUscbSflowEntry()
    :
    ifindex{YType::str, "ifIndex"},
    cdxcmtsusbondinggrpid{YType::uint32, "cdxCmtsUsBondingGrpId"},
    cdxcmtsuscbsftotal{YType::uint32, "cdxCmtsUscbSfTotal"},
    cdxcmtsuscbsfpri{YType::uint32, "cdxCmtsUscbSfPri"},
    cdxcmtsuscbstaticsfbe{YType::uint32, "cdxCmtsUscbStaticSfBe"},
    cdxcmtsuscbstaticsfugs{YType::uint32, "cdxCmtsUscbStaticSfUgs"},
    cdxcmtsuscbstaticsfugsad{YType::uint32, "cdxCmtsUscbStaticSfUgsad"},
    cdxcmtsuscbstaticsfrtps{YType::uint32, "cdxCmtsUscbStaticSfRtps"},
    cdxcmtsuscbstaticsfnrtps{YType::uint32, "cdxCmtsUscbStaticSfNrtps"},
    cdxcmtsuscbdynsfbe{YType::uint32, "cdxCmtsUscbDynSfBe"},
    cdxcmtsuscbdynsfugs{YType::uint32, "cdxCmtsUscbDynSfUgs"},
    cdxcmtsuscbdynsfugsad{YType::uint32, "cdxCmtsUscbDynSfUgsad"},
    cdxcmtsuscbdynsfrtps{YType::uint32, "cdxCmtsUscbDynSfRtps"},
    cdxcmtsuscbdynsfnrtps{YType::uint32, "cdxCmtsUscbDynSfNrtps"},
    cdxcmtsuscbdescr{YType::str, "cdxCmtsUscbDescr"}
{

    yang_name = "cdxCmtsUscbSflowEntry"; yang_parent_name = "cdxCmtsUscbSflowTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCODOCSEXTMIB::CdxCmtsUscbSflowTable::CdxCmtsUscbSflowEntry::~CdxCmtsUscbSflowEntry()
{
}

bool CISCODOCSEXTMIB::CdxCmtsUscbSflowTable::CdxCmtsUscbSflowEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| cdxcmtsusbondinggrpid.is_set
	|| cdxcmtsuscbsftotal.is_set
	|| cdxcmtsuscbsfpri.is_set
	|| cdxcmtsuscbstaticsfbe.is_set
	|| cdxcmtsuscbstaticsfugs.is_set
	|| cdxcmtsuscbstaticsfugsad.is_set
	|| cdxcmtsuscbstaticsfrtps.is_set
	|| cdxcmtsuscbstaticsfnrtps.is_set
	|| cdxcmtsuscbdynsfbe.is_set
	|| cdxcmtsuscbdynsfugs.is_set
	|| cdxcmtsuscbdynsfugsad.is_set
	|| cdxcmtsuscbdynsfrtps.is_set
	|| cdxcmtsuscbdynsfnrtps.is_set
	|| cdxcmtsuscbdescr.is_set;
}

bool CISCODOCSEXTMIB::CdxCmtsUscbSflowTable::CdxCmtsUscbSflowEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(cdxcmtsusbondinggrpid.yfilter)
	|| ydk::is_set(cdxcmtsuscbsftotal.yfilter)
	|| ydk::is_set(cdxcmtsuscbsfpri.yfilter)
	|| ydk::is_set(cdxcmtsuscbstaticsfbe.yfilter)
	|| ydk::is_set(cdxcmtsuscbstaticsfugs.yfilter)
	|| ydk::is_set(cdxcmtsuscbstaticsfugsad.yfilter)
	|| ydk::is_set(cdxcmtsuscbstaticsfrtps.yfilter)
	|| ydk::is_set(cdxcmtsuscbstaticsfnrtps.yfilter)
	|| ydk::is_set(cdxcmtsuscbdynsfbe.yfilter)
	|| ydk::is_set(cdxcmtsuscbdynsfugs.yfilter)
	|| ydk::is_set(cdxcmtsuscbdynsfugsad.yfilter)
	|| ydk::is_set(cdxcmtsuscbdynsfrtps.yfilter)
	|| ydk::is_set(cdxcmtsuscbdynsfnrtps.yfilter)
	|| ydk::is_set(cdxcmtsuscbdescr.yfilter);
}

std::string CISCODOCSEXTMIB::CdxCmtsUscbSflowTable::CdxCmtsUscbSflowEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-DOCS-EXT-MIB:CISCO-DOCS-EXT-MIB/cdxCmtsUscbSflowTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCODOCSEXTMIB::CdxCmtsUscbSflowTable::CdxCmtsUscbSflowEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdxCmtsUscbSflowEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    ADD_KEY_TOKEN(cdxcmtsusbondinggrpid, "cdxCmtsUsBondingGrpId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCODOCSEXTMIB::CdxCmtsUscbSflowTable::CdxCmtsUscbSflowEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (cdxcmtsusbondinggrpid.is_set || is_set(cdxcmtsusbondinggrpid.yfilter)) leaf_name_data.push_back(cdxcmtsusbondinggrpid.get_name_leafdata());
    if (cdxcmtsuscbsftotal.is_set || is_set(cdxcmtsuscbsftotal.yfilter)) leaf_name_data.push_back(cdxcmtsuscbsftotal.get_name_leafdata());
    if (cdxcmtsuscbsfpri.is_set || is_set(cdxcmtsuscbsfpri.yfilter)) leaf_name_data.push_back(cdxcmtsuscbsfpri.get_name_leafdata());
    if (cdxcmtsuscbstaticsfbe.is_set || is_set(cdxcmtsuscbstaticsfbe.yfilter)) leaf_name_data.push_back(cdxcmtsuscbstaticsfbe.get_name_leafdata());
    if (cdxcmtsuscbstaticsfugs.is_set || is_set(cdxcmtsuscbstaticsfugs.yfilter)) leaf_name_data.push_back(cdxcmtsuscbstaticsfugs.get_name_leafdata());
    if (cdxcmtsuscbstaticsfugsad.is_set || is_set(cdxcmtsuscbstaticsfugsad.yfilter)) leaf_name_data.push_back(cdxcmtsuscbstaticsfugsad.get_name_leafdata());
    if (cdxcmtsuscbstaticsfrtps.is_set || is_set(cdxcmtsuscbstaticsfrtps.yfilter)) leaf_name_data.push_back(cdxcmtsuscbstaticsfrtps.get_name_leafdata());
    if (cdxcmtsuscbstaticsfnrtps.is_set || is_set(cdxcmtsuscbstaticsfnrtps.yfilter)) leaf_name_data.push_back(cdxcmtsuscbstaticsfnrtps.get_name_leafdata());
    if (cdxcmtsuscbdynsfbe.is_set || is_set(cdxcmtsuscbdynsfbe.yfilter)) leaf_name_data.push_back(cdxcmtsuscbdynsfbe.get_name_leafdata());
    if (cdxcmtsuscbdynsfugs.is_set || is_set(cdxcmtsuscbdynsfugs.yfilter)) leaf_name_data.push_back(cdxcmtsuscbdynsfugs.get_name_leafdata());
    if (cdxcmtsuscbdynsfugsad.is_set || is_set(cdxcmtsuscbdynsfugsad.yfilter)) leaf_name_data.push_back(cdxcmtsuscbdynsfugsad.get_name_leafdata());
    if (cdxcmtsuscbdynsfrtps.is_set || is_set(cdxcmtsuscbdynsfrtps.yfilter)) leaf_name_data.push_back(cdxcmtsuscbdynsfrtps.get_name_leafdata());
    if (cdxcmtsuscbdynsfnrtps.is_set || is_set(cdxcmtsuscbdynsfnrtps.yfilter)) leaf_name_data.push_back(cdxcmtsuscbdynsfnrtps.get_name_leafdata());
    if (cdxcmtsuscbdescr.is_set || is_set(cdxcmtsuscbdescr.yfilter)) leaf_name_data.push_back(cdxcmtsuscbdescr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCODOCSEXTMIB::CdxCmtsUscbSflowTable::CdxCmtsUscbSflowEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCODOCSEXTMIB::CdxCmtsUscbSflowTable::CdxCmtsUscbSflowEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCODOCSEXTMIB::CdxCmtsUscbSflowTable::CdxCmtsUscbSflowEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxCmtsUsBondingGrpId")
    {
        cdxcmtsusbondinggrpid = value;
        cdxcmtsusbondinggrpid.value_namespace = name_space;
        cdxcmtsusbondinggrpid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxCmtsUscbSfTotal")
    {
        cdxcmtsuscbsftotal = value;
        cdxcmtsuscbsftotal.value_namespace = name_space;
        cdxcmtsuscbsftotal.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxCmtsUscbSfPri")
    {
        cdxcmtsuscbsfpri = value;
        cdxcmtsuscbsfpri.value_namespace = name_space;
        cdxcmtsuscbsfpri.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxCmtsUscbStaticSfBe")
    {
        cdxcmtsuscbstaticsfbe = value;
        cdxcmtsuscbstaticsfbe.value_namespace = name_space;
        cdxcmtsuscbstaticsfbe.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxCmtsUscbStaticSfUgs")
    {
        cdxcmtsuscbstaticsfugs = value;
        cdxcmtsuscbstaticsfugs.value_namespace = name_space;
        cdxcmtsuscbstaticsfugs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxCmtsUscbStaticSfUgsad")
    {
        cdxcmtsuscbstaticsfugsad = value;
        cdxcmtsuscbstaticsfugsad.value_namespace = name_space;
        cdxcmtsuscbstaticsfugsad.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxCmtsUscbStaticSfRtps")
    {
        cdxcmtsuscbstaticsfrtps = value;
        cdxcmtsuscbstaticsfrtps.value_namespace = name_space;
        cdxcmtsuscbstaticsfrtps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxCmtsUscbStaticSfNrtps")
    {
        cdxcmtsuscbstaticsfnrtps = value;
        cdxcmtsuscbstaticsfnrtps.value_namespace = name_space;
        cdxcmtsuscbstaticsfnrtps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxCmtsUscbDynSfBe")
    {
        cdxcmtsuscbdynsfbe = value;
        cdxcmtsuscbdynsfbe.value_namespace = name_space;
        cdxcmtsuscbdynsfbe.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxCmtsUscbDynSfUgs")
    {
        cdxcmtsuscbdynsfugs = value;
        cdxcmtsuscbdynsfugs.value_namespace = name_space;
        cdxcmtsuscbdynsfugs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxCmtsUscbDynSfUgsad")
    {
        cdxcmtsuscbdynsfugsad = value;
        cdxcmtsuscbdynsfugsad.value_namespace = name_space;
        cdxcmtsuscbdynsfugsad.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxCmtsUscbDynSfRtps")
    {
        cdxcmtsuscbdynsfrtps = value;
        cdxcmtsuscbdynsfrtps.value_namespace = name_space;
        cdxcmtsuscbdynsfrtps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxCmtsUscbDynSfNrtps")
    {
        cdxcmtsuscbdynsfnrtps = value;
        cdxcmtsuscbdynsfnrtps.value_namespace = name_space;
        cdxcmtsuscbdynsfnrtps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxCmtsUscbDescr")
    {
        cdxcmtsuscbdescr = value;
        cdxcmtsuscbdescr.value_namespace = name_space;
        cdxcmtsuscbdescr.value_namespace_prefix = name_space_prefix;
    }
}

void CISCODOCSEXTMIB::CdxCmtsUscbSflowTable::CdxCmtsUscbSflowEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "cdxCmtsUsBondingGrpId")
    {
        cdxcmtsusbondinggrpid.yfilter = yfilter;
    }
    if(value_path == "cdxCmtsUscbSfTotal")
    {
        cdxcmtsuscbsftotal.yfilter = yfilter;
    }
    if(value_path == "cdxCmtsUscbSfPri")
    {
        cdxcmtsuscbsfpri.yfilter = yfilter;
    }
    if(value_path == "cdxCmtsUscbStaticSfBe")
    {
        cdxcmtsuscbstaticsfbe.yfilter = yfilter;
    }
    if(value_path == "cdxCmtsUscbStaticSfUgs")
    {
        cdxcmtsuscbstaticsfugs.yfilter = yfilter;
    }
    if(value_path == "cdxCmtsUscbStaticSfUgsad")
    {
        cdxcmtsuscbstaticsfugsad.yfilter = yfilter;
    }
    if(value_path == "cdxCmtsUscbStaticSfRtps")
    {
        cdxcmtsuscbstaticsfrtps.yfilter = yfilter;
    }
    if(value_path == "cdxCmtsUscbStaticSfNrtps")
    {
        cdxcmtsuscbstaticsfnrtps.yfilter = yfilter;
    }
    if(value_path == "cdxCmtsUscbDynSfBe")
    {
        cdxcmtsuscbdynsfbe.yfilter = yfilter;
    }
    if(value_path == "cdxCmtsUscbDynSfUgs")
    {
        cdxcmtsuscbdynsfugs.yfilter = yfilter;
    }
    if(value_path == "cdxCmtsUscbDynSfUgsad")
    {
        cdxcmtsuscbdynsfugsad.yfilter = yfilter;
    }
    if(value_path == "cdxCmtsUscbDynSfRtps")
    {
        cdxcmtsuscbdynsfrtps.yfilter = yfilter;
    }
    if(value_path == "cdxCmtsUscbDynSfNrtps")
    {
        cdxcmtsuscbdynsfnrtps.yfilter = yfilter;
    }
    if(value_path == "cdxCmtsUscbDescr")
    {
        cdxcmtsuscbdescr.yfilter = yfilter;
    }
}

bool CISCODOCSEXTMIB::CdxCmtsUscbSflowTable::CdxCmtsUscbSflowEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "cdxCmtsUsBondingGrpId" || name == "cdxCmtsUscbSfTotal" || name == "cdxCmtsUscbSfPri" || name == "cdxCmtsUscbStaticSfBe" || name == "cdxCmtsUscbStaticSfUgs" || name == "cdxCmtsUscbStaticSfUgsad" || name == "cdxCmtsUscbStaticSfRtps" || name == "cdxCmtsUscbStaticSfNrtps" || name == "cdxCmtsUscbDynSfBe" || name == "cdxCmtsUscbDynSfUgs" || name == "cdxCmtsUscbDynSfUgsad" || name == "cdxCmtsUscbDynSfRtps" || name == "cdxCmtsUscbDynSfNrtps" || name == "cdxCmtsUscbDescr")
        return true;
    return false;
}

CISCODOCSEXTMIB::CdxRPDGS7KTable::CdxRPDGS7KTable()
    :
    cdxrpdgs7kentry(this, {"cdxrpdgs7kmacaddress"})
{

    yang_name = "cdxRPDGS7KTable"; yang_parent_name = "CISCO-DOCS-EXT-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCODOCSEXTMIB::CdxRPDGS7KTable::~CdxRPDGS7KTable()
{
}

bool CISCODOCSEXTMIB::CdxRPDGS7KTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cdxrpdgs7kentry.len(); index++)
    {
        if(cdxrpdgs7kentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCODOCSEXTMIB::CdxRPDGS7KTable::has_operation() const
{
    for (std::size_t index=0; index<cdxrpdgs7kentry.len(); index++)
    {
        if(cdxrpdgs7kentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCODOCSEXTMIB::CdxRPDGS7KTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-DOCS-EXT-MIB:CISCO-DOCS-EXT-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCODOCSEXTMIB::CdxRPDGS7KTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdxRPDGS7KTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCODOCSEXTMIB::CdxRPDGS7KTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCODOCSEXTMIB::CdxRPDGS7KTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cdxRPDGS7KEntry")
    {
        auto c = std::make_shared<CISCODOCSEXTMIB::CdxRPDGS7KTable::CdxRPDGS7KEntry>();
        c->parent = this;
        cdxrpdgs7kentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCODOCSEXTMIB::CdxRPDGS7KTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cdxrpdgs7kentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCODOCSEXTMIB::CdxRPDGS7KTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCODOCSEXTMIB::CdxRPDGS7KTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCODOCSEXTMIB::CdxRPDGS7KTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cdxRPDGS7KEntry")
        return true;
    return false;
}

CISCODOCSEXTMIB::CdxRPDGS7KTable::CdxRPDGS7KEntry::CdxRPDGS7KEntry()
    :
    cdxrpdgs7kmacaddress{YType::str, "cdxRPDGS7KMacAddress"},
    cdxrpdgs7kps1p24v{YType::int32, "cdxRPDGS7KPS1p24v"},
    cdxrpdgs7kps1p8v{YType::int32, "cdxRPDGS7KPS1p8v"},
    cdxrpdgs7kps1p5v{YType::int32, "cdxRPDGS7KPS1p5v"},
    cdxrpdgs7kps1n6v{YType::int32, "cdxRPDGS7KPS1n6v"},
    cdxrpdgs7kps1ac{YType::int32, "cdxRPDGS7KPS1AC"},
    cdxrpdgs7kps2p24v{YType::int32, "cdxRPDGS7KPS2p24v"},
    cdxrpdgs7kps2p8v{YType::int32, "cdxRPDGS7KPS2p8v"},
    cdxrpdgs7kps2p5v{YType::int32, "cdxRPDGS7KPS2p5v"},
    cdxrpdgs7kps2n6v{YType::int32, "cdxRPDGS7KPS2n6v"},
    cdxrpdgs7kps2ac{YType::int32, "cdxRPDGS7KPS2AC"},
    cdxrpdgs7ktx1optpower{YType::int32, "cdxRPDGS7KTx1OptPower"},
    cdxrpdgs7krx1optpower{YType::int32, "cdxRPDGS7KRx1OptPower"},
    cdxrpdgs7ktriswitch{YType::enumeration, "cdxRPDGS7KTriSwitch"},
    cdxrpdgs7ktamp{YType::enumeration, "cdxRPDGS7KTamp"}
{

    yang_name = "cdxRPDGS7KEntry"; yang_parent_name = "cdxRPDGS7KTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCODOCSEXTMIB::CdxRPDGS7KTable::CdxRPDGS7KEntry::~CdxRPDGS7KEntry()
{
}

bool CISCODOCSEXTMIB::CdxRPDGS7KTable::CdxRPDGS7KEntry::has_data() const
{
    if (is_presence_container) return true;
    return cdxrpdgs7kmacaddress.is_set
	|| cdxrpdgs7kps1p24v.is_set
	|| cdxrpdgs7kps1p8v.is_set
	|| cdxrpdgs7kps1p5v.is_set
	|| cdxrpdgs7kps1n6v.is_set
	|| cdxrpdgs7kps1ac.is_set
	|| cdxrpdgs7kps2p24v.is_set
	|| cdxrpdgs7kps2p8v.is_set
	|| cdxrpdgs7kps2p5v.is_set
	|| cdxrpdgs7kps2n6v.is_set
	|| cdxrpdgs7kps2ac.is_set
	|| cdxrpdgs7ktx1optpower.is_set
	|| cdxrpdgs7krx1optpower.is_set
	|| cdxrpdgs7ktriswitch.is_set
	|| cdxrpdgs7ktamp.is_set;
}

bool CISCODOCSEXTMIB::CdxRPDGS7KTable::CdxRPDGS7KEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cdxrpdgs7kmacaddress.yfilter)
	|| ydk::is_set(cdxrpdgs7kps1p24v.yfilter)
	|| ydk::is_set(cdxrpdgs7kps1p8v.yfilter)
	|| ydk::is_set(cdxrpdgs7kps1p5v.yfilter)
	|| ydk::is_set(cdxrpdgs7kps1n6v.yfilter)
	|| ydk::is_set(cdxrpdgs7kps1ac.yfilter)
	|| ydk::is_set(cdxrpdgs7kps2p24v.yfilter)
	|| ydk::is_set(cdxrpdgs7kps2p8v.yfilter)
	|| ydk::is_set(cdxrpdgs7kps2p5v.yfilter)
	|| ydk::is_set(cdxrpdgs7kps2n6v.yfilter)
	|| ydk::is_set(cdxrpdgs7kps2ac.yfilter)
	|| ydk::is_set(cdxrpdgs7ktx1optpower.yfilter)
	|| ydk::is_set(cdxrpdgs7krx1optpower.yfilter)
	|| ydk::is_set(cdxrpdgs7ktriswitch.yfilter)
	|| ydk::is_set(cdxrpdgs7ktamp.yfilter);
}

std::string CISCODOCSEXTMIB::CdxRPDGS7KTable::CdxRPDGS7KEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-DOCS-EXT-MIB:CISCO-DOCS-EXT-MIB/cdxRPDGS7KTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCODOCSEXTMIB::CdxRPDGS7KTable::CdxRPDGS7KEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdxRPDGS7KEntry";
    ADD_KEY_TOKEN(cdxrpdgs7kmacaddress, "cdxRPDGS7KMacAddress");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCODOCSEXTMIB::CdxRPDGS7KTable::CdxRPDGS7KEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cdxrpdgs7kmacaddress.is_set || is_set(cdxrpdgs7kmacaddress.yfilter)) leaf_name_data.push_back(cdxrpdgs7kmacaddress.get_name_leafdata());
    if (cdxrpdgs7kps1p24v.is_set || is_set(cdxrpdgs7kps1p24v.yfilter)) leaf_name_data.push_back(cdxrpdgs7kps1p24v.get_name_leafdata());
    if (cdxrpdgs7kps1p8v.is_set || is_set(cdxrpdgs7kps1p8v.yfilter)) leaf_name_data.push_back(cdxrpdgs7kps1p8v.get_name_leafdata());
    if (cdxrpdgs7kps1p5v.is_set || is_set(cdxrpdgs7kps1p5v.yfilter)) leaf_name_data.push_back(cdxrpdgs7kps1p5v.get_name_leafdata());
    if (cdxrpdgs7kps1n6v.is_set || is_set(cdxrpdgs7kps1n6v.yfilter)) leaf_name_data.push_back(cdxrpdgs7kps1n6v.get_name_leafdata());
    if (cdxrpdgs7kps1ac.is_set || is_set(cdxrpdgs7kps1ac.yfilter)) leaf_name_data.push_back(cdxrpdgs7kps1ac.get_name_leafdata());
    if (cdxrpdgs7kps2p24v.is_set || is_set(cdxrpdgs7kps2p24v.yfilter)) leaf_name_data.push_back(cdxrpdgs7kps2p24v.get_name_leafdata());
    if (cdxrpdgs7kps2p8v.is_set || is_set(cdxrpdgs7kps2p8v.yfilter)) leaf_name_data.push_back(cdxrpdgs7kps2p8v.get_name_leafdata());
    if (cdxrpdgs7kps2p5v.is_set || is_set(cdxrpdgs7kps2p5v.yfilter)) leaf_name_data.push_back(cdxrpdgs7kps2p5v.get_name_leafdata());
    if (cdxrpdgs7kps2n6v.is_set || is_set(cdxrpdgs7kps2n6v.yfilter)) leaf_name_data.push_back(cdxrpdgs7kps2n6v.get_name_leafdata());
    if (cdxrpdgs7kps2ac.is_set || is_set(cdxrpdgs7kps2ac.yfilter)) leaf_name_data.push_back(cdxrpdgs7kps2ac.get_name_leafdata());
    if (cdxrpdgs7ktx1optpower.is_set || is_set(cdxrpdgs7ktx1optpower.yfilter)) leaf_name_data.push_back(cdxrpdgs7ktx1optpower.get_name_leafdata());
    if (cdxrpdgs7krx1optpower.is_set || is_set(cdxrpdgs7krx1optpower.yfilter)) leaf_name_data.push_back(cdxrpdgs7krx1optpower.get_name_leafdata());
    if (cdxrpdgs7ktriswitch.is_set || is_set(cdxrpdgs7ktriswitch.yfilter)) leaf_name_data.push_back(cdxrpdgs7ktriswitch.get_name_leafdata());
    if (cdxrpdgs7ktamp.is_set || is_set(cdxrpdgs7ktamp.yfilter)) leaf_name_data.push_back(cdxrpdgs7ktamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCODOCSEXTMIB::CdxRPDGS7KTable::CdxRPDGS7KEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCODOCSEXTMIB::CdxRPDGS7KTable::CdxRPDGS7KEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCODOCSEXTMIB::CdxRPDGS7KTable::CdxRPDGS7KEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cdxRPDGS7KMacAddress")
    {
        cdxrpdgs7kmacaddress = value;
        cdxrpdgs7kmacaddress.value_namespace = name_space;
        cdxrpdgs7kmacaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxRPDGS7KPS1p24v")
    {
        cdxrpdgs7kps1p24v = value;
        cdxrpdgs7kps1p24v.value_namespace = name_space;
        cdxrpdgs7kps1p24v.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxRPDGS7KPS1p8v")
    {
        cdxrpdgs7kps1p8v = value;
        cdxrpdgs7kps1p8v.value_namespace = name_space;
        cdxrpdgs7kps1p8v.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxRPDGS7KPS1p5v")
    {
        cdxrpdgs7kps1p5v = value;
        cdxrpdgs7kps1p5v.value_namespace = name_space;
        cdxrpdgs7kps1p5v.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxRPDGS7KPS1n6v")
    {
        cdxrpdgs7kps1n6v = value;
        cdxrpdgs7kps1n6v.value_namespace = name_space;
        cdxrpdgs7kps1n6v.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxRPDGS7KPS1AC")
    {
        cdxrpdgs7kps1ac = value;
        cdxrpdgs7kps1ac.value_namespace = name_space;
        cdxrpdgs7kps1ac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxRPDGS7KPS2p24v")
    {
        cdxrpdgs7kps2p24v = value;
        cdxrpdgs7kps2p24v.value_namespace = name_space;
        cdxrpdgs7kps2p24v.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxRPDGS7KPS2p8v")
    {
        cdxrpdgs7kps2p8v = value;
        cdxrpdgs7kps2p8v.value_namespace = name_space;
        cdxrpdgs7kps2p8v.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxRPDGS7KPS2p5v")
    {
        cdxrpdgs7kps2p5v = value;
        cdxrpdgs7kps2p5v.value_namespace = name_space;
        cdxrpdgs7kps2p5v.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxRPDGS7KPS2n6v")
    {
        cdxrpdgs7kps2n6v = value;
        cdxrpdgs7kps2n6v.value_namespace = name_space;
        cdxrpdgs7kps2n6v.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxRPDGS7KPS2AC")
    {
        cdxrpdgs7kps2ac = value;
        cdxrpdgs7kps2ac.value_namespace = name_space;
        cdxrpdgs7kps2ac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxRPDGS7KTx1OptPower")
    {
        cdxrpdgs7ktx1optpower = value;
        cdxrpdgs7ktx1optpower.value_namespace = name_space;
        cdxrpdgs7ktx1optpower.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxRPDGS7KRx1OptPower")
    {
        cdxrpdgs7krx1optpower = value;
        cdxrpdgs7krx1optpower.value_namespace = name_space;
        cdxrpdgs7krx1optpower.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxRPDGS7KTriSwitch")
    {
        cdxrpdgs7ktriswitch = value;
        cdxrpdgs7ktriswitch.value_namespace = name_space;
        cdxrpdgs7ktriswitch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxRPDGS7KTamp")
    {
        cdxrpdgs7ktamp = value;
        cdxrpdgs7ktamp.value_namespace = name_space;
        cdxrpdgs7ktamp.value_namespace_prefix = name_space_prefix;
    }
}

void CISCODOCSEXTMIB::CdxRPDGS7KTable::CdxRPDGS7KEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cdxRPDGS7KMacAddress")
    {
        cdxrpdgs7kmacaddress.yfilter = yfilter;
    }
    if(value_path == "cdxRPDGS7KPS1p24v")
    {
        cdxrpdgs7kps1p24v.yfilter = yfilter;
    }
    if(value_path == "cdxRPDGS7KPS1p8v")
    {
        cdxrpdgs7kps1p8v.yfilter = yfilter;
    }
    if(value_path == "cdxRPDGS7KPS1p5v")
    {
        cdxrpdgs7kps1p5v.yfilter = yfilter;
    }
    if(value_path == "cdxRPDGS7KPS1n6v")
    {
        cdxrpdgs7kps1n6v.yfilter = yfilter;
    }
    if(value_path == "cdxRPDGS7KPS1AC")
    {
        cdxrpdgs7kps1ac.yfilter = yfilter;
    }
    if(value_path == "cdxRPDGS7KPS2p24v")
    {
        cdxrpdgs7kps2p24v.yfilter = yfilter;
    }
    if(value_path == "cdxRPDGS7KPS2p8v")
    {
        cdxrpdgs7kps2p8v.yfilter = yfilter;
    }
    if(value_path == "cdxRPDGS7KPS2p5v")
    {
        cdxrpdgs7kps2p5v.yfilter = yfilter;
    }
    if(value_path == "cdxRPDGS7KPS2n6v")
    {
        cdxrpdgs7kps2n6v.yfilter = yfilter;
    }
    if(value_path == "cdxRPDGS7KPS2AC")
    {
        cdxrpdgs7kps2ac.yfilter = yfilter;
    }
    if(value_path == "cdxRPDGS7KTx1OptPower")
    {
        cdxrpdgs7ktx1optpower.yfilter = yfilter;
    }
    if(value_path == "cdxRPDGS7KRx1OptPower")
    {
        cdxrpdgs7krx1optpower.yfilter = yfilter;
    }
    if(value_path == "cdxRPDGS7KTriSwitch")
    {
        cdxrpdgs7ktriswitch.yfilter = yfilter;
    }
    if(value_path == "cdxRPDGS7KTamp")
    {
        cdxrpdgs7ktamp.yfilter = yfilter;
    }
}

bool CISCODOCSEXTMIB::CdxRPDGS7KTable::CdxRPDGS7KEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cdxRPDGS7KMacAddress" || name == "cdxRPDGS7KPS1p24v" || name == "cdxRPDGS7KPS1p8v" || name == "cdxRPDGS7KPS1p5v" || name == "cdxRPDGS7KPS1n6v" || name == "cdxRPDGS7KPS1AC" || name == "cdxRPDGS7KPS2p24v" || name == "cdxRPDGS7KPS2p8v" || name == "cdxRPDGS7KPS2p5v" || name == "cdxRPDGS7KPS2n6v" || name == "cdxRPDGS7KPS2AC" || name == "cdxRPDGS7KTx1OptPower" || name == "cdxRPDGS7KRx1OptPower" || name == "cdxRPDGS7KTriSwitch" || name == "cdxRPDGS7KTamp")
        return true;
    return false;
}

CISCODOCSEXTMIB::CdxBundleIpHelperTable::CdxBundleIpHelperTable()
    :
    cdxbundleiphelperentry(this, {"ifindex", "cdxbundlehelperaddr"})
{

    yang_name = "cdxBundleIpHelperTable"; yang_parent_name = "CISCO-DOCS-EXT-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCODOCSEXTMIB::CdxBundleIpHelperTable::~CdxBundleIpHelperTable()
{
}

bool CISCODOCSEXTMIB::CdxBundleIpHelperTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cdxbundleiphelperentry.len(); index++)
    {
        if(cdxbundleiphelperentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCODOCSEXTMIB::CdxBundleIpHelperTable::has_operation() const
{
    for (std::size_t index=0; index<cdxbundleiphelperentry.len(); index++)
    {
        if(cdxbundleiphelperentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCODOCSEXTMIB::CdxBundleIpHelperTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-DOCS-EXT-MIB:CISCO-DOCS-EXT-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCODOCSEXTMIB::CdxBundleIpHelperTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdxBundleIpHelperTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCODOCSEXTMIB::CdxBundleIpHelperTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCODOCSEXTMIB::CdxBundleIpHelperTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cdxBundleIpHelperEntry")
    {
        auto c = std::make_shared<CISCODOCSEXTMIB::CdxBundleIpHelperTable::CdxBundleIpHelperEntry>();
        c->parent = this;
        cdxbundleiphelperentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCODOCSEXTMIB::CdxBundleIpHelperTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cdxbundleiphelperentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCODOCSEXTMIB::CdxBundleIpHelperTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCODOCSEXTMIB::CdxBundleIpHelperTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCODOCSEXTMIB::CdxBundleIpHelperTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cdxBundleIpHelperEntry")
        return true;
    return false;
}

CISCODOCSEXTMIB::CdxBundleIpHelperTable::CdxBundleIpHelperEntry::CdxBundleIpHelperEntry()
    :
    ifindex{YType::str, "ifIndex"},
    cdxbundlehelperaddr{YType::str, "cdxBundleHelperAddr"},
    cdxbundlehelpertype{YType::bits, "cdxBundleHelperType"}
{

    yang_name = "cdxBundleIpHelperEntry"; yang_parent_name = "cdxBundleIpHelperTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCODOCSEXTMIB::CdxBundleIpHelperTable::CdxBundleIpHelperEntry::~CdxBundleIpHelperEntry()
{
}

bool CISCODOCSEXTMIB::CdxBundleIpHelperTable::CdxBundleIpHelperEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| cdxbundlehelperaddr.is_set
	|| cdxbundlehelpertype.is_set;
}

bool CISCODOCSEXTMIB::CdxBundleIpHelperTable::CdxBundleIpHelperEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(cdxbundlehelperaddr.yfilter)
	|| ydk::is_set(cdxbundlehelpertype.yfilter);
}

std::string CISCODOCSEXTMIB::CdxBundleIpHelperTable::CdxBundleIpHelperEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-DOCS-EXT-MIB:CISCO-DOCS-EXT-MIB/cdxBundleIpHelperTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCODOCSEXTMIB::CdxBundleIpHelperTable::CdxBundleIpHelperEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdxBundleIpHelperEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    ADD_KEY_TOKEN(cdxbundlehelperaddr, "cdxBundleHelperAddr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCODOCSEXTMIB::CdxBundleIpHelperTable::CdxBundleIpHelperEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (cdxbundlehelperaddr.is_set || is_set(cdxbundlehelperaddr.yfilter)) leaf_name_data.push_back(cdxbundlehelperaddr.get_name_leafdata());
    if (cdxbundlehelpertype.is_set || is_set(cdxbundlehelpertype.yfilter)) leaf_name_data.push_back(cdxbundlehelpertype.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCODOCSEXTMIB::CdxBundleIpHelperTable::CdxBundleIpHelperEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCODOCSEXTMIB::CdxBundleIpHelperTable::CdxBundleIpHelperEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCODOCSEXTMIB::CdxBundleIpHelperTable::CdxBundleIpHelperEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxBundleHelperAddr")
    {
        cdxbundlehelperaddr = value;
        cdxbundlehelperaddr.value_namespace = name_space;
        cdxbundlehelperaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxBundleHelperType")
    {
        cdxbundlehelpertype[value] = true;
    }
}

void CISCODOCSEXTMIB::CdxBundleIpHelperTable::CdxBundleIpHelperEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "cdxBundleHelperAddr")
    {
        cdxbundlehelperaddr.yfilter = yfilter;
    }
    if(value_path == "cdxBundleHelperType")
    {
        cdxbundlehelpertype.yfilter = yfilter;
    }
}

bool CISCODOCSEXTMIB::CdxBundleIpHelperTable::CdxBundleIpHelperEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "cdxBundleHelperAddr" || name == "cdxBundleHelperType")
        return true;
    return false;
}

CISCODOCSEXTMIB::CdxBundleIPv6DHCPRelayTable::CdxBundleIPv6DHCPRelayTable()
    :
    cdxbundleipv6dhcprelayentry(this, {"ifindex"})
{

    yang_name = "cdxBundleIPv6DHCPRelayTable"; yang_parent_name = "CISCO-DOCS-EXT-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCODOCSEXTMIB::CdxBundleIPv6DHCPRelayTable::~CdxBundleIPv6DHCPRelayTable()
{
}

bool CISCODOCSEXTMIB::CdxBundleIPv6DHCPRelayTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cdxbundleipv6dhcprelayentry.len(); index++)
    {
        if(cdxbundleipv6dhcprelayentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCODOCSEXTMIB::CdxBundleIPv6DHCPRelayTable::has_operation() const
{
    for (std::size_t index=0; index<cdxbundleipv6dhcprelayentry.len(); index++)
    {
        if(cdxbundleipv6dhcprelayentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCODOCSEXTMIB::CdxBundleIPv6DHCPRelayTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-DOCS-EXT-MIB:CISCO-DOCS-EXT-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCODOCSEXTMIB::CdxBundleIPv6DHCPRelayTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdxBundleIPv6DHCPRelayTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCODOCSEXTMIB::CdxBundleIPv6DHCPRelayTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCODOCSEXTMIB::CdxBundleIPv6DHCPRelayTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cdxBundleIPv6DHCPRelayEntry")
    {
        auto c = std::make_shared<CISCODOCSEXTMIB::CdxBundleIPv6DHCPRelayTable::CdxBundleIPv6DHCPRelayEntry>();
        c->parent = this;
        cdxbundleipv6dhcprelayentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCODOCSEXTMIB::CdxBundleIPv6DHCPRelayTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cdxbundleipv6dhcprelayentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCODOCSEXTMIB::CdxBundleIPv6DHCPRelayTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCODOCSEXTMIB::CdxBundleIPv6DHCPRelayTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCODOCSEXTMIB::CdxBundleIPv6DHCPRelayTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cdxBundleIPv6DHCPRelayEntry")
        return true;
    return false;
}

CISCODOCSEXTMIB::CdxBundleIPv6DHCPRelayTable::CdxBundleIPv6DHCPRelayEntry::CdxBundleIPv6DHCPRelayEntry()
    :
    ifindex{YType::str, "ifIndex"},
    cdxbundleipv6dhcprelayinsertvssoption{YType::boolean, "cdxBundleIPv6DHCPRelayInsertVSSOption"},
    cdxbundleipv6dhcprelaytrusttorelayreply{YType::boolean, "cdxBundleIPv6DHCPRelayTrustToRelayReply"},
    cdxbundleipv6dhdprelaysourceifname{YType::str, "cdxBundleIPv6DHDPRelaySourceIfname"}
{

    yang_name = "cdxBundleIPv6DHCPRelayEntry"; yang_parent_name = "cdxBundleIPv6DHCPRelayTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCODOCSEXTMIB::CdxBundleIPv6DHCPRelayTable::CdxBundleIPv6DHCPRelayEntry::~CdxBundleIPv6DHCPRelayEntry()
{
}

bool CISCODOCSEXTMIB::CdxBundleIPv6DHCPRelayTable::CdxBundleIPv6DHCPRelayEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| cdxbundleipv6dhcprelayinsertvssoption.is_set
	|| cdxbundleipv6dhcprelaytrusttorelayreply.is_set
	|| cdxbundleipv6dhdprelaysourceifname.is_set;
}

bool CISCODOCSEXTMIB::CdxBundleIPv6DHCPRelayTable::CdxBundleIPv6DHCPRelayEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(cdxbundleipv6dhcprelayinsertvssoption.yfilter)
	|| ydk::is_set(cdxbundleipv6dhcprelaytrusttorelayreply.yfilter)
	|| ydk::is_set(cdxbundleipv6dhdprelaysourceifname.yfilter);
}

std::string CISCODOCSEXTMIB::CdxBundleIPv6DHCPRelayTable::CdxBundleIPv6DHCPRelayEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-DOCS-EXT-MIB:CISCO-DOCS-EXT-MIB/cdxBundleIPv6DHCPRelayTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCODOCSEXTMIB::CdxBundleIPv6DHCPRelayTable::CdxBundleIPv6DHCPRelayEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdxBundleIPv6DHCPRelayEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCODOCSEXTMIB::CdxBundleIPv6DHCPRelayTable::CdxBundleIPv6DHCPRelayEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (cdxbundleipv6dhcprelayinsertvssoption.is_set || is_set(cdxbundleipv6dhcprelayinsertvssoption.yfilter)) leaf_name_data.push_back(cdxbundleipv6dhcprelayinsertvssoption.get_name_leafdata());
    if (cdxbundleipv6dhcprelaytrusttorelayreply.is_set || is_set(cdxbundleipv6dhcprelaytrusttorelayreply.yfilter)) leaf_name_data.push_back(cdxbundleipv6dhcprelaytrusttorelayreply.get_name_leafdata());
    if (cdxbundleipv6dhdprelaysourceifname.is_set || is_set(cdxbundleipv6dhdprelaysourceifname.yfilter)) leaf_name_data.push_back(cdxbundleipv6dhdprelaysourceifname.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCODOCSEXTMIB::CdxBundleIPv6DHCPRelayTable::CdxBundleIPv6DHCPRelayEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCODOCSEXTMIB::CdxBundleIPv6DHCPRelayTable::CdxBundleIPv6DHCPRelayEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCODOCSEXTMIB::CdxBundleIPv6DHCPRelayTable::CdxBundleIPv6DHCPRelayEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxBundleIPv6DHCPRelayInsertVSSOption")
    {
        cdxbundleipv6dhcprelayinsertvssoption = value;
        cdxbundleipv6dhcprelayinsertvssoption.value_namespace = name_space;
        cdxbundleipv6dhcprelayinsertvssoption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxBundleIPv6DHCPRelayTrustToRelayReply")
    {
        cdxbundleipv6dhcprelaytrusttorelayreply = value;
        cdxbundleipv6dhcprelaytrusttorelayreply.value_namespace = name_space;
        cdxbundleipv6dhcprelaytrusttorelayreply.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxBundleIPv6DHDPRelaySourceIfname")
    {
        cdxbundleipv6dhdprelaysourceifname = value;
        cdxbundleipv6dhdprelaysourceifname.value_namespace = name_space;
        cdxbundleipv6dhdprelaysourceifname.value_namespace_prefix = name_space_prefix;
    }
}

void CISCODOCSEXTMIB::CdxBundleIPv6DHCPRelayTable::CdxBundleIPv6DHCPRelayEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "cdxBundleIPv6DHCPRelayInsertVSSOption")
    {
        cdxbundleipv6dhcprelayinsertvssoption.yfilter = yfilter;
    }
    if(value_path == "cdxBundleIPv6DHCPRelayTrustToRelayReply")
    {
        cdxbundleipv6dhcprelaytrusttorelayreply.yfilter = yfilter;
    }
    if(value_path == "cdxBundleIPv6DHDPRelaySourceIfname")
    {
        cdxbundleipv6dhdprelaysourceifname.yfilter = yfilter;
    }
}

bool CISCODOCSEXTMIB::CdxBundleIPv6DHCPRelayTable::CdxBundleIPv6DHCPRelayEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "cdxBundleIPv6DHCPRelayInsertVSSOption" || name == "cdxBundleIPv6DHCPRelayTrustToRelayReply" || name == "cdxBundleIPv6DHDPRelaySourceIfname")
        return true;
    return false;
}

CISCODOCSEXTMIB::CdxBundleIPv6DHCPRelayDestTable::CdxBundleIPv6DHCPRelayDestTable()
    :
    cdxbundleipv6dhcprelaydestentry(this, {"ifindex", "cdxbundleipv6dhcprelaydestoutifvrfindex", "cdxbundleipv6dhcprelaydestaddr", "cdxbundleipv6dhcprelaydestoutifindex"})
{

    yang_name = "cdxBundleIPv6DHCPRelayDestTable"; yang_parent_name = "CISCO-DOCS-EXT-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCODOCSEXTMIB::CdxBundleIPv6DHCPRelayDestTable::~CdxBundleIPv6DHCPRelayDestTable()
{
}

bool CISCODOCSEXTMIB::CdxBundleIPv6DHCPRelayDestTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cdxbundleipv6dhcprelaydestentry.len(); index++)
    {
        if(cdxbundleipv6dhcprelaydestentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCODOCSEXTMIB::CdxBundleIPv6DHCPRelayDestTable::has_operation() const
{
    for (std::size_t index=0; index<cdxbundleipv6dhcprelaydestentry.len(); index++)
    {
        if(cdxbundleipv6dhcprelaydestentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCODOCSEXTMIB::CdxBundleIPv6DHCPRelayDestTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-DOCS-EXT-MIB:CISCO-DOCS-EXT-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCODOCSEXTMIB::CdxBundleIPv6DHCPRelayDestTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdxBundleIPv6DHCPRelayDestTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCODOCSEXTMIB::CdxBundleIPv6DHCPRelayDestTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCODOCSEXTMIB::CdxBundleIPv6DHCPRelayDestTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cdxBundleIPv6DHCPRelayDestEntry")
    {
        auto c = std::make_shared<CISCODOCSEXTMIB::CdxBundleIPv6DHCPRelayDestTable::CdxBundleIPv6DHCPRelayDestEntry>();
        c->parent = this;
        cdxbundleipv6dhcprelaydestentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCODOCSEXTMIB::CdxBundleIPv6DHCPRelayDestTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cdxbundleipv6dhcprelaydestentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCODOCSEXTMIB::CdxBundleIPv6DHCPRelayDestTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCODOCSEXTMIB::CdxBundleIPv6DHCPRelayDestTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCODOCSEXTMIB::CdxBundleIPv6DHCPRelayDestTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cdxBundleIPv6DHCPRelayDestEntry")
        return true;
    return false;
}

CISCODOCSEXTMIB::CdxBundleIPv6DHCPRelayDestTable::CdxBundleIPv6DHCPRelayDestEntry::CdxBundleIPv6DHCPRelayDestEntry()
    :
    ifindex{YType::str, "ifIndex"},
    cdxbundleipv6dhcprelaydestoutifvrfindex{YType::uint32, "cdxBundleIPv6DHCPRelayDestOutIfVrfIndex"},
    cdxbundleipv6dhcprelaydestaddr{YType::str, "cdxBundleIPv6DHCPRelayDestAddr"},
    cdxbundleipv6dhcprelaydestoutifindex{YType::int32, "cdxBundleIPv6DHCPRelayDestOutIfIndex"},
    cdxbundleipv6dhcprelaydestsourceaddress{YType::str, "cdxBundleIPv6DHCPRelayDestSourceAddress"},
    cdxbundleipv6dhcprelaydestlinkaddress{YType::str, "cdxBundleIPv6DHCPRelayDestLinkAddress"}
{

    yang_name = "cdxBundleIPv6DHCPRelayDestEntry"; yang_parent_name = "cdxBundleIPv6DHCPRelayDestTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCODOCSEXTMIB::CdxBundleIPv6DHCPRelayDestTable::CdxBundleIPv6DHCPRelayDestEntry::~CdxBundleIPv6DHCPRelayDestEntry()
{
}

bool CISCODOCSEXTMIB::CdxBundleIPv6DHCPRelayDestTable::CdxBundleIPv6DHCPRelayDestEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| cdxbundleipv6dhcprelaydestoutifvrfindex.is_set
	|| cdxbundleipv6dhcprelaydestaddr.is_set
	|| cdxbundleipv6dhcprelaydestoutifindex.is_set
	|| cdxbundleipv6dhcprelaydestsourceaddress.is_set
	|| cdxbundleipv6dhcprelaydestlinkaddress.is_set;
}

bool CISCODOCSEXTMIB::CdxBundleIPv6DHCPRelayDestTable::CdxBundleIPv6DHCPRelayDestEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(cdxbundleipv6dhcprelaydestoutifvrfindex.yfilter)
	|| ydk::is_set(cdxbundleipv6dhcprelaydestaddr.yfilter)
	|| ydk::is_set(cdxbundleipv6dhcprelaydestoutifindex.yfilter)
	|| ydk::is_set(cdxbundleipv6dhcprelaydestsourceaddress.yfilter)
	|| ydk::is_set(cdxbundleipv6dhcprelaydestlinkaddress.yfilter);
}

std::string CISCODOCSEXTMIB::CdxBundleIPv6DHCPRelayDestTable::CdxBundleIPv6DHCPRelayDestEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-DOCS-EXT-MIB:CISCO-DOCS-EXT-MIB/cdxBundleIPv6DHCPRelayDestTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCODOCSEXTMIB::CdxBundleIPv6DHCPRelayDestTable::CdxBundleIPv6DHCPRelayDestEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdxBundleIPv6DHCPRelayDestEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    ADD_KEY_TOKEN(cdxbundleipv6dhcprelaydestoutifvrfindex, "cdxBundleIPv6DHCPRelayDestOutIfVrfIndex");
    ADD_KEY_TOKEN(cdxbundleipv6dhcprelaydestaddr, "cdxBundleIPv6DHCPRelayDestAddr");
    ADD_KEY_TOKEN(cdxbundleipv6dhcprelaydestoutifindex, "cdxBundleIPv6DHCPRelayDestOutIfIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCODOCSEXTMIB::CdxBundleIPv6DHCPRelayDestTable::CdxBundleIPv6DHCPRelayDestEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (cdxbundleipv6dhcprelaydestoutifvrfindex.is_set || is_set(cdxbundleipv6dhcprelaydestoutifvrfindex.yfilter)) leaf_name_data.push_back(cdxbundleipv6dhcprelaydestoutifvrfindex.get_name_leafdata());
    if (cdxbundleipv6dhcprelaydestaddr.is_set || is_set(cdxbundleipv6dhcprelaydestaddr.yfilter)) leaf_name_data.push_back(cdxbundleipv6dhcprelaydestaddr.get_name_leafdata());
    if (cdxbundleipv6dhcprelaydestoutifindex.is_set || is_set(cdxbundleipv6dhcprelaydestoutifindex.yfilter)) leaf_name_data.push_back(cdxbundleipv6dhcprelaydestoutifindex.get_name_leafdata());
    if (cdxbundleipv6dhcprelaydestsourceaddress.is_set || is_set(cdxbundleipv6dhcprelaydestsourceaddress.yfilter)) leaf_name_data.push_back(cdxbundleipv6dhcprelaydestsourceaddress.get_name_leafdata());
    if (cdxbundleipv6dhcprelaydestlinkaddress.is_set || is_set(cdxbundleipv6dhcprelaydestlinkaddress.yfilter)) leaf_name_data.push_back(cdxbundleipv6dhcprelaydestlinkaddress.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCODOCSEXTMIB::CdxBundleIPv6DHCPRelayDestTable::CdxBundleIPv6DHCPRelayDestEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCODOCSEXTMIB::CdxBundleIPv6DHCPRelayDestTable::CdxBundleIPv6DHCPRelayDestEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCODOCSEXTMIB::CdxBundleIPv6DHCPRelayDestTable::CdxBundleIPv6DHCPRelayDestEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxBundleIPv6DHCPRelayDestOutIfVrfIndex")
    {
        cdxbundleipv6dhcprelaydestoutifvrfindex = value;
        cdxbundleipv6dhcprelaydestoutifvrfindex.value_namespace = name_space;
        cdxbundleipv6dhcprelaydestoutifvrfindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxBundleIPv6DHCPRelayDestAddr")
    {
        cdxbundleipv6dhcprelaydestaddr = value;
        cdxbundleipv6dhcprelaydestaddr.value_namespace = name_space;
        cdxbundleipv6dhcprelaydestaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxBundleIPv6DHCPRelayDestOutIfIndex")
    {
        cdxbundleipv6dhcprelaydestoutifindex = value;
        cdxbundleipv6dhcprelaydestoutifindex.value_namespace = name_space;
        cdxbundleipv6dhcprelaydestoutifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxBundleIPv6DHCPRelayDestSourceAddress")
    {
        cdxbundleipv6dhcprelaydestsourceaddress = value;
        cdxbundleipv6dhcprelaydestsourceaddress.value_namespace = name_space;
        cdxbundleipv6dhcprelaydestsourceaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdxBundleIPv6DHCPRelayDestLinkAddress")
    {
        cdxbundleipv6dhcprelaydestlinkaddress = value;
        cdxbundleipv6dhcprelaydestlinkaddress.value_namespace = name_space;
        cdxbundleipv6dhcprelaydestlinkaddress.value_namespace_prefix = name_space_prefix;
    }
}

void CISCODOCSEXTMIB::CdxBundleIPv6DHCPRelayDestTable::CdxBundleIPv6DHCPRelayDestEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "cdxBundleIPv6DHCPRelayDestOutIfVrfIndex")
    {
        cdxbundleipv6dhcprelaydestoutifvrfindex.yfilter = yfilter;
    }
    if(value_path == "cdxBundleIPv6DHCPRelayDestAddr")
    {
        cdxbundleipv6dhcprelaydestaddr.yfilter = yfilter;
    }
    if(value_path == "cdxBundleIPv6DHCPRelayDestOutIfIndex")
    {
        cdxbundleipv6dhcprelaydestoutifindex.yfilter = yfilter;
    }
    if(value_path == "cdxBundleIPv6DHCPRelayDestSourceAddress")
    {
        cdxbundleipv6dhcprelaydestsourceaddress.yfilter = yfilter;
    }
    if(value_path == "cdxBundleIPv6DHCPRelayDestLinkAddress")
    {
        cdxbundleipv6dhcprelaydestlinkaddress.yfilter = yfilter;
    }
}

bool CISCODOCSEXTMIB::CdxBundleIPv6DHCPRelayDestTable::CdxBundleIPv6DHCPRelayDestEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "cdxBundleIPv6DHCPRelayDestOutIfVrfIndex" || name == "cdxBundleIPv6DHCPRelayDestAddr" || name == "cdxBundleIPv6DHCPRelayDestOutIfIndex" || name == "cdxBundleIPv6DHCPRelayDestSourceAddress" || name == "cdxBundleIPv6DHCPRelayDestLinkAddress")
        return true;
    return false;
}

const Enum::YLeaf CISCODOCSEXTMIB::CdxCmtsDocsisLBObjects::CdxCmtsDocsisLBEnable::true_ {1, "true"};
const Enum::YLeaf CISCODOCSEXTMIB::CdxCmtsDocsisLBObjects::CdxCmtsDocsisLBEnable::false_ {2, "false"};

const Enum::YLeaf CISCODOCSEXTMIB::CdxCmtsDocsisLBObjects::CdxCmtsD30LBEnable::true_ {1, "true"};
const Enum::YLeaf CISCODOCSEXTMIB::CdxCmtsDocsisLBObjects::CdxCmtsD30LBEnable::false_ {2, "false"};

const Enum::YLeaf CISCODOCSEXTMIB::CdxCmtsDocsisLBObjects::CdxCmtsD30LBUpstreamEnable::true_ {1, "true"};
const Enum::YLeaf CISCODOCSEXTMIB::CdxCmtsDocsisLBObjects::CdxCmtsD30LBUpstreamEnable::false_ {2, "false"};

const Enum::YLeaf CISCODOCSEXTMIB::CdxCmtsDocsisLBObjects::CdxCmtsD30LBStaticEnable::true_ {1, "true"};
const Enum::YLeaf CISCODOCSEXTMIB::CdxCmtsDocsisLBObjects::CdxCmtsD30LBStaticEnable::false_ {2, "false"};

const Enum::YLeaf CISCODOCSEXTMIB::CdxCmtsDocsisLBObjects::CdxCmtsD30LBDynEnable::true_ {1, "true"};
const Enum::YLeaf CISCODOCSEXTMIB::CdxCmtsDocsisLBObjects::CdxCmtsD30LBDynEnable::false_ {2, "false"};

const Enum::YLeaf CISCODOCSEXTMIB::CdxQosIfRateLimitTable::CdxQosIfRateLimitEntry::CdxQosIfRateLimitAlgm::noRateLimit {1, "noRateLimit"};
const Enum::YLeaf CISCODOCSEXTMIB::CdxQosIfRateLimitTable::CdxQosIfRateLimitEntry::CdxQosIfRateLimitAlgm::oneSecBurst {2, "oneSecBurst"};
const Enum::YLeaf CISCODOCSEXTMIB::CdxQosIfRateLimitTable::CdxQosIfRateLimitEntry::CdxQosIfRateLimitAlgm::carLike {3, "carLike"};
const Enum::YLeaf CISCODOCSEXTMIB::CdxQosIfRateLimitTable::CdxQosIfRateLimitEntry::CdxQosIfRateLimitAlgm::wtExPacketDiscard {4, "wtExPacketDiscard"};
const Enum::YLeaf CISCODOCSEXTMIB::CdxQosIfRateLimitTable::CdxQosIfRateLimitEntry::CdxQosIfRateLimitAlgm::shaping {5, "shaping"};

const Enum::YLeaf CISCODOCSEXTMIB::CdxQosIfRateLimitTable::CdxQosIfRateLimitEntry::CdxQosIfRateLimitShpMaxDelay::na {1, "na"};
const Enum::YLeaf CISCODOCSEXTMIB::CdxQosIfRateLimitTable::CdxQosIfRateLimitEntry::CdxQosIfRateLimitShpMaxDelay::msec128 {2, "msec128"};
const Enum::YLeaf CISCODOCSEXTMIB::CdxQosIfRateLimitTable::CdxQosIfRateLimitEntry::CdxQosIfRateLimitShpMaxDelay::msec256 {3, "msec256"};
const Enum::YLeaf CISCODOCSEXTMIB::CdxQosIfRateLimitTable::CdxQosIfRateLimitEntry::CdxQosIfRateLimitShpMaxDelay::msec512 {4, "msec512"};
const Enum::YLeaf CISCODOCSEXTMIB::CdxQosIfRateLimitTable::CdxQosIfRateLimitEntry::CdxQosIfRateLimitShpMaxDelay::msec1024 {5, "msec1024"};

const Enum::YLeaf CISCODOCSEXTMIB::CdxQosIfRateLimitTable::CdxQosIfRateLimitEntry::CdxQosIfRateLimitShpGranularity::na {1, "na"};
const Enum::YLeaf CISCODOCSEXTMIB::CdxQosIfRateLimitTable::CdxQosIfRateLimitEntry::CdxQosIfRateLimitShpGranularity::msec1 {2, "msec1"};
const Enum::YLeaf CISCODOCSEXTMIB::CdxQosIfRateLimitTable::CdxQosIfRateLimitEntry::CdxQosIfRateLimitShpGranularity::msec2 {3, "msec2"};
const Enum::YLeaf CISCODOCSEXTMIB::CdxQosIfRateLimitTable::CdxQosIfRateLimitEntry::CdxQosIfRateLimitShpGranularity::msec4 {4, "msec4"};
const Enum::YLeaf CISCODOCSEXTMIB::CdxQosIfRateLimitTable::CdxQosIfRateLimitEntry::CdxQosIfRateLimitShpGranularity::msec8 {5, "msec8"};
const Enum::YLeaf CISCODOCSEXTMIB::CdxQosIfRateLimitTable::CdxQosIfRateLimitEntry::CdxQosIfRateLimitShpGranularity::msec16 {6, "msec16"};

const Enum::YLeaf CISCODOCSEXTMIB::CdxUpInfoElemStatsTable::CdxUpInfoElemStatsEntry::CdxUpInfoElemStatsNameCode::reqIE {1, "reqIE"};
const Enum::YLeaf CISCODOCSEXTMIB::CdxUpInfoElemStatsTable::CdxUpInfoElemStatsEntry::CdxUpInfoElemStatsNameCode::reqOrDataIE {2, "reqOrDataIE"};
const Enum::YLeaf CISCODOCSEXTMIB::CdxUpInfoElemStatsTable::CdxUpInfoElemStatsEntry::CdxUpInfoElemStatsNameCode::initMtnIE {3, "initMtnIE"};
const Enum::YLeaf CISCODOCSEXTMIB::CdxUpInfoElemStatsTable::CdxUpInfoElemStatsEntry::CdxUpInfoElemStatsNameCode::stnMtnIE {4, "stnMtnIE"};
const Enum::YLeaf CISCODOCSEXTMIB::CdxUpInfoElemStatsTable::CdxUpInfoElemStatsEntry::CdxUpInfoElemStatsNameCode::shortGrantIE {5, "shortGrantIE"};
const Enum::YLeaf CISCODOCSEXTMIB::CdxUpInfoElemStatsTable::CdxUpInfoElemStatsEntry::CdxUpInfoElemStatsNameCode::longGrantIE {6, "longGrantIE"};

const Enum::YLeaf CISCODOCSEXTMIB::CdxBWQueueTable::CdxBWQueueEntry::CdxBWQueueNameCode::cirQ {1, "cirQ"};
const Enum::YLeaf CISCODOCSEXTMIB::CdxBWQueueTable::CdxBWQueueEntry::CdxBWQueueNameCode::tbeQ {2, "tbeQ"};
const Enum::YLeaf CISCODOCSEXTMIB::CdxBWQueueTable::CdxBWQueueEntry::CdxBWQueueNameCode::p0BEGrantQ {3, "p0BEGrantQ"};
const Enum::YLeaf CISCODOCSEXTMIB::CdxBWQueueTable::CdxBWQueueEntry::CdxBWQueueNameCode::p1BEGrantQ {4, "p1BEGrantQ"};
const Enum::YLeaf CISCODOCSEXTMIB::CdxBWQueueTable::CdxBWQueueEntry::CdxBWQueueNameCode::p2BEGrantQ {5, "p2BEGrantQ"};
const Enum::YLeaf CISCODOCSEXTMIB::CdxBWQueueTable::CdxBWQueueEntry::CdxBWQueueNameCode::p3BEGrantQ {6, "p3BEGrantQ"};
const Enum::YLeaf CISCODOCSEXTMIB::CdxBWQueueTable::CdxBWQueueEntry::CdxBWQueueNameCode::p4BEGrantQ {7, "p4BEGrantQ"};
const Enum::YLeaf CISCODOCSEXTMIB::CdxBWQueueTable::CdxBWQueueEntry::CdxBWQueueNameCode::p5BEGrantQ {8, "p5BEGrantQ"};
const Enum::YLeaf CISCODOCSEXTMIB::CdxBWQueueTable::CdxBWQueueEntry::CdxBWQueueNameCode::p6BEGrantQ {9, "p6BEGrantQ"};
const Enum::YLeaf CISCODOCSEXTMIB::CdxBWQueueTable::CdxBWQueueEntry::CdxBWQueueNameCode::p7BEGrantQ {10, "p7BEGrantQ"};
const Enum::YLeaf CISCODOCSEXTMIB::CdxBWQueueTable::CdxBWQueueEntry::CdxBWQueueNameCode::rngPollQ {11, "rngPollQ"};

const Enum::YLeaf CISCODOCSEXTMIB::CdxBWQueueTable::CdxBWQueueEntry::CdxBWQueueType::unknown {1, "unknown"};
const Enum::YLeaf CISCODOCSEXTMIB::CdxBWQueueTable::CdxBWQueueEntry::CdxBWQueueType::other {2, "other"};
const Enum::YLeaf CISCODOCSEXTMIB::CdxBWQueueTable::CdxBWQueueEntry::CdxBWQueueType::fifo {3, "fifo"};
const Enum::YLeaf CISCODOCSEXTMIB::CdxBWQueueTable::CdxBWQueueEntry::CdxBWQueueType::priority {4, "priority"};

const Enum::YLeaf CISCODOCSEXTMIB::CdxCmCpeTable::CdxCmCpeEntry::CdxCmCpeType::cm {1, "cm"};
const Enum::YLeaf CISCODOCSEXTMIB::CdxCmCpeTable::CdxCmCpeEntry::CdxCmCpeType::cpe {2, "cpe"};

const Enum::YLeaf CISCODOCSEXTMIB::CdxCmtsCmStatusExtTable::CdxCmtsCmStatusExtEntry::CdxCmtsCmStatusValue::offline {1, "offline"};
const Enum::YLeaf CISCODOCSEXTMIB::CdxCmtsCmStatusExtTable::CdxCmtsCmStatusExtEntry::CdxCmtsCmStatusValue::others {2, "others"};
const Enum::YLeaf CISCODOCSEXTMIB::CdxCmtsCmStatusExtTable::CdxCmtsCmStatusExtEntry::CdxCmtsCmStatusValue::initRangingRcvd {3, "initRangingRcvd"};
const Enum::YLeaf CISCODOCSEXTMIB::CdxCmtsCmStatusExtTable::CdxCmtsCmStatusExtEntry::CdxCmtsCmStatusValue::initDhcpReqRcvd {4, "initDhcpReqRcvd"};
const Enum::YLeaf CISCODOCSEXTMIB::CdxCmtsCmStatusExtTable::CdxCmtsCmStatusExtEntry::CdxCmtsCmStatusValue::onlineNetAccessDisabled {5, "onlineNetAccessDisabled"};
const Enum::YLeaf CISCODOCSEXTMIB::CdxCmtsCmStatusExtTable::CdxCmtsCmStatusExtEntry::CdxCmtsCmStatusValue::onlineKekAssigned {6, "onlineKekAssigned"};
const Enum::YLeaf CISCODOCSEXTMIB::CdxCmtsCmStatusExtTable::CdxCmtsCmStatusExtEntry::CdxCmtsCmStatusValue::onlineTekAssigned {7, "onlineTekAssigned"};
const Enum::YLeaf CISCODOCSEXTMIB::CdxCmtsCmStatusExtTable::CdxCmtsCmStatusExtEntry::CdxCmtsCmStatusValue::rejectBadMic {8, "rejectBadMic"};
const Enum::YLeaf CISCODOCSEXTMIB::CdxCmtsCmStatusExtTable::CdxCmtsCmStatusExtEntry::CdxCmtsCmStatusValue::rejectBadCos {9, "rejectBadCos"};
const Enum::YLeaf CISCODOCSEXTMIB::CdxCmtsCmStatusExtTable::CdxCmtsCmStatusExtEntry::CdxCmtsCmStatusValue::kekRejected {10, "kekRejected"};
const Enum::YLeaf CISCODOCSEXTMIB::CdxCmtsCmStatusExtTable::CdxCmtsCmStatusExtEntry::CdxCmtsCmStatusValue::tekRejected {11, "tekRejected"};
const Enum::YLeaf CISCODOCSEXTMIB::CdxCmtsCmStatusExtTable::CdxCmtsCmStatusExtEntry::CdxCmtsCmStatusValue::online {12, "online"};
const Enum::YLeaf CISCODOCSEXTMIB::CdxCmtsCmStatusExtTable::CdxCmtsCmStatusExtEntry::CdxCmtsCmStatusValue::initTftpPacketRcvd {13, "initTftpPacketRcvd"};
const Enum::YLeaf CISCODOCSEXTMIB::CdxCmtsCmStatusExtTable::CdxCmtsCmStatusExtEntry::CdxCmtsCmStatusValue::initTodRequestRcvd {14, "initTodRequestRcvd"};
const Enum::YLeaf CISCODOCSEXTMIB::CdxCmtsCmStatusExtTable::CdxCmtsCmStatusExtEntry::CdxCmtsCmStatusValue::reset {15, "reset"};
const Enum::YLeaf CISCODOCSEXTMIB::CdxCmtsCmStatusExtTable::CdxCmtsCmStatusExtEntry::CdxCmtsCmStatusValue::rangingInProgress {16, "rangingInProgress"};
const Enum::YLeaf CISCODOCSEXTMIB::CdxCmtsCmStatusExtTable::CdxCmtsCmStatusExtEntry::CdxCmtsCmStatusValue::rangingCompleted {17, "rangingCompleted"};
const Enum::YLeaf CISCODOCSEXTMIB::CdxCmtsCmStatusExtTable::CdxCmtsCmStatusExtEntry::CdxCmtsCmStatusValue::dhcpGotIpAddr {18, "dhcpGotIpAddr"};
const Enum::YLeaf CISCODOCSEXTMIB::CdxCmtsCmStatusExtTable::CdxCmtsCmStatusExtEntry::CdxCmtsCmStatusValue::rejStaleConfig {19, "rejStaleConfig"};
const Enum::YLeaf CISCODOCSEXTMIB::CdxCmtsCmStatusExtTable::CdxCmtsCmStatusExtEntry::CdxCmtsCmStatusValue::rejIpSpoof {20, "rejIpSpoof"};
const Enum::YLeaf CISCODOCSEXTMIB::CdxCmtsCmStatusExtTable::CdxCmtsCmStatusExtEntry::CdxCmtsCmStatusValue::rejClassFail {21, "rejClassFail"};
const Enum::YLeaf CISCODOCSEXTMIB::CdxCmtsCmStatusExtTable::CdxCmtsCmStatusExtEntry::CdxCmtsCmStatusValue::rejRegNack {22, "rejRegNack"};
const Enum::YLeaf CISCODOCSEXTMIB::CdxCmtsCmStatusExtTable::CdxCmtsCmStatusExtEntry::CdxCmtsCmStatusValue::bpiKekExpired {23, "bpiKekExpired"};
const Enum::YLeaf CISCODOCSEXTMIB::CdxCmtsCmStatusExtTable::CdxCmtsCmStatusExtEntry::CdxCmtsCmStatusValue::bpiTekExpired {24, "bpiTekExpired"};
const Enum::YLeaf CISCODOCSEXTMIB::CdxCmtsCmStatusExtTable::CdxCmtsCmStatusExtEntry::CdxCmtsCmStatusValue::shutdown {25, "shutdown"};
const Enum::YLeaf CISCODOCSEXTMIB::CdxCmtsCmStatusExtTable::CdxCmtsCmStatusExtEntry::CdxCmtsCmStatusValue::channelChgInitRangingRcvd {26, "channelChgInitRangingRcvd"};
const Enum::YLeaf CISCODOCSEXTMIB::CdxCmtsCmStatusExtTable::CdxCmtsCmStatusExtEntry::CdxCmtsCmStatusValue::channelChgRangingInProgress {27, "channelChgRangingInProgress"};

const Enum::YLeaf CISCODOCSEXTMIB::CdxCmtsMacExtTable::CdxCmtsMacExtEntry::CdxCmtsCmDMICMode::notConfigured {1, "notConfigured"};
const Enum::YLeaf CISCODOCSEXTMIB::CdxCmtsMacExtTable::CdxCmtsMacExtEntry::CdxCmtsCmDMICMode::mark {2, "mark"};
const Enum::YLeaf CISCODOCSEXTMIB::CdxCmtsMacExtTable::CdxCmtsMacExtEntry::CdxCmtsCmDMICMode::lock {3, "lock"};
const Enum::YLeaf CISCODOCSEXTMIB::CdxCmtsMacExtTable::CdxCmtsMacExtEntry::CdxCmtsCmDMICMode::reject {4, "reject"};

const Enum::YLeaf CISCODOCSEXTMIB::CdxCmtsCmChOverTable::CdxCmtsCmChOverEntry::CdxCmtsCmChOverState::messageSent {1, "messageSent"};
const Enum::YLeaf CISCODOCSEXTMIB::CdxCmtsCmChOverTable::CdxCmtsCmChOverEntry::CdxCmtsCmChOverState::commandNotActive {2, "commandNotActive"};
const Enum::YLeaf CISCODOCSEXTMIB::CdxCmtsCmChOverTable::CdxCmtsCmChOverEntry::CdxCmtsCmChOverState::noOpNeeded {3, "noOpNeeded"};
const Enum::YLeaf CISCODOCSEXTMIB::CdxCmtsCmChOverTable::CdxCmtsCmChOverEntry::CdxCmtsCmChOverState::modemNotFound {4, "modemNotFound"};
const Enum::YLeaf CISCODOCSEXTMIB::CdxCmtsCmChOverTable::CdxCmtsCmChOverEntry::CdxCmtsCmChOverState::waitToSendMessage {5, "waitToSendMessage"};
const Enum::YLeaf CISCODOCSEXTMIB::CdxCmtsCmChOverTable::CdxCmtsCmChOverEntry::CdxCmtsCmChOverState::timeOut {6, "timeOut"};

const Enum::YLeaf CISCODOCSEXTMIB::CdxCmtsCmStatusDMICTable::CdxCmtsCmStatusDMICEntry::CdxCmtsCmStatusDMICMode::mark {1, "mark"};
const Enum::YLeaf CISCODOCSEXTMIB::CdxCmtsCmStatusDMICTable::CdxCmtsCmStatusDMICEntry::CdxCmtsCmStatusDMICMode::lock {2, "lock"};
const Enum::YLeaf CISCODOCSEXTMIB::CdxCmtsCmStatusDMICTable::CdxCmtsCmStatusDMICEntry::CdxCmtsCmStatusDMICMode::reject {3, "reject"};

const Enum::YLeaf CISCODOCSEXTMIB::CdxRPDGS7KTable::CdxRPDGS7KEntry::CdxRPDGS7KTriSwitch::low {1, "low"};
const Enum::YLeaf CISCODOCSEXTMIB::CdxRPDGS7KTable::CdxRPDGS7KEntry::CdxRPDGS7KTriSwitch::high {2, "high"};
const Enum::YLeaf CISCODOCSEXTMIB::CdxRPDGS7KTable::CdxRPDGS7KEntry::CdxRPDGS7KTriSwitch::pad {3, "pad"};

const Enum::YLeaf CISCODOCSEXTMIB::CdxRPDGS7KTable::CdxRPDGS7KEntry::CdxRPDGS7KTamp::intact {1, "intact"};
const Enum::YLeaf CISCODOCSEXTMIB::CdxRPDGS7KTable::CdxRPDGS7KEntry::CdxRPDGS7KTamp::compromised {2, "compromised"};


}
}

