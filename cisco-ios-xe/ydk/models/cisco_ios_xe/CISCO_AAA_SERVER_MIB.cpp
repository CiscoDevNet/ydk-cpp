
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_AAA_SERVER_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_AAA_SERVER_MIB {

CISCOAAASERVERMIB::CISCOAAASERVERMIB()
    :
    casconfig(std::make_shared<CISCOAAASERVERMIB::CasConfig>())
    , casconfigtable(std::make_shared<CISCOAAASERVERMIB::CasConfigTable>())
{
    casconfig->parent = this;
    casconfigtable->parent = this;

    yang_name = "CISCO-AAA-SERVER-MIB"; yang_parent_name = "CISCO-AAA-SERVER-MIB"; is_top_level_class = true; has_list_ancestor = false; 
}

CISCOAAASERVERMIB::~CISCOAAASERVERMIB()
{
}

bool CISCOAAASERVERMIB::has_data() const
{
    if (is_presence_container) return true;
    return (casconfig !=  nullptr && casconfig->has_data())
	|| (casconfigtable !=  nullptr && casconfigtable->has_data());
}

bool CISCOAAASERVERMIB::has_operation() const
{
    return is_set(yfilter)
	|| (casconfig !=  nullptr && casconfig->has_operation())
	|| (casconfigtable !=  nullptr && casconfigtable->has_operation());
}

std::string CISCOAAASERVERMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-AAA-SERVER-MIB:CISCO-AAA-SERVER-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOAAASERVERMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOAAASERVERMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "casConfig")
    {
        if(casconfig == nullptr)
        {
            casconfig = std::make_shared<CISCOAAASERVERMIB::CasConfig>();
        }
        return casconfig;
    }

    if(child_yang_name == "casConfigTable")
    {
        if(casconfigtable == nullptr)
        {
            casconfigtable = std::make_shared<CISCOAAASERVERMIB::CasConfigTable>();
        }
        return casconfigtable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOAAASERVERMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(casconfig != nullptr)
    {
        _children["casConfig"] = casconfig;
    }

    if(casconfigtable != nullptr)
    {
        _children["casConfigTable"] = casconfigtable;
    }

    return _children;
}

void CISCOAAASERVERMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOAAASERVERMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> CISCOAAASERVERMIB::clone_ptr() const
{
    return std::make_shared<CISCOAAASERVERMIB>();
}

std::string CISCOAAASERVERMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CISCOAAASERVERMIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CISCOAAASERVERMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CISCOAAASERVERMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CISCOAAASERVERMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "casConfig" || name == "casConfigTable")
        return true;
    return false;
}

CISCOAAASERVERMIB::CasConfig::CasConfig()
    :
    casserverstatechangeenable{YType::boolean, "casServerStateChangeEnable"}
{

    yang_name = "casConfig"; yang_parent_name = "CISCO-AAA-SERVER-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOAAASERVERMIB::CasConfig::~CasConfig()
{
}

bool CISCOAAASERVERMIB::CasConfig::has_data() const
{
    if (is_presence_container) return true;
    return casserverstatechangeenable.is_set;
}

bool CISCOAAASERVERMIB::CasConfig::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(casserverstatechangeenable.yfilter);
}

std::string CISCOAAASERVERMIB::CasConfig::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-AAA-SERVER-MIB:CISCO-AAA-SERVER-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOAAASERVERMIB::CasConfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "casConfig";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOAAASERVERMIB::CasConfig::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (casserverstatechangeenable.is_set || is_set(casserverstatechangeenable.yfilter)) leaf_name_data.push_back(casserverstatechangeenable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOAAASERVERMIB::CasConfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOAAASERVERMIB::CasConfig::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOAAASERVERMIB::CasConfig::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "casServerStateChangeEnable")
    {
        casserverstatechangeenable = value;
        casserverstatechangeenable.value_namespace = name_space;
        casserverstatechangeenable.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOAAASERVERMIB::CasConfig::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "casServerStateChangeEnable")
    {
        casserverstatechangeenable.yfilter = yfilter;
    }
}

bool CISCOAAASERVERMIB::CasConfig::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "casServerStateChangeEnable")
        return true;
    return false;
}

CISCOAAASERVERMIB::CasConfigTable::CasConfigTable()
    :
    casconfigentry(this, {"casprotocol", "casindex"})
{

    yang_name = "casConfigTable"; yang_parent_name = "CISCO-AAA-SERVER-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOAAASERVERMIB::CasConfigTable::~CasConfigTable()
{
}

bool CISCOAAASERVERMIB::CasConfigTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<casconfigentry.len(); index++)
    {
        if(casconfigentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOAAASERVERMIB::CasConfigTable::has_operation() const
{
    for (std::size_t index=0; index<casconfigentry.len(); index++)
    {
        if(casconfigentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOAAASERVERMIB::CasConfigTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-AAA-SERVER-MIB:CISCO-AAA-SERVER-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOAAASERVERMIB::CasConfigTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "casConfigTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOAAASERVERMIB::CasConfigTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOAAASERVERMIB::CasConfigTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "casConfigEntry")
    {
        auto ent_ = std::make_shared<CISCOAAASERVERMIB::CasConfigTable::CasConfigEntry>();
        ent_->parent = this;
        casconfigentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOAAASERVERMIB::CasConfigTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : casconfigentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOAAASERVERMIB::CasConfigTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOAAASERVERMIB::CasConfigTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOAAASERVERMIB::CasConfigTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "casConfigEntry")
        return true;
    return false;
}

CISCOAAASERVERMIB::CasConfigTable::CasConfigEntry::CasConfigEntry()
    :
    casprotocol{YType::enumeration, "casProtocol"},
    casindex{YType::uint32, "casIndex"},
    casaddress{YType::str, "casAddress"},
    casauthenport{YType::int32, "casAuthenPort"},
    casacctport{YType::int32, "casAcctPort"},
    caskey{YType::str, "casKey"},
    caspriority{YType::uint32, "casPriority"},
    casconfigrowstatus{YType::enumeration, "casConfigRowStatus"},
    casauthenrequests{YType::uint32, "casAuthenRequests"},
    casauthenrequesttimeouts{YType::uint32, "casAuthenRequestTimeouts"},
    casauthenunexpectedresponses{YType::uint32, "casAuthenUnexpectedResponses"},
    casauthenservererrorresponses{YType::uint32, "casAuthenServerErrorResponses"},
    casauthenincorrectresponses{YType::uint32, "casAuthenIncorrectResponses"},
    casauthenresponsetime{YType::int32, "casAuthenResponseTime"},
    casauthentransactionsuccesses{YType::uint32, "casAuthenTransactionSuccesses"},
    casauthentransactionfailures{YType::uint32, "casAuthenTransactionFailures"},
    casauthorrequests{YType::uint32, "casAuthorRequests"},
    casauthorrequesttimeouts{YType::uint32, "casAuthorRequestTimeouts"},
    casauthorunexpectedresponses{YType::uint32, "casAuthorUnexpectedResponses"},
    casauthorservererrorresponses{YType::uint32, "casAuthorServerErrorResponses"},
    casauthorincorrectresponses{YType::uint32, "casAuthorIncorrectResponses"},
    casauthorresponsetime{YType::int32, "casAuthorResponseTime"},
    casauthortransactionsuccesses{YType::uint32, "casAuthorTransactionSuccesses"},
    casauthortransactionfailures{YType::uint32, "casAuthorTransactionFailures"},
    casacctrequests{YType::uint32, "casAcctRequests"},
    casacctrequesttimeouts{YType::uint32, "casAcctRequestTimeouts"},
    casacctunexpectedresponses{YType::uint32, "casAcctUnexpectedResponses"},
    casacctservererrorresponses{YType::uint32, "casAcctServerErrorResponses"},
    casacctincorrectresponses{YType::uint32, "casAcctIncorrectResponses"},
    casacctresponsetime{YType::int32, "casAcctResponseTime"},
    casaccttransactionsuccesses{YType::uint32, "casAcctTransactionSuccesses"},
    casaccttransactionfailures{YType::uint32, "casAcctTransactionFailures"},
    casstate{YType::enumeration, "casState"},
    cascurrentstateduration{YType::int32, "casCurrentStateDuration"},
    caspreviousstateduration{YType::int32, "casPreviousStateDuration"},
    castotaldeadtime{YType::int32, "casTotalDeadTime"},
    casdeadcount{YType::uint32, "casDeadCount"}
{

    yang_name = "casConfigEntry"; yang_parent_name = "casConfigTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOAAASERVERMIB::CasConfigTable::CasConfigEntry::~CasConfigEntry()
{
}

bool CISCOAAASERVERMIB::CasConfigTable::CasConfigEntry::has_data() const
{
    if (is_presence_container) return true;
    return casprotocol.is_set
	|| casindex.is_set
	|| casaddress.is_set
	|| casauthenport.is_set
	|| casacctport.is_set
	|| caskey.is_set
	|| caspriority.is_set
	|| casconfigrowstatus.is_set
	|| casauthenrequests.is_set
	|| casauthenrequesttimeouts.is_set
	|| casauthenunexpectedresponses.is_set
	|| casauthenservererrorresponses.is_set
	|| casauthenincorrectresponses.is_set
	|| casauthenresponsetime.is_set
	|| casauthentransactionsuccesses.is_set
	|| casauthentransactionfailures.is_set
	|| casauthorrequests.is_set
	|| casauthorrequesttimeouts.is_set
	|| casauthorunexpectedresponses.is_set
	|| casauthorservererrorresponses.is_set
	|| casauthorincorrectresponses.is_set
	|| casauthorresponsetime.is_set
	|| casauthortransactionsuccesses.is_set
	|| casauthortransactionfailures.is_set
	|| casacctrequests.is_set
	|| casacctrequesttimeouts.is_set
	|| casacctunexpectedresponses.is_set
	|| casacctservererrorresponses.is_set
	|| casacctincorrectresponses.is_set
	|| casacctresponsetime.is_set
	|| casaccttransactionsuccesses.is_set
	|| casaccttransactionfailures.is_set
	|| casstate.is_set
	|| cascurrentstateduration.is_set
	|| caspreviousstateduration.is_set
	|| castotaldeadtime.is_set
	|| casdeadcount.is_set;
}

bool CISCOAAASERVERMIB::CasConfigTable::CasConfigEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(casprotocol.yfilter)
	|| ydk::is_set(casindex.yfilter)
	|| ydk::is_set(casaddress.yfilter)
	|| ydk::is_set(casauthenport.yfilter)
	|| ydk::is_set(casacctport.yfilter)
	|| ydk::is_set(caskey.yfilter)
	|| ydk::is_set(caspriority.yfilter)
	|| ydk::is_set(casconfigrowstatus.yfilter)
	|| ydk::is_set(casauthenrequests.yfilter)
	|| ydk::is_set(casauthenrequesttimeouts.yfilter)
	|| ydk::is_set(casauthenunexpectedresponses.yfilter)
	|| ydk::is_set(casauthenservererrorresponses.yfilter)
	|| ydk::is_set(casauthenincorrectresponses.yfilter)
	|| ydk::is_set(casauthenresponsetime.yfilter)
	|| ydk::is_set(casauthentransactionsuccesses.yfilter)
	|| ydk::is_set(casauthentransactionfailures.yfilter)
	|| ydk::is_set(casauthorrequests.yfilter)
	|| ydk::is_set(casauthorrequesttimeouts.yfilter)
	|| ydk::is_set(casauthorunexpectedresponses.yfilter)
	|| ydk::is_set(casauthorservererrorresponses.yfilter)
	|| ydk::is_set(casauthorincorrectresponses.yfilter)
	|| ydk::is_set(casauthorresponsetime.yfilter)
	|| ydk::is_set(casauthortransactionsuccesses.yfilter)
	|| ydk::is_set(casauthortransactionfailures.yfilter)
	|| ydk::is_set(casacctrequests.yfilter)
	|| ydk::is_set(casacctrequesttimeouts.yfilter)
	|| ydk::is_set(casacctunexpectedresponses.yfilter)
	|| ydk::is_set(casacctservererrorresponses.yfilter)
	|| ydk::is_set(casacctincorrectresponses.yfilter)
	|| ydk::is_set(casacctresponsetime.yfilter)
	|| ydk::is_set(casaccttransactionsuccesses.yfilter)
	|| ydk::is_set(casaccttransactionfailures.yfilter)
	|| ydk::is_set(casstate.yfilter)
	|| ydk::is_set(cascurrentstateduration.yfilter)
	|| ydk::is_set(caspreviousstateduration.yfilter)
	|| ydk::is_set(castotaldeadtime.yfilter)
	|| ydk::is_set(casdeadcount.yfilter);
}

std::string CISCOAAASERVERMIB::CasConfigTable::CasConfigEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-AAA-SERVER-MIB:CISCO-AAA-SERVER-MIB/casConfigTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOAAASERVERMIB::CasConfigTable::CasConfigEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "casConfigEntry";
    ADD_KEY_TOKEN(casprotocol, "casProtocol");
    ADD_KEY_TOKEN(casindex, "casIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOAAASERVERMIB::CasConfigTable::CasConfigEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (casprotocol.is_set || is_set(casprotocol.yfilter)) leaf_name_data.push_back(casprotocol.get_name_leafdata());
    if (casindex.is_set || is_set(casindex.yfilter)) leaf_name_data.push_back(casindex.get_name_leafdata());
    if (casaddress.is_set || is_set(casaddress.yfilter)) leaf_name_data.push_back(casaddress.get_name_leafdata());
    if (casauthenport.is_set || is_set(casauthenport.yfilter)) leaf_name_data.push_back(casauthenport.get_name_leafdata());
    if (casacctport.is_set || is_set(casacctport.yfilter)) leaf_name_data.push_back(casacctport.get_name_leafdata());
    if (caskey.is_set || is_set(caskey.yfilter)) leaf_name_data.push_back(caskey.get_name_leafdata());
    if (caspriority.is_set || is_set(caspriority.yfilter)) leaf_name_data.push_back(caspriority.get_name_leafdata());
    if (casconfigrowstatus.is_set || is_set(casconfigrowstatus.yfilter)) leaf_name_data.push_back(casconfigrowstatus.get_name_leafdata());
    if (casauthenrequests.is_set || is_set(casauthenrequests.yfilter)) leaf_name_data.push_back(casauthenrequests.get_name_leafdata());
    if (casauthenrequesttimeouts.is_set || is_set(casauthenrequesttimeouts.yfilter)) leaf_name_data.push_back(casauthenrequesttimeouts.get_name_leafdata());
    if (casauthenunexpectedresponses.is_set || is_set(casauthenunexpectedresponses.yfilter)) leaf_name_data.push_back(casauthenunexpectedresponses.get_name_leafdata());
    if (casauthenservererrorresponses.is_set || is_set(casauthenservererrorresponses.yfilter)) leaf_name_data.push_back(casauthenservererrorresponses.get_name_leafdata());
    if (casauthenincorrectresponses.is_set || is_set(casauthenincorrectresponses.yfilter)) leaf_name_data.push_back(casauthenincorrectresponses.get_name_leafdata());
    if (casauthenresponsetime.is_set || is_set(casauthenresponsetime.yfilter)) leaf_name_data.push_back(casauthenresponsetime.get_name_leafdata());
    if (casauthentransactionsuccesses.is_set || is_set(casauthentransactionsuccesses.yfilter)) leaf_name_data.push_back(casauthentransactionsuccesses.get_name_leafdata());
    if (casauthentransactionfailures.is_set || is_set(casauthentransactionfailures.yfilter)) leaf_name_data.push_back(casauthentransactionfailures.get_name_leafdata());
    if (casauthorrequests.is_set || is_set(casauthorrequests.yfilter)) leaf_name_data.push_back(casauthorrequests.get_name_leafdata());
    if (casauthorrequesttimeouts.is_set || is_set(casauthorrequesttimeouts.yfilter)) leaf_name_data.push_back(casauthorrequesttimeouts.get_name_leafdata());
    if (casauthorunexpectedresponses.is_set || is_set(casauthorunexpectedresponses.yfilter)) leaf_name_data.push_back(casauthorunexpectedresponses.get_name_leafdata());
    if (casauthorservererrorresponses.is_set || is_set(casauthorservererrorresponses.yfilter)) leaf_name_data.push_back(casauthorservererrorresponses.get_name_leafdata());
    if (casauthorincorrectresponses.is_set || is_set(casauthorincorrectresponses.yfilter)) leaf_name_data.push_back(casauthorincorrectresponses.get_name_leafdata());
    if (casauthorresponsetime.is_set || is_set(casauthorresponsetime.yfilter)) leaf_name_data.push_back(casauthorresponsetime.get_name_leafdata());
    if (casauthortransactionsuccesses.is_set || is_set(casauthortransactionsuccesses.yfilter)) leaf_name_data.push_back(casauthortransactionsuccesses.get_name_leafdata());
    if (casauthortransactionfailures.is_set || is_set(casauthortransactionfailures.yfilter)) leaf_name_data.push_back(casauthortransactionfailures.get_name_leafdata());
    if (casacctrequests.is_set || is_set(casacctrequests.yfilter)) leaf_name_data.push_back(casacctrequests.get_name_leafdata());
    if (casacctrequesttimeouts.is_set || is_set(casacctrequesttimeouts.yfilter)) leaf_name_data.push_back(casacctrequesttimeouts.get_name_leafdata());
    if (casacctunexpectedresponses.is_set || is_set(casacctunexpectedresponses.yfilter)) leaf_name_data.push_back(casacctunexpectedresponses.get_name_leafdata());
    if (casacctservererrorresponses.is_set || is_set(casacctservererrorresponses.yfilter)) leaf_name_data.push_back(casacctservererrorresponses.get_name_leafdata());
    if (casacctincorrectresponses.is_set || is_set(casacctincorrectresponses.yfilter)) leaf_name_data.push_back(casacctincorrectresponses.get_name_leafdata());
    if (casacctresponsetime.is_set || is_set(casacctresponsetime.yfilter)) leaf_name_data.push_back(casacctresponsetime.get_name_leafdata());
    if (casaccttransactionsuccesses.is_set || is_set(casaccttransactionsuccesses.yfilter)) leaf_name_data.push_back(casaccttransactionsuccesses.get_name_leafdata());
    if (casaccttransactionfailures.is_set || is_set(casaccttransactionfailures.yfilter)) leaf_name_data.push_back(casaccttransactionfailures.get_name_leafdata());
    if (casstate.is_set || is_set(casstate.yfilter)) leaf_name_data.push_back(casstate.get_name_leafdata());
    if (cascurrentstateduration.is_set || is_set(cascurrentstateduration.yfilter)) leaf_name_data.push_back(cascurrentstateduration.get_name_leafdata());
    if (caspreviousstateduration.is_set || is_set(caspreviousstateduration.yfilter)) leaf_name_data.push_back(caspreviousstateduration.get_name_leafdata());
    if (castotaldeadtime.is_set || is_set(castotaldeadtime.yfilter)) leaf_name_data.push_back(castotaldeadtime.get_name_leafdata());
    if (casdeadcount.is_set || is_set(casdeadcount.yfilter)) leaf_name_data.push_back(casdeadcount.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOAAASERVERMIB::CasConfigTable::CasConfigEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOAAASERVERMIB::CasConfigTable::CasConfigEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOAAASERVERMIB::CasConfigTable::CasConfigEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "casProtocol")
    {
        casprotocol = value;
        casprotocol.value_namespace = name_space;
        casprotocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "casIndex")
    {
        casindex = value;
        casindex.value_namespace = name_space;
        casindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "casAddress")
    {
        casaddress = value;
        casaddress.value_namespace = name_space;
        casaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "casAuthenPort")
    {
        casauthenport = value;
        casauthenport.value_namespace = name_space;
        casauthenport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "casAcctPort")
    {
        casacctport = value;
        casacctport.value_namespace = name_space;
        casacctport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "casKey")
    {
        caskey = value;
        caskey.value_namespace = name_space;
        caskey.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "casPriority")
    {
        caspriority = value;
        caspriority.value_namespace = name_space;
        caspriority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "casConfigRowStatus")
    {
        casconfigrowstatus = value;
        casconfigrowstatus.value_namespace = name_space;
        casconfigrowstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "casAuthenRequests")
    {
        casauthenrequests = value;
        casauthenrequests.value_namespace = name_space;
        casauthenrequests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "casAuthenRequestTimeouts")
    {
        casauthenrequesttimeouts = value;
        casauthenrequesttimeouts.value_namespace = name_space;
        casauthenrequesttimeouts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "casAuthenUnexpectedResponses")
    {
        casauthenunexpectedresponses = value;
        casauthenunexpectedresponses.value_namespace = name_space;
        casauthenunexpectedresponses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "casAuthenServerErrorResponses")
    {
        casauthenservererrorresponses = value;
        casauthenservererrorresponses.value_namespace = name_space;
        casauthenservererrorresponses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "casAuthenIncorrectResponses")
    {
        casauthenincorrectresponses = value;
        casauthenincorrectresponses.value_namespace = name_space;
        casauthenincorrectresponses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "casAuthenResponseTime")
    {
        casauthenresponsetime = value;
        casauthenresponsetime.value_namespace = name_space;
        casauthenresponsetime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "casAuthenTransactionSuccesses")
    {
        casauthentransactionsuccesses = value;
        casauthentransactionsuccesses.value_namespace = name_space;
        casauthentransactionsuccesses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "casAuthenTransactionFailures")
    {
        casauthentransactionfailures = value;
        casauthentransactionfailures.value_namespace = name_space;
        casauthentransactionfailures.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "casAuthorRequests")
    {
        casauthorrequests = value;
        casauthorrequests.value_namespace = name_space;
        casauthorrequests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "casAuthorRequestTimeouts")
    {
        casauthorrequesttimeouts = value;
        casauthorrequesttimeouts.value_namespace = name_space;
        casauthorrequesttimeouts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "casAuthorUnexpectedResponses")
    {
        casauthorunexpectedresponses = value;
        casauthorunexpectedresponses.value_namespace = name_space;
        casauthorunexpectedresponses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "casAuthorServerErrorResponses")
    {
        casauthorservererrorresponses = value;
        casauthorservererrorresponses.value_namespace = name_space;
        casauthorservererrorresponses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "casAuthorIncorrectResponses")
    {
        casauthorincorrectresponses = value;
        casauthorincorrectresponses.value_namespace = name_space;
        casauthorincorrectresponses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "casAuthorResponseTime")
    {
        casauthorresponsetime = value;
        casauthorresponsetime.value_namespace = name_space;
        casauthorresponsetime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "casAuthorTransactionSuccesses")
    {
        casauthortransactionsuccesses = value;
        casauthortransactionsuccesses.value_namespace = name_space;
        casauthortransactionsuccesses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "casAuthorTransactionFailures")
    {
        casauthortransactionfailures = value;
        casauthortransactionfailures.value_namespace = name_space;
        casauthortransactionfailures.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "casAcctRequests")
    {
        casacctrequests = value;
        casacctrequests.value_namespace = name_space;
        casacctrequests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "casAcctRequestTimeouts")
    {
        casacctrequesttimeouts = value;
        casacctrequesttimeouts.value_namespace = name_space;
        casacctrequesttimeouts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "casAcctUnexpectedResponses")
    {
        casacctunexpectedresponses = value;
        casacctunexpectedresponses.value_namespace = name_space;
        casacctunexpectedresponses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "casAcctServerErrorResponses")
    {
        casacctservererrorresponses = value;
        casacctservererrorresponses.value_namespace = name_space;
        casacctservererrorresponses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "casAcctIncorrectResponses")
    {
        casacctincorrectresponses = value;
        casacctincorrectresponses.value_namespace = name_space;
        casacctincorrectresponses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "casAcctResponseTime")
    {
        casacctresponsetime = value;
        casacctresponsetime.value_namespace = name_space;
        casacctresponsetime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "casAcctTransactionSuccesses")
    {
        casaccttransactionsuccesses = value;
        casaccttransactionsuccesses.value_namespace = name_space;
        casaccttransactionsuccesses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "casAcctTransactionFailures")
    {
        casaccttransactionfailures = value;
        casaccttransactionfailures.value_namespace = name_space;
        casaccttransactionfailures.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "casState")
    {
        casstate = value;
        casstate.value_namespace = name_space;
        casstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "casCurrentStateDuration")
    {
        cascurrentstateduration = value;
        cascurrentstateduration.value_namespace = name_space;
        cascurrentstateduration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "casPreviousStateDuration")
    {
        caspreviousstateduration = value;
        caspreviousstateduration.value_namespace = name_space;
        caspreviousstateduration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "casTotalDeadTime")
    {
        castotaldeadtime = value;
        castotaldeadtime.value_namespace = name_space;
        castotaldeadtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "casDeadCount")
    {
        casdeadcount = value;
        casdeadcount.value_namespace = name_space;
        casdeadcount.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOAAASERVERMIB::CasConfigTable::CasConfigEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "casProtocol")
    {
        casprotocol.yfilter = yfilter;
    }
    if(value_path == "casIndex")
    {
        casindex.yfilter = yfilter;
    }
    if(value_path == "casAddress")
    {
        casaddress.yfilter = yfilter;
    }
    if(value_path == "casAuthenPort")
    {
        casauthenport.yfilter = yfilter;
    }
    if(value_path == "casAcctPort")
    {
        casacctport.yfilter = yfilter;
    }
    if(value_path == "casKey")
    {
        caskey.yfilter = yfilter;
    }
    if(value_path == "casPriority")
    {
        caspriority.yfilter = yfilter;
    }
    if(value_path == "casConfigRowStatus")
    {
        casconfigrowstatus.yfilter = yfilter;
    }
    if(value_path == "casAuthenRequests")
    {
        casauthenrequests.yfilter = yfilter;
    }
    if(value_path == "casAuthenRequestTimeouts")
    {
        casauthenrequesttimeouts.yfilter = yfilter;
    }
    if(value_path == "casAuthenUnexpectedResponses")
    {
        casauthenunexpectedresponses.yfilter = yfilter;
    }
    if(value_path == "casAuthenServerErrorResponses")
    {
        casauthenservererrorresponses.yfilter = yfilter;
    }
    if(value_path == "casAuthenIncorrectResponses")
    {
        casauthenincorrectresponses.yfilter = yfilter;
    }
    if(value_path == "casAuthenResponseTime")
    {
        casauthenresponsetime.yfilter = yfilter;
    }
    if(value_path == "casAuthenTransactionSuccesses")
    {
        casauthentransactionsuccesses.yfilter = yfilter;
    }
    if(value_path == "casAuthenTransactionFailures")
    {
        casauthentransactionfailures.yfilter = yfilter;
    }
    if(value_path == "casAuthorRequests")
    {
        casauthorrequests.yfilter = yfilter;
    }
    if(value_path == "casAuthorRequestTimeouts")
    {
        casauthorrequesttimeouts.yfilter = yfilter;
    }
    if(value_path == "casAuthorUnexpectedResponses")
    {
        casauthorunexpectedresponses.yfilter = yfilter;
    }
    if(value_path == "casAuthorServerErrorResponses")
    {
        casauthorservererrorresponses.yfilter = yfilter;
    }
    if(value_path == "casAuthorIncorrectResponses")
    {
        casauthorincorrectresponses.yfilter = yfilter;
    }
    if(value_path == "casAuthorResponseTime")
    {
        casauthorresponsetime.yfilter = yfilter;
    }
    if(value_path == "casAuthorTransactionSuccesses")
    {
        casauthortransactionsuccesses.yfilter = yfilter;
    }
    if(value_path == "casAuthorTransactionFailures")
    {
        casauthortransactionfailures.yfilter = yfilter;
    }
    if(value_path == "casAcctRequests")
    {
        casacctrequests.yfilter = yfilter;
    }
    if(value_path == "casAcctRequestTimeouts")
    {
        casacctrequesttimeouts.yfilter = yfilter;
    }
    if(value_path == "casAcctUnexpectedResponses")
    {
        casacctunexpectedresponses.yfilter = yfilter;
    }
    if(value_path == "casAcctServerErrorResponses")
    {
        casacctservererrorresponses.yfilter = yfilter;
    }
    if(value_path == "casAcctIncorrectResponses")
    {
        casacctincorrectresponses.yfilter = yfilter;
    }
    if(value_path == "casAcctResponseTime")
    {
        casacctresponsetime.yfilter = yfilter;
    }
    if(value_path == "casAcctTransactionSuccesses")
    {
        casaccttransactionsuccesses.yfilter = yfilter;
    }
    if(value_path == "casAcctTransactionFailures")
    {
        casaccttransactionfailures.yfilter = yfilter;
    }
    if(value_path == "casState")
    {
        casstate.yfilter = yfilter;
    }
    if(value_path == "casCurrentStateDuration")
    {
        cascurrentstateduration.yfilter = yfilter;
    }
    if(value_path == "casPreviousStateDuration")
    {
        caspreviousstateduration.yfilter = yfilter;
    }
    if(value_path == "casTotalDeadTime")
    {
        castotaldeadtime.yfilter = yfilter;
    }
    if(value_path == "casDeadCount")
    {
        casdeadcount.yfilter = yfilter;
    }
}

bool CISCOAAASERVERMIB::CasConfigTable::CasConfigEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "casProtocol" || name == "casIndex" || name == "casAddress" || name == "casAuthenPort" || name == "casAcctPort" || name == "casKey" || name == "casPriority" || name == "casConfigRowStatus" || name == "casAuthenRequests" || name == "casAuthenRequestTimeouts" || name == "casAuthenUnexpectedResponses" || name == "casAuthenServerErrorResponses" || name == "casAuthenIncorrectResponses" || name == "casAuthenResponseTime" || name == "casAuthenTransactionSuccesses" || name == "casAuthenTransactionFailures" || name == "casAuthorRequests" || name == "casAuthorRequestTimeouts" || name == "casAuthorUnexpectedResponses" || name == "casAuthorServerErrorResponses" || name == "casAuthorIncorrectResponses" || name == "casAuthorResponseTime" || name == "casAuthorTransactionSuccesses" || name == "casAuthorTransactionFailures" || name == "casAcctRequests" || name == "casAcctRequestTimeouts" || name == "casAcctUnexpectedResponses" || name == "casAcctServerErrorResponses" || name == "casAcctIncorrectResponses" || name == "casAcctResponseTime" || name == "casAcctTransactionSuccesses" || name == "casAcctTransactionFailures" || name == "casState" || name == "casCurrentStateDuration" || name == "casPreviousStateDuration" || name == "casTotalDeadTime" || name == "casDeadCount")
        return true;
    return false;
}

const Enum::YLeaf CiscoAAAProtocol::tacacsplus {1, "tacacsplus"};
const Enum::YLeaf CiscoAAAProtocol::radius {2, "radius"};
const Enum::YLeaf CiscoAAAProtocol::ldap {3, "ldap"};
const Enum::YLeaf CiscoAAAProtocol::kerberos {4, "kerberos"};
const Enum::YLeaf CiscoAAAProtocol::ntlm {5, "ntlm"};
const Enum::YLeaf CiscoAAAProtocol::sdi {6, "sdi"};
const Enum::YLeaf CiscoAAAProtocol::other {7, "other"};

const Enum::YLeaf CISCOAAASERVERMIB::CasConfigTable::CasConfigEntry::CasState::up {1, "up"};
const Enum::YLeaf CISCOAAASERVERMIB::CasConfigTable::CasConfigEntry::CasState::dead {2, "dead"};


}
}

