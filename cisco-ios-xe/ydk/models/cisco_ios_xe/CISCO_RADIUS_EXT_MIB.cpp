
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_RADIUS_EXT_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_RADIUS_EXT_MIB {

CISCORADIUSEXTMIB::CISCORADIUSEXTMIB()
    :
    creclientglobal(std::make_shared<CISCORADIUSEXTMIB::Creclientglobal>())
	,creclientauthentication(std::make_shared<CISCORADIUSEXTMIB::Creclientauthentication>())
	,creclientaccounting(std::make_shared<CISCORADIUSEXTMIB::Creclientaccounting>())
{
    creclientglobal->parent = this;
    creclientauthentication->parent = this;
    creclientaccounting->parent = this;

    yang_name = "CISCO-RADIUS-EXT-MIB"; yang_parent_name = "CISCO-RADIUS-EXT-MIB"; is_top_level_class = true; has_list_ancestor = false;
}

CISCORADIUSEXTMIB::~CISCORADIUSEXTMIB()
{
}

bool CISCORADIUSEXTMIB::has_data() const
{
    return (creclientglobal !=  nullptr && creclientglobal->has_data())
	|| (creclientauthentication !=  nullptr && creclientauthentication->has_data())
	|| (creclientaccounting !=  nullptr && creclientaccounting->has_data());
}

bool CISCORADIUSEXTMIB::has_operation() const
{
    return is_set(yfilter)
	|| (creclientglobal !=  nullptr && creclientglobal->has_operation())
	|| (creclientauthentication !=  nullptr && creclientauthentication->has_operation())
	|| (creclientaccounting !=  nullptr && creclientaccounting->has_operation());
}

std::string CISCORADIUSEXTMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-RADIUS-EXT-MIB:CISCO-RADIUS-EXT-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCORADIUSEXTMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCORADIUSEXTMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "creClientGlobal")
    {
        if(creclientglobal == nullptr)
        {
            creclientglobal = std::make_shared<CISCORADIUSEXTMIB::Creclientglobal>();
        }
        return creclientglobal;
    }

    if(child_yang_name == "creClientAuthentication")
    {
        if(creclientauthentication == nullptr)
        {
            creclientauthentication = std::make_shared<CISCORADIUSEXTMIB::Creclientauthentication>();
        }
        return creclientauthentication;
    }

    if(child_yang_name == "creClientAccounting")
    {
        if(creclientaccounting == nullptr)
        {
            creclientaccounting = std::make_shared<CISCORADIUSEXTMIB::Creclientaccounting>();
        }
        return creclientaccounting;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCORADIUSEXTMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(creclientglobal != nullptr)
    {
        children["creClientGlobal"] = creclientglobal;
    }

    if(creclientauthentication != nullptr)
    {
        children["creClientAuthentication"] = creclientauthentication;
    }

    if(creclientaccounting != nullptr)
    {
        children["creClientAccounting"] = creclientaccounting;
    }

    return children;
}

void CISCORADIUSEXTMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCORADIUSEXTMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> CISCORADIUSEXTMIB::clone_ptr() const
{
    return std::make_shared<CISCORADIUSEXTMIB>();
}

std::string CISCORADIUSEXTMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CISCORADIUSEXTMIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CISCORADIUSEXTMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CISCORADIUSEXTMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CISCORADIUSEXTMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "creClientGlobal" || name == "creClientAuthentication" || name == "creClientAccounting")
        return true;
    return false;
}

CISCORADIUSEXTMIB::Creclientglobal::Creclientglobal()
    :
    creclienttotalmaxinqlength{YType::uint32, "creClientTotalMaxInQLength"},
    creclienttotalmaxwaitqlength{YType::uint32, "creClientTotalMaxWaitQLength"},
    creclienttotalmaxdoneqlength{YType::uint32, "creClientTotalMaxDoneQLength"},
    creclienttotalaccessrejects{YType::uint32, "creClientTotalAccessRejects"},
    creclienttotalaverageresponsedelay{YType::int32, "creClientTotalAverageResponseDelay"},
    creclientsourceportrangestart{YType::uint16, "creClientSourcePortRangeStart"},
    creclientsourceportrangeend{YType::uint16, "creClientSourcePortRangeEnd"},
    creclientlastusedsourceport{YType::uint16, "creClientLastUsedSourcePort"},
    creclientlastusedsourceid{YType::uint32, "creClientLastUsedSourceId"}
{

    yang_name = "creClientGlobal"; yang_parent_name = "CISCO-RADIUS-EXT-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCORADIUSEXTMIB::Creclientglobal::~Creclientglobal()
{
}

bool CISCORADIUSEXTMIB::Creclientglobal::has_data() const
{
    return creclienttotalmaxinqlength.is_set
	|| creclienttotalmaxwaitqlength.is_set
	|| creclienttotalmaxdoneqlength.is_set
	|| creclienttotalaccessrejects.is_set
	|| creclienttotalaverageresponsedelay.is_set
	|| creclientsourceportrangestart.is_set
	|| creclientsourceportrangeend.is_set
	|| creclientlastusedsourceport.is_set
	|| creclientlastusedsourceid.is_set;
}

bool CISCORADIUSEXTMIB::Creclientglobal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(creclienttotalmaxinqlength.yfilter)
	|| ydk::is_set(creclienttotalmaxwaitqlength.yfilter)
	|| ydk::is_set(creclienttotalmaxdoneqlength.yfilter)
	|| ydk::is_set(creclienttotalaccessrejects.yfilter)
	|| ydk::is_set(creclienttotalaverageresponsedelay.yfilter)
	|| ydk::is_set(creclientsourceportrangestart.yfilter)
	|| ydk::is_set(creclientsourceportrangeend.yfilter)
	|| ydk::is_set(creclientlastusedsourceport.yfilter)
	|| ydk::is_set(creclientlastusedsourceid.yfilter);
}

std::string CISCORADIUSEXTMIB::Creclientglobal::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-RADIUS-EXT-MIB:CISCO-RADIUS-EXT-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCORADIUSEXTMIB::Creclientglobal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "creClientGlobal";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCORADIUSEXTMIB::Creclientglobal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (creclienttotalmaxinqlength.is_set || is_set(creclienttotalmaxinqlength.yfilter)) leaf_name_data.push_back(creclienttotalmaxinqlength.get_name_leafdata());
    if (creclienttotalmaxwaitqlength.is_set || is_set(creclienttotalmaxwaitqlength.yfilter)) leaf_name_data.push_back(creclienttotalmaxwaitqlength.get_name_leafdata());
    if (creclienttotalmaxdoneqlength.is_set || is_set(creclienttotalmaxdoneqlength.yfilter)) leaf_name_data.push_back(creclienttotalmaxdoneqlength.get_name_leafdata());
    if (creclienttotalaccessrejects.is_set || is_set(creclienttotalaccessrejects.yfilter)) leaf_name_data.push_back(creclienttotalaccessrejects.get_name_leafdata());
    if (creclienttotalaverageresponsedelay.is_set || is_set(creclienttotalaverageresponsedelay.yfilter)) leaf_name_data.push_back(creclienttotalaverageresponsedelay.get_name_leafdata());
    if (creclientsourceportrangestart.is_set || is_set(creclientsourceportrangestart.yfilter)) leaf_name_data.push_back(creclientsourceportrangestart.get_name_leafdata());
    if (creclientsourceportrangeend.is_set || is_set(creclientsourceportrangeend.yfilter)) leaf_name_data.push_back(creclientsourceportrangeend.get_name_leafdata());
    if (creclientlastusedsourceport.is_set || is_set(creclientlastusedsourceport.yfilter)) leaf_name_data.push_back(creclientlastusedsourceport.get_name_leafdata());
    if (creclientlastusedsourceid.is_set || is_set(creclientlastusedsourceid.yfilter)) leaf_name_data.push_back(creclientlastusedsourceid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCORADIUSEXTMIB::Creclientglobal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCORADIUSEXTMIB::Creclientglobal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCORADIUSEXTMIB::Creclientglobal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "creClientTotalMaxInQLength")
    {
        creclienttotalmaxinqlength = value;
        creclienttotalmaxinqlength.value_namespace = name_space;
        creclienttotalmaxinqlength.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "creClientTotalMaxWaitQLength")
    {
        creclienttotalmaxwaitqlength = value;
        creclienttotalmaxwaitqlength.value_namespace = name_space;
        creclienttotalmaxwaitqlength.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "creClientTotalMaxDoneQLength")
    {
        creclienttotalmaxdoneqlength = value;
        creclienttotalmaxdoneqlength.value_namespace = name_space;
        creclienttotalmaxdoneqlength.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "creClientTotalAccessRejects")
    {
        creclienttotalaccessrejects = value;
        creclienttotalaccessrejects.value_namespace = name_space;
        creclienttotalaccessrejects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "creClientTotalAverageResponseDelay")
    {
        creclienttotalaverageresponsedelay = value;
        creclienttotalaverageresponsedelay.value_namespace = name_space;
        creclienttotalaverageresponsedelay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "creClientSourcePortRangeStart")
    {
        creclientsourceportrangestart = value;
        creclientsourceportrangestart.value_namespace = name_space;
        creclientsourceportrangestart.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "creClientSourcePortRangeEnd")
    {
        creclientsourceportrangeend = value;
        creclientsourceportrangeend.value_namespace = name_space;
        creclientsourceportrangeend.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "creClientLastUsedSourcePort")
    {
        creclientlastusedsourceport = value;
        creclientlastusedsourceport.value_namespace = name_space;
        creclientlastusedsourceport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "creClientLastUsedSourceId")
    {
        creclientlastusedsourceid = value;
        creclientlastusedsourceid.value_namespace = name_space;
        creclientlastusedsourceid.value_namespace_prefix = name_space_prefix;
    }
}

void CISCORADIUSEXTMIB::Creclientglobal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "creClientTotalMaxInQLength")
    {
        creclienttotalmaxinqlength.yfilter = yfilter;
    }
    if(value_path == "creClientTotalMaxWaitQLength")
    {
        creclienttotalmaxwaitqlength.yfilter = yfilter;
    }
    if(value_path == "creClientTotalMaxDoneQLength")
    {
        creclienttotalmaxdoneqlength.yfilter = yfilter;
    }
    if(value_path == "creClientTotalAccessRejects")
    {
        creclienttotalaccessrejects.yfilter = yfilter;
    }
    if(value_path == "creClientTotalAverageResponseDelay")
    {
        creclienttotalaverageresponsedelay.yfilter = yfilter;
    }
    if(value_path == "creClientSourcePortRangeStart")
    {
        creclientsourceportrangestart.yfilter = yfilter;
    }
    if(value_path == "creClientSourcePortRangeEnd")
    {
        creclientsourceportrangeend.yfilter = yfilter;
    }
    if(value_path == "creClientLastUsedSourcePort")
    {
        creclientlastusedsourceport.yfilter = yfilter;
    }
    if(value_path == "creClientLastUsedSourceId")
    {
        creclientlastusedsourceid.yfilter = yfilter;
    }
}

bool CISCORADIUSEXTMIB::Creclientglobal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "creClientTotalMaxInQLength" || name == "creClientTotalMaxWaitQLength" || name == "creClientTotalMaxDoneQLength" || name == "creClientTotalAccessRejects" || name == "creClientTotalAverageResponseDelay" || name == "creClientSourcePortRangeStart" || name == "creClientSourcePortRangeEnd" || name == "creClientLastUsedSourcePort" || name == "creClientLastUsedSourceId")
        return true;
    return false;
}

CISCORADIUSEXTMIB::Creclientauthentication::Creclientauthentication()
    :
    creauthclientbadauthenticators{YType::uint32, "creAuthClientBadAuthenticators"},
    creauthclientunknownresponses{YType::uint32, "creAuthClientUnknownResponses"},
    creauthclienttotalpacketswithresponses{YType::uint32, "creAuthClientTotalPacketsWithResponses"},
    creauthclientbufferallocfailures{YType::uint32, "creAuthClientBufferAllocFailures"},
    creauthclienttotalresponses{YType::uint32, "creAuthClientTotalResponses"},
    creauthclienttotalpacketswithoutresponses{YType::uint32, "creAuthClientTotalPacketsWithoutResponses"},
    creauthclientaverageresponsedelay{YType::int32, "creAuthClientAverageResponseDelay"},
    creauthclientmaxresponsedelay{YType::int32, "creAuthClientMaxResponseDelay"},
    creauthclientmaxbuffersize{YType::uint32, "creAuthClientMaxBufferSize"},
    creauthclienttimeouts{YType::uint32, "creAuthClientTimeouts"},
    creauthclientdupids{YType::uint32, "creAuthClientDupIDs"},
    creauthclientmalformedresponses{YType::uint32, "creAuthClientMalformedResponses"},
    creauthclientlastusedsourceid{YType::uint32, "creAuthClientLastUsedSourceId"}
{

    yang_name = "creClientAuthentication"; yang_parent_name = "CISCO-RADIUS-EXT-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCORADIUSEXTMIB::Creclientauthentication::~Creclientauthentication()
{
}

bool CISCORADIUSEXTMIB::Creclientauthentication::has_data() const
{
    return creauthclientbadauthenticators.is_set
	|| creauthclientunknownresponses.is_set
	|| creauthclienttotalpacketswithresponses.is_set
	|| creauthclientbufferallocfailures.is_set
	|| creauthclienttotalresponses.is_set
	|| creauthclienttotalpacketswithoutresponses.is_set
	|| creauthclientaverageresponsedelay.is_set
	|| creauthclientmaxresponsedelay.is_set
	|| creauthclientmaxbuffersize.is_set
	|| creauthclienttimeouts.is_set
	|| creauthclientdupids.is_set
	|| creauthclientmalformedresponses.is_set
	|| creauthclientlastusedsourceid.is_set;
}

bool CISCORADIUSEXTMIB::Creclientauthentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(creauthclientbadauthenticators.yfilter)
	|| ydk::is_set(creauthclientunknownresponses.yfilter)
	|| ydk::is_set(creauthclienttotalpacketswithresponses.yfilter)
	|| ydk::is_set(creauthclientbufferallocfailures.yfilter)
	|| ydk::is_set(creauthclienttotalresponses.yfilter)
	|| ydk::is_set(creauthclienttotalpacketswithoutresponses.yfilter)
	|| ydk::is_set(creauthclientaverageresponsedelay.yfilter)
	|| ydk::is_set(creauthclientmaxresponsedelay.yfilter)
	|| ydk::is_set(creauthclientmaxbuffersize.yfilter)
	|| ydk::is_set(creauthclienttimeouts.yfilter)
	|| ydk::is_set(creauthclientdupids.yfilter)
	|| ydk::is_set(creauthclientmalformedresponses.yfilter)
	|| ydk::is_set(creauthclientlastusedsourceid.yfilter);
}

std::string CISCORADIUSEXTMIB::Creclientauthentication::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-RADIUS-EXT-MIB:CISCO-RADIUS-EXT-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCORADIUSEXTMIB::Creclientauthentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "creClientAuthentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCORADIUSEXTMIB::Creclientauthentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (creauthclientbadauthenticators.is_set || is_set(creauthclientbadauthenticators.yfilter)) leaf_name_data.push_back(creauthclientbadauthenticators.get_name_leafdata());
    if (creauthclientunknownresponses.is_set || is_set(creauthclientunknownresponses.yfilter)) leaf_name_data.push_back(creauthclientunknownresponses.get_name_leafdata());
    if (creauthclienttotalpacketswithresponses.is_set || is_set(creauthclienttotalpacketswithresponses.yfilter)) leaf_name_data.push_back(creauthclienttotalpacketswithresponses.get_name_leafdata());
    if (creauthclientbufferallocfailures.is_set || is_set(creauthclientbufferallocfailures.yfilter)) leaf_name_data.push_back(creauthclientbufferallocfailures.get_name_leafdata());
    if (creauthclienttotalresponses.is_set || is_set(creauthclienttotalresponses.yfilter)) leaf_name_data.push_back(creauthclienttotalresponses.get_name_leafdata());
    if (creauthclienttotalpacketswithoutresponses.is_set || is_set(creauthclienttotalpacketswithoutresponses.yfilter)) leaf_name_data.push_back(creauthclienttotalpacketswithoutresponses.get_name_leafdata());
    if (creauthclientaverageresponsedelay.is_set || is_set(creauthclientaverageresponsedelay.yfilter)) leaf_name_data.push_back(creauthclientaverageresponsedelay.get_name_leafdata());
    if (creauthclientmaxresponsedelay.is_set || is_set(creauthclientmaxresponsedelay.yfilter)) leaf_name_data.push_back(creauthclientmaxresponsedelay.get_name_leafdata());
    if (creauthclientmaxbuffersize.is_set || is_set(creauthclientmaxbuffersize.yfilter)) leaf_name_data.push_back(creauthclientmaxbuffersize.get_name_leafdata());
    if (creauthclienttimeouts.is_set || is_set(creauthclienttimeouts.yfilter)) leaf_name_data.push_back(creauthclienttimeouts.get_name_leafdata());
    if (creauthclientdupids.is_set || is_set(creauthclientdupids.yfilter)) leaf_name_data.push_back(creauthclientdupids.get_name_leafdata());
    if (creauthclientmalformedresponses.is_set || is_set(creauthclientmalformedresponses.yfilter)) leaf_name_data.push_back(creauthclientmalformedresponses.get_name_leafdata());
    if (creauthclientlastusedsourceid.is_set || is_set(creauthclientlastusedsourceid.yfilter)) leaf_name_data.push_back(creauthclientlastusedsourceid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCORADIUSEXTMIB::Creclientauthentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCORADIUSEXTMIB::Creclientauthentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCORADIUSEXTMIB::Creclientauthentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "creAuthClientBadAuthenticators")
    {
        creauthclientbadauthenticators = value;
        creauthclientbadauthenticators.value_namespace = name_space;
        creauthclientbadauthenticators.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "creAuthClientUnknownResponses")
    {
        creauthclientunknownresponses = value;
        creauthclientunknownresponses.value_namespace = name_space;
        creauthclientunknownresponses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "creAuthClientTotalPacketsWithResponses")
    {
        creauthclienttotalpacketswithresponses = value;
        creauthclienttotalpacketswithresponses.value_namespace = name_space;
        creauthclienttotalpacketswithresponses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "creAuthClientBufferAllocFailures")
    {
        creauthclientbufferallocfailures = value;
        creauthclientbufferallocfailures.value_namespace = name_space;
        creauthclientbufferallocfailures.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "creAuthClientTotalResponses")
    {
        creauthclienttotalresponses = value;
        creauthclienttotalresponses.value_namespace = name_space;
        creauthclienttotalresponses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "creAuthClientTotalPacketsWithoutResponses")
    {
        creauthclienttotalpacketswithoutresponses = value;
        creauthclienttotalpacketswithoutresponses.value_namespace = name_space;
        creauthclienttotalpacketswithoutresponses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "creAuthClientAverageResponseDelay")
    {
        creauthclientaverageresponsedelay = value;
        creauthclientaverageresponsedelay.value_namespace = name_space;
        creauthclientaverageresponsedelay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "creAuthClientMaxResponseDelay")
    {
        creauthclientmaxresponsedelay = value;
        creauthclientmaxresponsedelay.value_namespace = name_space;
        creauthclientmaxresponsedelay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "creAuthClientMaxBufferSize")
    {
        creauthclientmaxbuffersize = value;
        creauthclientmaxbuffersize.value_namespace = name_space;
        creauthclientmaxbuffersize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "creAuthClientTimeouts")
    {
        creauthclienttimeouts = value;
        creauthclienttimeouts.value_namespace = name_space;
        creauthclienttimeouts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "creAuthClientDupIDs")
    {
        creauthclientdupids = value;
        creauthclientdupids.value_namespace = name_space;
        creauthclientdupids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "creAuthClientMalformedResponses")
    {
        creauthclientmalformedresponses = value;
        creauthclientmalformedresponses.value_namespace = name_space;
        creauthclientmalformedresponses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "creAuthClientLastUsedSourceId")
    {
        creauthclientlastusedsourceid = value;
        creauthclientlastusedsourceid.value_namespace = name_space;
        creauthclientlastusedsourceid.value_namespace_prefix = name_space_prefix;
    }
}

void CISCORADIUSEXTMIB::Creclientauthentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "creAuthClientBadAuthenticators")
    {
        creauthclientbadauthenticators.yfilter = yfilter;
    }
    if(value_path == "creAuthClientUnknownResponses")
    {
        creauthclientunknownresponses.yfilter = yfilter;
    }
    if(value_path == "creAuthClientTotalPacketsWithResponses")
    {
        creauthclienttotalpacketswithresponses.yfilter = yfilter;
    }
    if(value_path == "creAuthClientBufferAllocFailures")
    {
        creauthclientbufferallocfailures.yfilter = yfilter;
    }
    if(value_path == "creAuthClientTotalResponses")
    {
        creauthclienttotalresponses.yfilter = yfilter;
    }
    if(value_path == "creAuthClientTotalPacketsWithoutResponses")
    {
        creauthclienttotalpacketswithoutresponses.yfilter = yfilter;
    }
    if(value_path == "creAuthClientAverageResponseDelay")
    {
        creauthclientaverageresponsedelay.yfilter = yfilter;
    }
    if(value_path == "creAuthClientMaxResponseDelay")
    {
        creauthclientmaxresponsedelay.yfilter = yfilter;
    }
    if(value_path == "creAuthClientMaxBufferSize")
    {
        creauthclientmaxbuffersize.yfilter = yfilter;
    }
    if(value_path == "creAuthClientTimeouts")
    {
        creauthclienttimeouts.yfilter = yfilter;
    }
    if(value_path == "creAuthClientDupIDs")
    {
        creauthclientdupids.yfilter = yfilter;
    }
    if(value_path == "creAuthClientMalformedResponses")
    {
        creauthclientmalformedresponses.yfilter = yfilter;
    }
    if(value_path == "creAuthClientLastUsedSourceId")
    {
        creauthclientlastusedsourceid.yfilter = yfilter;
    }
}

bool CISCORADIUSEXTMIB::Creclientauthentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "creAuthClientBadAuthenticators" || name == "creAuthClientUnknownResponses" || name == "creAuthClientTotalPacketsWithResponses" || name == "creAuthClientBufferAllocFailures" || name == "creAuthClientTotalResponses" || name == "creAuthClientTotalPacketsWithoutResponses" || name == "creAuthClientAverageResponseDelay" || name == "creAuthClientMaxResponseDelay" || name == "creAuthClientMaxBufferSize" || name == "creAuthClientTimeouts" || name == "creAuthClientDupIDs" || name == "creAuthClientMalformedResponses" || name == "creAuthClientLastUsedSourceId")
        return true;
    return false;
}

CISCORADIUSEXTMIB::Creclientaccounting::Creclientaccounting()
    :
    creacctclientbadauthenticators{YType::uint32, "creAcctClientBadAuthenticators"},
    creacctclientunknownresponses{YType::uint32, "creAcctClientUnknownResponses"},
    creacctclienttotalpacketswithresponses{YType::uint32, "creAcctClientTotalPacketsWithResponses"},
    creacctclientbufferallocfailures{YType::uint32, "creAcctClientBufferAllocFailures"},
    creacctclienttotalresponses{YType::uint32, "creAcctClientTotalResponses"},
    creacctclienttotalpacketswithoutresponses{YType::uint32, "creAcctClientTotalPacketsWithoutResponses"},
    creacctclientaverageresponsedelay{YType::int32, "creAcctClientAverageResponseDelay"},
    creacctclientmaxresponsedelay{YType::int32, "creAcctClientMaxResponseDelay"},
    creacctclientmaxbuffersize{YType::uint32, "creAcctClientMaxBufferSize"},
    creacctclienttimeouts{YType::uint32, "creAcctClientTimeouts"},
    creacctclientdupids{YType::uint32, "creAcctClientDupIDs"},
    creacctclientmalformedresponses{YType::uint32, "creAcctClientMalformedResponses"},
    creacctclientlastusedsourceid{YType::uint32, "creAcctClientLastUsedSourceId"}
{

    yang_name = "creClientAccounting"; yang_parent_name = "CISCO-RADIUS-EXT-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCORADIUSEXTMIB::Creclientaccounting::~Creclientaccounting()
{
}

bool CISCORADIUSEXTMIB::Creclientaccounting::has_data() const
{
    return creacctclientbadauthenticators.is_set
	|| creacctclientunknownresponses.is_set
	|| creacctclienttotalpacketswithresponses.is_set
	|| creacctclientbufferallocfailures.is_set
	|| creacctclienttotalresponses.is_set
	|| creacctclienttotalpacketswithoutresponses.is_set
	|| creacctclientaverageresponsedelay.is_set
	|| creacctclientmaxresponsedelay.is_set
	|| creacctclientmaxbuffersize.is_set
	|| creacctclienttimeouts.is_set
	|| creacctclientdupids.is_set
	|| creacctclientmalformedresponses.is_set
	|| creacctclientlastusedsourceid.is_set;
}

bool CISCORADIUSEXTMIB::Creclientaccounting::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(creacctclientbadauthenticators.yfilter)
	|| ydk::is_set(creacctclientunknownresponses.yfilter)
	|| ydk::is_set(creacctclienttotalpacketswithresponses.yfilter)
	|| ydk::is_set(creacctclientbufferallocfailures.yfilter)
	|| ydk::is_set(creacctclienttotalresponses.yfilter)
	|| ydk::is_set(creacctclienttotalpacketswithoutresponses.yfilter)
	|| ydk::is_set(creacctclientaverageresponsedelay.yfilter)
	|| ydk::is_set(creacctclientmaxresponsedelay.yfilter)
	|| ydk::is_set(creacctclientmaxbuffersize.yfilter)
	|| ydk::is_set(creacctclienttimeouts.yfilter)
	|| ydk::is_set(creacctclientdupids.yfilter)
	|| ydk::is_set(creacctclientmalformedresponses.yfilter)
	|| ydk::is_set(creacctclientlastusedsourceid.yfilter);
}

std::string CISCORADIUSEXTMIB::Creclientaccounting::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-RADIUS-EXT-MIB:CISCO-RADIUS-EXT-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCORADIUSEXTMIB::Creclientaccounting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "creClientAccounting";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCORADIUSEXTMIB::Creclientaccounting::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (creacctclientbadauthenticators.is_set || is_set(creacctclientbadauthenticators.yfilter)) leaf_name_data.push_back(creacctclientbadauthenticators.get_name_leafdata());
    if (creacctclientunknownresponses.is_set || is_set(creacctclientunknownresponses.yfilter)) leaf_name_data.push_back(creacctclientunknownresponses.get_name_leafdata());
    if (creacctclienttotalpacketswithresponses.is_set || is_set(creacctclienttotalpacketswithresponses.yfilter)) leaf_name_data.push_back(creacctclienttotalpacketswithresponses.get_name_leafdata());
    if (creacctclientbufferallocfailures.is_set || is_set(creacctclientbufferallocfailures.yfilter)) leaf_name_data.push_back(creacctclientbufferallocfailures.get_name_leafdata());
    if (creacctclienttotalresponses.is_set || is_set(creacctclienttotalresponses.yfilter)) leaf_name_data.push_back(creacctclienttotalresponses.get_name_leafdata());
    if (creacctclienttotalpacketswithoutresponses.is_set || is_set(creacctclienttotalpacketswithoutresponses.yfilter)) leaf_name_data.push_back(creacctclienttotalpacketswithoutresponses.get_name_leafdata());
    if (creacctclientaverageresponsedelay.is_set || is_set(creacctclientaverageresponsedelay.yfilter)) leaf_name_data.push_back(creacctclientaverageresponsedelay.get_name_leafdata());
    if (creacctclientmaxresponsedelay.is_set || is_set(creacctclientmaxresponsedelay.yfilter)) leaf_name_data.push_back(creacctclientmaxresponsedelay.get_name_leafdata());
    if (creacctclientmaxbuffersize.is_set || is_set(creacctclientmaxbuffersize.yfilter)) leaf_name_data.push_back(creacctclientmaxbuffersize.get_name_leafdata());
    if (creacctclienttimeouts.is_set || is_set(creacctclienttimeouts.yfilter)) leaf_name_data.push_back(creacctclienttimeouts.get_name_leafdata());
    if (creacctclientdupids.is_set || is_set(creacctclientdupids.yfilter)) leaf_name_data.push_back(creacctclientdupids.get_name_leafdata());
    if (creacctclientmalformedresponses.is_set || is_set(creacctclientmalformedresponses.yfilter)) leaf_name_data.push_back(creacctclientmalformedresponses.get_name_leafdata());
    if (creacctclientlastusedsourceid.is_set || is_set(creacctclientlastusedsourceid.yfilter)) leaf_name_data.push_back(creacctclientlastusedsourceid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCORADIUSEXTMIB::Creclientaccounting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCORADIUSEXTMIB::Creclientaccounting::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCORADIUSEXTMIB::Creclientaccounting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "creAcctClientBadAuthenticators")
    {
        creacctclientbadauthenticators = value;
        creacctclientbadauthenticators.value_namespace = name_space;
        creacctclientbadauthenticators.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "creAcctClientUnknownResponses")
    {
        creacctclientunknownresponses = value;
        creacctclientunknownresponses.value_namespace = name_space;
        creacctclientunknownresponses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "creAcctClientTotalPacketsWithResponses")
    {
        creacctclienttotalpacketswithresponses = value;
        creacctclienttotalpacketswithresponses.value_namespace = name_space;
        creacctclienttotalpacketswithresponses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "creAcctClientBufferAllocFailures")
    {
        creacctclientbufferallocfailures = value;
        creacctclientbufferallocfailures.value_namespace = name_space;
        creacctclientbufferallocfailures.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "creAcctClientTotalResponses")
    {
        creacctclienttotalresponses = value;
        creacctclienttotalresponses.value_namespace = name_space;
        creacctclienttotalresponses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "creAcctClientTotalPacketsWithoutResponses")
    {
        creacctclienttotalpacketswithoutresponses = value;
        creacctclienttotalpacketswithoutresponses.value_namespace = name_space;
        creacctclienttotalpacketswithoutresponses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "creAcctClientAverageResponseDelay")
    {
        creacctclientaverageresponsedelay = value;
        creacctclientaverageresponsedelay.value_namespace = name_space;
        creacctclientaverageresponsedelay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "creAcctClientMaxResponseDelay")
    {
        creacctclientmaxresponsedelay = value;
        creacctclientmaxresponsedelay.value_namespace = name_space;
        creacctclientmaxresponsedelay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "creAcctClientMaxBufferSize")
    {
        creacctclientmaxbuffersize = value;
        creacctclientmaxbuffersize.value_namespace = name_space;
        creacctclientmaxbuffersize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "creAcctClientTimeouts")
    {
        creacctclienttimeouts = value;
        creacctclienttimeouts.value_namespace = name_space;
        creacctclienttimeouts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "creAcctClientDupIDs")
    {
        creacctclientdupids = value;
        creacctclientdupids.value_namespace = name_space;
        creacctclientdupids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "creAcctClientMalformedResponses")
    {
        creacctclientmalformedresponses = value;
        creacctclientmalformedresponses.value_namespace = name_space;
        creacctclientmalformedresponses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "creAcctClientLastUsedSourceId")
    {
        creacctclientlastusedsourceid = value;
        creacctclientlastusedsourceid.value_namespace = name_space;
        creacctclientlastusedsourceid.value_namespace_prefix = name_space_prefix;
    }
}

void CISCORADIUSEXTMIB::Creclientaccounting::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "creAcctClientBadAuthenticators")
    {
        creacctclientbadauthenticators.yfilter = yfilter;
    }
    if(value_path == "creAcctClientUnknownResponses")
    {
        creacctclientunknownresponses.yfilter = yfilter;
    }
    if(value_path == "creAcctClientTotalPacketsWithResponses")
    {
        creacctclienttotalpacketswithresponses.yfilter = yfilter;
    }
    if(value_path == "creAcctClientBufferAllocFailures")
    {
        creacctclientbufferallocfailures.yfilter = yfilter;
    }
    if(value_path == "creAcctClientTotalResponses")
    {
        creacctclienttotalresponses.yfilter = yfilter;
    }
    if(value_path == "creAcctClientTotalPacketsWithoutResponses")
    {
        creacctclienttotalpacketswithoutresponses.yfilter = yfilter;
    }
    if(value_path == "creAcctClientAverageResponseDelay")
    {
        creacctclientaverageresponsedelay.yfilter = yfilter;
    }
    if(value_path == "creAcctClientMaxResponseDelay")
    {
        creacctclientmaxresponsedelay.yfilter = yfilter;
    }
    if(value_path == "creAcctClientMaxBufferSize")
    {
        creacctclientmaxbuffersize.yfilter = yfilter;
    }
    if(value_path == "creAcctClientTimeouts")
    {
        creacctclienttimeouts.yfilter = yfilter;
    }
    if(value_path == "creAcctClientDupIDs")
    {
        creacctclientdupids.yfilter = yfilter;
    }
    if(value_path == "creAcctClientMalformedResponses")
    {
        creacctclientmalformedresponses.yfilter = yfilter;
    }
    if(value_path == "creAcctClientLastUsedSourceId")
    {
        creacctclientlastusedsourceid.yfilter = yfilter;
    }
}

bool CISCORADIUSEXTMIB::Creclientaccounting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "creAcctClientBadAuthenticators" || name == "creAcctClientUnknownResponses" || name == "creAcctClientTotalPacketsWithResponses" || name == "creAcctClientBufferAllocFailures" || name == "creAcctClientTotalResponses" || name == "creAcctClientTotalPacketsWithoutResponses" || name == "creAcctClientAverageResponseDelay" || name == "creAcctClientMaxResponseDelay" || name == "creAcctClientMaxBufferSize" || name == "creAcctClientTimeouts" || name == "creAcctClientDupIDs" || name == "creAcctClientMalformedResponses" || name == "creAcctClientLastUsedSourceId")
        return true;
    return false;
}


}
}

