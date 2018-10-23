
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "RSVP_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace RSVP_MIB {

RSVPMIB::RSVPMIB()
    :
    rsvpgenobjects(std::make_shared<RSVPMIB::RsvpGenObjects>())
    , rsvpsessiontable(std::make_shared<RSVPMIB::RsvpSessionTable>())
    , rsvpsendertable(std::make_shared<RSVPMIB::RsvpSenderTable>())
    , rsvpsenderoutinterfacetable(std::make_shared<RSVPMIB::RsvpSenderOutInterfaceTable>())
    , rsvpresvtable(std::make_shared<RSVPMIB::RsvpResvTable>())
    , rsvpresvfwdtable(std::make_shared<RSVPMIB::RsvpResvFwdTable>())
    , rsvpiftable(std::make_shared<RSVPMIB::RsvpIfTable>())
    , rsvpnbrtable(std::make_shared<RSVPMIB::RsvpNbrTable>())
{
    rsvpgenobjects->parent = this;
    rsvpsessiontable->parent = this;
    rsvpsendertable->parent = this;
    rsvpsenderoutinterfacetable->parent = this;
    rsvpresvtable->parent = this;
    rsvpresvfwdtable->parent = this;
    rsvpiftable->parent = this;
    rsvpnbrtable->parent = this;

    yang_name = "RSVP-MIB"; yang_parent_name = "RSVP-MIB"; is_top_level_class = true; has_list_ancestor = false; 
}

RSVPMIB::~RSVPMIB()
{
}

bool RSVPMIB::has_data() const
{
    if (is_presence_container) return true;
    return (rsvpgenobjects !=  nullptr && rsvpgenobjects->has_data())
	|| (rsvpsessiontable !=  nullptr && rsvpsessiontable->has_data())
	|| (rsvpsendertable !=  nullptr && rsvpsendertable->has_data())
	|| (rsvpsenderoutinterfacetable !=  nullptr && rsvpsenderoutinterfacetable->has_data())
	|| (rsvpresvtable !=  nullptr && rsvpresvtable->has_data())
	|| (rsvpresvfwdtable !=  nullptr && rsvpresvfwdtable->has_data())
	|| (rsvpiftable !=  nullptr && rsvpiftable->has_data())
	|| (rsvpnbrtable !=  nullptr && rsvpnbrtable->has_data());
}

bool RSVPMIB::has_operation() const
{
    return is_set(yfilter)
	|| (rsvpgenobjects !=  nullptr && rsvpgenobjects->has_operation())
	|| (rsvpsessiontable !=  nullptr && rsvpsessiontable->has_operation())
	|| (rsvpsendertable !=  nullptr && rsvpsendertable->has_operation())
	|| (rsvpsenderoutinterfacetable !=  nullptr && rsvpsenderoutinterfacetable->has_operation())
	|| (rsvpresvtable !=  nullptr && rsvpresvtable->has_operation())
	|| (rsvpresvfwdtable !=  nullptr && rsvpresvfwdtable->has_operation())
	|| (rsvpiftable !=  nullptr && rsvpiftable->has_operation())
	|| (rsvpnbrtable !=  nullptr && rsvpnbrtable->has_operation());
}

std::string RSVPMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RSVP-MIB:RSVP-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RSVPMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RSVPMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsvpGenObjects")
    {
        if(rsvpgenobjects == nullptr)
        {
            rsvpgenobjects = std::make_shared<RSVPMIB::RsvpGenObjects>();
        }
        return rsvpgenobjects;
    }

    if(child_yang_name == "rsvpSessionTable")
    {
        if(rsvpsessiontable == nullptr)
        {
            rsvpsessiontable = std::make_shared<RSVPMIB::RsvpSessionTable>();
        }
        return rsvpsessiontable;
    }

    if(child_yang_name == "rsvpSenderTable")
    {
        if(rsvpsendertable == nullptr)
        {
            rsvpsendertable = std::make_shared<RSVPMIB::RsvpSenderTable>();
        }
        return rsvpsendertable;
    }

    if(child_yang_name == "rsvpSenderOutInterfaceTable")
    {
        if(rsvpsenderoutinterfacetable == nullptr)
        {
            rsvpsenderoutinterfacetable = std::make_shared<RSVPMIB::RsvpSenderOutInterfaceTable>();
        }
        return rsvpsenderoutinterfacetable;
    }

    if(child_yang_name == "rsvpResvTable")
    {
        if(rsvpresvtable == nullptr)
        {
            rsvpresvtable = std::make_shared<RSVPMIB::RsvpResvTable>();
        }
        return rsvpresvtable;
    }

    if(child_yang_name == "rsvpResvFwdTable")
    {
        if(rsvpresvfwdtable == nullptr)
        {
            rsvpresvfwdtable = std::make_shared<RSVPMIB::RsvpResvFwdTable>();
        }
        return rsvpresvfwdtable;
    }

    if(child_yang_name == "rsvpIfTable")
    {
        if(rsvpiftable == nullptr)
        {
            rsvpiftable = std::make_shared<RSVPMIB::RsvpIfTable>();
        }
        return rsvpiftable;
    }

    if(child_yang_name == "rsvpNbrTable")
    {
        if(rsvpnbrtable == nullptr)
        {
            rsvpnbrtable = std::make_shared<RSVPMIB::RsvpNbrTable>();
        }
        return rsvpnbrtable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RSVPMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rsvpgenobjects != nullptr)
    {
        _children["rsvpGenObjects"] = rsvpgenobjects;
    }

    if(rsvpsessiontable != nullptr)
    {
        _children["rsvpSessionTable"] = rsvpsessiontable;
    }

    if(rsvpsendertable != nullptr)
    {
        _children["rsvpSenderTable"] = rsvpsendertable;
    }

    if(rsvpsenderoutinterfacetable != nullptr)
    {
        _children["rsvpSenderOutInterfaceTable"] = rsvpsenderoutinterfacetable;
    }

    if(rsvpresvtable != nullptr)
    {
        _children["rsvpResvTable"] = rsvpresvtable;
    }

    if(rsvpresvfwdtable != nullptr)
    {
        _children["rsvpResvFwdTable"] = rsvpresvfwdtable;
    }

    if(rsvpiftable != nullptr)
    {
        _children["rsvpIfTable"] = rsvpiftable;
    }

    if(rsvpnbrtable != nullptr)
    {
        _children["rsvpNbrTable"] = rsvpnbrtable;
    }

    return _children;
}

void RSVPMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RSVPMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> RSVPMIB::clone_ptr() const
{
    return std::make_shared<RSVPMIB>();
}

std::string RSVPMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string RSVPMIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function RSVPMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> RSVPMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool RSVPMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsvpGenObjects" || name == "rsvpSessionTable" || name == "rsvpSenderTable" || name == "rsvpSenderOutInterfaceTable" || name == "rsvpResvTable" || name == "rsvpResvFwdTable" || name == "rsvpIfTable" || name == "rsvpNbrTable")
        return true;
    return false;
}

RSVPMIB::RsvpGenObjects::RsvpGenObjects()
    :
    rsvpbadpackets{YType::uint32, "rsvpBadPackets"},
    rsvpsendernewindex{YType::int32, "rsvpSenderNewIndex"},
    rsvpresvnewindex{YType::int32, "rsvpResvNewIndex"},
    rsvpresvfwdnewindex{YType::int32, "rsvpResvFwdNewIndex"},
    rsvpsessionnewindex{YType::int32, "rsvpSessionNewIndex"}
{

    yang_name = "rsvpGenObjects"; yang_parent_name = "RSVP-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

RSVPMIB::RsvpGenObjects::~RsvpGenObjects()
{
}

bool RSVPMIB::RsvpGenObjects::has_data() const
{
    if (is_presence_container) return true;
    return rsvpbadpackets.is_set
	|| rsvpsendernewindex.is_set
	|| rsvpresvnewindex.is_set
	|| rsvpresvfwdnewindex.is_set
	|| rsvpsessionnewindex.is_set;
}

bool RSVPMIB::RsvpGenObjects::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rsvpbadpackets.yfilter)
	|| ydk::is_set(rsvpsendernewindex.yfilter)
	|| ydk::is_set(rsvpresvnewindex.yfilter)
	|| ydk::is_set(rsvpresvfwdnewindex.yfilter)
	|| ydk::is_set(rsvpsessionnewindex.yfilter);
}

std::string RSVPMIB::RsvpGenObjects::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RSVP-MIB:RSVP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string RSVPMIB::RsvpGenObjects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvpGenObjects";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RSVPMIB::RsvpGenObjects::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rsvpbadpackets.is_set || is_set(rsvpbadpackets.yfilter)) leaf_name_data.push_back(rsvpbadpackets.get_name_leafdata());
    if (rsvpsendernewindex.is_set || is_set(rsvpsendernewindex.yfilter)) leaf_name_data.push_back(rsvpsendernewindex.get_name_leafdata());
    if (rsvpresvnewindex.is_set || is_set(rsvpresvnewindex.yfilter)) leaf_name_data.push_back(rsvpresvnewindex.get_name_leafdata());
    if (rsvpresvfwdnewindex.is_set || is_set(rsvpresvfwdnewindex.yfilter)) leaf_name_data.push_back(rsvpresvfwdnewindex.get_name_leafdata());
    if (rsvpsessionnewindex.is_set || is_set(rsvpsessionnewindex.yfilter)) leaf_name_data.push_back(rsvpsessionnewindex.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RSVPMIB::RsvpGenObjects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RSVPMIB::RsvpGenObjects::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RSVPMIB::RsvpGenObjects::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rsvpBadPackets")
    {
        rsvpbadpackets = value;
        rsvpbadpackets.value_namespace = name_space;
        rsvpbadpackets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvpSenderNewIndex")
    {
        rsvpsendernewindex = value;
        rsvpsendernewindex.value_namespace = name_space;
        rsvpsendernewindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvpResvNewIndex")
    {
        rsvpresvnewindex = value;
        rsvpresvnewindex.value_namespace = name_space;
        rsvpresvnewindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvpResvFwdNewIndex")
    {
        rsvpresvfwdnewindex = value;
        rsvpresvfwdnewindex.value_namespace = name_space;
        rsvpresvfwdnewindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvpSessionNewIndex")
    {
        rsvpsessionnewindex = value;
        rsvpsessionnewindex.value_namespace = name_space;
        rsvpsessionnewindex.value_namespace_prefix = name_space_prefix;
    }
}

void RSVPMIB::RsvpGenObjects::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rsvpBadPackets")
    {
        rsvpbadpackets.yfilter = yfilter;
    }
    if(value_path == "rsvpSenderNewIndex")
    {
        rsvpsendernewindex.yfilter = yfilter;
    }
    if(value_path == "rsvpResvNewIndex")
    {
        rsvpresvnewindex.yfilter = yfilter;
    }
    if(value_path == "rsvpResvFwdNewIndex")
    {
        rsvpresvfwdnewindex.yfilter = yfilter;
    }
    if(value_path == "rsvpSessionNewIndex")
    {
        rsvpsessionnewindex.yfilter = yfilter;
    }
}

bool RSVPMIB::RsvpGenObjects::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsvpBadPackets" || name == "rsvpSenderNewIndex" || name == "rsvpResvNewIndex" || name == "rsvpResvFwdNewIndex" || name == "rsvpSessionNewIndex")
        return true;
    return false;
}

RSVPMIB::RsvpSessionTable::RsvpSessionTable()
    :
    rsvpsessionentry(this, {"rsvpsessionnumber"})
{

    yang_name = "rsvpSessionTable"; yang_parent_name = "RSVP-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

RSVPMIB::RsvpSessionTable::~RsvpSessionTable()
{
}

bool RSVPMIB::RsvpSessionTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rsvpsessionentry.len(); index++)
    {
        if(rsvpsessionentry[index]->has_data())
            return true;
    }
    return false;
}

bool RSVPMIB::RsvpSessionTable::has_operation() const
{
    for (std::size_t index=0; index<rsvpsessionentry.len(); index++)
    {
        if(rsvpsessionentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RSVPMIB::RsvpSessionTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RSVP-MIB:RSVP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string RSVPMIB::RsvpSessionTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvpSessionTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RSVPMIB::RsvpSessionTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RSVPMIB::RsvpSessionTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsvpSessionEntry")
    {
        auto ent_ = std::make_shared<RSVPMIB::RsvpSessionTable::RsvpSessionEntry>();
        ent_->parent = this;
        rsvpsessionentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RSVPMIB::RsvpSessionTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rsvpsessionentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void RSVPMIB::RsvpSessionTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RSVPMIB::RsvpSessionTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RSVPMIB::RsvpSessionTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsvpSessionEntry")
        return true;
    return false;
}

RSVPMIB::RsvpSessionTable::RsvpSessionEntry::RsvpSessionEntry()
    :
    rsvpsessionnumber{YType::int32, "rsvpSessionNumber"},
    rsvpsessiontype{YType::int32, "rsvpSessionType"},
    rsvpsessiondestaddr{YType::str, "rsvpSessionDestAddr"},
    rsvpsessiondestaddrlength{YType::int32, "rsvpSessionDestAddrLength"},
    rsvpsessionprotocol{YType::int32, "rsvpSessionProtocol"},
    rsvpsessionport{YType::str, "rsvpSessionPort"},
    rsvpsessionsenders{YType::uint32, "rsvpSessionSenders"},
    rsvpsessionreceivers{YType::uint32, "rsvpSessionReceivers"},
    rsvpsessionrequests{YType::uint32, "rsvpSessionRequests"}
{

    yang_name = "rsvpSessionEntry"; yang_parent_name = "rsvpSessionTable"; is_top_level_class = false; has_list_ancestor = false; 
}

RSVPMIB::RsvpSessionTable::RsvpSessionEntry::~RsvpSessionEntry()
{
}

bool RSVPMIB::RsvpSessionTable::RsvpSessionEntry::has_data() const
{
    if (is_presence_container) return true;
    return rsvpsessionnumber.is_set
	|| rsvpsessiontype.is_set
	|| rsvpsessiondestaddr.is_set
	|| rsvpsessiondestaddrlength.is_set
	|| rsvpsessionprotocol.is_set
	|| rsvpsessionport.is_set
	|| rsvpsessionsenders.is_set
	|| rsvpsessionreceivers.is_set
	|| rsvpsessionrequests.is_set;
}

bool RSVPMIB::RsvpSessionTable::RsvpSessionEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rsvpsessionnumber.yfilter)
	|| ydk::is_set(rsvpsessiontype.yfilter)
	|| ydk::is_set(rsvpsessiondestaddr.yfilter)
	|| ydk::is_set(rsvpsessiondestaddrlength.yfilter)
	|| ydk::is_set(rsvpsessionprotocol.yfilter)
	|| ydk::is_set(rsvpsessionport.yfilter)
	|| ydk::is_set(rsvpsessionsenders.yfilter)
	|| ydk::is_set(rsvpsessionreceivers.yfilter)
	|| ydk::is_set(rsvpsessionrequests.yfilter);
}

std::string RSVPMIB::RsvpSessionTable::RsvpSessionEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RSVP-MIB:RSVP-MIB/rsvpSessionTable/" << get_segment_path();
    return path_buffer.str();
}

std::string RSVPMIB::RsvpSessionTable::RsvpSessionEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvpSessionEntry";
    ADD_KEY_TOKEN(rsvpsessionnumber, "rsvpSessionNumber");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RSVPMIB::RsvpSessionTable::RsvpSessionEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rsvpsessionnumber.is_set || is_set(rsvpsessionnumber.yfilter)) leaf_name_data.push_back(rsvpsessionnumber.get_name_leafdata());
    if (rsvpsessiontype.is_set || is_set(rsvpsessiontype.yfilter)) leaf_name_data.push_back(rsvpsessiontype.get_name_leafdata());
    if (rsvpsessiondestaddr.is_set || is_set(rsvpsessiondestaddr.yfilter)) leaf_name_data.push_back(rsvpsessiondestaddr.get_name_leafdata());
    if (rsvpsessiondestaddrlength.is_set || is_set(rsvpsessiondestaddrlength.yfilter)) leaf_name_data.push_back(rsvpsessiondestaddrlength.get_name_leafdata());
    if (rsvpsessionprotocol.is_set || is_set(rsvpsessionprotocol.yfilter)) leaf_name_data.push_back(rsvpsessionprotocol.get_name_leafdata());
    if (rsvpsessionport.is_set || is_set(rsvpsessionport.yfilter)) leaf_name_data.push_back(rsvpsessionport.get_name_leafdata());
    if (rsvpsessionsenders.is_set || is_set(rsvpsessionsenders.yfilter)) leaf_name_data.push_back(rsvpsessionsenders.get_name_leafdata());
    if (rsvpsessionreceivers.is_set || is_set(rsvpsessionreceivers.yfilter)) leaf_name_data.push_back(rsvpsessionreceivers.get_name_leafdata());
    if (rsvpsessionrequests.is_set || is_set(rsvpsessionrequests.yfilter)) leaf_name_data.push_back(rsvpsessionrequests.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RSVPMIB::RsvpSessionTable::RsvpSessionEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RSVPMIB::RsvpSessionTable::RsvpSessionEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RSVPMIB::RsvpSessionTable::RsvpSessionEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rsvpSessionNumber")
    {
        rsvpsessionnumber = value;
        rsvpsessionnumber.value_namespace = name_space;
        rsvpsessionnumber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvpSessionType")
    {
        rsvpsessiontype = value;
        rsvpsessiontype.value_namespace = name_space;
        rsvpsessiontype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvpSessionDestAddr")
    {
        rsvpsessiondestaddr = value;
        rsvpsessiondestaddr.value_namespace = name_space;
        rsvpsessiondestaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvpSessionDestAddrLength")
    {
        rsvpsessiondestaddrlength = value;
        rsvpsessiondestaddrlength.value_namespace = name_space;
        rsvpsessiondestaddrlength.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvpSessionProtocol")
    {
        rsvpsessionprotocol = value;
        rsvpsessionprotocol.value_namespace = name_space;
        rsvpsessionprotocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvpSessionPort")
    {
        rsvpsessionport = value;
        rsvpsessionport.value_namespace = name_space;
        rsvpsessionport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvpSessionSenders")
    {
        rsvpsessionsenders = value;
        rsvpsessionsenders.value_namespace = name_space;
        rsvpsessionsenders.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvpSessionReceivers")
    {
        rsvpsessionreceivers = value;
        rsvpsessionreceivers.value_namespace = name_space;
        rsvpsessionreceivers.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvpSessionRequests")
    {
        rsvpsessionrequests = value;
        rsvpsessionrequests.value_namespace = name_space;
        rsvpsessionrequests.value_namespace_prefix = name_space_prefix;
    }
}

void RSVPMIB::RsvpSessionTable::RsvpSessionEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rsvpSessionNumber")
    {
        rsvpsessionnumber.yfilter = yfilter;
    }
    if(value_path == "rsvpSessionType")
    {
        rsvpsessiontype.yfilter = yfilter;
    }
    if(value_path == "rsvpSessionDestAddr")
    {
        rsvpsessiondestaddr.yfilter = yfilter;
    }
    if(value_path == "rsvpSessionDestAddrLength")
    {
        rsvpsessiondestaddrlength.yfilter = yfilter;
    }
    if(value_path == "rsvpSessionProtocol")
    {
        rsvpsessionprotocol.yfilter = yfilter;
    }
    if(value_path == "rsvpSessionPort")
    {
        rsvpsessionport.yfilter = yfilter;
    }
    if(value_path == "rsvpSessionSenders")
    {
        rsvpsessionsenders.yfilter = yfilter;
    }
    if(value_path == "rsvpSessionReceivers")
    {
        rsvpsessionreceivers.yfilter = yfilter;
    }
    if(value_path == "rsvpSessionRequests")
    {
        rsvpsessionrequests.yfilter = yfilter;
    }
}

bool RSVPMIB::RsvpSessionTable::RsvpSessionEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsvpSessionNumber" || name == "rsvpSessionType" || name == "rsvpSessionDestAddr" || name == "rsvpSessionDestAddrLength" || name == "rsvpSessionProtocol" || name == "rsvpSessionPort" || name == "rsvpSessionSenders" || name == "rsvpSessionReceivers" || name == "rsvpSessionRequests")
        return true;
    return false;
}

RSVPMIB::RsvpSenderTable::RsvpSenderTable()
    :
    rsvpsenderentry(this, {"rsvpsessionnumber", "rsvpsendernumber"})
{

    yang_name = "rsvpSenderTable"; yang_parent_name = "RSVP-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

RSVPMIB::RsvpSenderTable::~RsvpSenderTable()
{
}

bool RSVPMIB::RsvpSenderTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rsvpsenderentry.len(); index++)
    {
        if(rsvpsenderentry[index]->has_data())
            return true;
    }
    return false;
}

bool RSVPMIB::RsvpSenderTable::has_operation() const
{
    for (std::size_t index=0; index<rsvpsenderentry.len(); index++)
    {
        if(rsvpsenderentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RSVPMIB::RsvpSenderTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RSVP-MIB:RSVP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string RSVPMIB::RsvpSenderTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvpSenderTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RSVPMIB::RsvpSenderTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RSVPMIB::RsvpSenderTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsvpSenderEntry")
    {
        auto ent_ = std::make_shared<RSVPMIB::RsvpSenderTable::RsvpSenderEntry>();
        ent_->parent = this;
        rsvpsenderentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RSVPMIB::RsvpSenderTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rsvpsenderentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void RSVPMIB::RsvpSenderTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RSVPMIB::RsvpSenderTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RSVPMIB::RsvpSenderTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsvpSenderEntry")
        return true;
    return false;
}

RSVPMIB::RsvpSenderTable::RsvpSenderEntry::RsvpSenderEntry()
    :
    rsvpsessionnumber{YType::str, "rsvpSessionNumber"},
    rsvpsendernumber{YType::int32, "rsvpSenderNumber"},
    rsvpsendertype{YType::int32, "rsvpSenderType"},
    rsvpsenderdestaddr{YType::str, "rsvpSenderDestAddr"},
    rsvpsenderaddr{YType::str, "rsvpSenderAddr"},
    rsvpsenderdestaddrlength{YType::int32, "rsvpSenderDestAddrLength"},
    rsvpsenderaddrlength{YType::int32, "rsvpSenderAddrLength"},
    rsvpsenderprotocol{YType::int32, "rsvpSenderProtocol"},
    rsvpsenderdestport{YType::str, "rsvpSenderDestPort"},
    rsvpsenderport{YType::str, "rsvpSenderPort"},
    rsvpsenderflowid{YType::int32, "rsvpSenderFlowId"},
    rsvpsenderhopaddr{YType::str, "rsvpSenderHopAddr"},
    rsvpsenderhoplih{YType::int32, "rsvpSenderHopLih"},
    rsvpsenderinterface{YType::int32, "rsvpSenderInterface"},
    rsvpsendertspecrate{YType::int32, "rsvpSenderTSpecRate"},
    rsvpsendertspecpeakrate{YType::int32, "rsvpSenderTSpecPeakRate"},
    rsvpsendertspecburst{YType::int32, "rsvpSenderTSpecBurst"},
    rsvpsendertspecmintu{YType::int32, "rsvpSenderTSpecMinTU"},
    rsvpsendertspecmaxtu{YType::int32, "rsvpSenderTSpecMaxTU"},
    rsvpsenderinterval{YType::int32, "rsvpSenderInterval"},
    rsvpsenderrsvphop{YType::boolean, "rsvpSenderRSVPHop"},
    rsvpsenderlastchange{YType::uint32, "rsvpSenderLastChange"},
    rsvpsenderpolicy{YType::str, "rsvpSenderPolicy"},
    rsvpsenderadspecbreak{YType::boolean, "rsvpSenderAdspecBreak"},
    rsvpsenderadspechopcount{YType::int32, "rsvpSenderAdspecHopCount"},
    rsvpsenderadspecpathbw{YType::int32, "rsvpSenderAdspecPathBw"},
    rsvpsenderadspecminlatency{YType::int32, "rsvpSenderAdspecMinLatency"},
    rsvpsenderadspecmtu{YType::int32, "rsvpSenderAdspecMtu"},
    rsvpsenderadspecguaranteedsvc{YType::boolean, "rsvpSenderAdspecGuaranteedSvc"},
    rsvpsenderadspecguaranteedbreak{YType::boolean, "rsvpSenderAdspecGuaranteedBreak"},
    rsvpsenderadspecguaranteedctot{YType::int32, "rsvpSenderAdspecGuaranteedCtot"},
    rsvpsenderadspecguaranteeddtot{YType::int32, "rsvpSenderAdspecGuaranteedDtot"},
    rsvpsenderadspecguaranteedcsum{YType::int32, "rsvpSenderAdspecGuaranteedCsum"},
    rsvpsenderadspecguaranteeddsum{YType::int32, "rsvpSenderAdspecGuaranteedDsum"},
    rsvpsenderadspecguaranteedhopcount{YType::int32, "rsvpSenderAdspecGuaranteedHopCount"},
    rsvpsenderadspecguaranteedpathbw{YType::int32, "rsvpSenderAdspecGuaranteedPathBw"},
    rsvpsenderadspecguaranteedminlatency{YType::int32, "rsvpSenderAdspecGuaranteedMinLatency"},
    rsvpsenderadspecguaranteedmtu{YType::int32, "rsvpSenderAdspecGuaranteedMtu"},
    rsvpsenderadspecctrlloadsvc{YType::boolean, "rsvpSenderAdspecCtrlLoadSvc"},
    rsvpsenderadspecctrlloadbreak{YType::boolean, "rsvpSenderAdspecCtrlLoadBreak"},
    rsvpsenderadspecctrlloadhopcount{YType::int32, "rsvpSenderAdspecCtrlLoadHopCount"},
    rsvpsenderadspecctrlloadpathbw{YType::int32, "rsvpSenderAdspecCtrlLoadPathBw"},
    rsvpsenderadspecctrlloadminlatency{YType::int32, "rsvpSenderAdspecCtrlLoadMinLatency"},
    rsvpsenderadspecctrlloadmtu{YType::int32, "rsvpSenderAdspecCtrlLoadMtu"},
    rsvpsenderstatus{YType::enumeration, "rsvpSenderStatus"},
    rsvpsenderttl{YType::int32, "rsvpSenderTTL"}
{

    yang_name = "rsvpSenderEntry"; yang_parent_name = "rsvpSenderTable"; is_top_level_class = false; has_list_ancestor = false; 
}

RSVPMIB::RsvpSenderTable::RsvpSenderEntry::~RsvpSenderEntry()
{
}

bool RSVPMIB::RsvpSenderTable::RsvpSenderEntry::has_data() const
{
    if (is_presence_container) return true;
    return rsvpsessionnumber.is_set
	|| rsvpsendernumber.is_set
	|| rsvpsendertype.is_set
	|| rsvpsenderdestaddr.is_set
	|| rsvpsenderaddr.is_set
	|| rsvpsenderdestaddrlength.is_set
	|| rsvpsenderaddrlength.is_set
	|| rsvpsenderprotocol.is_set
	|| rsvpsenderdestport.is_set
	|| rsvpsenderport.is_set
	|| rsvpsenderflowid.is_set
	|| rsvpsenderhopaddr.is_set
	|| rsvpsenderhoplih.is_set
	|| rsvpsenderinterface.is_set
	|| rsvpsendertspecrate.is_set
	|| rsvpsendertspecpeakrate.is_set
	|| rsvpsendertspecburst.is_set
	|| rsvpsendertspecmintu.is_set
	|| rsvpsendertspecmaxtu.is_set
	|| rsvpsenderinterval.is_set
	|| rsvpsenderrsvphop.is_set
	|| rsvpsenderlastchange.is_set
	|| rsvpsenderpolicy.is_set
	|| rsvpsenderadspecbreak.is_set
	|| rsvpsenderadspechopcount.is_set
	|| rsvpsenderadspecpathbw.is_set
	|| rsvpsenderadspecminlatency.is_set
	|| rsvpsenderadspecmtu.is_set
	|| rsvpsenderadspecguaranteedsvc.is_set
	|| rsvpsenderadspecguaranteedbreak.is_set
	|| rsvpsenderadspecguaranteedctot.is_set
	|| rsvpsenderadspecguaranteeddtot.is_set
	|| rsvpsenderadspecguaranteedcsum.is_set
	|| rsvpsenderadspecguaranteeddsum.is_set
	|| rsvpsenderadspecguaranteedhopcount.is_set
	|| rsvpsenderadspecguaranteedpathbw.is_set
	|| rsvpsenderadspecguaranteedminlatency.is_set
	|| rsvpsenderadspecguaranteedmtu.is_set
	|| rsvpsenderadspecctrlloadsvc.is_set
	|| rsvpsenderadspecctrlloadbreak.is_set
	|| rsvpsenderadspecctrlloadhopcount.is_set
	|| rsvpsenderadspecctrlloadpathbw.is_set
	|| rsvpsenderadspecctrlloadminlatency.is_set
	|| rsvpsenderadspecctrlloadmtu.is_set
	|| rsvpsenderstatus.is_set
	|| rsvpsenderttl.is_set;
}

bool RSVPMIB::RsvpSenderTable::RsvpSenderEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rsvpsessionnumber.yfilter)
	|| ydk::is_set(rsvpsendernumber.yfilter)
	|| ydk::is_set(rsvpsendertype.yfilter)
	|| ydk::is_set(rsvpsenderdestaddr.yfilter)
	|| ydk::is_set(rsvpsenderaddr.yfilter)
	|| ydk::is_set(rsvpsenderdestaddrlength.yfilter)
	|| ydk::is_set(rsvpsenderaddrlength.yfilter)
	|| ydk::is_set(rsvpsenderprotocol.yfilter)
	|| ydk::is_set(rsvpsenderdestport.yfilter)
	|| ydk::is_set(rsvpsenderport.yfilter)
	|| ydk::is_set(rsvpsenderflowid.yfilter)
	|| ydk::is_set(rsvpsenderhopaddr.yfilter)
	|| ydk::is_set(rsvpsenderhoplih.yfilter)
	|| ydk::is_set(rsvpsenderinterface.yfilter)
	|| ydk::is_set(rsvpsendertspecrate.yfilter)
	|| ydk::is_set(rsvpsendertspecpeakrate.yfilter)
	|| ydk::is_set(rsvpsendertspecburst.yfilter)
	|| ydk::is_set(rsvpsendertspecmintu.yfilter)
	|| ydk::is_set(rsvpsendertspecmaxtu.yfilter)
	|| ydk::is_set(rsvpsenderinterval.yfilter)
	|| ydk::is_set(rsvpsenderrsvphop.yfilter)
	|| ydk::is_set(rsvpsenderlastchange.yfilter)
	|| ydk::is_set(rsvpsenderpolicy.yfilter)
	|| ydk::is_set(rsvpsenderadspecbreak.yfilter)
	|| ydk::is_set(rsvpsenderadspechopcount.yfilter)
	|| ydk::is_set(rsvpsenderadspecpathbw.yfilter)
	|| ydk::is_set(rsvpsenderadspecminlatency.yfilter)
	|| ydk::is_set(rsvpsenderadspecmtu.yfilter)
	|| ydk::is_set(rsvpsenderadspecguaranteedsvc.yfilter)
	|| ydk::is_set(rsvpsenderadspecguaranteedbreak.yfilter)
	|| ydk::is_set(rsvpsenderadspecguaranteedctot.yfilter)
	|| ydk::is_set(rsvpsenderadspecguaranteeddtot.yfilter)
	|| ydk::is_set(rsvpsenderadspecguaranteedcsum.yfilter)
	|| ydk::is_set(rsvpsenderadspecguaranteeddsum.yfilter)
	|| ydk::is_set(rsvpsenderadspecguaranteedhopcount.yfilter)
	|| ydk::is_set(rsvpsenderadspecguaranteedpathbw.yfilter)
	|| ydk::is_set(rsvpsenderadspecguaranteedminlatency.yfilter)
	|| ydk::is_set(rsvpsenderadspecguaranteedmtu.yfilter)
	|| ydk::is_set(rsvpsenderadspecctrlloadsvc.yfilter)
	|| ydk::is_set(rsvpsenderadspecctrlloadbreak.yfilter)
	|| ydk::is_set(rsvpsenderadspecctrlloadhopcount.yfilter)
	|| ydk::is_set(rsvpsenderadspecctrlloadpathbw.yfilter)
	|| ydk::is_set(rsvpsenderadspecctrlloadminlatency.yfilter)
	|| ydk::is_set(rsvpsenderadspecctrlloadmtu.yfilter)
	|| ydk::is_set(rsvpsenderstatus.yfilter)
	|| ydk::is_set(rsvpsenderttl.yfilter);
}

std::string RSVPMIB::RsvpSenderTable::RsvpSenderEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RSVP-MIB:RSVP-MIB/rsvpSenderTable/" << get_segment_path();
    return path_buffer.str();
}

std::string RSVPMIB::RsvpSenderTable::RsvpSenderEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvpSenderEntry";
    ADD_KEY_TOKEN(rsvpsessionnumber, "rsvpSessionNumber");
    ADD_KEY_TOKEN(rsvpsendernumber, "rsvpSenderNumber");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RSVPMIB::RsvpSenderTable::RsvpSenderEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rsvpsessionnumber.is_set || is_set(rsvpsessionnumber.yfilter)) leaf_name_data.push_back(rsvpsessionnumber.get_name_leafdata());
    if (rsvpsendernumber.is_set || is_set(rsvpsendernumber.yfilter)) leaf_name_data.push_back(rsvpsendernumber.get_name_leafdata());
    if (rsvpsendertype.is_set || is_set(rsvpsendertype.yfilter)) leaf_name_data.push_back(rsvpsendertype.get_name_leafdata());
    if (rsvpsenderdestaddr.is_set || is_set(rsvpsenderdestaddr.yfilter)) leaf_name_data.push_back(rsvpsenderdestaddr.get_name_leafdata());
    if (rsvpsenderaddr.is_set || is_set(rsvpsenderaddr.yfilter)) leaf_name_data.push_back(rsvpsenderaddr.get_name_leafdata());
    if (rsvpsenderdestaddrlength.is_set || is_set(rsvpsenderdestaddrlength.yfilter)) leaf_name_data.push_back(rsvpsenderdestaddrlength.get_name_leafdata());
    if (rsvpsenderaddrlength.is_set || is_set(rsvpsenderaddrlength.yfilter)) leaf_name_data.push_back(rsvpsenderaddrlength.get_name_leafdata());
    if (rsvpsenderprotocol.is_set || is_set(rsvpsenderprotocol.yfilter)) leaf_name_data.push_back(rsvpsenderprotocol.get_name_leafdata());
    if (rsvpsenderdestport.is_set || is_set(rsvpsenderdestport.yfilter)) leaf_name_data.push_back(rsvpsenderdestport.get_name_leafdata());
    if (rsvpsenderport.is_set || is_set(rsvpsenderport.yfilter)) leaf_name_data.push_back(rsvpsenderport.get_name_leafdata());
    if (rsvpsenderflowid.is_set || is_set(rsvpsenderflowid.yfilter)) leaf_name_data.push_back(rsvpsenderflowid.get_name_leafdata());
    if (rsvpsenderhopaddr.is_set || is_set(rsvpsenderhopaddr.yfilter)) leaf_name_data.push_back(rsvpsenderhopaddr.get_name_leafdata());
    if (rsvpsenderhoplih.is_set || is_set(rsvpsenderhoplih.yfilter)) leaf_name_data.push_back(rsvpsenderhoplih.get_name_leafdata());
    if (rsvpsenderinterface.is_set || is_set(rsvpsenderinterface.yfilter)) leaf_name_data.push_back(rsvpsenderinterface.get_name_leafdata());
    if (rsvpsendertspecrate.is_set || is_set(rsvpsendertspecrate.yfilter)) leaf_name_data.push_back(rsvpsendertspecrate.get_name_leafdata());
    if (rsvpsendertspecpeakrate.is_set || is_set(rsvpsendertspecpeakrate.yfilter)) leaf_name_data.push_back(rsvpsendertspecpeakrate.get_name_leafdata());
    if (rsvpsendertspecburst.is_set || is_set(rsvpsendertspecburst.yfilter)) leaf_name_data.push_back(rsvpsendertspecburst.get_name_leafdata());
    if (rsvpsendertspecmintu.is_set || is_set(rsvpsendertspecmintu.yfilter)) leaf_name_data.push_back(rsvpsendertspecmintu.get_name_leafdata());
    if (rsvpsendertspecmaxtu.is_set || is_set(rsvpsendertspecmaxtu.yfilter)) leaf_name_data.push_back(rsvpsendertspecmaxtu.get_name_leafdata());
    if (rsvpsenderinterval.is_set || is_set(rsvpsenderinterval.yfilter)) leaf_name_data.push_back(rsvpsenderinterval.get_name_leafdata());
    if (rsvpsenderrsvphop.is_set || is_set(rsvpsenderrsvphop.yfilter)) leaf_name_data.push_back(rsvpsenderrsvphop.get_name_leafdata());
    if (rsvpsenderlastchange.is_set || is_set(rsvpsenderlastchange.yfilter)) leaf_name_data.push_back(rsvpsenderlastchange.get_name_leafdata());
    if (rsvpsenderpolicy.is_set || is_set(rsvpsenderpolicy.yfilter)) leaf_name_data.push_back(rsvpsenderpolicy.get_name_leafdata());
    if (rsvpsenderadspecbreak.is_set || is_set(rsvpsenderadspecbreak.yfilter)) leaf_name_data.push_back(rsvpsenderadspecbreak.get_name_leafdata());
    if (rsvpsenderadspechopcount.is_set || is_set(rsvpsenderadspechopcount.yfilter)) leaf_name_data.push_back(rsvpsenderadspechopcount.get_name_leafdata());
    if (rsvpsenderadspecpathbw.is_set || is_set(rsvpsenderadspecpathbw.yfilter)) leaf_name_data.push_back(rsvpsenderadspecpathbw.get_name_leafdata());
    if (rsvpsenderadspecminlatency.is_set || is_set(rsvpsenderadspecminlatency.yfilter)) leaf_name_data.push_back(rsvpsenderadspecminlatency.get_name_leafdata());
    if (rsvpsenderadspecmtu.is_set || is_set(rsvpsenderadspecmtu.yfilter)) leaf_name_data.push_back(rsvpsenderadspecmtu.get_name_leafdata());
    if (rsvpsenderadspecguaranteedsvc.is_set || is_set(rsvpsenderadspecguaranteedsvc.yfilter)) leaf_name_data.push_back(rsvpsenderadspecguaranteedsvc.get_name_leafdata());
    if (rsvpsenderadspecguaranteedbreak.is_set || is_set(rsvpsenderadspecguaranteedbreak.yfilter)) leaf_name_data.push_back(rsvpsenderadspecguaranteedbreak.get_name_leafdata());
    if (rsvpsenderadspecguaranteedctot.is_set || is_set(rsvpsenderadspecguaranteedctot.yfilter)) leaf_name_data.push_back(rsvpsenderadspecguaranteedctot.get_name_leafdata());
    if (rsvpsenderadspecguaranteeddtot.is_set || is_set(rsvpsenderadspecguaranteeddtot.yfilter)) leaf_name_data.push_back(rsvpsenderadspecguaranteeddtot.get_name_leafdata());
    if (rsvpsenderadspecguaranteedcsum.is_set || is_set(rsvpsenderadspecguaranteedcsum.yfilter)) leaf_name_data.push_back(rsvpsenderadspecguaranteedcsum.get_name_leafdata());
    if (rsvpsenderadspecguaranteeddsum.is_set || is_set(rsvpsenderadspecguaranteeddsum.yfilter)) leaf_name_data.push_back(rsvpsenderadspecguaranteeddsum.get_name_leafdata());
    if (rsvpsenderadspecguaranteedhopcount.is_set || is_set(rsvpsenderadspecguaranteedhopcount.yfilter)) leaf_name_data.push_back(rsvpsenderadspecguaranteedhopcount.get_name_leafdata());
    if (rsvpsenderadspecguaranteedpathbw.is_set || is_set(rsvpsenderadspecguaranteedpathbw.yfilter)) leaf_name_data.push_back(rsvpsenderadspecguaranteedpathbw.get_name_leafdata());
    if (rsvpsenderadspecguaranteedminlatency.is_set || is_set(rsvpsenderadspecguaranteedminlatency.yfilter)) leaf_name_data.push_back(rsvpsenderadspecguaranteedminlatency.get_name_leafdata());
    if (rsvpsenderadspecguaranteedmtu.is_set || is_set(rsvpsenderadspecguaranteedmtu.yfilter)) leaf_name_data.push_back(rsvpsenderadspecguaranteedmtu.get_name_leafdata());
    if (rsvpsenderadspecctrlloadsvc.is_set || is_set(rsvpsenderadspecctrlloadsvc.yfilter)) leaf_name_data.push_back(rsvpsenderadspecctrlloadsvc.get_name_leafdata());
    if (rsvpsenderadspecctrlloadbreak.is_set || is_set(rsvpsenderadspecctrlloadbreak.yfilter)) leaf_name_data.push_back(rsvpsenderadspecctrlloadbreak.get_name_leafdata());
    if (rsvpsenderadspecctrlloadhopcount.is_set || is_set(rsvpsenderadspecctrlloadhopcount.yfilter)) leaf_name_data.push_back(rsvpsenderadspecctrlloadhopcount.get_name_leafdata());
    if (rsvpsenderadspecctrlloadpathbw.is_set || is_set(rsvpsenderadspecctrlloadpathbw.yfilter)) leaf_name_data.push_back(rsvpsenderadspecctrlloadpathbw.get_name_leafdata());
    if (rsvpsenderadspecctrlloadminlatency.is_set || is_set(rsvpsenderadspecctrlloadminlatency.yfilter)) leaf_name_data.push_back(rsvpsenderadspecctrlloadminlatency.get_name_leafdata());
    if (rsvpsenderadspecctrlloadmtu.is_set || is_set(rsvpsenderadspecctrlloadmtu.yfilter)) leaf_name_data.push_back(rsvpsenderadspecctrlloadmtu.get_name_leafdata());
    if (rsvpsenderstatus.is_set || is_set(rsvpsenderstatus.yfilter)) leaf_name_data.push_back(rsvpsenderstatus.get_name_leafdata());
    if (rsvpsenderttl.is_set || is_set(rsvpsenderttl.yfilter)) leaf_name_data.push_back(rsvpsenderttl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RSVPMIB::RsvpSenderTable::RsvpSenderEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RSVPMIB::RsvpSenderTable::RsvpSenderEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RSVPMIB::RsvpSenderTable::RsvpSenderEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rsvpSessionNumber")
    {
        rsvpsessionnumber = value;
        rsvpsessionnumber.value_namespace = name_space;
        rsvpsessionnumber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvpSenderNumber")
    {
        rsvpsendernumber = value;
        rsvpsendernumber.value_namespace = name_space;
        rsvpsendernumber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvpSenderType")
    {
        rsvpsendertype = value;
        rsvpsendertype.value_namespace = name_space;
        rsvpsendertype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvpSenderDestAddr")
    {
        rsvpsenderdestaddr = value;
        rsvpsenderdestaddr.value_namespace = name_space;
        rsvpsenderdestaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvpSenderAddr")
    {
        rsvpsenderaddr = value;
        rsvpsenderaddr.value_namespace = name_space;
        rsvpsenderaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvpSenderDestAddrLength")
    {
        rsvpsenderdestaddrlength = value;
        rsvpsenderdestaddrlength.value_namespace = name_space;
        rsvpsenderdestaddrlength.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvpSenderAddrLength")
    {
        rsvpsenderaddrlength = value;
        rsvpsenderaddrlength.value_namespace = name_space;
        rsvpsenderaddrlength.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvpSenderProtocol")
    {
        rsvpsenderprotocol = value;
        rsvpsenderprotocol.value_namespace = name_space;
        rsvpsenderprotocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvpSenderDestPort")
    {
        rsvpsenderdestport = value;
        rsvpsenderdestport.value_namespace = name_space;
        rsvpsenderdestport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvpSenderPort")
    {
        rsvpsenderport = value;
        rsvpsenderport.value_namespace = name_space;
        rsvpsenderport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvpSenderFlowId")
    {
        rsvpsenderflowid = value;
        rsvpsenderflowid.value_namespace = name_space;
        rsvpsenderflowid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvpSenderHopAddr")
    {
        rsvpsenderhopaddr = value;
        rsvpsenderhopaddr.value_namespace = name_space;
        rsvpsenderhopaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvpSenderHopLih")
    {
        rsvpsenderhoplih = value;
        rsvpsenderhoplih.value_namespace = name_space;
        rsvpsenderhoplih.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvpSenderInterface")
    {
        rsvpsenderinterface = value;
        rsvpsenderinterface.value_namespace = name_space;
        rsvpsenderinterface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvpSenderTSpecRate")
    {
        rsvpsendertspecrate = value;
        rsvpsendertspecrate.value_namespace = name_space;
        rsvpsendertspecrate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvpSenderTSpecPeakRate")
    {
        rsvpsendertspecpeakrate = value;
        rsvpsendertspecpeakrate.value_namespace = name_space;
        rsvpsendertspecpeakrate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvpSenderTSpecBurst")
    {
        rsvpsendertspecburst = value;
        rsvpsendertspecburst.value_namespace = name_space;
        rsvpsendertspecburst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvpSenderTSpecMinTU")
    {
        rsvpsendertspecmintu = value;
        rsvpsendertspecmintu.value_namespace = name_space;
        rsvpsendertspecmintu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvpSenderTSpecMaxTU")
    {
        rsvpsendertspecmaxtu = value;
        rsvpsendertspecmaxtu.value_namespace = name_space;
        rsvpsendertspecmaxtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvpSenderInterval")
    {
        rsvpsenderinterval = value;
        rsvpsenderinterval.value_namespace = name_space;
        rsvpsenderinterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvpSenderRSVPHop")
    {
        rsvpsenderrsvphop = value;
        rsvpsenderrsvphop.value_namespace = name_space;
        rsvpsenderrsvphop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvpSenderLastChange")
    {
        rsvpsenderlastchange = value;
        rsvpsenderlastchange.value_namespace = name_space;
        rsvpsenderlastchange.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvpSenderPolicy")
    {
        rsvpsenderpolicy = value;
        rsvpsenderpolicy.value_namespace = name_space;
        rsvpsenderpolicy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvpSenderAdspecBreak")
    {
        rsvpsenderadspecbreak = value;
        rsvpsenderadspecbreak.value_namespace = name_space;
        rsvpsenderadspecbreak.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvpSenderAdspecHopCount")
    {
        rsvpsenderadspechopcount = value;
        rsvpsenderadspechopcount.value_namespace = name_space;
        rsvpsenderadspechopcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvpSenderAdspecPathBw")
    {
        rsvpsenderadspecpathbw = value;
        rsvpsenderadspecpathbw.value_namespace = name_space;
        rsvpsenderadspecpathbw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvpSenderAdspecMinLatency")
    {
        rsvpsenderadspecminlatency = value;
        rsvpsenderadspecminlatency.value_namespace = name_space;
        rsvpsenderadspecminlatency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvpSenderAdspecMtu")
    {
        rsvpsenderadspecmtu = value;
        rsvpsenderadspecmtu.value_namespace = name_space;
        rsvpsenderadspecmtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvpSenderAdspecGuaranteedSvc")
    {
        rsvpsenderadspecguaranteedsvc = value;
        rsvpsenderadspecguaranteedsvc.value_namespace = name_space;
        rsvpsenderadspecguaranteedsvc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvpSenderAdspecGuaranteedBreak")
    {
        rsvpsenderadspecguaranteedbreak = value;
        rsvpsenderadspecguaranteedbreak.value_namespace = name_space;
        rsvpsenderadspecguaranteedbreak.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvpSenderAdspecGuaranteedCtot")
    {
        rsvpsenderadspecguaranteedctot = value;
        rsvpsenderadspecguaranteedctot.value_namespace = name_space;
        rsvpsenderadspecguaranteedctot.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvpSenderAdspecGuaranteedDtot")
    {
        rsvpsenderadspecguaranteeddtot = value;
        rsvpsenderadspecguaranteeddtot.value_namespace = name_space;
        rsvpsenderadspecguaranteeddtot.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvpSenderAdspecGuaranteedCsum")
    {
        rsvpsenderadspecguaranteedcsum = value;
        rsvpsenderadspecguaranteedcsum.value_namespace = name_space;
        rsvpsenderadspecguaranteedcsum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvpSenderAdspecGuaranteedDsum")
    {
        rsvpsenderadspecguaranteeddsum = value;
        rsvpsenderadspecguaranteeddsum.value_namespace = name_space;
        rsvpsenderadspecguaranteeddsum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvpSenderAdspecGuaranteedHopCount")
    {
        rsvpsenderadspecguaranteedhopcount = value;
        rsvpsenderadspecguaranteedhopcount.value_namespace = name_space;
        rsvpsenderadspecguaranteedhopcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvpSenderAdspecGuaranteedPathBw")
    {
        rsvpsenderadspecguaranteedpathbw = value;
        rsvpsenderadspecguaranteedpathbw.value_namespace = name_space;
        rsvpsenderadspecguaranteedpathbw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvpSenderAdspecGuaranteedMinLatency")
    {
        rsvpsenderadspecguaranteedminlatency = value;
        rsvpsenderadspecguaranteedminlatency.value_namespace = name_space;
        rsvpsenderadspecguaranteedminlatency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvpSenderAdspecGuaranteedMtu")
    {
        rsvpsenderadspecguaranteedmtu = value;
        rsvpsenderadspecguaranteedmtu.value_namespace = name_space;
        rsvpsenderadspecguaranteedmtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvpSenderAdspecCtrlLoadSvc")
    {
        rsvpsenderadspecctrlloadsvc = value;
        rsvpsenderadspecctrlloadsvc.value_namespace = name_space;
        rsvpsenderadspecctrlloadsvc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvpSenderAdspecCtrlLoadBreak")
    {
        rsvpsenderadspecctrlloadbreak = value;
        rsvpsenderadspecctrlloadbreak.value_namespace = name_space;
        rsvpsenderadspecctrlloadbreak.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvpSenderAdspecCtrlLoadHopCount")
    {
        rsvpsenderadspecctrlloadhopcount = value;
        rsvpsenderadspecctrlloadhopcount.value_namespace = name_space;
        rsvpsenderadspecctrlloadhopcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvpSenderAdspecCtrlLoadPathBw")
    {
        rsvpsenderadspecctrlloadpathbw = value;
        rsvpsenderadspecctrlloadpathbw.value_namespace = name_space;
        rsvpsenderadspecctrlloadpathbw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvpSenderAdspecCtrlLoadMinLatency")
    {
        rsvpsenderadspecctrlloadminlatency = value;
        rsvpsenderadspecctrlloadminlatency.value_namespace = name_space;
        rsvpsenderadspecctrlloadminlatency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvpSenderAdspecCtrlLoadMtu")
    {
        rsvpsenderadspecctrlloadmtu = value;
        rsvpsenderadspecctrlloadmtu.value_namespace = name_space;
        rsvpsenderadspecctrlloadmtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvpSenderStatus")
    {
        rsvpsenderstatus = value;
        rsvpsenderstatus.value_namespace = name_space;
        rsvpsenderstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvpSenderTTL")
    {
        rsvpsenderttl = value;
        rsvpsenderttl.value_namespace = name_space;
        rsvpsenderttl.value_namespace_prefix = name_space_prefix;
    }
}

void RSVPMIB::RsvpSenderTable::RsvpSenderEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rsvpSessionNumber")
    {
        rsvpsessionnumber.yfilter = yfilter;
    }
    if(value_path == "rsvpSenderNumber")
    {
        rsvpsendernumber.yfilter = yfilter;
    }
    if(value_path == "rsvpSenderType")
    {
        rsvpsendertype.yfilter = yfilter;
    }
    if(value_path == "rsvpSenderDestAddr")
    {
        rsvpsenderdestaddr.yfilter = yfilter;
    }
    if(value_path == "rsvpSenderAddr")
    {
        rsvpsenderaddr.yfilter = yfilter;
    }
    if(value_path == "rsvpSenderDestAddrLength")
    {
        rsvpsenderdestaddrlength.yfilter = yfilter;
    }
    if(value_path == "rsvpSenderAddrLength")
    {
        rsvpsenderaddrlength.yfilter = yfilter;
    }
    if(value_path == "rsvpSenderProtocol")
    {
        rsvpsenderprotocol.yfilter = yfilter;
    }
    if(value_path == "rsvpSenderDestPort")
    {
        rsvpsenderdestport.yfilter = yfilter;
    }
    if(value_path == "rsvpSenderPort")
    {
        rsvpsenderport.yfilter = yfilter;
    }
    if(value_path == "rsvpSenderFlowId")
    {
        rsvpsenderflowid.yfilter = yfilter;
    }
    if(value_path == "rsvpSenderHopAddr")
    {
        rsvpsenderhopaddr.yfilter = yfilter;
    }
    if(value_path == "rsvpSenderHopLih")
    {
        rsvpsenderhoplih.yfilter = yfilter;
    }
    if(value_path == "rsvpSenderInterface")
    {
        rsvpsenderinterface.yfilter = yfilter;
    }
    if(value_path == "rsvpSenderTSpecRate")
    {
        rsvpsendertspecrate.yfilter = yfilter;
    }
    if(value_path == "rsvpSenderTSpecPeakRate")
    {
        rsvpsendertspecpeakrate.yfilter = yfilter;
    }
    if(value_path == "rsvpSenderTSpecBurst")
    {
        rsvpsendertspecburst.yfilter = yfilter;
    }
    if(value_path == "rsvpSenderTSpecMinTU")
    {
        rsvpsendertspecmintu.yfilter = yfilter;
    }
    if(value_path == "rsvpSenderTSpecMaxTU")
    {
        rsvpsendertspecmaxtu.yfilter = yfilter;
    }
    if(value_path == "rsvpSenderInterval")
    {
        rsvpsenderinterval.yfilter = yfilter;
    }
    if(value_path == "rsvpSenderRSVPHop")
    {
        rsvpsenderrsvphop.yfilter = yfilter;
    }
    if(value_path == "rsvpSenderLastChange")
    {
        rsvpsenderlastchange.yfilter = yfilter;
    }
    if(value_path == "rsvpSenderPolicy")
    {
        rsvpsenderpolicy.yfilter = yfilter;
    }
    if(value_path == "rsvpSenderAdspecBreak")
    {
        rsvpsenderadspecbreak.yfilter = yfilter;
    }
    if(value_path == "rsvpSenderAdspecHopCount")
    {
        rsvpsenderadspechopcount.yfilter = yfilter;
    }
    if(value_path == "rsvpSenderAdspecPathBw")
    {
        rsvpsenderadspecpathbw.yfilter = yfilter;
    }
    if(value_path == "rsvpSenderAdspecMinLatency")
    {
        rsvpsenderadspecminlatency.yfilter = yfilter;
    }
    if(value_path == "rsvpSenderAdspecMtu")
    {
        rsvpsenderadspecmtu.yfilter = yfilter;
    }
    if(value_path == "rsvpSenderAdspecGuaranteedSvc")
    {
        rsvpsenderadspecguaranteedsvc.yfilter = yfilter;
    }
    if(value_path == "rsvpSenderAdspecGuaranteedBreak")
    {
        rsvpsenderadspecguaranteedbreak.yfilter = yfilter;
    }
    if(value_path == "rsvpSenderAdspecGuaranteedCtot")
    {
        rsvpsenderadspecguaranteedctot.yfilter = yfilter;
    }
    if(value_path == "rsvpSenderAdspecGuaranteedDtot")
    {
        rsvpsenderadspecguaranteeddtot.yfilter = yfilter;
    }
    if(value_path == "rsvpSenderAdspecGuaranteedCsum")
    {
        rsvpsenderadspecguaranteedcsum.yfilter = yfilter;
    }
    if(value_path == "rsvpSenderAdspecGuaranteedDsum")
    {
        rsvpsenderadspecguaranteeddsum.yfilter = yfilter;
    }
    if(value_path == "rsvpSenderAdspecGuaranteedHopCount")
    {
        rsvpsenderadspecguaranteedhopcount.yfilter = yfilter;
    }
    if(value_path == "rsvpSenderAdspecGuaranteedPathBw")
    {
        rsvpsenderadspecguaranteedpathbw.yfilter = yfilter;
    }
    if(value_path == "rsvpSenderAdspecGuaranteedMinLatency")
    {
        rsvpsenderadspecguaranteedminlatency.yfilter = yfilter;
    }
    if(value_path == "rsvpSenderAdspecGuaranteedMtu")
    {
        rsvpsenderadspecguaranteedmtu.yfilter = yfilter;
    }
    if(value_path == "rsvpSenderAdspecCtrlLoadSvc")
    {
        rsvpsenderadspecctrlloadsvc.yfilter = yfilter;
    }
    if(value_path == "rsvpSenderAdspecCtrlLoadBreak")
    {
        rsvpsenderadspecctrlloadbreak.yfilter = yfilter;
    }
    if(value_path == "rsvpSenderAdspecCtrlLoadHopCount")
    {
        rsvpsenderadspecctrlloadhopcount.yfilter = yfilter;
    }
    if(value_path == "rsvpSenderAdspecCtrlLoadPathBw")
    {
        rsvpsenderadspecctrlloadpathbw.yfilter = yfilter;
    }
    if(value_path == "rsvpSenderAdspecCtrlLoadMinLatency")
    {
        rsvpsenderadspecctrlloadminlatency.yfilter = yfilter;
    }
    if(value_path == "rsvpSenderAdspecCtrlLoadMtu")
    {
        rsvpsenderadspecctrlloadmtu.yfilter = yfilter;
    }
    if(value_path == "rsvpSenderStatus")
    {
        rsvpsenderstatus.yfilter = yfilter;
    }
    if(value_path == "rsvpSenderTTL")
    {
        rsvpsenderttl.yfilter = yfilter;
    }
}

bool RSVPMIB::RsvpSenderTable::RsvpSenderEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsvpSessionNumber" || name == "rsvpSenderNumber" || name == "rsvpSenderType" || name == "rsvpSenderDestAddr" || name == "rsvpSenderAddr" || name == "rsvpSenderDestAddrLength" || name == "rsvpSenderAddrLength" || name == "rsvpSenderProtocol" || name == "rsvpSenderDestPort" || name == "rsvpSenderPort" || name == "rsvpSenderFlowId" || name == "rsvpSenderHopAddr" || name == "rsvpSenderHopLih" || name == "rsvpSenderInterface" || name == "rsvpSenderTSpecRate" || name == "rsvpSenderTSpecPeakRate" || name == "rsvpSenderTSpecBurst" || name == "rsvpSenderTSpecMinTU" || name == "rsvpSenderTSpecMaxTU" || name == "rsvpSenderInterval" || name == "rsvpSenderRSVPHop" || name == "rsvpSenderLastChange" || name == "rsvpSenderPolicy" || name == "rsvpSenderAdspecBreak" || name == "rsvpSenderAdspecHopCount" || name == "rsvpSenderAdspecPathBw" || name == "rsvpSenderAdspecMinLatency" || name == "rsvpSenderAdspecMtu" || name == "rsvpSenderAdspecGuaranteedSvc" || name == "rsvpSenderAdspecGuaranteedBreak" || name == "rsvpSenderAdspecGuaranteedCtot" || name == "rsvpSenderAdspecGuaranteedDtot" || name == "rsvpSenderAdspecGuaranteedCsum" || name == "rsvpSenderAdspecGuaranteedDsum" || name == "rsvpSenderAdspecGuaranteedHopCount" || name == "rsvpSenderAdspecGuaranteedPathBw" || name == "rsvpSenderAdspecGuaranteedMinLatency" || name == "rsvpSenderAdspecGuaranteedMtu" || name == "rsvpSenderAdspecCtrlLoadSvc" || name == "rsvpSenderAdspecCtrlLoadBreak" || name == "rsvpSenderAdspecCtrlLoadHopCount" || name == "rsvpSenderAdspecCtrlLoadPathBw" || name == "rsvpSenderAdspecCtrlLoadMinLatency" || name == "rsvpSenderAdspecCtrlLoadMtu" || name == "rsvpSenderStatus" || name == "rsvpSenderTTL")
        return true;
    return false;
}

RSVPMIB::RsvpSenderOutInterfaceTable::RsvpSenderOutInterfaceTable()
    :
    rsvpsenderoutinterfaceentry(this, {"rsvpsessionnumber", "rsvpsendernumber", "ifindex"})
{

    yang_name = "rsvpSenderOutInterfaceTable"; yang_parent_name = "RSVP-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

RSVPMIB::RsvpSenderOutInterfaceTable::~RsvpSenderOutInterfaceTable()
{
}

bool RSVPMIB::RsvpSenderOutInterfaceTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rsvpsenderoutinterfaceentry.len(); index++)
    {
        if(rsvpsenderoutinterfaceentry[index]->has_data())
            return true;
    }
    return false;
}

bool RSVPMIB::RsvpSenderOutInterfaceTable::has_operation() const
{
    for (std::size_t index=0; index<rsvpsenderoutinterfaceentry.len(); index++)
    {
        if(rsvpsenderoutinterfaceentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RSVPMIB::RsvpSenderOutInterfaceTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RSVP-MIB:RSVP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string RSVPMIB::RsvpSenderOutInterfaceTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvpSenderOutInterfaceTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RSVPMIB::RsvpSenderOutInterfaceTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RSVPMIB::RsvpSenderOutInterfaceTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsvpSenderOutInterfaceEntry")
    {
        auto ent_ = std::make_shared<RSVPMIB::RsvpSenderOutInterfaceTable::RsvpSenderOutInterfaceEntry>();
        ent_->parent = this;
        rsvpsenderoutinterfaceentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RSVPMIB::RsvpSenderOutInterfaceTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rsvpsenderoutinterfaceentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void RSVPMIB::RsvpSenderOutInterfaceTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RSVPMIB::RsvpSenderOutInterfaceTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RSVPMIB::RsvpSenderOutInterfaceTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsvpSenderOutInterfaceEntry")
        return true;
    return false;
}

RSVPMIB::RsvpSenderOutInterfaceTable::RsvpSenderOutInterfaceEntry::RsvpSenderOutInterfaceEntry()
    :
    rsvpsessionnumber{YType::str, "rsvpSessionNumber"},
    rsvpsendernumber{YType::str, "rsvpSenderNumber"},
    ifindex{YType::str, "ifIndex"},
    rsvpsenderoutinterfacestatus{YType::enumeration, "rsvpSenderOutInterfaceStatus"}
{

    yang_name = "rsvpSenderOutInterfaceEntry"; yang_parent_name = "rsvpSenderOutInterfaceTable"; is_top_level_class = false; has_list_ancestor = false; 
}

RSVPMIB::RsvpSenderOutInterfaceTable::RsvpSenderOutInterfaceEntry::~RsvpSenderOutInterfaceEntry()
{
}

bool RSVPMIB::RsvpSenderOutInterfaceTable::RsvpSenderOutInterfaceEntry::has_data() const
{
    if (is_presence_container) return true;
    return rsvpsessionnumber.is_set
	|| rsvpsendernumber.is_set
	|| ifindex.is_set
	|| rsvpsenderoutinterfacestatus.is_set;
}

bool RSVPMIB::RsvpSenderOutInterfaceTable::RsvpSenderOutInterfaceEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rsvpsessionnumber.yfilter)
	|| ydk::is_set(rsvpsendernumber.yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(rsvpsenderoutinterfacestatus.yfilter);
}

std::string RSVPMIB::RsvpSenderOutInterfaceTable::RsvpSenderOutInterfaceEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RSVP-MIB:RSVP-MIB/rsvpSenderOutInterfaceTable/" << get_segment_path();
    return path_buffer.str();
}

std::string RSVPMIB::RsvpSenderOutInterfaceTable::RsvpSenderOutInterfaceEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvpSenderOutInterfaceEntry";
    ADD_KEY_TOKEN(rsvpsessionnumber, "rsvpSessionNumber");
    ADD_KEY_TOKEN(rsvpsendernumber, "rsvpSenderNumber");
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RSVPMIB::RsvpSenderOutInterfaceTable::RsvpSenderOutInterfaceEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rsvpsessionnumber.is_set || is_set(rsvpsessionnumber.yfilter)) leaf_name_data.push_back(rsvpsessionnumber.get_name_leafdata());
    if (rsvpsendernumber.is_set || is_set(rsvpsendernumber.yfilter)) leaf_name_data.push_back(rsvpsendernumber.get_name_leafdata());
    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (rsvpsenderoutinterfacestatus.is_set || is_set(rsvpsenderoutinterfacestatus.yfilter)) leaf_name_data.push_back(rsvpsenderoutinterfacestatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RSVPMIB::RsvpSenderOutInterfaceTable::RsvpSenderOutInterfaceEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RSVPMIB::RsvpSenderOutInterfaceTable::RsvpSenderOutInterfaceEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RSVPMIB::RsvpSenderOutInterfaceTable::RsvpSenderOutInterfaceEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rsvpSessionNumber")
    {
        rsvpsessionnumber = value;
        rsvpsessionnumber.value_namespace = name_space;
        rsvpsessionnumber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvpSenderNumber")
    {
        rsvpsendernumber = value;
        rsvpsendernumber.value_namespace = name_space;
        rsvpsendernumber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvpSenderOutInterfaceStatus")
    {
        rsvpsenderoutinterfacestatus = value;
        rsvpsenderoutinterfacestatus.value_namespace = name_space;
        rsvpsenderoutinterfacestatus.value_namespace_prefix = name_space_prefix;
    }
}

void RSVPMIB::RsvpSenderOutInterfaceTable::RsvpSenderOutInterfaceEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rsvpSessionNumber")
    {
        rsvpsessionnumber.yfilter = yfilter;
    }
    if(value_path == "rsvpSenderNumber")
    {
        rsvpsendernumber.yfilter = yfilter;
    }
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "rsvpSenderOutInterfaceStatus")
    {
        rsvpsenderoutinterfacestatus.yfilter = yfilter;
    }
}

bool RSVPMIB::RsvpSenderOutInterfaceTable::RsvpSenderOutInterfaceEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsvpSessionNumber" || name == "rsvpSenderNumber" || name == "ifIndex" || name == "rsvpSenderOutInterfaceStatus")
        return true;
    return false;
}

RSVPMIB::RsvpResvTable::RsvpResvTable()
    :
    rsvpresventry(this, {"rsvpsessionnumber", "rsvpresvnumber"})
{

    yang_name = "rsvpResvTable"; yang_parent_name = "RSVP-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

RSVPMIB::RsvpResvTable::~RsvpResvTable()
{
}

bool RSVPMIB::RsvpResvTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rsvpresventry.len(); index++)
    {
        if(rsvpresventry[index]->has_data())
            return true;
    }
    return false;
}

bool RSVPMIB::RsvpResvTable::has_operation() const
{
    for (std::size_t index=0; index<rsvpresventry.len(); index++)
    {
        if(rsvpresventry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RSVPMIB::RsvpResvTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RSVP-MIB:RSVP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string RSVPMIB::RsvpResvTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvpResvTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RSVPMIB::RsvpResvTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RSVPMIB::RsvpResvTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsvpResvEntry")
    {
        auto ent_ = std::make_shared<RSVPMIB::RsvpResvTable::RsvpResvEntry>();
        ent_->parent = this;
        rsvpresventry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RSVPMIB::RsvpResvTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rsvpresventry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void RSVPMIB::RsvpResvTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RSVPMIB::RsvpResvTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RSVPMIB::RsvpResvTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsvpResvEntry")
        return true;
    return false;
}

RSVPMIB::RsvpResvTable::RsvpResvEntry::RsvpResvEntry()
    :
    rsvpsessionnumber{YType::str, "rsvpSessionNumber"},
    rsvpresvnumber{YType::int32, "rsvpResvNumber"},
    rsvpresvtype{YType::int32, "rsvpResvType"},
    rsvpresvdestaddr{YType::str, "rsvpResvDestAddr"},
    rsvpresvsenderaddr{YType::str, "rsvpResvSenderAddr"},
    rsvpresvdestaddrlength{YType::int32, "rsvpResvDestAddrLength"},
    rsvpresvsenderaddrlength{YType::int32, "rsvpResvSenderAddrLength"},
    rsvpresvprotocol{YType::int32, "rsvpResvProtocol"},
    rsvpresvdestport{YType::str, "rsvpResvDestPort"},
    rsvpresvport{YType::str, "rsvpResvPort"},
    rsvpresvhopaddr{YType::str, "rsvpResvHopAddr"},
    rsvpresvhoplih{YType::int32, "rsvpResvHopLih"},
    rsvpresvinterface{YType::int32, "rsvpResvInterface"},
    rsvpresvservice{YType::enumeration, "rsvpResvService"},
    rsvpresvtspecrate{YType::int32, "rsvpResvTSpecRate"},
    rsvpresvtspecpeakrate{YType::int32, "rsvpResvTSpecPeakRate"},
    rsvpresvtspecburst{YType::int32, "rsvpResvTSpecBurst"},
    rsvpresvtspecmintu{YType::int32, "rsvpResvTSpecMinTU"},
    rsvpresvtspecmaxtu{YType::int32, "rsvpResvTSpecMaxTU"},
    rsvpresvrspecrate{YType::int32, "rsvpResvRSpecRate"},
    rsvpresvrspecslack{YType::int32, "rsvpResvRSpecSlack"},
    rsvpresvinterval{YType::int32, "rsvpResvInterval"},
    rsvpresvscope{YType::str, "rsvpResvScope"},
    rsvpresvshared{YType::boolean, "rsvpResvShared"},
    rsvpresvexplicit{YType::boolean, "rsvpResvExplicit"},
    rsvpresvrsvphop{YType::boolean, "rsvpResvRSVPHop"},
    rsvpresvlastchange{YType::uint32, "rsvpResvLastChange"},
    rsvpresvpolicy{YType::str, "rsvpResvPolicy"},
    rsvpresvstatus{YType::enumeration, "rsvpResvStatus"},
    rsvpresvttl{YType::int32, "rsvpResvTTL"},
    rsvpresvflowid{YType::int32, "rsvpResvFlowId"}
{

    yang_name = "rsvpResvEntry"; yang_parent_name = "rsvpResvTable"; is_top_level_class = false; has_list_ancestor = false; 
}

RSVPMIB::RsvpResvTable::RsvpResvEntry::~RsvpResvEntry()
{
}

bool RSVPMIB::RsvpResvTable::RsvpResvEntry::has_data() const
{
    if (is_presence_container) return true;
    return rsvpsessionnumber.is_set
	|| rsvpresvnumber.is_set
	|| rsvpresvtype.is_set
	|| rsvpresvdestaddr.is_set
	|| rsvpresvsenderaddr.is_set
	|| rsvpresvdestaddrlength.is_set
	|| rsvpresvsenderaddrlength.is_set
	|| rsvpresvprotocol.is_set
	|| rsvpresvdestport.is_set
	|| rsvpresvport.is_set
	|| rsvpresvhopaddr.is_set
	|| rsvpresvhoplih.is_set
	|| rsvpresvinterface.is_set
	|| rsvpresvservice.is_set
	|| rsvpresvtspecrate.is_set
	|| rsvpresvtspecpeakrate.is_set
	|| rsvpresvtspecburst.is_set
	|| rsvpresvtspecmintu.is_set
	|| rsvpresvtspecmaxtu.is_set
	|| rsvpresvrspecrate.is_set
	|| rsvpresvrspecslack.is_set
	|| rsvpresvinterval.is_set
	|| rsvpresvscope.is_set
	|| rsvpresvshared.is_set
	|| rsvpresvexplicit.is_set
	|| rsvpresvrsvphop.is_set
	|| rsvpresvlastchange.is_set
	|| rsvpresvpolicy.is_set
	|| rsvpresvstatus.is_set
	|| rsvpresvttl.is_set
	|| rsvpresvflowid.is_set;
}

bool RSVPMIB::RsvpResvTable::RsvpResvEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rsvpsessionnumber.yfilter)
	|| ydk::is_set(rsvpresvnumber.yfilter)
	|| ydk::is_set(rsvpresvtype.yfilter)
	|| ydk::is_set(rsvpresvdestaddr.yfilter)
	|| ydk::is_set(rsvpresvsenderaddr.yfilter)
	|| ydk::is_set(rsvpresvdestaddrlength.yfilter)
	|| ydk::is_set(rsvpresvsenderaddrlength.yfilter)
	|| ydk::is_set(rsvpresvprotocol.yfilter)
	|| ydk::is_set(rsvpresvdestport.yfilter)
	|| ydk::is_set(rsvpresvport.yfilter)
	|| ydk::is_set(rsvpresvhopaddr.yfilter)
	|| ydk::is_set(rsvpresvhoplih.yfilter)
	|| ydk::is_set(rsvpresvinterface.yfilter)
	|| ydk::is_set(rsvpresvservice.yfilter)
	|| ydk::is_set(rsvpresvtspecrate.yfilter)
	|| ydk::is_set(rsvpresvtspecpeakrate.yfilter)
	|| ydk::is_set(rsvpresvtspecburst.yfilter)
	|| ydk::is_set(rsvpresvtspecmintu.yfilter)
	|| ydk::is_set(rsvpresvtspecmaxtu.yfilter)
	|| ydk::is_set(rsvpresvrspecrate.yfilter)
	|| ydk::is_set(rsvpresvrspecslack.yfilter)
	|| ydk::is_set(rsvpresvinterval.yfilter)
	|| ydk::is_set(rsvpresvscope.yfilter)
	|| ydk::is_set(rsvpresvshared.yfilter)
	|| ydk::is_set(rsvpresvexplicit.yfilter)
	|| ydk::is_set(rsvpresvrsvphop.yfilter)
	|| ydk::is_set(rsvpresvlastchange.yfilter)
	|| ydk::is_set(rsvpresvpolicy.yfilter)
	|| ydk::is_set(rsvpresvstatus.yfilter)
	|| ydk::is_set(rsvpresvttl.yfilter)
	|| ydk::is_set(rsvpresvflowid.yfilter);
}

std::string RSVPMIB::RsvpResvTable::RsvpResvEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RSVP-MIB:RSVP-MIB/rsvpResvTable/" << get_segment_path();
    return path_buffer.str();
}

std::string RSVPMIB::RsvpResvTable::RsvpResvEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvpResvEntry";
    ADD_KEY_TOKEN(rsvpsessionnumber, "rsvpSessionNumber");
    ADD_KEY_TOKEN(rsvpresvnumber, "rsvpResvNumber");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RSVPMIB::RsvpResvTable::RsvpResvEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rsvpsessionnumber.is_set || is_set(rsvpsessionnumber.yfilter)) leaf_name_data.push_back(rsvpsessionnumber.get_name_leafdata());
    if (rsvpresvnumber.is_set || is_set(rsvpresvnumber.yfilter)) leaf_name_data.push_back(rsvpresvnumber.get_name_leafdata());
    if (rsvpresvtype.is_set || is_set(rsvpresvtype.yfilter)) leaf_name_data.push_back(rsvpresvtype.get_name_leafdata());
    if (rsvpresvdestaddr.is_set || is_set(rsvpresvdestaddr.yfilter)) leaf_name_data.push_back(rsvpresvdestaddr.get_name_leafdata());
    if (rsvpresvsenderaddr.is_set || is_set(rsvpresvsenderaddr.yfilter)) leaf_name_data.push_back(rsvpresvsenderaddr.get_name_leafdata());
    if (rsvpresvdestaddrlength.is_set || is_set(rsvpresvdestaddrlength.yfilter)) leaf_name_data.push_back(rsvpresvdestaddrlength.get_name_leafdata());
    if (rsvpresvsenderaddrlength.is_set || is_set(rsvpresvsenderaddrlength.yfilter)) leaf_name_data.push_back(rsvpresvsenderaddrlength.get_name_leafdata());
    if (rsvpresvprotocol.is_set || is_set(rsvpresvprotocol.yfilter)) leaf_name_data.push_back(rsvpresvprotocol.get_name_leafdata());
    if (rsvpresvdestport.is_set || is_set(rsvpresvdestport.yfilter)) leaf_name_data.push_back(rsvpresvdestport.get_name_leafdata());
    if (rsvpresvport.is_set || is_set(rsvpresvport.yfilter)) leaf_name_data.push_back(rsvpresvport.get_name_leafdata());
    if (rsvpresvhopaddr.is_set || is_set(rsvpresvhopaddr.yfilter)) leaf_name_data.push_back(rsvpresvhopaddr.get_name_leafdata());
    if (rsvpresvhoplih.is_set || is_set(rsvpresvhoplih.yfilter)) leaf_name_data.push_back(rsvpresvhoplih.get_name_leafdata());
    if (rsvpresvinterface.is_set || is_set(rsvpresvinterface.yfilter)) leaf_name_data.push_back(rsvpresvinterface.get_name_leafdata());
    if (rsvpresvservice.is_set || is_set(rsvpresvservice.yfilter)) leaf_name_data.push_back(rsvpresvservice.get_name_leafdata());
    if (rsvpresvtspecrate.is_set || is_set(rsvpresvtspecrate.yfilter)) leaf_name_data.push_back(rsvpresvtspecrate.get_name_leafdata());
    if (rsvpresvtspecpeakrate.is_set || is_set(rsvpresvtspecpeakrate.yfilter)) leaf_name_data.push_back(rsvpresvtspecpeakrate.get_name_leafdata());
    if (rsvpresvtspecburst.is_set || is_set(rsvpresvtspecburst.yfilter)) leaf_name_data.push_back(rsvpresvtspecburst.get_name_leafdata());
    if (rsvpresvtspecmintu.is_set || is_set(rsvpresvtspecmintu.yfilter)) leaf_name_data.push_back(rsvpresvtspecmintu.get_name_leafdata());
    if (rsvpresvtspecmaxtu.is_set || is_set(rsvpresvtspecmaxtu.yfilter)) leaf_name_data.push_back(rsvpresvtspecmaxtu.get_name_leafdata());
    if (rsvpresvrspecrate.is_set || is_set(rsvpresvrspecrate.yfilter)) leaf_name_data.push_back(rsvpresvrspecrate.get_name_leafdata());
    if (rsvpresvrspecslack.is_set || is_set(rsvpresvrspecslack.yfilter)) leaf_name_data.push_back(rsvpresvrspecslack.get_name_leafdata());
    if (rsvpresvinterval.is_set || is_set(rsvpresvinterval.yfilter)) leaf_name_data.push_back(rsvpresvinterval.get_name_leafdata());
    if (rsvpresvscope.is_set || is_set(rsvpresvscope.yfilter)) leaf_name_data.push_back(rsvpresvscope.get_name_leafdata());
    if (rsvpresvshared.is_set || is_set(rsvpresvshared.yfilter)) leaf_name_data.push_back(rsvpresvshared.get_name_leafdata());
    if (rsvpresvexplicit.is_set || is_set(rsvpresvexplicit.yfilter)) leaf_name_data.push_back(rsvpresvexplicit.get_name_leafdata());
    if (rsvpresvrsvphop.is_set || is_set(rsvpresvrsvphop.yfilter)) leaf_name_data.push_back(rsvpresvrsvphop.get_name_leafdata());
    if (rsvpresvlastchange.is_set || is_set(rsvpresvlastchange.yfilter)) leaf_name_data.push_back(rsvpresvlastchange.get_name_leafdata());
    if (rsvpresvpolicy.is_set || is_set(rsvpresvpolicy.yfilter)) leaf_name_data.push_back(rsvpresvpolicy.get_name_leafdata());
    if (rsvpresvstatus.is_set || is_set(rsvpresvstatus.yfilter)) leaf_name_data.push_back(rsvpresvstatus.get_name_leafdata());
    if (rsvpresvttl.is_set || is_set(rsvpresvttl.yfilter)) leaf_name_data.push_back(rsvpresvttl.get_name_leafdata());
    if (rsvpresvflowid.is_set || is_set(rsvpresvflowid.yfilter)) leaf_name_data.push_back(rsvpresvflowid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RSVPMIB::RsvpResvTable::RsvpResvEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RSVPMIB::RsvpResvTable::RsvpResvEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RSVPMIB::RsvpResvTable::RsvpResvEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rsvpSessionNumber")
    {
        rsvpsessionnumber = value;
        rsvpsessionnumber.value_namespace = name_space;
        rsvpsessionnumber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvpResvNumber")
    {
        rsvpresvnumber = value;
        rsvpresvnumber.value_namespace = name_space;
        rsvpresvnumber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvpResvType")
    {
        rsvpresvtype = value;
        rsvpresvtype.value_namespace = name_space;
        rsvpresvtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvpResvDestAddr")
    {
        rsvpresvdestaddr = value;
        rsvpresvdestaddr.value_namespace = name_space;
        rsvpresvdestaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvpResvSenderAddr")
    {
        rsvpresvsenderaddr = value;
        rsvpresvsenderaddr.value_namespace = name_space;
        rsvpresvsenderaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvpResvDestAddrLength")
    {
        rsvpresvdestaddrlength = value;
        rsvpresvdestaddrlength.value_namespace = name_space;
        rsvpresvdestaddrlength.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvpResvSenderAddrLength")
    {
        rsvpresvsenderaddrlength = value;
        rsvpresvsenderaddrlength.value_namespace = name_space;
        rsvpresvsenderaddrlength.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvpResvProtocol")
    {
        rsvpresvprotocol = value;
        rsvpresvprotocol.value_namespace = name_space;
        rsvpresvprotocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvpResvDestPort")
    {
        rsvpresvdestport = value;
        rsvpresvdestport.value_namespace = name_space;
        rsvpresvdestport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvpResvPort")
    {
        rsvpresvport = value;
        rsvpresvport.value_namespace = name_space;
        rsvpresvport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvpResvHopAddr")
    {
        rsvpresvhopaddr = value;
        rsvpresvhopaddr.value_namespace = name_space;
        rsvpresvhopaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvpResvHopLih")
    {
        rsvpresvhoplih = value;
        rsvpresvhoplih.value_namespace = name_space;
        rsvpresvhoplih.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvpResvInterface")
    {
        rsvpresvinterface = value;
        rsvpresvinterface.value_namespace = name_space;
        rsvpresvinterface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvpResvService")
    {
        rsvpresvservice = value;
        rsvpresvservice.value_namespace = name_space;
        rsvpresvservice.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvpResvTSpecRate")
    {
        rsvpresvtspecrate = value;
        rsvpresvtspecrate.value_namespace = name_space;
        rsvpresvtspecrate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvpResvTSpecPeakRate")
    {
        rsvpresvtspecpeakrate = value;
        rsvpresvtspecpeakrate.value_namespace = name_space;
        rsvpresvtspecpeakrate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvpResvTSpecBurst")
    {
        rsvpresvtspecburst = value;
        rsvpresvtspecburst.value_namespace = name_space;
        rsvpresvtspecburst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvpResvTSpecMinTU")
    {
        rsvpresvtspecmintu = value;
        rsvpresvtspecmintu.value_namespace = name_space;
        rsvpresvtspecmintu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvpResvTSpecMaxTU")
    {
        rsvpresvtspecmaxtu = value;
        rsvpresvtspecmaxtu.value_namespace = name_space;
        rsvpresvtspecmaxtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvpResvRSpecRate")
    {
        rsvpresvrspecrate = value;
        rsvpresvrspecrate.value_namespace = name_space;
        rsvpresvrspecrate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvpResvRSpecSlack")
    {
        rsvpresvrspecslack = value;
        rsvpresvrspecslack.value_namespace = name_space;
        rsvpresvrspecslack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvpResvInterval")
    {
        rsvpresvinterval = value;
        rsvpresvinterval.value_namespace = name_space;
        rsvpresvinterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvpResvScope")
    {
        rsvpresvscope = value;
        rsvpresvscope.value_namespace = name_space;
        rsvpresvscope.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvpResvShared")
    {
        rsvpresvshared = value;
        rsvpresvshared.value_namespace = name_space;
        rsvpresvshared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvpResvExplicit")
    {
        rsvpresvexplicit = value;
        rsvpresvexplicit.value_namespace = name_space;
        rsvpresvexplicit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvpResvRSVPHop")
    {
        rsvpresvrsvphop = value;
        rsvpresvrsvphop.value_namespace = name_space;
        rsvpresvrsvphop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvpResvLastChange")
    {
        rsvpresvlastchange = value;
        rsvpresvlastchange.value_namespace = name_space;
        rsvpresvlastchange.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvpResvPolicy")
    {
        rsvpresvpolicy = value;
        rsvpresvpolicy.value_namespace = name_space;
        rsvpresvpolicy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvpResvStatus")
    {
        rsvpresvstatus = value;
        rsvpresvstatus.value_namespace = name_space;
        rsvpresvstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvpResvTTL")
    {
        rsvpresvttl = value;
        rsvpresvttl.value_namespace = name_space;
        rsvpresvttl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvpResvFlowId")
    {
        rsvpresvflowid = value;
        rsvpresvflowid.value_namespace = name_space;
        rsvpresvflowid.value_namespace_prefix = name_space_prefix;
    }
}

void RSVPMIB::RsvpResvTable::RsvpResvEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rsvpSessionNumber")
    {
        rsvpsessionnumber.yfilter = yfilter;
    }
    if(value_path == "rsvpResvNumber")
    {
        rsvpresvnumber.yfilter = yfilter;
    }
    if(value_path == "rsvpResvType")
    {
        rsvpresvtype.yfilter = yfilter;
    }
    if(value_path == "rsvpResvDestAddr")
    {
        rsvpresvdestaddr.yfilter = yfilter;
    }
    if(value_path == "rsvpResvSenderAddr")
    {
        rsvpresvsenderaddr.yfilter = yfilter;
    }
    if(value_path == "rsvpResvDestAddrLength")
    {
        rsvpresvdestaddrlength.yfilter = yfilter;
    }
    if(value_path == "rsvpResvSenderAddrLength")
    {
        rsvpresvsenderaddrlength.yfilter = yfilter;
    }
    if(value_path == "rsvpResvProtocol")
    {
        rsvpresvprotocol.yfilter = yfilter;
    }
    if(value_path == "rsvpResvDestPort")
    {
        rsvpresvdestport.yfilter = yfilter;
    }
    if(value_path == "rsvpResvPort")
    {
        rsvpresvport.yfilter = yfilter;
    }
    if(value_path == "rsvpResvHopAddr")
    {
        rsvpresvhopaddr.yfilter = yfilter;
    }
    if(value_path == "rsvpResvHopLih")
    {
        rsvpresvhoplih.yfilter = yfilter;
    }
    if(value_path == "rsvpResvInterface")
    {
        rsvpresvinterface.yfilter = yfilter;
    }
    if(value_path == "rsvpResvService")
    {
        rsvpresvservice.yfilter = yfilter;
    }
    if(value_path == "rsvpResvTSpecRate")
    {
        rsvpresvtspecrate.yfilter = yfilter;
    }
    if(value_path == "rsvpResvTSpecPeakRate")
    {
        rsvpresvtspecpeakrate.yfilter = yfilter;
    }
    if(value_path == "rsvpResvTSpecBurst")
    {
        rsvpresvtspecburst.yfilter = yfilter;
    }
    if(value_path == "rsvpResvTSpecMinTU")
    {
        rsvpresvtspecmintu.yfilter = yfilter;
    }
    if(value_path == "rsvpResvTSpecMaxTU")
    {
        rsvpresvtspecmaxtu.yfilter = yfilter;
    }
    if(value_path == "rsvpResvRSpecRate")
    {
        rsvpresvrspecrate.yfilter = yfilter;
    }
    if(value_path == "rsvpResvRSpecSlack")
    {
        rsvpresvrspecslack.yfilter = yfilter;
    }
    if(value_path == "rsvpResvInterval")
    {
        rsvpresvinterval.yfilter = yfilter;
    }
    if(value_path == "rsvpResvScope")
    {
        rsvpresvscope.yfilter = yfilter;
    }
    if(value_path == "rsvpResvShared")
    {
        rsvpresvshared.yfilter = yfilter;
    }
    if(value_path == "rsvpResvExplicit")
    {
        rsvpresvexplicit.yfilter = yfilter;
    }
    if(value_path == "rsvpResvRSVPHop")
    {
        rsvpresvrsvphop.yfilter = yfilter;
    }
    if(value_path == "rsvpResvLastChange")
    {
        rsvpresvlastchange.yfilter = yfilter;
    }
    if(value_path == "rsvpResvPolicy")
    {
        rsvpresvpolicy.yfilter = yfilter;
    }
    if(value_path == "rsvpResvStatus")
    {
        rsvpresvstatus.yfilter = yfilter;
    }
    if(value_path == "rsvpResvTTL")
    {
        rsvpresvttl.yfilter = yfilter;
    }
    if(value_path == "rsvpResvFlowId")
    {
        rsvpresvflowid.yfilter = yfilter;
    }
}

bool RSVPMIB::RsvpResvTable::RsvpResvEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsvpSessionNumber" || name == "rsvpResvNumber" || name == "rsvpResvType" || name == "rsvpResvDestAddr" || name == "rsvpResvSenderAddr" || name == "rsvpResvDestAddrLength" || name == "rsvpResvSenderAddrLength" || name == "rsvpResvProtocol" || name == "rsvpResvDestPort" || name == "rsvpResvPort" || name == "rsvpResvHopAddr" || name == "rsvpResvHopLih" || name == "rsvpResvInterface" || name == "rsvpResvService" || name == "rsvpResvTSpecRate" || name == "rsvpResvTSpecPeakRate" || name == "rsvpResvTSpecBurst" || name == "rsvpResvTSpecMinTU" || name == "rsvpResvTSpecMaxTU" || name == "rsvpResvRSpecRate" || name == "rsvpResvRSpecSlack" || name == "rsvpResvInterval" || name == "rsvpResvScope" || name == "rsvpResvShared" || name == "rsvpResvExplicit" || name == "rsvpResvRSVPHop" || name == "rsvpResvLastChange" || name == "rsvpResvPolicy" || name == "rsvpResvStatus" || name == "rsvpResvTTL" || name == "rsvpResvFlowId")
        return true;
    return false;
}

RSVPMIB::RsvpResvFwdTable::RsvpResvFwdTable()
    :
    rsvpresvfwdentry(this, {"rsvpsessionnumber", "rsvpresvfwdnumber"})
{

    yang_name = "rsvpResvFwdTable"; yang_parent_name = "RSVP-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

RSVPMIB::RsvpResvFwdTable::~RsvpResvFwdTable()
{
}

bool RSVPMIB::RsvpResvFwdTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rsvpresvfwdentry.len(); index++)
    {
        if(rsvpresvfwdentry[index]->has_data())
            return true;
    }
    return false;
}

bool RSVPMIB::RsvpResvFwdTable::has_operation() const
{
    for (std::size_t index=0; index<rsvpresvfwdentry.len(); index++)
    {
        if(rsvpresvfwdentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RSVPMIB::RsvpResvFwdTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RSVP-MIB:RSVP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string RSVPMIB::RsvpResvFwdTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvpResvFwdTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RSVPMIB::RsvpResvFwdTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RSVPMIB::RsvpResvFwdTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsvpResvFwdEntry")
    {
        auto ent_ = std::make_shared<RSVPMIB::RsvpResvFwdTable::RsvpResvFwdEntry>();
        ent_->parent = this;
        rsvpresvfwdentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RSVPMIB::RsvpResvFwdTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rsvpresvfwdentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void RSVPMIB::RsvpResvFwdTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RSVPMIB::RsvpResvFwdTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RSVPMIB::RsvpResvFwdTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsvpResvFwdEntry")
        return true;
    return false;
}

RSVPMIB::RsvpResvFwdTable::RsvpResvFwdEntry::RsvpResvFwdEntry()
    :
    rsvpsessionnumber{YType::str, "rsvpSessionNumber"},
    rsvpresvfwdnumber{YType::int32, "rsvpResvFwdNumber"},
    rsvpresvfwdtype{YType::int32, "rsvpResvFwdType"},
    rsvpresvfwddestaddr{YType::str, "rsvpResvFwdDestAddr"},
    rsvpresvfwdsenderaddr{YType::str, "rsvpResvFwdSenderAddr"},
    rsvpresvfwddestaddrlength{YType::int32, "rsvpResvFwdDestAddrLength"},
    rsvpresvfwdsenderaddrlength{YType::int32, "rsvpResvFwdSenderAddrLength"},
    rsvpresvfwdprotocol{YType::int32, "rsvpResvFwdProtocol"},
    rsvpresvfwddestport{YType::str, "rsvpResvFwdDestPort"},
    rsvpresvfwdport{YType::str, "rsvpResvFwdPort"},
    rsvpresvfwdhopaddr{YType::str, "rsvpResvFwdHopAddr"},
    rsvpresvfwdhoplih{YType::int32, "rsvpResvFwdHopLih"},
    rsvpresvfwdinterface{YType::int32, "rsvpResvFwdInterface"},
    rsvpresvfwdservice{YType::enumeration, "rsvpResvFwdService"},
    rsvpresvfwdtspecrate{YType::int32, "rsvpResvFwdTSpecRate"},
    rsvpresvfwdtspecpeakrate{YType::int32, "rsvpResvFwdTSpecPeakRate"},
    rsvpresvfwdtspecburst{YType::int32, "rsvpResvFwdTSpecBurst"},
    rsvpresvfwdtspecmintu{YType::int32, "rsvpResvFwdTSpecMinTU"},
    rsvpresvfwdtspecmaxtu{YType::int32, "rsvpResvFwdTSpecMaxTU"},
    rsvpresvfwdrspecrate{YType::int32, "rsvpResvFwdRSpecRate"},
    rsvpresvfwdrspecslack{YType::int32, "rsvpResvFwdRSpecSlack"},
    rsvpresvfwdinterval{YType::int32, "rsvpResvFwdInterval"},
    rsvpresvfwdscope{YType::str, "rsvpResvFwdScope"},
    rsvpresvfwdshared{YType::boolean, "rsvpResvFwdShared"},
    rsvpresvfwdexplicit{YType::boolean, "rsvpResvFwdExplicit"},
    rsvpresvfwdrsvphop{YType::boolean, "rsvpResvFwdRSVPHop"},
    rsvpresvfwdlastchange{YType::uint32, "rsvpResvFwdLastChange"},
    rsvpresvfwdpolicy{YType::str, "rsvpResvFwdPolicy"},
    rsvpresvfwdstatus{YType::enumeration, "rsvpResvFwdStatus"},
    rsvpresvfwdttl{YType::int32, "rsvpResvFwdTTL"},
    rsvpresvfwdflowid{YType::int32, "rsvpResvFwdFlowId"}
{

    yang_name = "rsvpResvFwdEntry"; yang_parent_name = "rsvpResvFwdTable"; is_top_level_class = false; has_list_ancestor = false; 
}

RSVPMIB::RsvpResvFwdTable::RsvpResvFwdEntry::~RsvpResvFwdEntry()
{
}

bool RSVPMIB::RsvpResvFwdTable::RsvpResvFwdEntry::has_data() const
{
    if (is_presence_container) return true;
    return rsvpsessionnumber.is_set
	|| rsvpresvfwdnumber.is_set
	|| rsvpresvfwdtype.is_set
	|| rsvpresvfwddestaddr.is_set
	|| rsvpresvfwdsenderaddr.is_set
	|| rsvpresvfwddestaddrlength.is_set
	|| rsvpresvfwdsenderaddrlength.is_set
	|| rsvpresvfwdprotocol.is_set
	|| rsvpresvfwddestport.is_set
	|| rsvpresvfwdport.is_set
	|| rsvpresvfwdhopaddr.is_set
	|| rsvpresvfwdhoplih.is_set
	|| rsvpresvfwdinterface.is_set
	|| rsvpresvfwdservice.is_set
	|| rsvpresvfwdtspecrate.is_set
	|| rsvpresvfwdtspecpeakrate.is_set
	|| rsvpresvfwdtspecburst.is_set
	|| rsvpresvfwdtspecmintu.is_set
	|| rsvpresvfwdtspecmaxtu.is_set
	|| rsvpresvfwdrspecrate.is_set
	|| rsvpresvfwdrspecslack.is_set
	|| rsvpresvfwdinterval.is_set
	|| rsvpresvfwdscope.is_set
	|| rsvpresvfwdshared.is_set
	|| rsvpresvfwdexplicit.is_set
	|| rsvpresvfwdrsvphop.is_set
	|| rsvpresvfwdlastchange.is_set
	|| rsvpresvfwdpolicy.is_set
	|| rsvpresvfwdstatus.is_set
	|| rsvpresvfwdttl.is_set
	|| rsvpresvfwdflowid.is_set;
}

bool RSVPMIB::RsvpResvFwdTable::RsvpResvFwdEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rsvpsessionnumber.yfilter)
	|| ydk::is_set(rsvpresvfwdnumber.yfilter)
	|| ydk::is_set(rsvpresvfwdtype.yfilter)
	|| ydk::is_set(rsvpresvfwddestaddr.yfilter)
	|| ydk::is_set(rsvpresvfwdsenderaddr.yfilter)
	|| ydk::is_set(rsvpresvfwddestaddrlength.yfilter)
	|| ydk::is_set(rsvpresvfwdsenderaddrlength.yfilter)
	|| ydk::is_set(rsvpresvfwdprotocol.yfilter)
	|| ydk::is_set(rsvpresvfwddestport.yfilter)
	|| ydk::is_set(rsvpresvfwdport.yfilter)
	|| ydk::is_set(rsvpresvfwdhopaddr.yfilter)
	|| ydk::is_set(rsvpresvfwdhoplih.yfilter)
	|| ydk::is_set(rsvpresvfwdinterface.yfilter)
	|| ydk::is_set(rsvpresvfwdservice.yfilter)
	|| ydk::is_set(rsvpresvfwdtspecrate.yfilter)
	|| ydk::is_set(rsvpresvfwdtspecpeakrate.yfilter)
	|| ydk::is_set(rsvpresvfwdtspecburst.yfilter)
	|| ydk::is_set(rsvpresvfwdtspecmintu.yfilter)
	|| ydk::is_set(rsvpresvfwdtspecmaxtu.yfilter)
	|| ydk::is_set(rsvpresvfwdrspecrate.yfilter)
	|| ydk::is_set(rsvpresvfwdrspecslack.yfilter)
	|| ydk::is_set(rsvpresvfwdinterval.yfilter)
	|| ydk::is_set(rsvpresvfwdscope.yfilter)
	|| ydk::is_set(rsvpresvfwdshared.yfilter)
	|| ydk::is_set(rsvpresvfwdexplicit.yfilter)
	|| ydk::is_set(rsvpresvfwdrsvphop.yfilter)
	|| ydk::is_set(rsvpresvfwdlastchange.yfilter)
	|| ydk::is_set(rsvpresvfwdpolicy.yfilter)
	|| ydk::is_set(rsvpresvfwdstatus.yfilter)
	|| ydk::is_set(rsvpresvfwdttl.yfilter)
	|| ydk::is_set(rsvpresvfwdflowid.yfilter);
}

std::string RSVPMIB::RsvpResvFwdTable::RsvpResvFwdEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RSVP-MIB:RSVP-MIB/rsvpResvFwdTable/" << get_segment_path();
    return path_buffer.str();
}

std::string RSVPMIB::RsvpResvFwdTable::RsvpResvFwdEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvpResvFwdEntry";
    ADD_KEY_TOKEN(rsvpsessionnumber, "rsvpSessionNumber");
    ADD_KEY_TOKEN(rsvpresvfwdnumber, "rsvpResvFwdNumber");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RSVPMIB::RsvpResvFwdTable::RsvpResvFwdEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rsvpsessionnumber.is_set || is_set(rsvpsessionnumber.yfilter)) leaf_name_data.push_back(rsvpsessionnumber.get_name_leafdata());
    if (rsvpresvfwdnumber.is_set || is_set(rsvpresvfwdnumber.yfilter)) leaf_name_data.push_back(rsvpresvfwdnumber.get_name_leafdata());
    if (rsvpresvfwdtype.is_set || is_set(rsvpresvfwdtype.yfilter)) leaf_name_data.push_back(rsvpresvfwdtype.get_name_leafdata());
    if (rsvpresvfwddestaddr.is_set || is_set(rsvpresvfwddestaddr.yfilter)) leaf_name_data.push_back(rsvpresvfwddestaddr.get_name_leafdata());
    if (rsvpresvfwdsenderaddr.is_set || is_set(rsvpresvfwdsenderaddr.yfilter)) leaf_name_data.push_back(rsvpresvfwdsenderaddr.get_name_leafdata());
    if (rsvpresvfwddestaddrlength.is_set || is_set(rsvpresvfwddestaddrlength.yfilter)) leaf_name_data.push_back(rsvpresvfwddestaddrlength.get_name_leafdata());
    if (rsvpresvfwdsenderaddrlength.is_set || is_set(rsvpresvfwdsenderaddrlength.yfilter)) leaf_name_data.push_back(rsvpresvfwdsenderaddrlength.get_name_leafdata());
    if (rsvpresvfwdprotocol.is_set || is_set(rsvpresvfwdprotocol.yfilter)) leaf_name_data.push_back(rsvpresvfwdprotocol.get_name_leafdata());
    if (rsvpresvfwddestport.is_set || is_set(rsvpresvfwddestport.yfilter)) leaf_name_data.push_back(rsvpresvfwddestport.get_name_leafdata());
    if (rsvpresvfwdport.is_set || is_set(rsvpresvfwdport.yfilter)) leaf_name_data.push_back(rsvpresvfwdport.get_name_leafdata());
    if (rsvpresvfwdhopaddr.is_set || is_set(rsvpresvfwdhopaddr.yfilter)) leaf_name_data.push_back(rsvpresvfwdhopaddr.get_name_leafdata());
    if (rsvpresvfwdhoplih.is_set || is_set(rsvpresvfwdhoplih.yfilter)) leaf_name_data.push_back(rsvpresvfwdhoplih.get_name_leafdata());
    if (rsvpresvfwdinterface.is_set || is_set(rsvpresvfwdinterface.yfilter)) leaf_name_data.push_back(rsvpresvfwdinterface.get_name_leafdata());
    if (rsvpresvfwdservice.is_set || is_set(rsvpresvfwdservice.yfilter)) leaf_name_data.push_back(rsvpresvfwdservice.get_name_leafdata());
    if (rsvpresvfwdtspecrate.is_set || is_set(rsvpresvfwdtspecrate.yfilter)) leaf_name_data.push_back(rsvpresvfwdtspecrate.get_name_leafdata());
    if (rsvpresvfwdtspecpeakrate.is_set || is_set(rsvpresvfwdtspecpeakrate.yfilter)) leaf_name_data.push_back(rsvpresvfwdtspecpeakrate.get_name_leafdata());
    if (rsvpresvfwdtspecburst.is_set || is_set(rsvpresvfwdtspecburst.yfilter)) leaf_name_data.push_back(rsvpresvfwdtspecburst.get_name_leafdata());
    if (rsvpresvfwdtspecmintu.is_set || is_set(rsvpresvfwdtspecmintu.yfilter)) leaf_name_data.push_back(rsvpresvfwdtspecmintu.get_name_leafdata());
    if (rsvpresvfwdtspecmaxtu.is_set || is_set(rsvpresvfwdtspecmaxtu.yfilter)) leaf_name_data.push_back(rsvpresvfwdtspecmaxtu.get_name_leafdata());
    if (rsvpresvfwdrspecrate.is_set || is_set(rsvpresvfwdrspecrate.yfilter)) leaf_name_data.push_back(rsvpresvfwdrspecrate.get_name_leafdata());
    if (rsvpresvfwdrspecslack.is_set || is_set(rsvpresvfwdrspecslack.yfilter)) leaf_name_data.push_back(rsvpresvfwdrspecslack.get_name_leafdata());
    if (rsvpresvfwdinterval.is_set || is_set(rsvpresvfwdinterval.yfilter)) leaf_name_data.push_back(rsvpresvfwdinterval.get_name_leafdata());
    if (rsvpresvfwdscope.is_set || is_set(rsvpresvfwdscope.yfilter)) leaf_name_data.push_back(rsvpresvfwdscope.get_name_leafdata());
    if (rsvpresvfwdshared.is_set || is_set(rsvpresvfwdshared.yfilter)) leaf_name_data.push_back(rsvpresvfwdshared.get_name_leafdata());
    if (rsvpresvfwdexplicit.is_set || is_set(rsvpresvfwdexplicit.yfilter)) leaf_name_data.push_back(rsvpresvfwdexplicit.get_name_leafdata());
    if (rsvpresvfwdrsvphop.is_set || is_set(rsvpresvfwdrsvphop.yfilter)) leaf_name_data.push_back(rsvpresvfwdrsvphop.get_name_leafdata());
    if (rsvpresvfwdlastchange.is_set || is_set(rsvpresvfwdlastchange.yfilter)) leaf_name_data.push_back(rsvpresvfwdlastchange.get_name_leafdata());
    if (rsvpresvfwdpolicy.is_set || is_set(rsvpresvfwdpolicy.yfilter)) leaf_name_data.push_back(rsvpresvfwdpolicy.get_name_leafdata());
    if (rsvpresvfwdstatus.is_set || is_set(rsvpresvfwdstatus.yfilter)) leaf_name_data.push_back(rsvpresvfwdstatus.get_name_leafdata());
    if (rsvpresvfwdttl.is_set || is_set(rsvpresvfwdttl.yfilter)) leaf_name_data.push_back(rsvpresvfwdttl.get_name_leafdata());
    if (rsvpresvfwdflowid.is_set || is_set(rsvpresvfwdflowid.yfilter)) leaf_name_data.push_back(rsvpresvfwdflowid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RSVPMIB::RsvpResvFwdTable::RsvpResvFwdEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RSVPMIB::RsvpResvFwdTable::RsvpResvFwdEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RSVPMIB::RsvpResvFwdTable::RsvpResvFwdEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rsvpSessionNumber")
    {
        rsvpsessionnumber = value;
        rsvpsessionnumber.value_namespace = name_space;
        rsvpsessionnumber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvpResvFwdNumber")
    {
        rsvpresvfwdnumber = value;
        rsvpresvfwdnumber.value_namespace = name_space;
        rsvpresvfwdnumber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvpResvFwdType")
    {
        rsvpresvfwdtype = value;
        rsvpresvfwdtype.value_namespace = name_space;
        rsvpresvfwdtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvpResvFwdDestAddr")
    {
        rsvpresvfwddestaddr = value;
        rsvpresvfwddestaddr.value_namespace = name_space;
        rsvpresvfwddestaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvpResvFwdSenderAddr")
    {
        rsvpresvfwdsenderaddr = value;
        rsvpresvfwdsenderaddr.value_namespace = name_space;
        rsvpresvfwdsenderaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvpResvFwdDestAddrLength")
    {
        rsvpresvfwddestaddrlength = value;
        rsvpresvfwddestaddrlength.value_namespace = name_space;
        rsvpresvfwddestaddrlength.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvpResvFwdSenderAddrLength")
    {
        rsvpresvfwdsenderaddrlength = value;
        rsvpresvfwdsenderaddrlength.value_namespace = name_space;
        rsvpresvfwdsenderaddrlength.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvpResvFwdProtocol")
    {
        rsvpresvfwdprotocol = value;
        rsvpresvfwdprotocol.value_namespace = name_space;
        rsvpresvfwdprotocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvpResvFwdDestPort")
    {
        rsvpresvfwddestport = value;
        rsvpresvfwddestport.value_namespace = name_space;
        rsvpresvfwddestport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvpResvFwdPort")
    {
        rsvpresvfwdport = value;
        rsvpresvfwdport.value_namespace = name_space;
        rsvpresvfwdport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvpResvFwdHopAddr")
    {
        rsvpresvfwdhopaddr = value;
        rsvpresvfwdhopaddr.value_namespace = name_space;
        rsvpresvfwdhopaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvpResvFwdHopLih")
    {
        rsvpresvfwdhoplih = value;
        rsvpresvfwdhoplih.value_namespace = name_space;
        rsvpresvfwdhoplih.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvpResvFwdInterface")
    {
        rsvpresvfwdinterface = value;
        rsvpresvfwdinterface.value_namespace = name_space;
        rsvpresvfwdinterface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvpResvFwdService")
    {
        rsvpresvfwdservice = value;
        rsvpresvfwdservice.value_namespace = name_space;
        rsvpresvfwdservice.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvpResvFwdTSpecRate")
    {
        rsvpresvfwdtspecrate = value;
        rsvpresvfwdtspecrate.value_namespace = name_space;
        rsvpresvfwdtspecrate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvpResvFwdTSpecPeakRate")
    {
        rsvpresvfwdtspecpeakrate = value;
        rsvpresvfwdtspecpeakrate.value_namespace = name_space;
        rsvpresvfwdtspecpeakrate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvpResvFwdTSpecBurst")
    {
        rsvpresvfwdtspecburst = value;
        rsvpresvfwdtspecburst.value_namespace = name_space;
        rsvpresvfwdtspecburst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvpResvFwdTSpecMinTU")
    {
        rsvpresvfwdtspecmintu = value;
        rsvpresvfwdtspecmintu.value_namespace = name_space;
        rsvpresvfwdtspecmintu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvpResvFwdTSpecMaxTU")
    {
        rsvpresvfwdtspecmaxtu = value;
        rsvpresvfwdtspecmaxtu.value_namespace = name_space;
        rsvpresvfwdtspecmaxtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvpResvFwdRSpecRate")
    {
        rsvpresvfwdrspecrate = value;
        rsvpresvfwdrspecrate.value_namespace = name_space;
        rsvpresvfwdrspecrate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvpResvFwdRSpecSlack")
    {
        rsvpresvfwdrspecslack = value;
        rsvpresvfwdrspecslack.value_namespace = name_space;
        rsvpresvfwdrspecslack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvpResvFwdInterval")
    {
        rsvpresvfwdinterval = value;
        rsvpresvfwdinterval.value_namespace = name_space;
        rsvpresvfwdinterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvpResvFwdScope")
    {
        rsvpresvfwdscope = value;
        rsvpresvfwdscope.value_namespace = name_space;
        rsvpresvfwdscope.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvpResvFwdShared")
    {
        rsvpresvfwdshared = value;
        rsvpresvfwdshared.value_namespace = name_space;
        rsvpresvfwdshared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvpResvFwdExplicit")
    {
        rsvpresvfwdexplicit = value;
        rsvpresvfwdexplicit.value_namespace = name_space;
        rsvpresvfwdexplicit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvpResvFwdRSVPHop")
    {
        rsvpresvfwdrsvphop = value;
        rsvpresvfwdrsvphop.value_namespace = name_space;
        rsvpresvfwdrsvphop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvpResvFwdLastChange")
    {
        rsvpresvfwdlastchange = value;
        rsvpresvfwdlastchange.value_namespace = name_space;
        rsvpresvfwdlastchange.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvpResvFwdPolicy")
    {
        rsvpresvfwdpolicy = value;
        rsvpresvfwdpolicy.value_namespace = name_space;
        rsvpresvfwdpolicy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvpResvFwdStatus")
    {
        rsvpresvfwdstatus = value;
        rsvpresvfwdstatus.value_namespace = name_space;
        rsvpresvfwdstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvpResvFwdTTL")
    {
        rsvpresvfwdttl = value;
        rsvpresvfwdttl.value_namespace = name_space;
        rsvpresvfwdttl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvpResvFwdFlowId")
    {
        rsvpresvfwdflowid = value;
        rsvpresvfwdflowid.value_namespace = name_space;
        rsvpresvfwdflowid.value_namespace_prefix = name_space_prefix;
    }
}

void RSVPMIB::RsvpResvFwdTable::RsvpResvFwdEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rsvpSessionNumber")
    {
        rsvpsessionnumber.yfilter = yfilter;
    }
    if(value_path == "rsvpResvFwdNumber")
    {
        rsvpresvfwdnumber.yfilter = yfilter;
    }
    if(value_path == "rsvpResvFwdType")
    {
        rsvpresvfwdtype.yfilter = yfilter;
    }
    if(value_path == "rsvpResvFwdDestAddr")
    {
        rsvpresvfwddestaddr.yfilter = yfilter;
    }
    if(value_path == "rsvpResvFwdSenderAddr")
    {
        rsvpresvfwdsenderaddr.yfilter = yfilter;
    }
    if(value_path == "rsvpResvFwdDestAddrLength")
    {
        rsvpresvfwddestaddrlength.yfilter = yfilter;
    }
    if(value_path == "rsvpResvFwdSenderAddrLength")
    {
        rsvpresvfwdsenderaddrlength.yfilter = yfilter;
    }
    if(value_path == "rsvpResvFwdProtocol")
    {
        rsvpresvfwdprotocol.yfilter = yfilter;
    }
    if(value_path == "rsvpResvFwdDestPort")
    {
        rsvpresvfwddestport.yfilter = yfilter;
    }
    if(value_path == "rsvpResvFwdPort")
    {
        rsvpresvfwdport.yfilter = yfilter;
    }
    if(value_path == "rsvpResvFwdHopAddr")
    {
        rsvpresvfwdhopaddr.yfilter = yfilter;
    }
    if(value_path == "rsvpResvFwdHopLih")
    {
        rsvpresvfwdhoplih.yfilter = yfilter;
    }
    if(value_path == "rsvpResvFwdInterface")
    {
        rsvpresvfwdinterface.yfilter = yfilter;
    }
    if(value_path == "rsvpResvFwdService")
    {
        rsvpresvfwdservice.yfilter = yfilter;
    }
    if(value_path == "rsvpResvFwdTSpecRate")
    {
        rsvpresvfwdtspecrate.yfilter = yfilter;
    }
    if(value_path == "rsvpResvFwdTSpecPeakRate")
    {
        rsvpresvfwdtspecpeakrate.yfilter = yfilter;
    }
    if(value_path == "rsvpResvFwdTSpecBurst")
    {
        rsvpresvfwdtspecburst.yfilter = yfilter;
    }
    if(value_path == "rsvpResvFwdTSpecMinTU")
    {
        rsvpresvfwdtspecmintu.yfilter = yfilter;
    }
    if(value_path == "rsvpResvFwdTSpecMaxTU")
    {
        rsvpresvfwdtspecmaxtu.yfilter = yfilter;
    }
    if(value_path == "rsvpResvFwdRSpecRate")
    {
        rsvpresvfwdrspecrate.yfilter = yfilter;
    }
    if(value_path == "rsvpResvFwdRSpecSlack")
    {
        rsvpresvfwdrspecslack.yfilter = yfilter;
    }
    if(value_path == "rsvpResvFwdInterval")
    {
        rsvpresvfwdinterval.yfilter = yfilter;
    }
    if(value_path == "rsvpResvFwdScope")
    {
        rsvpresvfwdscope.yfilter = yfilter;
    }
    if(value_path == "rsvpResvFwdShared")
    {
        rsvpresvfwdshared.yfilter = yfilter;
    }
    if(value_path == "rsvpResvFwdExplicit")
    {
        rsvpresvfwdexplicit.yfilter = yfilter;
    }
    if(value_path == "rsvpResvFwdRSVPHop")
    {
        rsvpresvfwdrsvphop.yfilter = yfilter;
    }
    if(value_path == "rsvpResvFwdLastChange")
    {
        rsvpresvfwdlastchange.yfilter = yfilter;
    }
    if(value_path == "rsvpResvFwdPolicy")
    {
        rsvpresvfwdpolicy.yfilter = yfilter;
    }
    if(value_path == "rsvpResvFwdStatus")
    {
        rsvpresvfwdstatus.yfilter = yfilter;
    }
    if(value_path == "rsvpResvFwdTTL")
    {
        rsvpresvfwdttl.yfilter = yfilter;
    }
    if(value_path == "rsvpResvFwdFlowId")
    {
        rsvpresvfwdflowid.yfilter = yfilter;
    }
}

bool RSVPMIB::RsvpResvFwdTable::RsvpResvFwdEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsvpSessionNumber" || name == "rsvpResvFwdNumber" || name == "rsvpResvFwdType" || name == "rsvpResvFwdDestAddr" || name == "rsvpResvFwdSenderAddr" || name == "rsvpResvFwdDestAddrLength" || name == "rsvpResvFwdSenderAddrLength" || name == "rsvpResvFwdProtocol" || name == "rsvpResvFwdDestPort" || name == "rsvpResvFwdPort" || name == "rsvpResvFwdHopAddr" || name == "rsvpResvFwdHopLih" || name == "rsvpResvFwdInterface" || name == "rsvpResvFwdService" || name == "rsvpResvFwdTSpecRate" || name == "rsvpResvFwdTSpecPeakRate" || name == "rsvpResvFwdTSpecBurst" || name == "rsvpResvFwdTSpecMinTU" || name == "rsvpResvFwdTSpecMaxTU" || name == "rsvpResvFwdRSpecRate" || name == "rsvpResvFwdRSpecSlack" || name == "rsvpResvFwdInterval" || name == "rsvpResvFwdScope" || name == "rsvpResvFwdShared" || name == "rsvpResvFwdExplicit" || name == "rsvpResvFwdRSVPHop" || name == "rsvpResvFwdLastChange" || name == "rsvpResvFwdPolicy" || name == "rsvpResvFwdStatus" || name == "rsvpResvFwdTTL" || name == "rsvpResvFwdFlowId")
        return true;
    return false;
}

RSVPMIB::RsvpIfTable::RsvpIfTable()
    :
    rsvpifentry(this, {"ifindex"})
{

    yang_name = "rsvpIfTable"; yang_parent_name = "RSVP-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

RSVPMIB::RsvpIfTable::~RsvpIfTable()
{
}

bool RSVPMIB::RsvpIfTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rsvpifentry.len(); index++)
    {
        if(rsvpifentry[index]->has_data())
            return true;
    }
    return false;
}

bool RSVPMIB::RsvpIfTable::has_operation() const
{
    for (std::size_t index=0; index<rsvpifentry.len(); index++)
    {
        if(rsvpifentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RSVPMIB::RsvpIfTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RSVP-MIB:RSVP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string RSVPMIB::RsvpIfTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvpIfTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RSVPMIB::RsvpIfTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RSVPMIB::RsvpIfTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsvpIfEntry")
    {
        auto ent_ = std::make_shared<RSVPMIB::RsvpIfTable::RsvpIfEntry>();
        ent_->parent = this;
        rsvpifentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RSVPMIB::RsvpIfTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rsvpifentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void RSVPMIB::RsvpIfTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RSVPMIB::RsvpIfTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RSVPMIB::RsvpIfTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsvpIfEntry")
        return true;
    return false;
}

RSVPMIB::RsvpIfTable::RsvpIfEntry::RsvpIfEntry()
    :
    ifindex{YType::str, "ifIndex"},
    rsvpifudpnbrs{YType::uint32, "rsvpIfUdpNbrs"},
    rsvpifipnbrs{YType::uint32, "rsvpIfIpNbrs"},
    rsvpifnbrs{YType::uint32, "rsvpIfNbrs"},
    rsvpifrefreshblockademultiple{YType::int32, "rsvpIfRefreshBlockadeMultiple"},
    rsvpifrefreshmultiple{YType::int32, "rsvpIfRefreshMultiple"},
    rsvpifttl{YType::int32, "rsvpIfTTL"},
    rsvpifrefreshinterval{YType::int32, "rsvpIfRefreshInterval"},
    rsvpifroutedelay{YType::int32, "rsvpIfRouteDelay"},
    rsvpifenabled{YType::boolean, "rsvpIfEnabled"},
    rsvpifudprequired{YType::boolean, "rsvpIfUdpRequired"},
    rsvpifstatus{YType::enumeration, "rsvpIfStatus"}
{

    yang_name = "rsvpIfEntry"; yang_parent_name = "rsvpIfTable"; is_top_level_class = false; has_list_ancestor = false; 
}

RSVPMIB::RsvpIfTable::RsvpIfEntry::~RsvpIfEntry()
{
}

bool RSVPMIB::RsvpIfTable::RsvpIfEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| rsvpifudpnbrs.is_set
	|| rsvpifipnbrs.is_set
	|| rsvpifnbrs.is_set
	|| rsvpifrefreshblockademultiple.is_set
	|| rsvpifrefreshmultiple.is_set
	|| rsvpifttl.is_set
	|| rsvpifrefreshinterval.is_set
	|| rsvpifroutedelay.is_set
	|| rsvpifenabled.is_set
	|| rsvpifudprequired.is_set
	|| rsvpifstatus.is_set;
}

bool RSVPMIB::RsvpIfTable::RsvpIfEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(rsvpifudpnbrs.yfilter)
	|| ydk::is_set(rsvpifipnbrs.yfilter)
	|| ydk::is_set(rsvpifnbrs.yfilter)
	|| ydk::is_set(rsvpifrefreshblockademultiple.yfilter)
	|| ydk::is_set(rsvpifrefreshmultiple.yfilter)
	|| ydk::is_set(rsvpifttl.yfilter)
	|| ydk::is_set(rsvpifrefreshinterval.yfilter)
	|| ydk::is_set(rsvpifroutedelay.yfilter)
	|| ydk::is_set(rsvpifenabled.yfilter)
	|| ydk::is_set(rsvpifudprequired.yfilter)
	|| ydk::is_set(rsvpifstatus.yfilter);
}

std::string RSVPMIB::RsvpIfTable::RsvpIfEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RSVP-MIB:RSVP-MIB/rsvpIfTable/" << get_segment_path();
    return path_buffer.str();
}

std::string RSVPMIB::RsvpIfTable::RsvpIfEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvpIfEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RSVPMIB::RsvpIfTable::RsvpIfEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (rsvpifudpnbrs.is_set || is_set(rsvpifudpnbrs.yfilter)) leaf_name_data.push_back(rsvpifudpnbrs.get_name_leafdata());
    if (rsvpifipnbrs.is_set || is_set(rsvpifipnbrs.yfilter)) leaf_name_data.push_back(rsvpifipnbrs.get_name_leafdata());
    if (rsvpifnbrs.is_set || is_set(rsvpifnbrs.yfilter)) leaf_name_data.push_back(rsvpifnbrs.get_name_leafdata());
    if (rsvpifrefreshblockademultiple.is_set || is_set(rsvpifrefreshblockademultiple.yfilter)) leaf_name_data.push_back(rsvpifrefreshblockademultiple.get_name_leafdata());
    if (rsvpifrefreshmultiple.is_set || is_set(rsvpifrefreshmultiple.yfilter)) leaf_name_data.push_back(rsvpifrefreshmultiple.get_name_leafdata());
    if (rsvpifttl.is_set || is_set(rsvpifttl.yfilter)) leaf_name_data.push_back(rsvpifttl.get_name_leafdata());
    if (rsvpifrefreshinterval.is_set || is_set(rsvpifrefreshinterval.yfilter)) leaf_name_data.push_back(rsvpifrefreshinterval.get_name_leafdata());
    if (rsvpifroutedelay.is_set || is_set(rsvpifroutedelay.yfilter)) leaf_name_data.push_back(rsvpifroutedelay.get_name_leafdata());
    if (rsvpifenabled.is_set || is_set(rsvpifenabled.yfilter)) leaf_name_data.push_back(rsvpifenabled.get_name_leafdata());
    if (rsvpifudprequired.is_set || is_set(rsvpifudprequired.yfilter)) leaf_name_data.push_back(rsvpifudprequired.get_name_leafdata());
    if (rsvpifstatus.is_set || is_set(rsvpifstatus.yfilter)) leaf_name_data.push_back(rsvpifstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RSVPMIB::RsvpIfTable::RsvpIfEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RSVPMIB::RsvpIfTable::RsvpIfEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RSVPMIB::RsvpIfTable::RsvpIfEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvpIfUdpNbrs")
    {
        rsvpifudpnbrs = value;
        rsvpifudpnbrs.value_namespace = name_space;
        rsvpifudpnbrs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvpIfIpNbrs")
    {
        rsvpifipnbrs = value;
        rsvpifipnbrs.value_namespace = name_space;
        rsvpifipnbrs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvpIfNbrs")
    {
        rsvpifnbrs = value;
        rsvpifnbrs.value_namespace = name_space;
        rsvpifnbrs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvpIfRefreshBlockadeMultiple")
    {
        rsvpifrefreshblockademultiple = value;
        rsvpifrefreshblockademultiple.value_namespace = name_space;
        rsvpifrefreshblockademultiple.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvpIfRefreshMultiple")
    {
        rsvpifrefreshmultiple = value;
        rsvpifrefreshmultiple.value_namespace = name_space;
        rsvpifrefreshmultiple.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvpIfTTL")
    {
        rsvpifttl = value;
        rsvpifttl.value_namespace = name_space;
        rsvpifttl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvpIfRefreshInterval")
    {
        rsvpifrefreshinterval = value;
        rsvpifrefreshinterval.value_namespace = name_space;
        rsvpifrefreshinterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvpIfRouteDelay")
    {
        rsvpifroutedelay = value;
        rsvpifroutedelay.value_namespace = name_space;
        rsvpifroutedelay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvpIfEnabled")
    {
        rsvpifenabled = value;
        rsvpifenabled.value_namespace = name_space;
        rsvpifenabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvpIfUdpRequired")
    {
        rsvpifudprequired = value;
        rsvpifudprequired.value_namespace = name_space;
        rsvpifudprequired.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvpIfStatus")
    {
        rsvpifstatus = value;
        rsvpifstatus.value_namespace = name_space;
        rsvpifstatus.value_namespace_prefix = name_space_prefix;
    }
}

void RSVPMIB::RsvpIfTable::RsvpIfEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "rsvpIfUdpNbrs")
    {
        rsvpifudpnbrs.yfilter = yfilter;
    }
    if(value_path == "rsvpIfIpNbrs")
    {
        rsvpifipnbrs.yfilter = yfilter;
    }
    if(value_path == "rsvpIfNbrs")
    {
        rsvpifnbrs.yfilter = yfilter;
    }
    if(value_path == "rsvpIfRefreshBlockadeMultiple")
    {
        rsvpifrefreshblockademultiple.yfilter = yfilter;
    }
    if(value_path == "rsvpIfRefreshMultiple")
    {
        rsvpifrefreshmultiple.yfilter = yfilter;
    }
    if(value_path == "rsvpIfTTL")
    {
        rsvpifttl.yfilter = yfilter;
    }
    if(value_path == "rsvpIfRefreshInterval")
    {
        rsvpifrefreshinterval.yfilter = yfilter;
    }
    if(value_path == "rsvpIfRouteDelay")
    {
        rsvpifroutedelay.yfilter = yfilter;
    }
    if(value_path == "rsvpIfEnabled")
    {
        rsvpifenabled.yfilter = yfilter;
    }
    if(value_path == "rsvpIfUdpRequired")
    {
        rsvpifudprequired.yfilter = yfilter;
    }
    if(value_path == "rsvpIfStatus")
    {
        rsvpifstatus.yfilter = yfilter;
    }
}

bool RSVPMIB::RsvpIfTable::RsvpIfEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "rsvpIfUdpNbrs" || name == "rsvpIfIpNbrs" || name == "rsvpIfNbrs" || name == "rsvpIfRefreshBlockadeMultiple" || name == "rsvpIfRefreshMultiple" || name == "rsvpIfTTL" || name == "rsvpIfRefreshInterval" || name == "rsvpIfRouteDelay" || name == "rsvpIfEnabled" || name == "rsvpIfUdpRequired" || name == "rsvpIfStatus")
        return true;
    return false;
}

RSVPMIB::RsvpNbrTable::RsvpNbrTable()
    :
    rsvpnbrentry(this, {"ifindex", "rsvpnbraddress"})
{

    yang_name = "rsvpNbrTable"; yang_parent_name = "RSVP-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

RSVPMIB::RsvpNbrTable::~RsvpNbrTable()
{
}

bool RSVPMIB::RsvpNbrTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rsvpnbrentry.len(); index++)
    {
        if(rsvpnbrentry[index]->has_data())
            return true;
    }
    return false;
}

bool RSVPMIB::RsvpNbrTable::has_operation() const
{
    for (std::size_t index=0; index<rsvpnbrentry.len(); index++)
    {
        if(rsvpnbrentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RSVPMIB::RsvpNbrTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RSVP-MIB:RSVP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string RSVPMIB::RsvpNbrTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvpNbrTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RSVPMIB::RsvpNbrTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RSVPMIB::RsvpNbrTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsvpNbrEntry")
    {
        auto ent_ = std::make_shared<RSVPMIB::RsvpNbrTable::RsvpNbrEntry>();
        ent_->parent = this;
        rsvpnbrentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RSVPMIB::RsvpNbrTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rsvpnbrentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void RSVPMIB::RsvpNbrTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RSVPMIB::RsvpNbrTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RSVPMIB::RsvpNbrTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsvpNbrEntry")
        return true;
    return false;
}

RSVPMIB::RsvpNbrTable::RsvpNbrEntry::RsvpNbrEntry()
    :
    ifindex{YType::str, "ifIndex"},
    rsvpnbraddress{YType::str, "rsvpNbrAddress"},
    rsvpnbrprotocol{YType::enumeration, "rsvpNbrProtocol"},
    rsvpnbrstatus{YType::enumeration, "rsvpNbrStatus"}
{

    yang_name = "rsvpNbrEntry"; yang_parent_name = "rsvpNbrTable"; is_top_level_class = false; has_list_ancestor = false; 
}

RSVPMIB::RsvpNbrTable::RsvpNbrEntry::~RsvpNbrEntry()
{
}

bool RSVPMIB::RsvpNbrTable::RsvpNbrEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| rsvpnbraddress.is_set
	|| rsvpnbrprotocol.is_set
	|| rsvpnbrstatus.is_set;
}

bool RSVPMIB::RsvpNbrTable::RsvpNbrEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(rsvpnbraddress.yfilter)
	|| ydk::is_set(rsvpnbrprotocol.yfilter)
	|| ydk::is_set(rsvpnbrstatus.yfilter);
}

std::string RSVPMIB::RsvpNbrTable::RsvpNbrEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RSVP-MIB:RSVP-MIB/rsvpNbrTable/" << get_segment_path();
    return path_buffer.str();
}

std::string RSVPMIB::RsvpNbrTable::RsvpNbrEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvpNbrEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    ADD_KEY_TOKEN(rsvpnbraddress, "rsvpNbrAddress");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RSVPMIB::RsvpNbrTable::RsvpNbrEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (rsvpnbraddress.is_set || is_set(rsvpnbraddress.yfilter)) leaf_name_data.push_back(rsvpnbraddress.get_name_leafdata());
    if (rsvpnbrprotocol.is_set || is_set(rsvpnbrprotocol.yfilter)) leaf_name_data.push_back(rsvpnbrprotocol.get_name_leafdata());
    if (rsvpnbrstatus.is_set || is_set(rsvpnbrstatus.yfilter)) leaf_name_data.push_back(rsvpnbrstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> RSVPMIB::RsvpNbrTable::RsvpNbrEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> RSVPMIB::RsvpNbrTable::RsvpNbrEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void RSVPMIB::RsvpNbrTable::RsvpNbrEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvpNbrAddress")
    {
        rsvpnbraddress = value;
        rsvpnbraddress.value_namespace = name_space;
        rsvpnbraddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvpNbrProtocol")
    {
        rsvpnbrprotocol = value;
        rsvpnbrprotocol.value_namespace = name_space;
        rsvpnbrprotocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvpNbrStatus")
    {
        rsvpnbrstatus = value;
        rsvpnbrstatus.value_namespace = name_space;
        rsvpnbrstatus.value_namespace_prefix = name_space_prefix;
    }
}

void RSVPMIB::RsvpNbrTable::RsvpNbrEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "rsvpNbrAddress")
    {
        rsvpnbraddress.yfilter = yfilter;
    }
    if(value_path == "rsvpNbrProtocol")
    {
        rsvpnbrprotocol.yfilter = yfilter;
    }
    if(value_path == "rsvpNbrStatus")
    {
        rsvpnbrstatus.yfilter = yfilter;
    }
}

bool RSVPMIB::RsvpNbrTable::RsvpNbrEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "rsvpNbrAddress" || name == "rsvpNbrProtocol" || name == "rsvpNbrStatus")
        return true;
    return false;
}

const Enum::YLeaf RsvpEncapsulation::ip {1, "ip"};
const Enum::YLeaf RsvpEncapsulation::udp {2, "udp"};
const Enum::YLeaf RsvpEncapsulation::both {3, "both"};


}
}

