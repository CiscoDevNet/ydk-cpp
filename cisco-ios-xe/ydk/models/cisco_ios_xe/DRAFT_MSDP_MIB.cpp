
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "DRAFT_MSDP_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace DRAFT_MSDP_MIB {

DRAFTMSDPMIB::DRAFTMSDPMIB()
    :
    msdp(std::make_shared<DRAFTMSDPMIB::Msdp>())
    , msdprequeststable(std::make_shared<DRAFTMSDPMIB::MsdpRequestsTable>())
    , msdppeertable(std::make_shared<DRAFTMSDPMIB::MsdpPeerTable>())
    , msdpsacachetable(std::make_shared<DRAFTMSDPMIB::MsdpSACacheTable>())
{
    msdp->parent = this;
    msdprequeststable->parent = this;
    msdppeertable->parent = this;
    msdpsacachetable->parent = this;

    yang_name = "DRAFT-MSDP-MIB"; yang_parent_name = "DRAFT-MSDP-MIB"; is_top_level_class = true; has_list_ancestor = false; 
}

DRAFTMSDPMIB::~DRAFTMSDPMIB()
{
}

bool DRAFTMSDPMIB::has_data() const
{
    if (is_presence_container) return true;
    return (msdp !=  nullptr && msdp->has_data())
	|| (msdprequeststable !=  nullptr && msdprequeststable->has_data())
	|| (msdppeertable !=  nullptr && msdppeertable->has_data())
	|| (msdpsacachetable !=  nullptr && msdpsacachetable->has_data());
}

bool DRAFTMSDPMIB::has_operation() const
{
    return is_set(yfilter)
	|| (msdp !=  nullptr && msdp->has_operation())
	|| (msdprequeststable !=  nullptr && msdprequeststable->has_operation())
	|| (msdppeertable !=  nullptr && msdppeertable->has_operation())
	|| (msdpsacachetable !=  nullptr && msdpsacachetable->has_operation());
}

std::string DRAFTMSDPMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DRAFT-MSDP-MIB:DRAFT-MSDP-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DRAFTMSDPMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DRAFTMSDPMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "msdp")
    {
        if(msdp == nullptr)
        {
            msdp = std::make_shared<DRAFTMSDPMIB::Msdp>();
        }
        return msdp;
    }

    if(child_yang_name == "msdpRequestsTable")
    {
        if(msdprequeststable == nullptr)
        {
            msdprequeststable = std::make_shared<DRAFTMSDPMIB::MsdpRequestsTable>();
        }
        return msdprequeststable;
    }

    if(child_yang_name == "msdpPeerTable")
    {
        if(msdppeertable == nullptr)
        {
            msdppeertable = std::make_shared<DRAFTMSDPMIB::MsdpPeerTable>();
        }
        return msdppeertable;
    }

    if(child_yang_name == "msdpSACacheTable")
    {
        if(msdpsacachetable == nullptr)
        {
            msdpsacachetable = std::make_shared<DRAFTMSDPMIB::MsdpSACacheTable>();
        }
        return msdpsacachetable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DRAFTMSDPMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(msdp != nullptr)
    {
        children["msdp"] = msdp;
    }

    if(msdprequeststable != nullptr)
    {
        children["msdpRequestsTable"] = msdprequeststable;
    }

    if(msdppeertable != nullptr)
    {
        children["msdpPeerTable"] = msdppeertable;
    }

    if(msdpsacachetable != nullptr)
    {
        children["msdpSACacheTable"] = msdpsacachetable;
    }

    return children;
}

void DRAFTMSDPMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DRAFTMSDPMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> DRAFTMSDPMIB::clone_ptr() const
{
    return std::make_shared<DRAFTMSDPMIB>();
}

std::string DRAFTMSDPMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string DRAFTMSDPMIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function DRAFTMSDPMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> DRAFTMSDPMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool DRAFTMSDPMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "msdp" || name == "msdpRequestsTable" || name == "msdpPeerTable" || name == "msdpSACacheTable")
        return true;
    return false;
}

DRAFTMSDPMIB::Msdp::Msdp()
    :
    msdpenabled{YType::boolean, "msdpEnabled"},
    msdpcachelifetime{YType::uint32, "msdpCacheLifetime"},
    msdpnumsacacheentries{YType::uint32, "msdpNumSACacheEntries"},
    msdpsaholddownperiod{YType::int32, "msdpSAHoldDownPeriod"}
{

    yang_name = "msdp"; yang_parent_name = "DRAFT-MSDP-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DRAFTMSDPMIB::Msdp::~Msdp()
{
}

bool DRAFTMSDPMIB::Msdp::has_data() const
{
    if (is_presence_container) return true;
    return msdpenabled.is_set
	|| msdpcachelifetime.is_set
	|| msdpnumsacacheentries.is_set
	|| msdpsaholddownperiod.is_set;
}

bool DRAFTMSDPMIB::Msdp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(msdpenabled.yfilter)
	|| ydk::is_set(msdpcachelifetime.yfilter)
	|| ydk::is_set(msdpnumsacacheentries.yfilter)
	|| ydk::is_set(msdpsaholddownperiod.yfilter);
}

std::string DRAFTMSDPMIB::Msdp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DRAFT-MSDP-MIB:DRAFT-MSDP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DRAFTMSDPMIB::Msdp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "msdp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DRAFTMSDPMIB::Msdp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (msdpenabled.is_set || is_set(msdpenabled.yfilter)) leaf_name_data.push_back(msdpenabled.get_name_leafdata());
    if (msdpcachelifetime.is_set || is_set(msdpcachelifetime.yfilter)) leaf_name_data.push_back(msdpcachelifetime.get_name_leafdata());
    if (msdpnumsacacheentries.is_set || is_set(msdpnumsacacheentries.yfilter)) leaf_name_data.push_back(msdpnumsacacheentries.get_name_leafdata());
    if (msdpsaholddownperiod.is_set || is_set(msdpsaholddownperiod.yfilter)) leaf_name_data.push_back(msdpsaholddownperiod.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DRAFTMSDPMIB::Msdp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DRAFTMSDPMIB::Msdp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void DRAFTMSDPMIB::Msdp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "msdpEnabled")
    {
        msdpenabled = value;
        msdpenabled.value_namespace = name_space;
        msdpenabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msdpCacheLifetime")
    {
        msdpcachelifetime = value;
        msdpcachelifetime.value_namespace = name_space;
        msdpcachelifetime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msdpNumSACacheEntries")
    {
        msdpnumsacacheentries = value;
        msdpnumsacacheentries.value_namespace = name_space;
        msdpnumsacacheentries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msdpSAHoldDownPeriod")
    {
        msdpsaholddownperiod = value;
        msdpsaholddownperiod.value_namespace = name_space;
        msdpsaholddownperiod.value_namespace_prefix = name_space_prefix;
    }
}

void DRAFTMSDPMIB::Msdp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "msdpEnabled")
    {
        msdpenabled.yfilter = yfilter;
    }
    if(value_path == "msdpCacheLifetime")
    {
        msdpcachelifetime.yfilter = yfilter;
    }
    if(value_path == "msdpNumSACacheEntries")
    {
        msdpnumsacacheentries.yfilter = yfilter;
    }
    if(value_path == "msdpSAHoldDownPeriod")
    {
        msdpsaholddownperiod.yfilter = yfilter;
    }
}

bool DRAFTMSDPMIB::Msdp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "msdpEnabled" || name == "msdpCacheLifetime" || name == "msdpNumSACacheEntries" || name == "msdpSAHoldDownPeriod")
        return true;
    return false;
}

DRAFTMSDPMIB::MsdpRequestsTable::MsdpRequestsTable()
    :
    msdprequestsentry(this, {"msdprequestsgroupaddress", "msdprequestsgroupmask"})
{

    yang_name = "msdpRequestsTable"; yang_parent_name = "DRAFT-MSDP-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DRAFTMSDPMIB::MsdpRequestsTable::~MsdpRequestsTable()
{
}

bool DRAFTMSDPMIB::MsdpRequestsTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<msdprequestsentry.len(); index++)
    {
        if(msdprequestsentry[index]->has_data())
            return true;
    }
    return false;
}

bool DRAFTMSDPMIB::MsdpRequestsTable::has_operation() const
{
    for (std::size_t index=0; index<msdprequestsentry.len(); index++)
    {
        if(msdprequestsentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DRAFTMSDPMIB::MsdpRequestsTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DRAFT-MSDP-MIB:DRAFT-MSDP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DRAFTMSDPMIB::MsdpRequestsTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "msdpRequestsTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DRAFTMSDPMIB::MsdpRequestsTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DRAFTMSDPMIB::MsdpRequestsTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "msdpRequestsEntry")
    {
        auto c = std::make_shared<DRAFTMSDPMIB::MsdpRequestsTable::MsdpRequestsEntry>();
        c->parent = this;
        msdprequestsentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DRAFTMSDPMIB::MsdpRequestsTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : msdprequestsentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void DRAFTMSDPMIB::MsdpRequestsTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DRAFTMSDPMIB::MsdpRequestsTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DRAFTMSDPMIB::MsdpRequestsTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "msdpRequestsEntry")
        return true;
    return false;
}

DRAFTMSDPMIB::MsdpRequestsTable::MsdpRequestsEntry::MsdpRequestsEntry()
    :
    msdprequestsgroupaddress{YType::str, "msdpRequestsGroupAddress"},
    msdprequestsgroupmask{YType::str, "msdpRequestsGroupMask"},
    msdprequestspeer{YType::str, "msdpRequestsPeer"},
    msdprequestsstatus{YType::enumeration, "msdpRequestsStatus"}
{

    yang_name = "msdpRequestsEntry"; yang_parent_name = "msdpRequestsTable"; is_top_level_class = false; has_list_ancestor = false; 
}

DRAFTMSDPMIB::MsdpRequestsTable::MsdpRequestsEntry::~MsdpRequestsEntry()
{
}

bool DRAFTMSDPMIB::MsdpRequestsTable::MsdpRequestsEntry::has_data() const
{
    if (is_presence_container) return true;
    return msdprequestsgroupaddress.is_set
	|| msdprequestsgroupmask.is_set
	|| msdprequestspeer.is_set
	|| msdprequestsstatus.is_set;
}

bool DRAFTMSDPMIB::MsdpRequestsTable::MsdpRequestsEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(msdprequestsgroupaddress.yfilter)
	|| ydk::is_set(msdprequestsgroupmask.yfilter)
	|| ydk::is_set(msdprequestspeer.yfilter)
	|| ydk::is_set(msdprequestsstatus.yfilter);
}

std::string DRAFTMSDPMIB::MsdpRequestsTable::MsdpRequestsEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DRAFT-MSDP-MIB:DRAFT-MSDP-MIB/msdpRequestsTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DRAFTMSDPMIB::MsdpRequestsTable::MsdpRequestsEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "msdpRequestsEntry";
    ADD_KEY_TOKEN(msdprequestsgroupaddress, "msdpRequestsGroupAddress");
    ADD_KEY_TOKEN(msdprequestsgroupmask, "msdpRequestsGroupMask");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DRAFTMSDPMIB::MsdpRequestsTable::MsdpRequestsEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (msdprequestsgroupaddress.is_set || is_set(msdprequestsgroupaddress.yfilter)) leaf_name_data.push_back(msdprequestsgroupaddress.get_name_leafdata());
    if (msdprequestsgroupmask.is_set || is_set(msdprequestsgroupmask.yfilter)) leaf_name_data.push_back(msdprequestsgroupmask.get_name_leafdata());
    if (msdprequestspeer.is_set || is_set(msdprequestspeer.yfilter)) leaf_name_data.push_back(msdprequestspeer.get_name_leafdata());
    if (msdprequestsstatus.is_set || is_set(msdprequestsstatus.yfilter)) leaf_name_data.push_back(msdprequestsstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DRAFTMSDPMIB::MsdpRequestsTable::MsdpRequestsEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DRAFTMSDPMIB::MsdpRequestsTable::MsdpRequestsEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void DRAFTMSDPMIB::MsdpRequestsTable::MsdpRequestsEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "msdpRequestsGroupAddress")
    {
        msdprequestsgroupaddress = value;
        msdprequestsgroupaddress.value_namespace = name_space;
        msdprequestsgroupaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msdpRequestsGroupMask")
    {
        msdprequestsgroupmask = value;
        msdprequestsgroupmask.value_namespace = name_space;
        msdprequestsgroupmask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msdpRequestsPeer")
    {
        msdprequestspeer = value;
        msdprequestspeer.value_namespace = name_space;
        msdprequestspeer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msdpRequestsStatus")
    {
        msdprequestsstatus = value;
        msdprequestsstatus.value_namespace = name_space;
        msdprequestsstatus.value_namespace_prefix = name_space_prefix;
    }
}

void DRAFTMSDPMIB::MsdpRequestsTable::MsdpRequestsEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "msdpRequestsGroupAddress")
    {
        msdprequestsgroupaddress.yfilter = yfilter;
    }
    if(value_path == "msdpRequestsGroupMask")
    {
        msdprequestsgroupmask.yfilter = yfilter;
    }
    if(value_path == "msdpRequestsPeer")
    {
        msdprequestspeer.yfilter = yfilter;
    }
    if(value_path == "msdpRequestsStatus")
    {
        msdprequestsstatus.yfilter = yfilter;
    }
}

bool DRAFTMSDPMIB::MsdpRequestsTable::MsdpRequestsEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "msdpRequestsGroupAddress" || name == "msdpRequestsGroupMask" || name == "msdpRequestsPeer" || name == "msdpRequestsStatus")
        return true;
    return false;
}

DRAFTMSDPMIB::MsdpPeerTable::MsdpPeerTable()
    :
    msdppeerentry(this, {"msdppeerremoteaddress"})
{

    yang_name = "msdpPeerTable"; yang_parent_name = "DRAFT-MSDP-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DRAFTMSDPMIB::MsdpPeerTable::~MsdpPeerTable()
{
}

bool DRAFTMSDPMIB::MsdpPeerTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<msdppeerentry.len(); index++)
    {
        if(msdppeerentry[index]->has_data())
            return true;
    }
    return false;
}

bool DRAFTMSDPMIB::MsdpPeerTable::has_operation() const
{
    for (std::size_t index=0; index<msdppeerentry.len(); index++)
    {
        if(msdppeerentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DRAFTMSDPMIB::MsdpPeerTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DRAFT-MSDP-MIB:DRAFT-MSDP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DRAFTMSDPMIB::MsdpPeerTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "msdpPeerTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DRAFTMSDPMIB::MsdpPeerTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DRAFTMSDPMIB::MsdpPeerTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "msdpPeerEntry")
    {
        auto c = std::make_shared<DRAFTMSDPMIB::MsdpPeerTable::MsdpPeerEntry>();
        c->parent = this;
        msdppeerentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DRAFTMSDPMIB::MsdpPeerTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : msdppeerentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void DRAFTMSDPMIB::MsdpPeerTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DRAFTMSDPMIB::MsdpPeerTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DRAFTMSDPMIB::MsdpPeerTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "msdpPeerEntry")
        return true;
    return false;
}

DRAFTMSDPMIB::MsdpPeerTable::MsdpPeerEntry::MsdpPeerEntry()
    :
    msdppeerremoteaddress{YType::str, "msdpPeerRemoteAddress"},
    msdppeerstate{YType::enumeration, "msdpPeerState"},
    msdppeerrpffailures{YType::uint32, "msdpPeerRPFFailures"},
    msdppeerinsas{YType::uint32, "msdpPeerInSAs"},
    msdppeeroutsas{YType::uint32, "msdpPeerOutSAs"},
    msdppeerinsarequests{YType::uint32, "msdpPeerInSARequests"},
    msdppeeroutsarequests{YType::uint32, "msdpPeerOutSARequests"},
    msdppeerinsaresponses{YType::uint32, "msdpPeerInSAResponses"},
    msdppeeroutsaresponses{YType::uint32, "msdpPeerOutSAResponses"},
    msdppeerincontrolmessages{YType::uint32, "msdpPeerInControlMessages"},
    msdppeeroutcontrolmessages{YType::uint32, "msdpPeerOutControlMessages"},
    msdppeerindatapackets{YType::uint32, "msdpPeerInDataPackets"},
    msdppeeroutdatapackets{YType::uint32, "msdpPeerOutDataPackets"},
    msdppeerfsmestablishedtransitions{YType::uint32, "msdpPeerFsmEstablishedTransitions"},
    msdppeerfsmestablishedtime{YType::uint32, "msdpPeerFsmEstablishedTime"},
    msdppeerinmessageelapsedtime{YType::uint32, "msdpPeerInMessageElapsedTime"},
    msdppeerlocaladdress{YType::str, "msdpPeerLocalAddress"},
    msdppeersaadvperiod{YType::int32, "msdpPeerSAAdvPeriod"},
    msdppeerconnectretryinterval{YType::int32, "msdpPeerConnectRetryInterval"},
    msdppeerholdtimeconfigured{YType::int32, "msdpPeerHoldTimeConfigured"},
    msdppeerkeepaliveconfigured{YType::int32, "msdpPeerKeepAliveConfigured"},
    msdppeerdatattl{YType::int32, "msdpPeerDataTtl"},
    msdppeerprocessrequestsfrom{YType::boolean, "msdpPeerProcessRequestsFrom"},
    msdppeerstatus{YType::enumeration, "msdpPeerStatus"},
    msdppeerremoteport{YType::int32, "msdpPeerRemotePort"},
    msdppeerlocalport{YType::int32, "msdpPeerLocalPort"},
    msdppeerencapsulationstate{YType::enumeration, "msdpPeerEncapsulationState"},
    msdppeerencapsulationtype{YType::enumeration, "msdpPeerEncapsulationType"},
    msdppeerconnectionattempts{YType::uint32, "msdpPeerConnectionAttempts"},
    msdppeerinnotifications{YType::uint32, "msdpPeerInNotifications"},
    msdppeeroutnotifications{YType::uint32, "msdpPeerOutNotifications"},
    msdppeerlasterror{YType::str, "msdpPeerLastError"}
{

    yang_name = "msdpPeerEntry"; yang_parent_name = "msdpPeerTable"; is_top_level_class = false; has_list_ancestor = false; 
}

DRAFTMSDPMIB::MsdpPeerTable::MsdpPeerEntry::~MsdpPeerEntry()
{
}

bool DRAFTMSDPMIB::MsdpPeerTable::MsdpPeerEntry::has_data() const
{
    if (is_presence_container) return true;
    return msdppeerremoteaddress.is_set
	|| msdppeerstate.is_set
	|| msdppeerrpffailures.is_set
	|| msdppeerinsas.is_set
	|| msdppeeroutsas.is_set
	|| msdppeerinsarequests.is_set
	|| msdppeeroutsarequests.is_set
	|| msdppeerinsaresponses.is_set
	|| msdppeeroutsaresponses.is_set
	|| msdppeerincontrolmessages.is_set
	|| msdppeeroutcontrolmessages.is_set
	|| msdppeerindatapackets.is_set
	|| msdppeeroutdatapackets.is_set
	|| msdppeerfsmestablishedtransitions.is_set
	|| msdppeerfsmestablishedtime.is_set
	|| msdppeerinmessageelapsedtime.is_set
	|| msdppeerlocaladdress.is_set
	|| msdppeersaadvperiod.is_set
	|| msdppeerconnectretryinterval.is_set
	|| msdppeerholdtimeconfigured.is_set
	|| msdppeerkeepaliveconfigured.is_set
	|| msdppeerdatattl.is_set
	|| msdppeerprocessrequestsfrom.is_set
	|| msdppeerstatus.is_set
	|| msdppeerremoteport.is_set
	|| msdppeerlocalport.is_set
	|| msdppeerencapsulationstate.is_set
	|| msdppeerencapsulationtype.is_set
	|| msdppeerconnectionattempts.is_set
	|| msdppeerinnotifications.is_set
	|| msdppeeroutnotifications.is_set
	|| msdppeerlasterror.is_set;
}

bool DRAFTMSDPMIB::MsdpPeerTable::MsdpPeerEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(msdppeerremoteaddress.yfilter)
	|| ydk::is_set(msdppeerstate.yfilter)
	|| ydk::is_set(msdppeerrpffailures.yfilter)
	|| ydk::is_set(msdppeerinsas.yfilter)
	|| ydk::is_set(msdppeeroutsas.yfilter)
	|| ydk::is_set(msdppeerinsarequests.yfilter)
	|| ydk::is_set(msdppeeroutsarequests.yfilter)
	|| ydk::is_set(msdppeerinsaresponses.yfilter)
	|| ydk::is_set(msdppeeroutsaresponses.yfilter)
	|| ydk::is_set(msdppeerincontrolmessages.yfilter)
	|| ydk::is_set(msdppeeroutcontrolmessages.yfilter)
	|| ydk::is_set(msdppeerindatapackets.yfilter)
	|| ydk::is_set(msdppeeroutdatapackets.yfilter)
	|| ydk::is_set(msdppeerfsmestablishedtransitions.yfilter)
	|| ydk::is_set(msdppeerfsmestablishedtime.yfilter)
	|| ydk::is_set(msdppeerinmessageelapsedtime.yfilter)
	|| ydk::is_set(msdppeerlocaladdress.yfilter)
	|| ydk::is_set(msdppeersaadvperiod.yfilter)
	|| ydk::is_set(msdppeerconnectretryinterval.yfilter)
	|| ydk::is_set(msdppeerholdtimeconfigured.yfilter)
	|| ydk::is_set(msdppeerkeepaliveconfigured.yfilter)
	|| ydk::is_set(msdppeerdatattl.yfilter)
	|| ydk::is_set(msdppeerprocessrequestsfrom.yfilter)
	|| ydk::is_set(msdppeerstatus.yfilter)
	|| ydk::is_set(msdppeerremoteport.yfilter)
	|| ydk::is_set(msdppeerlocalport.yfilter)
	|| ydk::is_set(msdppeerencapsulationstate.yfilter)
	|| ydk::is_set(msdppeerencapsulationtype.yfilter)
	|| ydk::is_set(msdppeerconnectionattempts.yfilter)
	|| ydk::is_set(msdppeerinnotifications.yfilter)
	|| ydk::is_set(msdppeeroutnotifications.yfilter)
	|| ydk::is_set(msdppeerlasterror.yfilter);
}

std::string DRAFTMSDPMIB::MsdpPeerTable::MsdpPeerEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DRAFT-MSDP-MIB:DRAFT-MSDP-MIB/msdpPeerTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DRAFTMSDPMIB::MsdpPeerTable::MsdpPeerEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "msdpPeerEntry";
    ADD_KEY_TOKEN(msdppeerremoteaddress, "msdpPeerRemoteAddress");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DRAFTMSDPMIB::MsdpPeerTable::MsdpPeerEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (msdppeerremoteaddress.is_set || is_set(msdppeerremoteaddress.yfilter)) leaf_name_data.push_back(msdppeerremoteaddress.get_name_leafdata());
    if (msdppeerstate.is_set || is_set(msdppeerstate.yfilter)) leaf_name_data.push_back(msdppeerstate.get_name_leafdata());
    if (msdppeerrpffailures.is_set || is_set(msdppeerrpffailures.yfilter)) leaf_name_data.push_back(msdppeerrpffailures.get_name_leafdata());
    if (msdppeerinsas.is_set || is_set(msdppeerinsas.yfilter)) leaf_name_data.push_back(msdppeerinsas.get_name_leafdata());
    if (msdppeeroutsas.is_set || is_set(msdppeeroutsas.yfilter)) leaf_name_data.push_back(msdppeeroutsas.get_name_leafdata());
    if (msdppeerinsarequests.is_set || is_set(msdppeerinsarequests.yfilter)) leaf_name_data.push_back(msdppeerinsarequests.get_name_leafdata());
    if (msdppeeroutsarequests.is_set || is_set(msdppeeroutsarequests.yfilter)) leaf_name_data.push_back(msdppeeroutsarequests.get_name_leafdata());
    if (msdppeerinsaresponses.is_set || is_set(msdppeerinsaresponses.yfilter)) leaf_name_data.push_back(msdppeerinsaresponses.get_name_leafdata());
    if (msdppeeroutsaresponses.is_set || is_set(msdppeeroutsaresponses.yfilter)) leaf_name_data.push_back(msdppeeroutsaresponses.get_name_leafdata());
    if (msdppeerincontrolmessages.is_set || is_set(msdppeerincontrolmessages.yfilter)) leaf_name_data.push_back(msdppeerincontrolmessages.get_name_leafdata());
    if (msdppeeroutcontrolmessages.is_set || is_set(msdppeeroutcontrolmessages.yfilter)) leaf_name_data.push_back(msdppeeroutcontrolmessages.get_name_leafdata());
    if (msdppeerindatapackets.is_set || is_set(msdppeerindatapackets.yfilter)) leaf_name_data.push_back(msdppeerindatapackets.get_name_leafdata());
    if (msdppeeroutdatapackets.is_set || is_set(msdppeeroutdatapackets.yfilter)) leaf_name_data.push_back(msdppeeroutdatapackets.get_name_leafdata());
    if (msdppeerfsmestablishedtransitions.is_set || is_set(msdppeerfsmestablishedtransitions.yfilter)) leaf_name_data.push_back(msdppeerfsmestablishedtransitions.get_name_leafdata());
    if (msdppeerfsmestablishedtime.is_set || is_set(msdppeerfsmestablishedtime.yfilter)) leaf_name_data.push_back(msdppeerfsmestablishedtime.get_name_leafdata());
    if (msdppeerinmessageelapsedtime.is_set || is_set(msdppeerinmessageelapsedtime.yfilter)) leaf_name_data.push_back(msdppeerinmessageelapsedtime.get_name_leafdata());
    if (msdppeerlocaladdress.is_set || is_set(msdppeerlocaladdress.yfilter)) leaf_name_data.push_back(msdppeerlocaladdress.get_name_leafdata());
    if (msdppeersaadvperiod.is_set || is_set(msdppeersaadvperiod.yfilter)) leaf_name_data.push_back(msdppeersaadvperiod.get_name_leafdata());
    if (msdppeerconnectretryinterval.is_set || is_set(msdppeerconnectretryinterval.yfilter)) leaf_name_data.push_back(msdppeerconnectretryinterval.get_name_leafdata());
    if (msdppeerholdtimeconfigured.is_set || is_set(msdppeerholdtimeconfigured.yfilter)) leaf_name_data.push_back(msdppeerholdtimeconfigured.get_name_leafdata());
    if (msdppeerkeepaliveconfigured.is_set || is_set(msdppeerkeepaliveconfigured.yfilter)) leaf_name_data.push_back(msdppeerkeepaliveconfigured.get_name_leafdata());
    if (msdppeerdatattl.is_set || is_set(msdppeerdatattl.yfilter)) leaf_name_data.push_back(msdppeerdatattl.get_name_leafdata());
    if (msdppeerprocessrequestsfrom.is_set || is_set(msdppeerprocessrequestsfrom.yfilter)) leaf_name_data.push_back(msdppeerprocessrequestsfrom.get_name_leafdata());
    if (msdppeerstatus.is_set || is_set(msdppeerstatus.yfilter)) leaf_name_data.push_back(msdppeerstatus.get_name_leafdata());
    if (msdppeerremoteport.is_set || is_set(msdppeerremoteport.yfilter)) leaf_name_data.push_back(msdppeerremoteport.get_name_leafdata());
    if (msdppeerlocalport.is_set || is_set(msdppeerlocalport.yfilter)) leaf_name_data.push_back(msdppeerlocalport.get_name_leafdata());
    if (msdppeerencapsulationstate.is_set || is_set(msdppeerencapsulationstate.yfilter)) leaf_name_data.push_back(msdppeerencapsulationstate.get_name_leafdata());
    if (msdppeerencapsulationtype.is_set || is_set(msdppeerencapsulationtype.yfilter)) leaf_name_data.push_back(msdppeerencapsulationtype.get_name_leafdata());
    if (msdppeerconnectionattempts.is_set || is_set(msdppeerconnectionattempts.yfilter)) leaf_name_data.push_back(msdppeerconnectionattempts.get_name_leafdata());
    if (msdppeerinnotifications.is_set || is_set(msdppeerinnotifications.yfilter)) leaf_name_data.push_back(msdppeerinnotifications.get_name_leafdata());
    if (msdppeeroutnotifications.is_set || is_set(msdppeeroutnotifications.yfilter)) leaf_name_data.push_back(msdppeeroutnotifications.get_name_leafdata());
    if (msdppeerlasterror.is_set || is_set(msdppeerlasterror.yfilter)) leaf_name_data.push_back(msdppeerlasterror.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DRAFTMSDPMIB::MsdpPeerTable::MsdpPeerEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DRAFTMSDPMIB::MsdpPeerTable::MsdpPeerEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void DRAFTMSDPMIB::MsdpPeerTable::MsdpPeerEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "msdpPeerRemoteAddress")
    {
        msdppeerremoteaddress = value;
        msdppeerremoteaddress.value_namespace = name_space;
        msdppeerremoteaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msdpPeerState")
    {
        msdppeerstate = value;
        msdppeerstate.value_namespace = name_space;
        msdppeerstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msdpPeerRPFFailures")
    {
        msdppeerrpffailures = value;
        msdppeerrpffailures.value_namespace = name_space;
        msdppeerrpffailures.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msdpPeerInSAs")
    {
        msdppeerinsas = value;
        msdppeerinsas.value_namespace = name_space;
        msdppeerinsas.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msdpPeerOutSAs")
    {
        msdppeeroutsas = value;
        msdppeeroutsas.value_namespace = name_space;
        msdppeeroutsas.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msdpPeerInSARequests")
    {
        msdppeerinsarequests = value;
        msdppeerinsarequests.value_namespace = name_space;
        msdppeerinsarequests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msdpPeerOutSARequests")
    {
        msdppeeroutsarequests = value;
        msdppeeroutsarequests.value_namespace = name_space;
        msdppeeroutsarequests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msdpPeerInSAResponses")
    {
        msdppeerinsaresponses = value;
        msdppeerinsaresponses.value_namespace = name_space;
        msdppeerinsaresponses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msdpPeerOutSAResponses")
    {
        msdppeeroutsaresponses = value;
        msdppeeroutsaresponses.value_namespace = name_space;
        msdppeeroutsaresponses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msdpPeerInControlMessages")
    {
        msdppeerincontrolmessages = value;
        msdppeerincontrolmessages.value_namespace = name_space;
        msdppeerincontrolmessages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msdpPeerOutControlMessages")
    {
        msdppeeroutcontrolmessages = value;
        msdppeeroutcontrolmessages.value_namespace = name_space;
        msdppeeroutcontrolmessages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msdpPeerInDataPackets")
    {
        msdppeerindatapackets = value;
        msdppeerindatapackets.value_namespace = name_space;
        msdppeerindatapackets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msdpPeerOutDataPackets")
    {
        msdppeeroutdatapackets = value;
        msdppeeroutdatapackets.value_namespace = name_space;
        msdppeeroutdatapackets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msdpPeerFsmEstablishedTransitions")
    {
        msdppeerfsmestablishedtransitions = value;
        msdppeerfsmestablishedtransitions.value_namespace = name_space;
        msdppeerfsmestablishedtransitions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msdpPeerFsmEstablishedTime")
    {
        msdppeerfsmestablishedtime = value;
        msdppeerfsmestablishedtime.value_namespace = name_space;
        msdppeerfsmestablishedtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msdpPeerInMessageElapsedTime")
    {
        msdppeerinmessageelapsedtime = value;
        msdppeerinmessageelapsedtime.value_namespace = name_space;
        msdppeerinmessageelapsedtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msdpPeerLocalAddress")
    {
        msdppeerlocaladdress = value;
        msdppeerlocaladdress.value_namespace = name_space;
        msdppeerlocaladdress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msdpPeerSAAdvPeriod")
    {
        msdppeersaadvperiod = value;
        msdppeersaadvperiod.value_namespace = name_space;
        msdppeersaadvperiod.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msdpPeerConnectRetryInterval")
    {
        msdppeerconnectretryinterval = value;
        msdppeerconnectretryinterval.value_namespace = name_space;
        msdppeerconnectretryinterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msdpPeerHoldTimeConfigured")
    {
        msdppeerholdtimeconfigured = value;
        msdppeerholdtimeconfigured.value_namespace = name_space;
        msdppeerholdtimeconfigured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msdpPeerKeepAliveConfigured")
    {
        msdppeerkeepaliveconfigured = value;
        msdppeerkeepaliveconfigured.value_namespace = name_space;
        msdppeerkeepaliveconfigured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msdpPeerDataTtl")
    {
        msdppeerdatattl = value;
        msdppeerdatattl.value_namespace = name_space;
        msdppeerdatattl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msdpPeerProcessRequestsFrom")
    {
        msdppeerprocessrequestsfrom = value;
        msdppeerprocessrequestsfrom.value_namespace = name_space;
        msdppeerprocessrequestsfrom.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msdpPeerStatus")
    {
        msdppeerstatus = value;
        msdppeerstatus.value_namespace = name_space;
        msdppeerstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msdpPeerRemotePort")
    {
        msdppeerremoteport = value;
        msdppeerremoteport.value_namespace = name_space;
        msdppeerremoteport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msdpPeerLocalPort")
    {
        msdppeerlocalport = value;
        msdppeerlocalport.value_namespace = name_space;
        msdppeerlocalport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msdpPeerEncapsulationState")
    {
        msdppeerencapsulationstate = value;
        msdppeerencapsulationstate.value_namespace = name_space;
        msdppeerencapsulationstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msdpPeerEncapsulationType")
    {
        msdppeerencapsulationtype = value;
        msdppeerencapsulationtype.value_namespace = name_space;
        msdppeerencapsulationtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msdpPeerConnectionAttempts")
    {
        msdppeerconnectionattempts = value;
        msdppeerconnectionattempts.value_namespace = name_space;
        msdppeerconnectionattempts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msdpPeerInNotifications")
    {
        msdppeerinnotifications = value;
        msdppeerinnotifications.value_namespace = name_space;
        msdppeerinnotifications.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msdpPeerOutNotifications")
    {
        msdppeeroutnotifications = value;
        msdppeeroutnotifications.value_namespace = name_space;
        msdppeeroutnotifications.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msdpPeerLastError")
    {
        msdppeerlasterror = value;
        msdppeerlasterror.value_namespace = name_space;
        msdppeerlasterror.value_namespace_prefix = name_space_prefix;
    }
}

void DRAFTMSDPMIB::MsdpPeerTable::MsdpPeerEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "msdpPeerRemoteAddress")
    {
        msdppeerremoteaddress.yfilter = yfilter;
    }
    if(value_path == "msdpPeerState")
    {
        msdppeerstate.yfilter = yfilter;
    }
    if(value_path == "msdpPeerRPFFailures")
    {
        msdppeerrpffailures.yfilter = yfilter;
    }
    if(value_path == "msdpPeerInSAs")
    {
        msdppeerinsas.yfilter = yfilter;
    }
    if(value_path == "msdpPeerOutSAs")
    {
        msdppeeroutsas.yfilter = yfilter;
    }
    if(value_path == "msdpPeerInSARequests")
    {
        msdppeerinsarequests.yfilter = yfilter;
    }
    if(value_path == "msdpPeerOutSARequests")
    {
        msdppeeroutsarequests.yfilter = yfilter;
    }
    if(value_path == "msdpPeerInSAResponses")
    {
        msdppeerinsaresponses.yfilter = yfilter;
    }
    if(value_path == "msdpPeerOutSAResponses")
    {
        msdppeeroutsaresponses.yfilter = yfilter;
    }
    if(value_path == "msdpPeerInControlMessages")
    {
        msdppeerincontrolmessages.yfilter = yfilter;
    }
    if(value_path == "msdpPeerOutControlMessages")
    {
        msdppeeroutcontrolmessages.yfilter = yfilter;
    }
    if(value_path == "msdpPeerInDataPackets")
    {
        msdppeerindatapackets.yfilter = yfilter;
    }
    if(value_path == "msdpPeerOutDataPackets")
    {
        msdppeeroutdatapackets.yfilter = yfilter;
    }
    if(value_path == "msdpPeerFsmEstablishedTransitions")
    {
        msdppeerfsmestablishedtransitions.yfilter = yfilter;
    }
    if(value_path == "msdpPeerFsmEstablishedTime")
    {
        msdppeerfsmestablishedtime.yfilter = yfilter;
    }
    if(value_path == "msdpPeerInMessageElapsedTime")
    {
        msdppeerinmessageelapsedtime.yfilter = yfilter;
    }
    if(value_path == "msdpPeerLocalAddress")
    {
        msdppeerlocaladdress.yfilter = yfilter;
    }
    if(value_path == "msdpPeerSAAdvPeriod")
    {
        msdppeersaadvperiod.yfilter = yfilter;
    }
    if(value_path == "msdpPeerConnectRetryInterval")
    {
        msdppeerconnectretryinterval.yfilter = yfilter;
    }
    if(value_path == "msdpPeerHoldTimeConfigured")
    {
        msdppeerholdtimeconfigured.yfilter = yfilter;
    }
    if(value_path == "msdpPeerKeepAliveConfigured")
    {
        msdppeerkeepaliveconfigured.yfilter = yfilter;
    }
    if(value_path == "msdpPeerDataTtl")
    {
        msdppeerdatattl.yfilter = yfilter;
    }
    if(value_path == "msdpPeerProcessRequestsFrom")
    {
        msdppeerprocessrequestsfrom.yfilter = yfilter;
    }
    if(value_path == "msdpPeerStatus")
    {
        msdppeerstatus.yfilter = yfilter;
    }
    if(value_path == "msdpPeerRemotePort")
    {
        msdppeerremoteport.yfilter = yfilter;
    }
    if(value_path == "msdpPeerLocalPort")
    {
        msdppeerlocalport.yfilter = yfilter;
    }
    if(value_path == "msdpPeerEncapsulationState")
    {
        msdppeerencapsulationstate.yfilter = yfilter;
    }
    if(value_path == "msdpPeerEncapsulationType")
    {
        msdppeerencapsulationtype.yfilter = yfilter;
    }
    if(value_path == "msdpPeerConnectionAttempts")
    {
        msdppeerconnectionattempts.yfilter = yfilter;
    }
    if(value_path == "msdpPeerInNotifications")
    {
        msdppeerinnotifications.yfilter = yfilter;
    }
    if(value_path == "msdpPeerOutNotifications")
    {
        msdppeeroutnotifications.yfilter = yfilter;
    }
    if(value_path == "msdpPeerLastError")
    {
        msdppeerlasterror.yfilter = yfilter;
    }
}

bool DRAFTMSDPMIB::MsdpPeerTable::MsdpPeerEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "msdpPeerRemoteAddress" || name == "msdpPeerState" || name == "msdpPeerRPFFailures" || name == "msdpPeerInSAs" || name == "msdpPeerOutSAs" || name == "msdpPeerInSARequests" || name == "msdpPeerOutSARequests" || name == "msdpPeerInSAResponses" || name == "msdpPeerOutSAResponses" || name == "msdpPeerInControlMessages" || name == "msdpPeerOutControlMessages" || name == "msdpPeerInDataPackets" || name == "msdpPeerOutDataPackets" || name == "msdpPeerFsmEstablishedTransitions" || name == "msdpPeerFsmEstablishedTime" || name == "msdpPeerInMessageElapsedTime" || name == "msdpPeerLocalAddress" || name == "msdpPeerSAAdvPeriod" || name == "msdpPeerConnectRetryInterval" || name == "msdpPeerHoldTimeConfigured" || name == "msdpPeerKeepAliveConfigured" || name == "msdpPeerDataTtl" || name == "msdpPeerProcessRequestsFrom" || name == "msdpPeerStatus" || name == "msdpPeerRemotePort" || name == "msdpPeerLocalPort" || name == "msdpPeerEncapsulationState" || name == "msdpPeerEncapsulationType" || name == "msdpPeerConnectionAttempts" || name == "msdpPeerInNotifications" || name == "msdpPeerOutNotifications" || name == "msdpPeerLastError")
        return true;
    return false;
}

DRAFTMSDPMIB::MsdpSACacheTable::MsdpSACacheTable()
    :
    msdpsacacheentry(this, {"msdpsacachegroupaddr", "msdpsacachesourceaddr", "msdpsacacheoriginrp"})
{

    yang_name = "msdpSACacheTable"; yang_parent_name = "DRAFT-MSDP-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DRAFTMSDPMIB::MsdpSACacheTable::~MsdpSACacheTable()
{
}

bool DRAFTMSDPMIB::MsdpSACacheTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<msdpsacacheentry.len(); index++)
    {
        if(msdpsacacheentry[index]->has_data())
            return true;
    }
    return false;
}

bool DRAFTMSDPMIB::MsdpSACacheTable::has_operation() const
{
    for (std::size_t index=0; index<msdpsacacheentry.len(); index++)
    {
        if(msdpsacacheentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DRAFTMSDPMIB::MsdpSACacheTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DRAFT-MSDP-MIB:DRAFT-MSDP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DRAFTMSDPMIB::MsdpSACacheTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "msdpSACacheTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DRAFTMSDPMIB::MsdpSACacheTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DRAFTMSDPMIB::MsdpSACacheTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "msdpSACacheEntry")
    {
        auto c = std::make_shared<DRAFTMSDPMIB::MsdpSACacheTable::MsdpSACacheEntry>();
        c->parent = this;
        msdpsacacheentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DRAFTMSDPMIB::MsdpSACacheTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : msdpsacacheentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void DRAFTMSDPMIB::MsdpSACacheTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DRAFTMSDPMIB::MsdpSACacheTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DRAFTMSDPMIB::MsdpSACacheTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "msdpSACacheEntry")
        return true;
    return false;
}

DRAFTMSDPMIB::MsdpSACacheTable::MsdpSACacheEntry::MsdpSACacheEntry()
    :
    msdpsacachegroupaddr{YType::str, "msdpSACacheGroupAddr"},
    msdpsacachesourceaddr{YType::str, "msdpSACacheSourceAddr"},
    msdpsacacheoriginrp{YType::str, "msdpSACacheOriginRP"},
    msdpsacachepeerlearnedfrom{YType::str, "msdpSACachePeerLearnedFrom"},
    msdpsacacherpfpeer{YType::str, "msdpSACacheRPFPeer"},
    msdpsacacheinsas{YType::uint32, "msdpSACacheInSAs"},
    msdpsacacheindatapackets{YType::uint32, "msdpSACacheInDataPackets"},
    msdpsacacheuptime{YType::uint32, "msdpSACacheUpTime"},
    msdpsacacheexpirytime{YType::uint32, "msdpSACacheExpiryTime"},
    msdpsacachestatus{YType::enumeration, "msdpSACacheStatus"}
{

    yang_name = "msdpSACacheEntry"; yang_parent_name = "msdpSACacheTable"; is_top_level_class = false; has_list_ancestor = false; 
}

DRAFTMSDPMIB::MsdpSACacheTable::MsdpSACacheEntry::~MsdpSACacheEntry()
{
}

bool DRAFTMSDPMIB::MsdpSACacheTable::MsdpSACacheEntry::has_data() const
{
    if (is_presence_container) return true;
    return msdpsacachegroupaddr.is_set
	|| msdpsacachesourceaddr.is_set
	|| msdpsacacheoriginrp.is_set
	|| msdpsacachepeerlearnedfrom.is_set
	|| msdpsacacherpfpeer.is_set
	|| msdpsacacheinsas.is_set
	|| msdpsacacheindatapackets.is_set
	|| msdpsacacheuptime.is_set
	|| msdpsacacheexpirytime.is_set
	|| msdpsacachestatus.is_set;
}

bool DRAFTMSDPMIB::MsdpSACacheTable::MsdpSACacheEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(msdpsacachegroupaddr.yfilter)
	|| ydk::is_set(msdpsacachesourceaddr.yfilter)
	|| ydk::is_set(msdpsacacheoriginrp.yfilter)
	|| ydk::is_set(msdpsacachepeerlearnedfrom.yfilter)
	|| ydk::is_set(msdpsacacherpfpeer.yfilter)
	|| ydk::is_set(msdpsacacheinsas.yfilter)
	|| ydk::is_set(msdpsacacheindatapackets.yfilter)
	|| ydk::is_set(msdpsacacheuptime.yfilter)
	|| ydk::is_set(msdpsacacheexpirytime.yfilter)
	|| ydk::is_set(msdpsacachestatus.yfilter);
}

std::string DRAFTMSDPMIB::MsdpSACacheTable::MsdpSACacheEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DRAFT-MSDP-MIB:DRAFT-MSDP-MIB/msdpSACacheTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DRAFTMSDPMIB::MsdpSACacheTable::MsdpSACacheEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "msdpSACacheEntry";
    ADD_KEY_TOKEN(msdpsacachegroupaddr, "msdpSACacheGroupAddr");
    ADD_KEY_TOKEN(msdpsacachesourceaddr, "msdpSACacheSourceAddr");
    ADD_KEY_TOKEN(msdpsacacheoriginrp, "msdpSACacheOriginRP");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DRAFTMSDPMIB::MsdpSACacheTable::MsdpSACacheEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (msdpsacachegroupaddr.is_set || is_set(msdpsacachegroupaddr.yfilter)) leaf_name_data.push_back(msdpsacachegroupaddr.get_name_leafdata());
    if (msdpsacachesourceaddr.is_set || is_set(msdpsacachesourceaddr.yfilter)) leaf_name_data.push_back(msdpsacachesourceaddr.get_name_leafdata());
    if (msdpsacacheoriginrp.is_set || is_set(msdpsacacheoriginrp.yfilter)) leaf_name_data.push_back(msdpsacacheoriginrp.get_name_leafdata());
    if (msdpsacachepeerlearnedfrom.is_set || is_set(msdpsacachepeerlearnedfrom.yfilter)) leaf_name_data.push_back(msdpsacachepeerlearnedfrom.get_name_leafdata());
    if (msdpsacacherpfpeer.is_set || is_set(msdpsacacherpfpeer.yfilter)) leaf_name_data.push_back(msdpsacacherpfpeer.get_name_leafdata());
    if (msdpsacacheinsas.is_set || is_set(msdpsacacheinsas.yfilter)) leaf_name_data.push_back(msdpsacacheinsas.get_name_leafdata());
    if (msdpsacacheindatapackets.is_set || is_set(msdpsacacheindatapackets.yfilter)) leaf_name_data.push_back(msdpsacacheindatapackets.get_name_leafdata());
    if (msdpsacacheuptime.is_set || is_set(msdpsacacheuptime.yfilter)) leaf_name_data.push_back(msdpsacacheuptime.get_name_leafdata());
    if (msdpsacacheexpirytime.is_set || is_set(msdpsacacheexpirytime.yfilter)) leaf_name_data.push_back(msdpsacacheexpirytime.get_name_leafdata());
    if (msdpsacachestatus.is_set || is_set(msdpsacachestatus.yfilter)) leaf_name_data.push_back(msdpsacachestatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DRAFTMSDPMIB::MsdpSACacheTable::MsdpSACacheEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DRAFTMSDPMIB::MsdpSACacheTable::MsdpSACacheEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void DRAFTMSDPMIB::MsdpSACacheTable::MsdpSACacheEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "msdpSACacheGroupAddr")
    {
        msdpsacachegroupaddr = value;
        msdpsacachegroupaddr.value_namespace = name_space;
        msdpsacachegroupaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msdpSACacheSourceAddr")
    {
        msdpsacachesourceaddr = value;
        msdpsacachesourceaddr.value_namespace = name_space;
        msdpsacachesourceaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msdpSACacheOriginRP")
    {
        msdpsacacheoriginrp = value;
        msdpsacacheoriginrp.value_namespace = name_space;
        msdpsacacheoriginrp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msdpSACachePeerLearnedFrom")
    {
        msdpsacachepeerlearnedfrom = value;
        msdpsacachepeerlearnedfrom.value_namespace = name_space;
        msdpsacachepeerlearnedfrom.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msdpSACacheRPFPeer")
    {
        msdpsacacherpfpeer = value;
        msdpsacacherpfpeer.value_namespace = name_space;
        msdpsacacherpfpeer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msdpSACacheInSAs")
    {
        msdpsacacheinsas = value;
        msdpsacacheinsas.value_namespace = name_space;
        msdpsacacheinsas.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msdpSACacheInDataPackets")
    {
        msdpsacacheindatapackets = value;
        msdpsacacheindatapackets.value_namespace = name_space;
        msdpsacacheindatapackets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msdpSACacheUpTime")
    {
        msdpsacacheuptime = value;
        msdpsacacheuptime.value_namespace = name_space;
        msdpsacacheuptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msdpSACacheExpiryTime")
    {
        msdpsacacheexpirytime = value;
        msdpsacacheexpirytime.value_namespace = name_space;
        msdpsacacheexpirytime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msdpSACacheStatus")
    {
        msdpsacachestatus = value;
        msdpsacachestatus.value_namespace = name_space;
        msdpsacachestatus.value_namespace_prefix = name_space_prefix;
    }
}

void DRAFTMSDPMIB::MsdpSACacheTable::MsdpSACacheEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "msdpSACacheGroupAddr")
    {
        msdpsacachegroupaddr.yfilter = yfilter;
    }
    if(value_path == "msdpSACacheSourceAddr")
    {
        msdpsacachesourceaddr.yfilter = yfilter;
    }
    if(value_path == "msdpSACacheOriginRP")
    {
        msdpsacacheoriginrp.yfilter = yfilter;
    }
    if(value_path == "msdpSACachePeerLearnedFrom")
    {
        msdpsacachepeerlearnedfrom.yfilter = yfilter;
    }
    if(value_path == "msdpSACacheRPFPeer")
    {
        msdpsacacherpfpeer.yfilter = yfilter;
    }
    if(value_path == "msdpSACacheInSAs")
    {
        msdpsacacheinsas.yfilter = yfilter;
    }
    if(value_path == "msdpSACacheInDataPackets")
    {
        msdpsacacheindatapackets.yfilter = yfilter;
    }
    if(value_path == "msdpSACacheUpTime")
    {
        msdpsacacheuptime.yfilter = yfilter;
    }
    if(value_path == "msdpSACacheExpiryTime")
    {
        msdpsacacheexpirytime.yfilter = yfilter;
    }
    if(value_path == "msdpSACacheStatus")
    {
        msdpsacachestatus.yfilter = yfilter;
    }
}

bool DRAFTMSDPMIB::MsdpSACacheTable::MsdpSACacheEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "msdpSACacheGroupAddr" || name == "msdpSACacheSourceAddr" || name == "msdpSACacheOriginRP" || name == "msdpSACachePeerLearnedFrom" || name == "msdpSACacheRPFPeer" || name == "msdpSACacheInSAs" || name == "msdpSACacheInDataPackets" || name == "msdpSACacheUpTime" || name == "msdpSACacheExpiryTime" || name == "msdpSACacheStatus")
        return true;
    return false;
}

const Enum::YLeaf DRAFTMSDPMIB::MsdpPeerTable::MsdpPeerEntry::MsdpPeerState::inactive {1, "inactive"};
const Enum::YLeaf DRAFTMSDPMIB::MsdpPeerTable::MsdpPeerEntry::MsdpPeerState::listen {2, "listen"};
const Enum::YLeaf DRAFTMSDPMIB::MsdpPeerTable::MsdpPeerEntry::MsdpPeerState::connecting {3, "connecting"};
const Enum::YLeaf DRAFTMSDPMIB::MsdpPeerTable::MsdpPeerEntry::MsdpPeerState::established {4, "established"};
const Enum::YLeaf DRAFTMSDPMIB::MsdpPeerTable::MsdpPeerEntry::MsdpPeerState::disabled {5, "disabled"};

const Enum::YLeaf DRAFTMSDPMIB::MsdpPeerTable::MsdpPeerEntry::MsdpPeerEncapsulationState::default_ {1, "default"};
const Enum::YLeaf DRAFTMSDPMIB::MsdpPeerTable::MsdpPeerEntry::MsdpPeerEncapsulationState::received {2, "received"};
const Enum::YLeaf DRAFTMSDPMIB::MsdpPeerTable::MsdpPeerEntry::MsdpPeerEncapsulationState::advertising {3, "advertising"};
const Enum::YLeaf DRAFTMSDPMIB::MsdpPeerTable::MsdpPeerEntry::MsdpPeerEncapsulationState::sent {4, "sent"};
const Enum::YLeaf DRAFTMSDPMIB::MsdpPeerTable::MsdpPeerEntry::MsdpPeerEncapsulationState::agreed {5, "agreed"};
const Enum::YLeaf DRAFTMSDPMIB::MsdpPeerTable::MsdpPeerEntry::MsdpPeerEncapsulationState::failed {6, "failed"};

const Enum::YLeaf DRAFTMSDPMIB::MsdpPeerTable::MsdpPeerEntry::MsdpPeerEncapsulationType::tcp {1, "tcp"};
const Enum::YLeaf DRAFTMSDPMIB::MsdpPeerTable::MsdpPeerEntry::MsdpPeerEncapsulationType::udp {2, "udp"};
const Enum::YLeaf DRAFTMSDPMIB::MsdpPeerTable::MsdpPeerEntry::MsdpPeerEncapsulationType::gre {3, "gre"};


}
}

