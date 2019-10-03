
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_NX_OS_device_21.hpp"
#include "Cisco_NX_OS_device_22.hpp"

using namespace ydk;

namespace cisco_nx_os {
namespace Cisco_NX_OS_device {

System::SnmpItems::InstItems::CommunityItems::CommSecPList::AclItems::AclItems()
    :
    useaclname{YType::str, "useAclName"},
    useipv4aclname{YType::str, "useIpv4AclName"},
    useipv6aclname{YType::str, "useIpv6AclName"}
{

    yang_name = "acl-items"; yang_parent_name = "CommSecP-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::SnmpItems::InstItems::CommunityItems::CommSecPList::AclItems::~AclItems()
{
}

bool System::SnmpItems::InstItems::CommunityItems::CommSecPList::AclItems::has_data() const
{
    if (is_presence_container) return true;
    return useaclname.is_set
	|| useipv4aclname.is_set
	|| useipv6aclname.is_set;
}

bool System::SnmpItems::InstItems::CommunityItems::CommSecPList::AclItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(useaclname.yfilter)
	|| ydk::is_set(useipv4aclname.yfilter)
	|| ydk::is_set(useipv6aclname.yfilter);
}

std::string System::SnmpItems::InstItems::CommunityItems::CommSecPList::AclItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acl-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::CommunityItems::CommSecPList::AclItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (useaclname.is_set || is_set(useaclname.yfilter)) leaf_name_data.push_back(useaclname.get_name_leafdata());
    if (useipv4aclname.is_set || is_set(useipv4aclname.yfilter)) leaf_name_data.push_back(useipv4aclname.get_name_leafdata());
    if (useipv6aclname.is_set || is_set(useipv6aclname.yfilter)) leaf_name_data.push_back(useipv6aclname.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::CommunityItems::CommSecPList::AclItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::CommunityItems::CommSecPList::AclItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::CommunityItems::CommSecPList::AclItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "useAclName")
    {
        useaclname = value;
        useaclname.value_namespace = name_space;
        useaclname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "useIpv4AclName")
    {
        useipv4aclname = value;
        useipv4aclname.value_namespace = name_space;
        useipv4aclname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "useIpv6AclName")
    {
        useipv6aclname = value;
        useipv6aclname.value_namespace = name_space;
        useipv6aclname.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::CommunityItems::CommSecPList::AclItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "useAclName")
    {
        useaclname.yfilter = yfilter;
    }
    if(value_path == "useIpv4AclName")
    {
        useipv4aclname.yfilter = yfilter;
    }
    if(value_path == "useIpv6AclName")
    {
        useipv6aclname.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::CommunityItems::CommSecPList::AclItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "useAclName" || name == "useIpv4AclName" || name == "useIpv6AclName")
        return true;
    return false;
}

System::SnmpItems::InstItems::CommunityItems::CommSecPList::RscommToCtxAttItems::RscommToCtxAttItems()
    :
    tdn{YType::str, "tDn"},
    operst{YType::enumeration, "operSt"},
    operstqual{YType::str, "operStQual"}
{

    yang_name = "rscommToCtxAtt-items"; yang_parent_name = "CommSecP-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::SnmpItems::InstItems::CommunityItems::CommSecPList::RscommToCtxAttItems::~RscommToCtxAttItems()
{
}

bool System::SnmpItems::InstItems::CommunityItems::CommSecPList::RscommToCtxAttItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| operst.is_set
	|| operstqual.is_set;
}

bool System::SnmpItems::InstItems::CommunityItems::CommSecPList::RscommToCtxAttItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(operstqual.yfilter);
}

std::string System::SnmpItems::InstItems::CommunityItems::CommSecPList::RscommToCtxAttItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rscommToCtxAtt-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::CommunityItems::CommSecPList::RscommToCtxAttItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (operstqual.is_set || is_set(operstqual.yfilter)) leaf_name_data.push_back(operstqual.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::CommunityItems::CommSecPList::RscommToCtxAttItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::CommunityItems::CommSecPList::RscommToCtxAttItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::CommunityItems::CommSecPList::RscommToCtxAttItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operStQual")
    {
        operstqual = value;
        operstqual.value_namespace = name_space;
        operstqual.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::CommunityItems::CommSecPList::RscommToCtxAttItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "operStQual")
    {
        operstqual.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::CommunityItems::CommSecPList::RscommToCtxAttItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "operSt" || name == "operStQual")
        return true;
    return false;
}

System::SnmpItems::InstItems::UserItems::UserItems()
    :
    usersecp_list(this, {"name"})
{

    yang_name = "user-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::UserItems::~UserItems()
{
}

bool System::SnmpItems::InstItems::UserItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<usersecp_list.len(); index++)
    {
        if(usersecp_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::SnmpItems::InstItems::UserItems::has_operation() const
{
    for (std::size_t index=0; index<usersecp_list.len(); index++)
    {
        if(usersecp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::SnmpItems::InstItems::UserItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::UserItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "user-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::UserItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::UserItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "UserSecP-list")
    {
        auto ent_ = std::make_shared<System::SnmpItems::InstItems::UserItems::UserSecPList>();
        ent_->parent = this;
        usersecp_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::UserItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : usersecp_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::SnmpItems::InstItems::UserItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SnmpItems::InstItems::UserItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SnmpItems::InstItems::UserItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "UserSecP-list")
        return true;
    return false;
}

System::SnmpItems::InstItems::UserItems::UserSecPList::UserSecPList()
    :
    name{YType::str, "name"},
    operst{YType::enumeration, "operSt"},
    descr{YType::str, "descr"},
    authtype{YType::enumeration, "authType"},
    authkey{YType::str, "authKey"},
    privtype{YType::enumeration, "privType"},
    privkey{YType::str, "privKey"}
{

    yang_name = "UserSecP-list"; yang_parent_name = "user-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::UserItems::UserSecPList::~UserSecPList()
{
}

bool System::SnmpItems::InstItems::UserItems::UserSecPList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| operst.is_set
	|| descr.is_set
	|| authtype.is_set
	|| authkey.is_set
	|| privtype.is_set
	|| privkey.is_set;
}

bool System::SnmpItems::InstItems::UserItems::UserSecPList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(authtype.yfilter)
	|| ydk::is_set(authkey.yfilter)
	|| ydk::is_set(privtype.yfilter)
	|| ydk::is_set(privkey.yfilter);
}

std::string System::SnmpItems::InstItems::UserItems::UserSecPList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/user-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::UserItems::UserSecPList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "UserSecP-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::UserItems::UserSecPList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (authtype.is_set || is_set(authtype.yfilter)) leaf_name_data.push_back(authtype.get_name_leafdata());
    if (authkey.is_set || is_set(authkey.yfilter)) leaf_name_data.push_back(authkey.get_name_leafdata());
    if (privtype.is_set || is_set(privtype.yfilter)) leaf_name_data.push_back(privtype.get_name_leafdata());
    if (privkey.is_set || is_set(privkey.yfilter)) leaf_name_data.push_back(privkey.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::UserItems::UserSecPList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::UserItems::UserSecPList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::UserItems::UserSecPList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authType")
    {
        authtype = value;
        authtype.value_namespace = name_space;
        authtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authKey")
    {
        authkey = value;
        authkey.value_namespace = name_space;
        authkey.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "privType")
    {
        privtype = value;
        privtype.value_namespace = name_space;
        privtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "privKey")
    {
        privkey = value;
        privkey.value_namespace = name_space;
        privkey.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::UserItems::UserSecPList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "authType")
    {
        authtype.yfilter = yfilter;
    }
    if(value_path == "authKey")
    {
        authkey.yfilter = yfilter;
    }
    if(value_path == "privType")
    {
        privtype.yfilter = yfilter;
    }
    if(value_path == "privKey")
    {
        privkey.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::UserItems::UserSecPList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "operSt" || name == "descr" || name == "authType" || name == "authKey" || name == "privType" || name == "privKey")
        return true;
    return false;
}

System::SnmpItems::InstItems::CtxItems::CtxItems()
    :
    ctx_list(this, {"name"})
{

    yang_name = "ctx-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::CtxItems::~CtxItems()
{
}

bool System::SnmpItems::InstItems::CtxItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ctx_list.len(); index++)
    {
        if(ctx_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::SnmpItems::InstItems::CtxItems::has_operation() const
{
    for (std::size_t index=0; index<ctx_list.len(); index++)
    {
        if(ctx_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::SnmpItems::InstItems::CtxItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::CtxItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ctx-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::CtxItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::CtxItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Ctx-list")
    {
        auto ent_ = std::make_shared<System::SnmpItems::InstItems::CtxItems::CtxList>();
        ent_->parent = this;
        ctx_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::CtxItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ctx_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::SnmpItems::InstItems::CtxItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SnmpItems::InstItems::CtxItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SnmpItems::InstItems::CtxItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Ctx-list")
        return true;
    return false;
}

System::SnmpItems::InstItems::CtxItems::CtxList::CtxList()
    :
    name{YType::str, "name"},
    ctxinstance{YType::str, "ctxInstance"},
    ctxtopology{YType::str, "ctxTopology"},
    vrf{YType::str, "vrf"},
    operst{YType::enumeration, "operSt"},
    descr{YType::str, "descr"}
{

    yang_name = "Ctx-list"; yang_parent_name = "ctx-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::CtxItems::CtxList::~CtxList()
{
}

bool System::SnmpItems::InstItems::CtxItems::CtxList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| ctxinstance.is_set
	|| ctxtopology.is_set
	|| vrf.is_set
	|| operst.is_set
	|| descr.is_set;
}

bool System::SnmpItems::InstItems::CtxItems::CtxList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ctxinstance.yfilter)
	|| ydk::is_set(ctxtopology.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::SnmpItems::InstItems::CtxItems::CtxList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/ctx-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::CtxItems::CtxList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Ctx-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::CtxItems::CtxList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ctxinstance.is_set || is_set(ctxinstance.yfilter)) leaf_name_data.push_back(ctxinstance.get_name_leafdata());
    if (ctxtopology.is_set || is_set(ctxtopology.yfilter)) leaf_name_data.push_back(ctxtopology.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::CtxItems::CtxList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::CtxItems::CtxList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::CtxItems::CtxList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ctxInstance")
    {
        ctxinstance = value;
        ctxinstance.value_namespace = name_space;
        ctxinstance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ctxTopology")
    {
        ctxtopology = value;
        ctxtopology.value_namespace = name_space;
        ctxtopology.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::CtxItems::CtxList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ctxInstance")
    {
        ctxinstance.yfilter = yfilter;
    }
    if(value_path == "ctxTopology")
    {
        ctxtopology.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::CtxItems::CtxList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "ctxInstance" || name == "ctxTopology" || name == "vrf" || name == "operSt" || name == "descr")
        return true;
    return false;
}

System::SnmpItems::InstItems::SysinfoItems::SysinfoItems()
    :
    syslocation{YType::str, "sysLocation"},
    syscontact{YType::str, "sysContact"},
    sysdescription{YType::str, "sysDescription"}
{

    yang_name = "sysinfo-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::SysinfoItems::~SysinfoItems()
{
}

bool System::SnmpItems::InstItems::SysinfoItems::has_data() const
{
    if (is_presence_container) return true;
    return syslocation.is_set
	|| syscontact.is_set
	|| sysdescription.is_set;
}

bool System::SnmpItems::InstItems::SysinfoItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(syslocation.yfilter)
	|| ydk::is_set(syscontact.yfilter)
	|| ydk::is_set(sysdescription.yfilter);
}

std::string System::SnmpItems::InstItems::SysinfoItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::SysinfoItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sysinfo-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::SysinfoItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (syslocation.is_set || is_set(syslocation.yfilter)) leaf_name_data.push_back(syslocation.get_name_leafdata());
    if (syscontact.is_set || is_set(syscontact.yfilter)) leaf_name_data.push_back(syscontact.get_name_leafdata());
    if (sysdescription.is_set || is_set(sysdescription.yfilter)) leaf_name_data.push_back(sysdescription.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::SysinfoItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::SysinfoItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::SysinfoItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sysLocation")
    {
        syslocation = value;
        syslocation.value_namespace = name_space;
        syslocation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sysContact")
    {
        syscontact = value;
        syscontact.value_namespace = name_space;
        syscontact.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sysDescription")
    {
        sysdescription = value;
        sysdescription.value_namespace = name_space;
        sysdescription.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::SysinfoItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sysLocation")
    {
        syslocation.yfilter = yfilter;
    }
    if(value_path == "sysContact")
    {
        syscontact.yfilter = yfilter;
    }
    if(value_path == "sysDescription")
    {
        sysdescription.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::SysinfoItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sysLocation" || name == "sysContact" || name == "sysDescription")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::TrapsItems()
    :
    stormcontrol_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::StormcontrolItems>())
    , aaa_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::AaaItems>())
    , bfd_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::BfdItems>())
    , bridge_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::BridgeItems>())
    , callhome_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::CallhomeItems>())
    , cfs_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::CfsItems>())
    , config_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::ConfigItems>())
    , entity_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::EntityItems>())
    , featurecontrol_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems>())
    , hsrp_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::HsrpItems>())
    , generic_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::GenericItems>())
    , ip_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::IpItems>())
    , license_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::LicenseItems>())
    , poe_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::PoeItems>())
    , link_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::LinkItems>())
    , lldp_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::LldpItems>())
    , msdp_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::MsdpItems>())
    , mmode_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::MmodeItems>())
    , pim_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::PimItems>())
    , rf_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::RfItems>())
    , rmon_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::RmonItems>())
    , snmp_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::SnmpItems_>())
    , stpx_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::StpxItems>())
    , sysmgr_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::SysmgrItems>())
    , system_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::SystemItems>())
    , upgrade_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::UpgradeItems>())
    , vsan_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::VsanItems>())
    , vtp_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::VtpItems>())
    , portsecurity_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::PortsecurityItems>())
    , mpls_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::MplsItems>())
{
    stormcontrol_items->parent = this;
    aaa_items->parent = this;
    bfd_items->parent = this;
    bridge_items->parent = this;
    callhome_items->parent = this;
    cfs_items->parent = this;
    config_items->parent = this;
    entity_items->parent = this;
    featurecontrol_items->parent = this;
    hsrp_items->parent = this;
    generic_items->parent = this;
    ip_items->parent = this;
    license_items->parent = this;
    poe_items->parent = this;
    link_items->parent = this;
    lldp_items->parent = this;
    msdp_items->parent = this;
    mmode_items->parent = this;
    pim_items->parent = this;
    rf_items->parent = this;
    rmon_items->parent = this;
    snmp_items->parent = this;
    stpx_items->parent = this;
    sysmgr_items->parent = this;
    system_items->parent = this;
    upgrade_items->parent = this;
    vsan_items->parent = this;
    vtp_items->parent = this;
    portsecurity_items->parent = this;
    mpls_items->parent = this;

    yang_name = "traps-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::~TrapsItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::has_data() const
{
    if (is_presence_container) return true;
    return (stormcontrol_items !=  nullptr && stormcontrol_items->has_data())
	|| (aaa_items !=  nullptr && aaa_items->has_data())
	|| (bfd_items !=  nullptr && bfd_items->has_data())
	|| (bridge_items !=  nullptr && bridge_items->has_data())
	|| (callhome_items !=  nullptr && callhome_items->has_data())
	|| (cfs_items !=  nullptr && cfs_items->has_data())
	|| (config_items !=  nullptr && config_items->has_data())
	|| (entity_items !=  nullptr && entity_items->has_data())
	|| (featurecontrol_items !=  nullptr && featurecontrol_items->has_data())
	|| (hsrp_items !=  nullptr && hsrp_items->has_data())
	|| (generic_items !=  nullptr && generic_items->has_data())
	|| (ip_items !=  nullptr && ip_items->has_data())
	|| (license_items !=  nullptr && license_items->has_data())
	|| (poe_items !=  nullptr && poe_items->has_data())
	|| (link_items !=  nullptr && link_items->has_data())
	|| (lldp_items !=  nullptr && lldp_items->has_data())
	|| (msdp_items !=  nullptr && msdp_items->has_data())
	|| (mmode_items !=  nullptr && mmode_items->has_data())
	|| (pim_items !=  nullptr && pim_items->has_data())
	|| (rf_items !=  nullptr && rf_items->has_data())
	|| (rmon_items !=  nullptr && rmon_items->has_data())
	|| (snmp_items !=  nullptr && snmp_items->has_data())
	|| (stpx_items !=  nullptr && stpx_items->has_data())
	|| (sysmgr_items !=  nullptr && sysmgr_items->has_data())
	|| (system_items !=  nullptr && system_items->has_data())
	|| (upgrade_items !=  nullptr && upgrade_items->has_data())
	|| (vsan_items !=  nullptr && vsan_items->has_data())
	|| (vtp_items !=  nullptr && vtp_items->has_data())
	|| (portsecurity_items !=  nullptr && portsecurity_items->has_data())
	|| (mpls_items !=  nullptr && mpls_items->has_data());
}

bool System::SnmpItems::InstItems::TrapsItems::has_operation() const
{
    return is_set(yfilter)
	|| (stormcontrol_items !=  nullptr && stormcontrol_items->has_operation())
	|| (aaa_items !=  nullptr && aaa_items->has_operation())
	|| (bfd_items !=  nullptr && bfd_items->has_operation())
	|| (bridge_items !=  nullptr && bridge_items->has_operation())
	|| (callhome_items !=  nullptr && callhome_items->has_operation())
	|| (cfs_items !=  nullptr && cfs_items->has_operation())
	|| (config_items !=  nullptr && config_items->has_operation())
	|| (entity_items !=  nullptr && entity_items->has_operation())
	|| (featurecontrol_items !=  nullptr && featurecontrol_items->has_operation())
	|| (hsrp_items !=  nullptr && hsrp_items->has_operation())
	|| (generic_items !=  nullptr && generic_items->has_operation())
	|| (ip_items !=  nullptr && ip_items->has_operation())
	|| (license_items !=  nullptr && license_items->has_operation())
	|| (poe_items !=  nullptr && poe_items->has_operation())
	|| (link_items !=  nullptr && link_items->has_operation())
	|| (lldp_items !=  nullptr && lldp_items->has_operation())
	|| (msdp_items !=  nullptr && msdp_items->has_operation())
	|| (mmode_items !=  nullptr && mmode_items->has_operation())
	|| (pim_items !=  nullptr && pim_items->has_operation())
	|| (rf_items !=  nullptr && rf_items->has_operation())
	|| (rmon_items !=  nullptr && rmon_items->has_operation())
	|| (snmp_items !=  nullptr && snmp_items->has_operation())
	|| (stpx_items !=  nullptr && stpx_items->has_operation())
	|| (sysmgr_items !=  nullptr && sysmgr_items->has_operation())
	|| (system_items !=  nullptr && system_items->has_operation())
	|| (upgrade_items !=  nullptr && upgrade_items->has_operation())
	|| (vsan_items !=  nullptr && vsan_items->has_operation())
	|| (vtp_items !=  nullptr && vtp_items->has_operation())
	|| (portsecurity_items !=  nullptr && portsecurity_items->has_operation())
	|| (mpls_items !=  nullptr && mpls_items->has_operation());
}

std::string System::SnmpItems::InstItems::TrapsItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traps-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stormcontrol-items")
    {
        if(stormcontrol_items == nullptr)
        {
            stormcontrol_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::StormcontrolItems>();
        }
        return stormcontrol_items;
    }

    if(child_yang_name == "aaa-items")
    {
        if(aaa_items == nullptr)
        {
            aaa_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::AaaItems>();
        }
        return aaa_items;
    }

    if(child_yang_name == "bfd-items")
    {
        if(bfd_items == nullptr)
        {
            bfd_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::BfdItems>();
        }
        return bfd_items;
    }

    if(child_yang_name == "bridge-items")
    {
        if(bridge_items == nullptr)
        {
            bridge_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::BridgeItems>();
        }
        return bridge_items;
    }

    if(child_yang_name == "callhome-items")
    {
        if(callhome_items == nullptr)
        {
            callhome_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::CallhomeItems>();
        }
        return callhome_items;
    }

    if(child_yang_name == "cfs-items")
    {
        if(cfs_items == nullptr)
        {
            cfs_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::CfsItems>();
        }
        return cfs_items;
    }

    if(child_yang_name == "config-items")
    {
        if(config_items == nullptr)
        {
            config_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::ConfigItems>();
        }
        return config_items;
    }

    if(child_yang_name == "entity-items")
    {
        if(entity_items == nullptr)
        {
            entity_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::EntityItems>();
        }
        return entity_items;
    }

    if(child_yang_name == "featurecontrol-items")
    {
        if(featurecontrol_items == nullptr)
        {
            featurecontrol_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems>();
        }
        return featurecontrol_items;
    }

    if(child_yang_name == "hsrp-items")
    {
        if(hsrp_items == nullptr)
        {
            hsrp_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::HsrpItems>();
        }
        return hsrp_items;
    }

    if(child_yang_name == "generic-items")
    {
        if(generic_items == nullptr)
        {
            generic_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::GenericItems>();
        }
        return generic_items;
    }

    if(child_yang_name == "ip-items")
    {
        if(ip_items == nullptr)
        {
            ip_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::IpItems>();
        }
        return ip_items;
    }

    if(child_yang_name == "license-items")
    {
        if(license_items == nullptr)
        {
            license_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::LicenseItems>();
        }
        return license_items;
    }

    if(child_yang_name == "poe-items")
    {
        if(poe_items == nullptr)
        {
            poe_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::PoeItems>();
        }
        return poe_items;
    }

    if(child_yang_name == "link-items")
    {
        if(link_items == nullptr)
        {
            link_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::LinkItems>();
        }
        return link_items;
    }

    if(child_yang_name == "lldp-items")
    {
        if(lldp_items == nullptr)
        {
            lldp_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::LldpItems>();
        }
        return lldp_items;
    }

    if(child_yang_name == "msdp-items")
    {
        if(msdp_items == nullptr)
        {
            msdp_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::MsdpItems>();
        }
        return msdp_items;
    }

    if(child_yang_name == "mmode-items")
    {
        if(mmode_items == nullptr)
        {
            mmode_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::MmodeItems>();
        }
        return mmode_items;
    }

    if(child_yang_name == "pim-items")
    {
        if(pim_items == nullptr)
        {
            pim_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::PimItems>();
        }
        return pim_items;
    }

    if(child_yang_name == "rf-items")
    {
        if(rf_items == nullptr)
        {
            rf_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::RfItems>();
        }
        return rf_items;
    }

    if(child_yang_name == "rmon-items")
    {
        if(rmon_items == nullptr)
        {
            rmon_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::RmonItems>();
        }
        return rmon_items;
    }

    if(child_yang_name == "snmp-items")
    {
        if(snmp_items == nullptr)
        {
            snmp_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::SnmpItems_>();
        }
        return snmp_items;
    }

    if(child_yang_name == "stpx-items")
    {
        if(stpx_items == nullptr)
        {
            stpx_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::StpxItems>();
        }
        return stpx_items;
    }

    if(child_yang_name == "sysmgr-items")
    {
        if(sysmgr_items == nullptr)
        {
            sysmgr_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::SysmgrItems>();
        }
        return sysmgr_items;
    }

    if(child_yang_name == "system-items")
    {
        if(system_items == nullptr)
        {
            system_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::SystemItems>();
        }
        return system_items;
    }

    if(child_yang_name == "upgrade-items")
    {
        if(upgrade_items == nullptr)
        {
            upgrade_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::UpgradeItems>();
        }
        return upgrade_items;
    }

    if(child_yang_name == "vsan-items")
    {
        if(vsan_items == nullptr)
        {
            vsan_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::VsanItems>();
        }
        return vsan_items;
    }

    if(child_yang_name == "vtp-items")
    {
        if(vtp_items == nullptr)
        {
            vtp_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::VtpItems>();
        }
        return vtp_items;
    }

    if(child_yang_name == "portsecurity-items")
    {
        if(portsecurity_items == nullptr)
        {
            portsecurity_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::PortsecurityItems>();
        }
        return portsecurity_items;
    }

    if(child_yang_name == "mpls-items")
    {
        if(mpls_items == nullptr)
        {
            mpls_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::MplsItems>();
        }
        return mpls_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(stormcontrol_items != nullptr)
    {
        _children["stormcontrol-items"] = stormcontrol_items;
    }

    if(aaa_items != nullptr)
    {
        _children["aaa-items"] = aaa_items;
    }

    if(bfd_items != nullptr)
    {
        _children["bfd-items"] = bfd_items;
    }

    if(bridge_items != nullptr)
    {
        _children["bridge-items"] = bridge_items;
    }

    if(callhome_items != nullptr)
    {
        _children["callhome-items"] = callhome_items;
    }

    if(cfs_items != nullptr)
    {
        _children["cfs-items"] = cfs_items;
    }

    if(config_items != nullptr)
    {
        _children["config-items"] = config_items;
    }

    if(entity_items != nullptr)
    {
        _children["entity-items"] = entity_items;
    }

    if(featurecontrol_items != nullptr)
    {
        _children["featurecontrol-items"] = featurecontrol_items;
    }

    if(hsrp_items != nullptr)
    {
        _children["hsrp-items"] = hsrp_items;
    }

    if(generic_items != nullptr)
    {
        _children["generic-items"] = generic_items;
    }

    if(ip_items != nullptr)
    {
        _children["ip-items"] = ip_items;
    }

    if(license_items != nullptr)
    {
        _children["license-items"] = license_items;
    }

    if(poe_items != nullptr)
    {
        _children["poe-items"] = poe_items;
    }

    if(link_items != nullptr)
    {
        _children["link-items"] = link_items;
    }

    if(lldp_items != nullptr)
    {
        _children["lldp-items"] = lldp_items;
    }

    if(msdp_items != nullptr)
    {
        _children["msdp-items"] = msdp_items;
    }

    if(mmode_items != nullptr)
    {
        _children["mmode-items"] = mmode_items;
    }

    if(pim_items != nullptr)
    {
        _children["pim-items"] = pim_items;
    }

    if(rf_items != nullptr)
    {
        _children["rf-items"] = rf_items;
    }

    if(rmon_items != nullptr)
    {
        _children["rmon-items"] = rmon_items;
    }

    if(snmp_items != nullptr)
    {
        _children["snmp-items"] = snmp_items;
    }

    if(stpx_items != nullptr)
    {
        _children["stpx-items"] = stpx_items;
    }

    if(sysmgr_items != nullptr)
    {
        _children["sysmgr-items"] = sysmgr_items;
    }

    if(system_items != nullptr)
    {
        _children["system-items"] = system_items;
    }

    if(upgrade_items != nullptr)
    {
        _children["upgrade-items"] = upgrade_items;
    }

    if(vsan_items != nullptr)
    {
        _children["vsan-items"] = vsan_items;
    }

    if(vtp_items != nullptr)
    {
        _children["vtp-items"] = vtp_items;
    }

    if(portsecurity_items != nullptr)
    {
        _children["portsecurity-items"] = portsecurity_items;
    }

    if(mpls_items != nullptr)
    {
        _children["mpls-items"] = mpls_items;
    }

    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SnmpItems::InstItems::TrapsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SnmpItems::InstItems::TrapsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stormcontrol-items" || name == "aaa-items" || name == "bfd-items" || name == "bridge-items" || name == "callhome-items" || name == "cfs-items" || name == "config-items" || name == "entity-items" || name == "featurecontrol-items" || name == "hsrp-items" || name == "generic-items" || name == "ip-items" || name == "license-items" || name == "poe-items" || name == "link-items" || name == "lldp-items" || name == "msdp-items" || name == "mmode-items" || name == "pim-items" || name == "rf-items" || name == "rmon-items" || name == "snmp-items" || name == "stpx-items" || name == "sysmgr-items" || name == "system-items" || name == "upgrade-items" || name == "vsan-items" || name == "vtp-items" || name == "portsecurity-items" || name == "mpls-items")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::StormcontrolItems::StormcontrolItems()
    :
    traprate{YType::uint16, "traprate"}
        ,
    cpsceventrev1_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::StormcontrolItems::CpscEventRev1Items>())
{
    cpsceventrev1_items->parent = this;

    yang_name = "stormcontrol-items"; yang_parent_name = "traps-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::StormcontrolItems::~StormcontrolItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::StormcontrolItems::has_data() const
{
    if (is_presence_container) return true;
    return traprate.is_set
	|| (cpsceventrev1_items !=  nullptr && cpsceventrev1_items->has_data());
}

bool System::SnmpItems::InstItems::TrapsItems::StormcontrolItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(traprate.yfilter)
	|| (cpsceventrev1_items !=  nullptr && cpsceventrev1_items->has_operation());
}

std::string System::SnmpItems::InstItems::TrapsItems::StormcontrolItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::StormcontrolItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stormcontrol-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::StormcontrolItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (traprate.is_set || is_set(traprate.yfilter)) leaf_name_data.push_back(traprate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::StormcontrolItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cpscEventRev1-items")
    {
        if(cpsceventrev1_items == nullptr)
        {
            cpsceventrev1_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::StormcontrolItems::CpscEventRev1Items>();
        }
        return cpsceventrev1_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::StormcontrolItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(cpsceventrev1_items != nullptr)
    {
        _children["cpscEventRev1-items"] = cpsceventrev1_items;
    }

    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::StormcontrolItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "traprate")
    {
        traprate = value;
        traprate.value_namespace = name_space;
        traprate.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::TrapsItems::StormcontrolItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "traprate")
    {
        traprate.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::TrapsItems::StormcontrolItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpscEventRev1-items" || name == "traprate")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::StormcontrolItems::CpscEventRev1Items::CpscEventRev1Items()
    :
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "cpscEventRev1-items"; yang_parent_name = "stormcontrol-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::StormcontrolItems::CpscEventRev1Items::~CpscEventRev1Items()
{
}

bool System::SnmpItems::InstItems::TrapsItems::StormcontrolItems::CpscEventRev1Items::has_data() const
{
    if (is_presence_container) return true;
    return trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::StormcontrolItems::CpscEventRev1Items::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::StormcontrolItems::CpscEventRev1Items::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/stormcontrol-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::StormcontrolItems::CpscEventRev1Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpscEventRev1-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::StormcontrolItems::CpscEventRev1Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::StormcontrolItems::CpscEventRev1Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::StormcontrolItems::CpscEventRev1Items::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::StormcontrolItems::CpscEventRev1Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trapstatus")
    {
        trapstatus = value;
        trapstatus.value_namespace = name_space;
        trapstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction = value;
        istoggleaction.value_namespace = name_space;
        istoggleaction.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::TrapsItems::StormcontrolItems::CpscEventRev1Items::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trapstatus")
    {
        trapstatus.yfilter = yfilter;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::TrapsItems::StormcontrolItems::CpscEventRev1Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::AaaItems::AaaItems()
    :
    serverstatechange_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::AaaItems::ServerstatechangeItems>())
{
    serverstatechange_items->parent = this;

    yang_name = "aaa-items"; yang_parent_name = "traps-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::AaaItems::~AaaItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::AaaItems::has_data() const
{
    if (is_presence_container) return true;
    return (serverstatechange_items !=  nullptr && serverstatechange_items->has_data());
}

bool System::SnmpItems::InstItems::TrapsItems::AaaItems::has_operation() const
{
    return is_set(yfilter)
	|| (serverstatechange_items !=  nullptr && serverstatechange_items->has_operation());
}

std::string System::SnmpItems::InstItems::TrapsItems::AaaItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::AaaItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aaa-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::AaaItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::AaaItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "serverstatechange-items")
    {
        if(serverstatechange_items == nullptr)
        {
            serverstatechange_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::AaaItems::ServerstatechangeItems>();
        }
        return serverstatechange_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::AaaItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(serverstatechange_items != nullptr)
    {
        _children["serverstatechange-items"] = serverstatechange_items;
    }

    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::AaaItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SnmpItems::InstItems::TrapsItems::AaaItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SnmpItems::InstItems::TrapsItems::AaaItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "serverstatechange-items")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::AaaItems::ServerstatechangeItems::ServerstatechangeItems()
    :
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "serverstatechange-items"; yang_parent_name = "aaa-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::AaaItems::ServerstatechangeItems::~ServerstatechangeItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::AaaItems::ServerstatechangeItems::has_data() const
{
    if (is_presence_container) return true;
    return trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::AaaItems::ServerstatechangeItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::AaaItems::ServerstatechangeItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/aaa-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::AaaItems::ServerstatechangeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "serverstatechange-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::AaaItems::ServerstatechangeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::AaaItems::ServerstatechangeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::AaaItems::ServerstatechangeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::AaaItems::ServerstatechangeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trapstatus")
    {
        trapstatus = value;
        trapstatus.value_namespace = name_space;
        trapstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction = value;
        istoggleaction.value_namespace = name_space;
        istoggleaction.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::TrapsItems::AaaItems::ServerstatechangeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trapstatus")
    {
        trapstatus.yfilter = yfilter;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::TrapsItems::AaaItems::ServerstatechangeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::BfdItems::BfdItems()
    :
    sessiondown_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::BfdItems::SessiondownItems>())
    , sessionup_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::BfdItems::SessionupItems>())
{
    sessiondown_items->parent = this;
    sessionup_items->parent = this;

    yang_name = "bfd-items"; yang_parent_name = "traps-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::BfdItems::~BfdItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::BfdItems::has_data() const
{
    if (is_presence_container) return true;
    return (sessiondown_items !=  nullptr && sessiondown_items->has_data())
	|| (sessionup_items !=  nullptr && sessionup_items->has_data());
}

bool System::SnmpItems::InstItems::TrapsItems::BfdItems::has_operation() const
{
    return is_set(yfilter)
	|| (sessiondown_items !=  nullptr && sessiondown_items->has_operation())
	|| (sessionup_items !=  nullptr && sessionup_items->has_operation());
}

std::string System::SnmpItems::InstItems::TrapsItems::BfdItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::BfdItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::BfdItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::BfdItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sessiondown-items")
    {
        if(sessiondown_items == nullptr)
        {
            sessiondown_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::BfdItems::SessiondownItems>();
        }
        return sessiondown_items;
    }

    if(child_yang_name == "sessionup-items")
    {
        if(sessionup_items == nullptr)
        {
            sessionup_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::BfdItems::SessionupItems>();
        }
        return sessionup_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::BfdItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sessiondown_items != nullptr)
    {
        _children["sessiondown-items"] = sessiondown_items;
    }

    if(sessionup_items != nullptr)
    {
        _children["sessionup-items"] = sessionup_items;
    }

    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::BfdItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SnmpItems::InstItems::TrapsItems::BfdItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SnmpItems::InstItems::TrapsItems::BfdItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sessiondown-items" || name == "sessionup-items")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::BfdItems::SessiondownItems::SessiondownItems()
    :
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "sessiondown-items"; yang_parent_name = "bfd-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::BfdItems::SessiondownItems::~SessiondownItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::BfdItems::SessiondownItems::has_data() const
{
    if (is_presence_container) return true;
    return trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::BfdItems::SessiondownItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::BfdItems::SessiondownItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/bfd-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::BfdItems::SessiondownItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sessiondown-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::BfdItems::SessiondownItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::BfdItems::SessiondownItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::BfdItems::SessiondownItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::BfdItems::SessiondownItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trapstatus")
    {
        trapstatus = value;
        trapstatus.value_namespace = name_space;
        trapstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction = value;
        istoggleaction.value_namespace = name_space;
        istoggleaction.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::TrapsItems::BfdItems::SessiondownItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trapstatus")
    {
        trapstatus.yfilter = yfilter;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::TrapsItems::BfdItems::SessiondownItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::BfdItems::SessionupItems::SessionupItems()
    :
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "sessionup-items"; yang_parent_name = "bfd-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::BfdItems::SessionupItems::~SessionupItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::BfdItems::SessionupItems::has_data() const
{
    if (is_presence_container) return true;
    return trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::BfdItems::SessionupItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::BfdItems::SessionupItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/bfd-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::BfdItems::SessionupItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sessionup-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::BfdItems::SessionupItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::BfdItems::SessionupItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::BfdItems::SessionupItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::BfdItems::SessionupItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trapstatus")
    {
        trapstatus = value;
        trapstatus.value_namespace = name_space;
        trapstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction = value;
        istoggleaction.value_namespace = name_space;
        istoggleaction.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::TrapsItems::BfdItems::SessionupItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trapstatus")
    {
        trapstatus.yfilter = yfilter;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::TrapsItems::BfdItems::SessionupItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::BridgeItems::BridgeItems()
    :
    newroot_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::BridgeItems::NewrootItems>())
    , topologychange_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::BridgeItems::TopologychangeItems>())
{
    newroot_items->parent = this;
    topologychange_items->parent = this;

    yang_name = "bridge-items"; yang_parent_name = "traps-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::BridgeItems::~BridgeItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::BridgeItems::has_data() const
{
    if (is_presence_container) return true;
    return (newroot_items !=  nullptr && newroot_items->has_data())
	|| (topologychange_items !=  nullptr && topologychange_items->has_data());
}

bool System::SnmpItems::InstItems::TrapsItems::BridgeItems::has_operation() const
{
    return is_set(yfilter)
	|| (newroot_items !=  nullptr && newroot_items->has_operation())
	|| (topologychange_items !=  nullptr && topologychange_items->has_operation());
}

std::string System::SnmpItems::InstItems::TrapsItems::BridgeItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::BridgeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bridge-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::BridgeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::BridgeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "newroot-items")
    {
        if(newroot_items == nullptr)
        {
            newroot_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::BridgeItems::NewrootItems>();
        }
        return newroot_items;
    }

    if(child_yang_name == "topologychange-items")
    {
        if(topologychange_items == nullptr)
        {
            topologychange_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::BridgeItems::TopologychangeItems>();
        }
        return topologychange_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::BridgeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(newroot_items != nullptr)
    {
        _children["newroot-items"] = newroot_items;
    }

    if(topologychange_items != nullptr)
    {
        _children["topologychange-items"] = topologychange_items;
    }

    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::BridgeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SnmpItems::InstItems::TrapsItems::BridgeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SnmpItems::InstItems::TrapsItems::BridgeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "newroot-items" || name == "topologychange-items")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::BridgeItems::NewrootItems::NewrootItems()
    :
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "newroot-items"; yang_parent_name = "bridge-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::BridgeItems::NewrootItems::~NewrootItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::BridgeItems::NewrootItems::has_data() const
{
    if (is_presence_container) return true;
    return trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::BridgeItems::NewrootItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::BridgeItems::NewrootItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/bridge-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::BridgeItems::NewrootItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "newroot-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::BridgeItems::NewrootItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::BridgeItems::NewrootItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::BridgeItems::NewrootItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::BridgeItems::NewrootItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trapstatus")
    {
        trapstatus = value;
        trapstatus.value_namespace = name_space;
        trapstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction = value;
        istoggleaction.value_namespace = name_space;
        istoggleaction.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::TrapsItems::BridgeItems::NewrootItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trapstatus")
    {
        trapstatus.yfilter = yfilter;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::TrapsItems::BridgeItems::NewrootItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::BridgeItems::TopologychangeItems::TopologychangeItems()
    :
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "topologychange-items"; yang_parent_name = "bridge-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::BridgeItems::TopologychangeItems::~TopologychangeItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::BridgeItems::TopologychangeItems::has_data() const
{
    if (is_presence_container) return true;
    return trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::BridgeItems::TopologychangeItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::BridgeItems::TopologychangeItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/bridge-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::BridgeItems::TopologychangeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topologychange-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::BridgeItems::TopologychangeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::BridgeItems::TopologychangeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::BridgeItems::TopologychangeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::BridgeItems::TopologychangeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trapstatus")
    {
        trapstatus = value;
        trapstatus.value_namespace = name_space;
        trapstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction = value;
        istoggleaction.value_namespace = name_space;
        istoggleaction.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::TrapsItems::BridgeItems::TopologychangeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trapstatus")
    {
        trapstatus.yfilter = yfilter;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::TrapsItems::BridgeItems::TopologychangeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::CallhomeItems::CallhomeItems()
    :
    eventnotify_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::CallhomeItems::EventnotifyItems>())
    , smtpsendfail_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::CallhomeItems::SmtpsendfailItems>())
{
    eventnotify_items->parent = this;
    smtpsendfail_items->parent = this;

    yang_name = "callhome-items"; yang_parent_name = "traps-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::CallhomeItems::~CallhomeItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::CallhomeItems::has_data() const
{
    if (is_presence_container) return true;
    return (eventnotify_items !=  nullptr && eventnotify_items->has_data())
	|| (smtpsendfail_items !=  nullptr && smtpsendfail_items->has_data());
}

bool System::SnmpItems::InstItems::TrapsItems::CallhomeItems::has_operation() const
{
    return is_set(yfilter)
	|| (eventnotify_items !=  nullptr && eventnotify_items->has_operation())
	|| (smtpsendfail_items !=  nullptr && smtpsendfail_items->has_operation());
}

std::string System::SnmpItems::InstItems::TrapsItems::CallhomeItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::CallhomeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "callhome-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::CallhomeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::CallhomeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "eventnotify-items")
    {
        if(eventnotify_items == nullptr)
        {
            eventnotify_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::CallhomeItems::EventnotifyItems>();
        }
        return eventnotify_items;
    }

    if(child_yang_name == "smtpsendfail-items")
    {
        if(smtpsendfail_items == nullptr)
        {
            smtpsendfail_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::CallhomeItems::SmtpsendfailItems>();
        }
        return smtpsendfail_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::CallhomeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(eventnotify_items != nullptr)
    {
        _children["eventnotify-items"] = eventnotify_items;
    }

    if(smtpsendfail_items != nullptr)
    {
        _children["smtpsendfail-items"] = smtpsendfail_items;
    }

    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::CallhomeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SnmpItems::InstItems::TrapsItems::CallhomeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SnmpItems::InstItems::TrapsItems::CallhomeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eventnotify-items" || name == "smtpsendfail-items")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::CallhomeItems::EventnotifyItems::EventnotifyItems()
    :
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "eventnotify-items"; yang_parent_name = "callhome-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::CallhomeItems::EventnotifyItems::~EventnotifyItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::CallhomeItems::EventnotifyItems::has_data() const
{
    if (is_presence_container) return true;
    return trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::CallhomeItems::EventnotifyItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::CallhomeItems::EventnotifyItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/callhome-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::CallhomeItems::EventnotifyItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eventnotify-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::CallhomeItems::EventnotifyItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::CallhomeItems::EventnotifyItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::CallhomeItems::EventnotifyItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::CallhomeItems::EventnotifyItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trapstatus")
    {
        trapstatus = value;
        trapstatus.value_namespace = name_space;
        trapstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction = value;
        istoggleaction.value_namespace = name_space;
        istoggleaction.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::TrapsItems::CallhomeItems::EventnotifyItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trapstatus")
    {
        trapstatus.yfilter = yfilter;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::TrapsItems::CallhomeItems::EventnotifyItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::CallhomeItems::SmtpsendfailItems::SmtpsendfailItems()
    :
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "smtpsendfail-items"; yang_parent_name = "callhome-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::CallhomeItems::SmtpsendfailItems::~SmtpsendfailItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::CallhomeItems::SmtpsendfailItems::has_data() const
{
    if (is_presence_container) return true;
    return trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::CallhomeItems::SmtpsendfailItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::CallhomeItems::SmtpsendfailItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/callhome-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::CallhomeItems::SmtpsendfailItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "smtpsendfail-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::CallhomeItems::SmtpsendfailItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::CallhomeItems::SmtpsendfailItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::CallhomeItems::SmtpsendfailItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::CallhomeItems::SmtpsendfailItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trapstatus")
    {
        trapstatus = value;
        trapstatus.value_namespace = name_space;
        trapstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction = value;
        istoggleaction.value_namespace = name_space;
        istoggleaction.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::TrapsItems::CallhomeItems::SmtpsendfailItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trapstatus")
    {
        trapstatus.yfilter = yfilter;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::TrapsItems::CallhomeItems::SmtpsendfailItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::CfsItems::CfsItems()
    :
    statechangenotif_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::CfsItems::StatechangenotifItems>())
    , mergefailure_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::CfsItems::MergefailureItems>())
{
    statechangenotif_items->parent = this;
    mergefailure_items->parent = this;

    yang_name = "cfs-items"; yang_parent_name = "traps-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::CfsItems::~CfsItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::CfsItems::has_data() const
{
    if (is_presence_container) return true;
    return (statechangenotif_items !=  nullptr && statechangenotif_items->has_data())
	|| (mergefailure_items !=  nullptr && mergefailure_items->has_data());
}

bool System::SnmpItems::InstItems::TrapsItems::CfsItems::has_operation() const
{
    return is_set(yfilter)
	|| (statechangenotif_items !=  nullptr && statechangenotif_items->has_operation())
	|| (mergefailure_items !=  nullptr && mergefailure_items->has_operation());
}

std::string System::SnmpItems::InstItems::TrapsItems::CfsItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::CfsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cfs-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::CfsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::CfsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statechangenotif-items")
    {
        if(statechangenotif_items == nullptr)
        {
            statechangenotif_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::CfsItems::StatechangenotifItems>();
        }
        return statechangenotif_items;
    }

    if(child_yang_name == "mergefailure-items")
    {
        if(mergefailure_items == nullptr)
        {
            mergefailure_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::CfsItems::MergefailureItems>();
        }
        return mergefailure_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::CfsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(statechangenotif_items != nullptr)
    {
        _children["statechangenotif-items"] = statechangenotif_items;
    }

    if(mergefailure_items != nullptr)
    {
        _children["mergefailure-items"] = mergefailure_items;
    }

    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::CfsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SnmpItems::InstItems::TrapsItems::CfsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SnmpItems::InstItems::TrapsItems::CfsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statechangenotif-items" || name == "mergefailure-items")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::CfsItems::StatechangenotifItems::StatechangenotifItems()
    :
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "statechangenotif-items"; yang_parent_name = "cfs-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::CfsItems::StatechangenotifItems::~StatechangenotifItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::CfsItems::StatechangenotifItems::has_data() const
{
    if (is_presence_container) return true;
    return trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::CfsItems::StatechangenotifItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::CfsItems::StatechangenotifItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/cfs-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::CfsItems::StatechangenotifItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statechangenotif-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::CfsItems::StatechangenotifItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::CfsItems::StatechangenotifItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::CfsItems::StatechangenotifItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::CfsItems::StatechangenotifItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trapstatus")
    {
        trapstatus = value;
        trapstatus.value_namespace = name_space;
        trapstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction = value;
        istoggleaction.value_namespace = name_space;
        istoggleaction.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::TrapsItems::CfsItems::StatechangenotifItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trapstatus")
    {
        trapstatus.yfilter = yfilter;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::TrapsItems::CfsItems::StatechangenotifItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::CfsItems::MergefailureItems::MergefailureItems()
    :
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "mergefailure-items"; yang_parent_name = "cfs-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::CfsItems::MergefailureItems::~MergefailureItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::CfsItems::MergefailureItems::has_data() const
{
    if (is_presence_container) return true;
    return trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::CfsItems::MergefailureItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::CfsItems::MergefailureItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/cfs-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::CfsItems::MergefailureItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mergefailure-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::CfsItems::MergefailureItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::CfsItems::MergefailureItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::CfsItems::MergefailureItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::CfsItems::MergefailureItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trapstatus")
    {
        trapstatus = value;
        trapstatus.value_namespace = name_space;
        trapstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction = value;
        istoggleaction.value_namespace = name_space;
        istoggleaction.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::TrapsItems::CfsItems::MergefailureItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trapstatus")
    {
        trapstatus.yfilter = yfilter;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::TrapsItems::CfsItems::MergefailureItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::ConfigItems::ConfigItems()
    :
    ccmclirunningconfigchanged_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::ConfigItems::CcmCLIRunningConfigChangedItems>())
{
    ccmclirunningconfigchanged_items->parent = this;

    yang_name = "config-items"; yang_parent_name = "traps-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::ConfigItems::~ConfigItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::ConfigItems::has_data() const
{
    if (is_presence_container) return true;
    return (ccmclirunningconfigchanged_items !=  nullptr && ccmclirunningconfigchanged_items->has_data());
}

bool System::SnmpItems::InstItems::TrapsItems::ConfigItems::has_operation() const
{
    return is_set(yfilter)
	|| (ccmclirunningconfigchanged_items !=  nullptr && ccmclirunningconfigchanged_items->has_operation());
}

std::string System::SnmpItems::InstItems::TrapsItems::ConfigItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::ConfigItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::ConfigItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::ConfigItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ccmCLIRunningConfigChanged-items")
    {
        if(ccmclirunningconfigchanged_items == nullptr)
        {
            ccmclirunningconfigchanged_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::ConfigItems::CcmCLIRunningConfigChangedItems>();
        }
        return ccmclirunningconfigchanged_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::ConfigItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ccmclirunningconfigchanged_items != nullptr)
    {
        _children["ccmCLIRunningConfigChanged-items"] = ccmclirunningconfigchanged_items;
    }

    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::ConfigItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SnmpItems::InstItems::TrapsItems::ConfigItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SnmpItems::InstItems::TrapsItems::ConfigItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ccmCLIRunningConfigChanged-items")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::ConfigItems::CcmCLIRunningConfigChangedItems::CcmCLIRunningConfigChangedItems()
    :
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "ccmCLIRunningConfigChanged-items"; yang_parent_name = "config-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::ConfigItems::CcmCLIRunningConfigChangedItems::~CcmCLIRunningConfigChangedItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::ConfigItems::CcmCLIRunningConfigChangedItems::has_data() const
{
    if (is_presence_container) return true;
    return trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::ConfigItems::CcmCLIRunningConfigChangedItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::ConfigItems::CcmCLIRunningConfigChangedItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/config-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::ConfigItems::CcmCLIRunningConfigChangedItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ccmCLIRunningConfigChanged-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::ConfigItems::CcmCLIRunningConfigChangedItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::ConfigItems::CcmCLIRunningConfigChangedItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::ConfigItems::CcmCLIRunningConfigChangedItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::ConfigItems::CcmCLIRunningConfigChangedItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trapstatus")
    {
        trapstatus = value;
        trapstatus.value_namespace = name_space;
        trapstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction = value;
        istoggleaction.value_namespace = name_space;
        istoggleaction.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::TrapsItems::ConfigItems::CcmCLIRunningConfigChangedItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trapstatus")
    {
        trapstatus.yfilter = yfilter;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::TrapsItems::ConfigItems::CcmCLIRunningConfigChangedItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::EntityItems::EntityItems()
    :
    entitymibchange_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymibchangeItems>())
    , entitymodulestatuschange_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymodulestatuschangeItems>())
    , entitypowerstatuschange_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitypowerstatuschangeItems>())
    , entitymoduleinserted_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymoduleinsertedItems>())
    , entitymoduleremoved_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymoduleremovedItems>())
    , entityunrecognisedmodule_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::EntityItems::EntityunrecognisedmoduleItems>())
    , entityfanstatuschange_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::EntityItems::EntityfanstatuschangeItems>())
    , entitypoweroutchange_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitypoweroutchangeItems>())
    , entitysensor_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitysensorItems>())
    , cefcmibenablestatusnotification_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::EntityItems::CefcMIBEnableStatusNotificationItems>())
{
    entitymibchange_items->parent = this;
    entitymodulestatuschange_items->parent = this;
    entitypowerstatuschange_items->parent = this;
    entitymoduleinserted_items->parent = this;
    entitymoduleremoved_items->parent = this;
    entityunrecognisedmodule_items->parent = this;
    entityfanstatuschange_items->parent = this;
    entitypoweroutchange_items->parent = this;
    entitysensor_items->parent = this;
    cefcmibenablestatusnotification_items->parent = this;

    yang_name = "entity-items"; yang_parent_name = "traps-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::EntityItems::~EntityItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::EntityItems::has_data() const
{
    if (is_presence_container) return true;
    return (entitymibchange_items !=  nullptr && entitymibchange_items->has_data())
	|| (entitymodulestatuschange_items !=  nullptr && entitymodulestatuschange_items->has_data())
	|| (entitypowerstatuschange_items !=  nullptr && entitypowerstatuschange_items->has_data())
	|| (entitymoduleinserted_items !=  nullptr && entitymoduleinserted_items->has_data())
	|| (entitymoduleremoved_items !=  nullptr && entitymoduleremoved_items->has_data())
	|| (entityunrecognisedmodule_items !=  nullptr && entityunrecognisedmodule_items->has_data())
	|| (entityfanstatuschange_items !=  nullptr && entityfanstatuschange_items->has_data())
	|| (entitypoweroutchange_items !=  nullptr && entitypoweroutchange_items->has_data())
	|| (entitysensor_items !=  nullptr && entitysensor_items->has_data())
	|| (cefcmibenablestatusnotification_items !=  nullptr && cefcmibenablestatusnotification_items->has_data());
}

bool System::SnmpItems::InstItems::TrapsItems::EntityItems::has_operation() const
{
    return is_set(yfilter)
	|| (entitymibchange_items !=  nullptr && entitymibchange_items->has_operation())
	|| (entitymodulestatuschange_items !=  nullptr && entitymodulestatuschange_items->has_operation())
	|| (entitypowerstatuschange_items !=  nullptr && entitypowerstatuschange_items->has_operation())
	|| (entitymoduleinserted_items !=  nullptr && entitymoduleinserted_items->has_operation())
	|| (entitymoduleremoved_items !=  nullptr && entitymoduleremoved_items->has_operation())
	|| (entityunrecognisedmodule_items !=  nullptr && entityunrecognisedmodule_items->has_operation())
	|| (entityfanstatuschange_items !=  nullptr && entityfanstatuschange_items->has_operation())
	|| (entitypoweroutchange_items !=  nullptr && entitypoweroutchange_items->has_operation())
	|| (entitysensor_items !=  nullptr && entitysensor_items->has_operation())
	|| (cefcmibenablestatusnotification_items !=  nullptr && cefcmibenablestatusnotification_items->has_operation());
}

std::string System::SnmpItems::InstItems::TrapsItems::EntityItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::EntityItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "entity-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::EntityItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::EntityItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "entitymibchange-items")
    {
        if(entitymibchange_items == nullptr)
        {
            entitymibchange_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymibchangeItems>();
        }
        return entitymibchange_items;
    }

    if(child_yang_name == "entitymodulestatuschange-items")
    {
        if(entitymodulestatuschange_items == nullptr)
        {
            entitymodulestatuschange_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymodulestatuschangeItems>();
        }
        return entitymodulestatuschange_items;
    }

    if(child_yang_name == "entitypowerstatuschange-items")
    {
        if(entitypowerstatuschange_items == nullptr)
        {
            entitypowerstatuschange_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitypowerstatuschangeItems>();
        }
        return entitypowerstatuschange_items;
    }

    if(child_yang_name == "entitymoduleinserted-items")
    {
        if(entitymoduleinserted_items == nullptr)
        {
            entitymoduleinserted_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymoduleinsertedItems>();
        }
        return entitymoduleinserted_items;
    }

    if(child_yang_name == "entitymoduleremoved-items")
    {
        if(entitymoduleremoved_items == nullptr)
        {
            entitymoduleremoved_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymoduleremovedItems>();
        }
        return entitymoduleremoved_items;
    }

    if(child_yang_name == "entityunrecognisedmodule-items")
    {
        if(entityunrecognisedmodule_items == nullptr)
        {
            entityunrecognisedmodule_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::EntityItems::EntityunrecognisedmoduleItems>();
        }
        return entityunrecognisedmodule_items;
    }

    if(child_yang_name == "entityfanstatuschange-items")
    {
        if(entityfanstatuschange_items == nullptr)
        {
            entityfanstatuschange_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::EntityItems::EntityfanstatuschangeItems>();
        }
        return entityfanstatuschange_items;
    }

    if(child_yang_name == "entitypoweroutchange-items")
    {
        if(entitypoweroutchange_items == nullptr)
        {
            entitypoweroutchange_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitypoweroutchangeItems>();
        }
        return entitypoweroutchange_items;
    }

    if(child_yang_name == "entitysensor-items")
    {
        if(entitysensor_items == nullptr)
        {
            entitysensor_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitysensorItems>();
        }
        return entitysensor_items;
    }

    if(child_yang_name == "cefcMIBEnableStatusNotification-items")
    {
        if(cefcmibenablestatusnotification_items == nullptr)
        {
            cefcmibenablestatusnotification_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::EntityItems::CefcMIBEnableStatusNotificationItems>();
        }
        return cefcmibenablestatusnotification_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::EntityItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(entitymibchange_items != nullptr)
    {
        _children["entitymibchange-items"] = entitymibchange_items;
    }

    if(entitymodulestatuschange_items != nullptr)
    {
        _children["entitymodulestatuschange-items"] = entitymodulestatuschange_items;
    }

    if(entitypowerstatuschange_items != nullptr)
    {
        _children["entitypowerstatuschange-items"] = entitypowerstatuschange_items;
    }

    if(entitymoduleinserted_items != nullptr)
    {
        _children["entitymoduleinserted-items"] = entitymoduleinserted_items;
    }

    if(entitymoduleremoved_items != nullptr)
    {
        _children["entitymoduleremoved-items"] = entitymoduleremoved_items;
    }

    if(entityunrecognisedmodule_items != nullptr)
    {
        _children["entityunrecognisedmodule-items"] = entityunrecognisedmodule_items;
    }

    if(entityfanstatuschange_items != nullptr)
    {
        _children["entityfanstatuschange-items"] = entityfanstatuschange_items;
    }

    if(entitypoweroutchange_items != nullptr)
    {
        _children["entitypoweroutchange-items"] = entitypoweroutchange_items;
    }

    if(entitysensor_items != nullptr)
    {
        _children["entitysensor-items"] = entitysensor_items;
    }

    if(cefcmibenablestatusnotification_items != nullptr)
    {
        _children["cefcMIBEnableStatusNotification-items"] = cefcmibenablestatusnotification_items;
    }

    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::EntityItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SnmpItems::InstItems::TrapsItems::EntityItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SnmpItems::InstItems::TrapsItems::EntityItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entitymibchange-items" || name == "entitymodulestatuschange-items" || name == "entitypowerstatuschange-items" || name == "entitymoduleinserted-items" || name == "entitymoduleremoved-items" || name == "entityunrecognisedmodule-items" || name == "entityfanstatuschange-items" || name == "entitypoweroutchange-items" || name == "entitysensor-items" || name == "cefcMIBEnableStatusNotification-items")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymibchangeItems::EntitymibchangeItems()
    :
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "entitymibchange-items"; yang_parent_name = "entity-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymibchangeItems::~EntitymibchangeItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymibchangeItems::has_data() const
{
    if (is_presence_container) return true;
    return trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymibchangeItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymibchangeItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/entity-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymibchangeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "entitymibchange-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymibchangeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymibchangeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymibchangeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymibchangeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trapstatus")
    {
        trapstatus = value;
        trapstatus.value_namespace = name_space;
        trapstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction = value;
        istoggleaction.value_namespace = name_space;
        istoggleaction.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymibchangeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trapstatus")
    {
        trapstatus.yfilter = yfilter;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymibchangeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymodulestatuschangeItems::EntitymodulestatuschangeItems()
    :
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "entitymodulestatuschange-items"; yang_parent_name = "entity-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymodulestatuschangeItems::~EntitymodulestatuschangeItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymodulestatuschangeItems::has_data() const
{
    if (is_presence_container) return true;
    return trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymodulestatuschangeItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymodulestatuschangeItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/entity-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymodulestatuschangeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "entitymodulestatuschange-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymodulestatuschangeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymodulestatuschangeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymodulestatuschangeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymodulestatuschangeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trapstatus")
    {
        trapstatus = value;
        trapstatus.value_namespace = name_space;
        trapstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction = value;
        istoggleaction.value_namespace = name_space;
        istoggleaction.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymodulestatuschangeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trapstatus")
    {
        trapstatus.yfilter = yfilter;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymodulestatuschangeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitypowerstatuschangeItems::EntitypowerstatuschangeItems()
    :
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "entitypowerstatuschange-items"; yang_parent_name = "entity-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitypowerstatuschangeItems::~EntitypowerstatuschangeItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitypowerstatuschangeItems::has_data() const
{
    if (is_presence_container) return true;
    return trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitypowerstatuschangeItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitypowerstatuschangeItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/entity-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitypowerstatuschangeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "entitypowerstatuschange-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitypowerstatuschangeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitypowerstatuschangeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitypowerstatuschangeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitypowerstatuschangeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trapstatus")
    {
        trapstatus = value;
        trapstatus.value_namespace = name_space;
        trapstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction = value;
        istoggleaction.value_namespace = name_space;
        istoggleaction.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitypowerstatuschangeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trapstatus")
    {
        trapstatus.yfilter = yfilter;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitypowerstatuschangeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymoduleinsertedItems::EntitymoduleinsertedItems()
    :
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "entitymoduleinserted-items"; yang_parent_name = "entity-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymoduleinsertedItems::~EntitymoduleinsertedItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymoduleinsertedItems::has_data() const
{
    if (is_presence_container) return true;
    return trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymoduleinsertedItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymoduleinsertedItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/entity-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymoduleinsertedItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "entitymoduleinserted-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymoduleinsertedItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymoduleinsertedItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymoduleinsertedItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymoduleinsertedItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trapstatus")
    {
        trapstatus = value;
        trapstatus.value_namespace = name_space;
        trapstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction = value;
        istoggleaction.value_namespace = name_space;
        istoggleaction.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymoduleinsertedItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trapstatus")
    {
        trapstatus.yfilter = yfilter;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymoduleinsertedItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymoduleremovedItems::EntitymoduleremovedItems()
    :
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "entitymoduleremoved-items"; yang_parent_name = "entity-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymoduleremovedItems::~EntitymoduleremovedItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymoduleremovedItems::has_data() const
{
    if (is_presence_container) return true;
    return trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymoduleremovedItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymoduleremovedItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/entity-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymoduleremovedItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "entitymoduleremoved-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymoduleremovedItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymoduleremovedItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymoduleremovedItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymoduleremovedItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trapstatus")
    {
        trapstatus = value;
        trapstatus.value_namespace = name_space;
        trapstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction = value;
        istoggleaction.value_namespace = name_space;
        istoggleaction.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymoduleremovedItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trapstatus")
    {
        trapstatus.yfilter = yfilter;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitymoduleremovedItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::EntityItems::EntityunrecognisedmoduleItems::EntityunrecognisedmoduleItems()
    :
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "entityunrecognisedmodule-items"; yang_parent_name = "entity-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::EntityItems::EntityunrecognisedmoduleItems::~EntityunrecognisedmoduleItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::EntityItems::EntityunrecognisedmoduleItems::has_data() const
{
    if (is_presence_container) return true;
    return trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::EntityItems::EntityunrecognisedmoduleItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::EntityItems::EntityunrecognisedmoduleItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/entity-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::EntityItems::EntityunrecognisedmoduleItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "entityunrecognisedmodule-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::EntityItems::EntityunrecognisedmoduleItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::EntityItems::EntityunrecognisedmoduleItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::EntityItems::EntityunrecognisedmoduleItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::EntityItems::EntityunrecognisedmoduleItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trapstatus")
    {
        trapstatus = value;
        trapstatus.value_namespace = name_space;
        trapstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction = value;
        istoggleaction.value_namespace = name_space;
        istoggleaction.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::TrapsItems::EntityItems::EntityunrecognisedmoduleItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trapstatus")
    {
        trapstatus.yfilter = yfilter;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::TrapsItems::EntityItems::EntityunrecognisedmoduleItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::EntityItems::EntityfanstatuschangeItems::EntityfanstatuschangeItems()
    :
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "entityfanstatuschange-items"; yang_parent_name = "entity-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::EntityItems::EntityfanstatuschangeItems::~EntityfanstatuschangeItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::EntityItems::EntityfanstatuschangeItems::has_data() const
{
    if (is_presence_container) return true;
    return trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::EntityItems::EntityfanstatuschangeItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::EntityItems::EntityfanstatuschangeItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/entity-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::EntityItems::EntityfanstatuschangeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "entityfanstatuschange-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::EntityItems::EntityfanstatuschangeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::EntityItems::EntityfanstatuschangeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::EntityItems::EntityfanstatuschangeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::EntityItems::EntityfanstatuschangeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trapstatus")
    {
        trapstatus = value;
        trapstatus.value_namespace = name_space;
        trapstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction = value;
        istoggleaction.value_namespace = name_space;
        istoggleaction.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::TrapsItems::EntityItems::EntityfanstatuschangeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trapstatus")
    {
        trapstatus.yfilter = yfilter;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::TrapsItems::EntityItems::EntityfanstatuschangeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitypoweroutchangeItems::EntitypoweroutchangeItems()
    :
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "entitypoweroutchange-items"; yang_parent_name = "entity-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitypoweroutchangeItems::~EntitypoweroutchangeItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitypoweroutchangeItems::has_data() const
{
    if (is_presence_container) return true;
    return trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitypoweroutchangeItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitypoweroutchangeItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/entity-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitypoweroutchangeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "entitypoweroutchange-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitypoweroutchangeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitypoweroutchangeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitypoweroutchangeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitypoweroutchangeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trapstatus")
    {
        trapstatus = value;
        trapstatus.value_namespace = name_space;
        trapstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction = value;
        istoggleaction.value_namespace = name_space;
        istoggleaction.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitypoweroutchangeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trapstatus")
    {
        trapstatus.yfilter = yfilter;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitypoweroutchangeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitysensorItems::EntitysensorItems()
    :
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "entitysensor-items"; yang_parent_name = "entity-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitysensorItems::~EntitysensorItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitysensorItems::has_data() const
{
    if (is_presence_container) return true;
    return trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitysensorItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitysensorItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/entity-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitysensorItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "entitysensor-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitysensorItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitysensorItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitysensorItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitysensorItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trapstatus")
    {
        trapstatus = value;
        trapstatus.value_namespace = name_space;
        trapstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction = value;
        istoggleaction.value_namespace = name_space;
        istoggleaction.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitysensorItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trapstatus")
    {
        trapstatus.yfilter = yfilter;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::TrapsItems::EntityItems::EntitysensorItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::EntityItems::CefcMIBEnableStatusNotificationItems::CefcMIBEnableStatusNotificationItems()
    :
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "cefcMIBEnableStatusNotification-items"; yang_parent_name = "entity-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::EntityItems::CefcMIBEnableStatusNotificationItems::~CefcMIBEnableStatusNotificationItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::EntityItems::CefcMIBEnableStatusNotificationItems::has_data() const
{
    if (is_presence_container) return true;
    return trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::EntityItems::CefcMIBEnableStatusNotificationItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::EntityItems::CefcMIBEnableStatusNotificationItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/entity-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::EntityItems::CefcMIBEnableStatusNotificationItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefcMIBEnableStatusNotification-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::EntityItems::CefcMIBEnableStatusNotificationItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::EntityItems::CefcMIBEnableStatusNotificationItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::EntityItems::CefcMIBEnableStatusNotificationItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::EntityItems::CefcMIBEnableStatusNotificationItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trapstatus")
    {
        trapstatus = value;
        trapstatus.value_namespace = name_space;
        trapstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction = value;
        istoggleaction.value_namespace = name_space;
        istoggleaction.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::TrapsItems::EntityItems::CefcMIBEnableStatusNotificationItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trapstatus")
    {
        trapstatus.yfilter = yfilter;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::TrapsItems::EntityItems::CefcMIBEnableStatusNotificationItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems::FeaturecontrolItems()
    :
    featureopstatuschange_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems::FeatureOpStatusChangeItems>())
    , ciscofeatopstatuschange_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems::CiscoFeatOpStatusChangeItems>())
{
    featureopstatuschange_items->parent = this;
    ciscofeatopstatuschange_items->parent = this;

    yang_name = "featurecontrol-items"; yang_parent_name = "traps-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems::~FeaturecontrolItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems::has_data() const
{
    if (is_presence_container) return true;
    return (featureopstatuschange_items !=  nullptr && featureopstatuschange_items->has_data())
	|| (ciscofeatopstatuschange_items !=  nullptr && ciscofeatopstatuschange_items->has_data());
}

bool System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems::has_operation() const
{
    return is_set(yfilter)
	|| (featureopstatuschange_items !=  nullptr && featureopstatuschange_items->has_operation())
	|| (ciscofeatopstatuschange_items !=  nullptr && ciscofeatopstatuschange_items->has_operation());
}

std::string System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "featurecontrol-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "FeatureOpStatusChange-items")
    {
        if(featureopstatuschange_items == nullptr)
        {
            featureopstatuschange_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems::FeatureOpStatusChangeItems>();
        }
        return featureopstatuschange_items;
    }

    if(child_yang_name == "ciscoFeatOpStatusChange-items")
    {
        if(ciscofeatopstatuschange_items == nullptr)
        {
            ciscofeatopstatuschange_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems::CiscoFeatOpStatusChangeItems>();
        }
        return ciscofeatopstatuschange_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(featureopstatuschange_items != nullptr)
    {
        _children["FeatureOpStatusChange-items"] = featureopstatuschange_items;
    }

    if(ciscofeatopstatuschange_items != nullptr)
    {
        _children["ciscoFeatOpStatusChange-items"] = ciscofeatopstatuschange_items;
    }

    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "FeatureOpStatusChange-items" || name == "ciscoFeatOpStatusChange-items")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems::FeatureOpStatusChangeItems::FeatureOpStatusChangeItems()
    :
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "FeatureOpStatusChange-items"; yang_parent_name = "featurecontrol-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems::FeatureOpStatusChangeItems::~FeatureOpStatusChangeItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems::FeatureOpStatusChangeItems::has_data() const
{
    if (is_presence_container) return true;
    return trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems::FeatureOpStatusChangeItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems::FeatureOpStatusChangeItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/featurecontrol-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems::FeatureOpStatusChangeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "FeatureOpStatusChange-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems::FeatureOpStatusChangeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems::FeatureOpStatusChangeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems::FeatureOpStatusChangeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems::FeatureOpStatusChangeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trapstatus")
    {
        trapstatus = value;
        trapstatus.value_namespace = name_space;
        trapstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction = value;
        istoggleaction.value_namespace = name_space;
        istoggleaction.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems::FeatureOpStatusChangeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trapstatus")
    {
        trapstatus.yfilter = yfilter;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems::FeatureOpStatusChangeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems::CiscoFeatOpStatusChangeItems::CiscoFeatOpStatusChangeItems()
    :
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "ciscoFeatOpStatusChange-items"; yang_parent_name = "featurecontrol-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems::CiscoFeatOpStatusChangeItems::~CiscoFeatOpStatusChangeItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems::CiscoFeatOpStatusChangeItems::has_data() const
{
    if (is_presence_container) return true;
    return trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems::CiscoFeatOpStatusChangeItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems::CiscoFeatOpStatusChangeItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/featurecontrol-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems::CiscoFeatOpStatusChangeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciscoFeatOpStatusChange-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems::CiscoFeatOpStatusChangeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems::CiscoFeatOpStatusChangeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems::CiscoFeatOpStatusChangeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems::CiscoFeatOpStatusChangeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trapstatus")
    {
        trapstatus = value;
        trapstatus.value_namespace = name_space;
        trapstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction = value;
        istoggleaction.value_namespace = name_space;
        istoggleaction.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems::CiscoFeatOpStatusChangeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trapstatus")
    {
        trapstatus.yfilter = yfilter;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::TrapsItems::FeaturecontrolItems::CiscoFeatOpStatusChangeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::HsrpItems::HsrpItems()
    :
    statechange_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::HsrpItems::StatechangeItems>())
{
    statechange_items->parent = this;

    yang_name = "hsrp-items"; yang_parent_name = "traps-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::HsrpItems::~HsrpItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::HsrpItems::has_data() const
{
    if (is_presence_container) return true;
    return (statechange_items !=  nullptr && statechange_items->has_data());
}

bool System::SnmpItems::InstItems::TrapsItems::HsrpItems::has_operation() const
{
    return is_set(yfilter)
	|| (statechange_items !=  nullptr && statechange_items->has_operation());
}

std::string System::SnmpItems::InstItems::TrapsItems::HsrpItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::HsrpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hsrp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::HsrpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::HsrpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statechange-items")
    {
        if(statechange_items == nullptr)
        {
            statechange_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::HsrpItems::StatechangeItems>();
        }
        return statechange_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::HsrpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(statechange_items != nullptr)
    {
        _children["statechange-items"] = statechange_items;
    }

    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::HsrpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SnmpItems::InstItems::TrapsItems::HsrpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SnmpItems::InstItems::TrapsItems::HsrpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statechange-items")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::HsrpItems::StatechangeItems::StatechangeItems()
    :
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "statechange-items"; yang_parent_name = "hsrp-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::HsrpItems::StatechangeItems::~StatechangeItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::HsrpItems::StatechangeItems::has_data() const
{
    if (is_presence_container) return true;
    return trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::HsrpItems::StatechangeItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::HsrpItems::StatechangeItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/hsrp-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::HsrpItems::StatechangeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statechange-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::HsrpItems::StatechangeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::HsrpItems::StatechangeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::HsrpItems::StatechangeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::HsrpItems::StatechangeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trapstatus")
    {
        trapstatus = value;
        trapstatus.value_namespace = name_space;
        trapstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction = value;
        istoggleaction.value_namespace = name_space;
        istoggleaction.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::TrapsItems::HsrpItems::StatechangeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trapstatus")
    {
        trapstatus.yfilter = yfilter;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::TrapsItems::HsrpItems::StatechangeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::GenericItems::GenericItems()
    :
    coldstart_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::GenericItems::ColdStartItems>())
    , warmstart_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::GenericItems::WarmStartItems>())
{
    coldstart_items->parent = this;
    warmstart_items->parent = this;

    yang_name = "generic-items"; yang_parent_name = "traps-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::GenericItems::~GenericItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::GenericItems::has_data() const
{
    if (is_presence_container) return true;
    return (coldstart_items !=  nullptr && coldstart_items->has_data())
	|| (warmstart_items !=  nullptr && warmstart_items->has_data());
}

bool System::SnmpItems::InstItems::TrapsItems::GenericItems::has_operation() const
{
    return is_set(yfilter)
	|| (coldstart_items !=  nullptr && coldstart_items->has_operation())
	|| (warmstart_items !=  nullptr && warmstart_items->has_operation());
}

std::string System::SnmpItems::InstItems::TrapsItems::GenericItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::GenericItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::GenericItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::GenericItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "coldStart-items")
    {
        if(coldstart_items == nullptr)
        {
            coldstart_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::GenericItems::ColdStartItems>();
        }
        return coldstart_items;
    }

    if(child_yang_name == "warmStart-items")
    {
        if(warmstart_items == nullptr)
        {
            warmstart_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::GenericItems::WarmStartItems>();
        }
        return warmstart_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::GenericItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(coldstart_items != nullptr)
    {
        _children["coldStart-items"] = coldstart_items;
    }

    if(warmstart_items != nullptr)
    {
        _children["warmStart-items"] = warmstart_items;
    }

    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::GenericItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SnmpItems::InstItems::TrapsItems::GenericItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SnmpItems::InstItems::TrapsItems::GenericItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "coldStart-items" || name == "warmStart-items")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::GenericItems::ColdStartItems::ColdStartItems()
    :
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "coldStart-items"; yang_parent_name = "generic-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::GenericItems::ColdStartItems::~ColdStartItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::GenericItems::ColdStartItems::has_data() const
{
    if (is_presence_container) return true;
    return trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::GenericItems::ColdStartItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::GenericItems::ColdStartItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/generic-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::GenericItems::ColdStartItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "coldStart-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::GenericItems::ColdStartItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::GenericItems::ColdStartItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::GenericItems::ColdStartItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::GenericItems::ColdStartItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trapstatus")
    {
        trapstatus = value;
        trapstatus.value_namespace = name_space;
        trapstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction = value;
        istoggleaction.value_namespace = name_space;
        istoggleaction.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::TrapsItems::GenericItems::ColdStartItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trapstatus")
    {
        trapstatus.yfilter = yfilter;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::TrapsItems::GenericItems::ColdStartItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::GenericItems::WarmStartItems::WarmStartItems()
    :
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "warmStart-items"; yang_parent_name = "generic-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::GenericItems::WarmStartItems::~WarmStartItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::GenericItems::WarmStartItems::has_data() const
{
    if (is_presence_container) return true;
    return trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::GenericItems::WarmStartItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::GenericItems::WarmStartItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/generic-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::GenericItems::WarmStartItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "warmStart-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::GenericItems::WarmStartItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::GenericItems::WarmStartItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::GenericItems::WarmStartItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::GenericItems::WarmStartItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trapstatus")
    {
        trapstatus = value;
        trapstatus.value_namespace = name_space;
        trapstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction = value;
        istoggleaction.value_namespace = name_space;
        istoggleaction.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::TrapsItems::GenericItems::WarmStartItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trapstatus")
    {
        trapstatus.yfilter = yfilter;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::TrapsItems::GenericItems::WarmStartItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::IpItems::IpItems()
    :
    sla_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::IpItems::SlaItems>())
{
    sla_items->parent = this;

    yang_name = "ip-items"; yang_parent_name = "traps-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::IpItems::~IpItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::IpItems::has_data() const
{
    if (is_presence_container) return true;
    return (sla_items !=  nullptr && sla_items->has_data());
}

bool System::SnmpItems::InstItems::TrapsItems::IpItems::has_operation() const
{
    return is_set(yfilter)
	|| (sla_items !=  nullptr && sla_items->has_operation());
}

std::string System::SnmpItems::InstItems::TrapsItems::IpItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::IpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::IpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::IpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sla-items")
    {
        if(sla_items == nullptr)
        {
            sla_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::IpItems::SlaItems>();
        }
        return sla_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::IpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sla_items != nullptr)
    {
        _children["sla-items"] = sla_items;
    }

    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::IpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SnmpItems::InstItems::TrapsItems::IpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SnmpItems::InstItems::TrapsItems::IpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sla-items")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::IpItems::SlaItems::SlaItems()
    :
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "sla-items"; yang_parent_name = "ip-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::IpItems::SlaItems::~SlaItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::IpItems::SlaItems::has_data() const
{
    if (is_presence_container) return true;
    return trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::IpItems::SlaItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::IpItems::SlaItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/ip-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::IpItems::SlaItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sla-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::IpItems::SlaItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::IpItems::SlaItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::IpItems::SlaItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::IpItems::SlaItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trapstatus")
    {
        trapstatus = value;
        trapstatus.value_namespace = name_space;
        trapstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction = value;
        istoggleaction.value_namespace = name_space;
        istoggleaction.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::TrapsItems::IpItems::SlaItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trapstatus")
    {
        trapstatus.yfilter = yfilter;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::TrapsItems::IpItems::SlaItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::LicenseItems::LicenseItems()
    :
    notifylicenseexpiry_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifylicenseexpiryItems>())
    , notifylicenseexpirywarning_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifylicenseexpirywarningItems>())
    , notifylicensefilemissing_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifylicensefilemissingItems>())
    , notifynolicenseforfeature_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifynolicenseforfeatureItems>())
{
    notifylicenseexpiry_items->parent = this;
    notifylicenseexpirywarning_items->parent = this;
    notifylicensefilemissing_items->parent = this;
    notifynolicenseforfeature_items->parent = this;

    yang_name = "license-items"; yang_parent_name = "traps-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::LicenseItems::~LicenseItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::LicenseItems::has_data() const
{
    if (is_presence_container) return true;
    return (notifylicenseexpiry_items !=  nullptr && notifylicenseexpiry_items->has_data())
	|| (notifylicenseexpirywarning_items !=  nullptr && notifylicenseexpirywarning_items->has_data())
	|| (notifylicensefilemissing_items !=  nullptr && notifylicensefilemissing_items->has_data())
	|| (notifynolicenseforfeature_items !=  nullptr && notifynolicenseforfeature_items->has_data());
}

bool System::SnmpItems::InstItems::TrapsItems::LicenseItems::has_operation() const
{
    return is_set(yfilter)
	|| (notifylicenseexpiry_items !=  nullptr && notifylicenseexpiry_items->has_operation())
	|| (notifylicenseexpirywarning_items !=  nullptr && notifylicenseexpirywarning_items->has_operation())
	|| (notifylicensefilemissing_items !=  nullptr && notifylicensefilemissing_items->has_operation())
	|| (notifynolicenseforfeature_items !=  nullptr && notifynolicenseforfeature_items->has_operation());
}

std::string System::SnmpItems::InstItems::TrapsItems::LicenseItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::LicenseItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "license-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::LicenseItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::LicenseItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "notifylicenseexpiry-items")
    {
        if(notifylicenseexpiry_items == nullptr)
        {
            notifylicenseexpiry_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifylicenseexpiryItems>();
        }
        return notifylicenseexpiry_items;
    }

    if(child_yang_name == "notifylicenseexpirywarning-items")
    {
        if(notifylicenseexpirywarning_items == nullptr)
        {
            notifylicenseexpirywarning_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifylicenseexpirywarningItems>();
        }
        return notifylicenseexpirywarning_items;
    }

    if(child_yang_name == "notifylicensefilemissing-items")
    {
        if(notifylicensefilemissing_items == nullptr)
        {
            notifylicensefilemissing_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifylicensefilemissingItems>();
        }
        return notifylicensefilemissing_items;
    }

    if(child_yang_name == "notifynolicenseforfeature-items")
    {
        if(notifynolicenseforfeature_items == nullptr)
        {
            notifynolicenseforfeature_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifynolicenseforfeatureItems>();
        }
        return notifynolicenseforfeature_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::LicenseItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(notifylicenseexpiry_items != nullptr)
    {
        _children["notifylicenseexpiry-items"] = notifylicenseexpiry_items;
    }

    if(notifylicenseexpirywarning_items != nullptr)
    {
        _children["notifylicenseexpirywarning-items"] = notifylicenseexpirywarning_items;
    }

    if(notifylicensefilemissing_items != nullptr)
    {
        _children["notifylicensefilemissing-items"] = notifylicensefilemissing_items;
    }

    if(notifynolicenseforfeature_items != nullptr)
    {
        _children["notifynolicenseforfeature-items"] = notifynolicenseforfeature_items;
    }

    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::LicenseItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SnmpItems::InstItems::TrapsItems::LicenseItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SnmpItems::InstItems::TrapsItems::LicenseItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "notifylicenseexpiry-items" || name == "notifylicenseexpirywarning-items" || name == "notifylicensefilemissing-items" || name == "notifynolicenseforfeature-items")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifylicenseexpiryItems::NotifylicenseexpiryItems()
    :
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "notifylicenseexpiry-items"; yang_parent_name = "license-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifylicenseexpiryItems::~NotifylicenseexpiryItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifylicenseexpiryItems::has_data() const
{
    if (is_presence_container) return true;
    return trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifylicenseexpiryItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifylicenseexpiryItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/license-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifylicenseexpiryItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "notifylicenseexpiry-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifylicenseexpiryItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifylicenseexpiryItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifylicenseexpiryItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifylicenseexpiryItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trapstatus")
    {
        trapstatus = value;
        trapstatus.value_namespace = name_space;
        trapstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction = value;
        istoggleaction.value_namespace = name_space;
        istoggleaction.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifylicenseexpiryItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trapstatus")
    {
        trapstatus.yfilter = yfilter;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifylicenseexpiryItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifylicenseexpirywarningItems::NotifylicenseexpirywarningItems()
    :
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "notifylicenseexpirywarning-items"; yang_parent_name = "license-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifylicenseexpirywarningItems::~NotifylicenseexpirywarningItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifylicenseexpirywarningItems::has_data() const
{
    if (is_presence_container) return true;
    return trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifylicenseexpirywarningItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifylicenseexpirywarningItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/license-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifylicenseexpirywarningItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "notifylicenseexpirywarning-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifylicenseexpirywarningItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifylicenseexpirywarningItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifylicenseexpirywarningItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifylicenseexpirywarningItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trapstatus")
    {
        trapstatus = value;
        trapstatus.value_namespace = name_space;
        trapstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction = value;
        istoggleaction.value_namespace = name_space;
        istoggleaction.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifylicenseexpirywarningItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trapstatus")
    {
        trapstatus.yfilter = yfilter;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifylicenseexpirywarningItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifylicensefilemissingItems::NotifylicensefilemissingItems()
    :
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "notifylicensefilemissing-items"; yang_parent_name = "license-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifylicensefilemissingItems::~NotifylicensefilemissingItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifylicensefilemissingItems::has_data() const
{
    if (is_presence_container) return true;
    return trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifylicensefilemissingItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifylicensefilemissingItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/license-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifylicensefilemissingItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "notifylicensefilemissing-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifylicensefilemissingItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifylicensefilemissingItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifylicensefilemissingItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifylicensefilemissingItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trapstatus")
    {
        trapstatus = value;
        trapstatus.value_namespace = name_space;
        trapstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction = value;
        istoggleaction.value_namespace = name_space;
        istoggleaction.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifylicensefilemissingItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trapstatus")
    {
        trapstatus.yfilter = yfilter;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifylicensefilemissingItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifynolicenseforfeatureItems::NotifynolicenseforfeatureItems()
    :
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "notifynolicenseforfeature-items"; yang_parent_name = "license-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifynolicenseforfeatureItems::~NotifynolicenseforfeatureItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifynolicenseforfeatureItems::has_data() const
{
    if (is_presence_container) return true;
    return trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifynolicenseforfeatureItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifynolicenseforfeatureItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/license-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifynolicenseforfeatureItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "notifynolicenseforfeature-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifynolicenseforfeatureItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifynolicenseforfeatureItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifynolicenseforfeatureItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifynolicenseforfeatureItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trapstatus")
    {
        trapstatus = value;
        trapstatus.value_namespace = name_space;
        trapstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction = value;
        istoggleaction.value_namespace = name_space;
        istoggleaction.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifynolicenseforfeatureItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trapstatus")
    {
        trapstatus.yfilter = yfilter;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::TrapsItems::LicenseItems::NotifynolicenseforfeatureItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::PoeItems::PoeItems()
    :
    policenotify_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::PoeItems::PolicenotifyItems>())
    , controlenable_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::PoeItems::ControlenableItems>())
{
    policenotify_items->parent = this;
    controlenable_items->parent = this;

    yang_name = "poe-items"; yang_parent_name = "traps-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::PoeItems::~PoeItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::PoeItems::has_data() const
{
    if (is_presence_container) return true;
    return (policenotify_items !=  nullptr && policenotify_items->has_data())
	|| (controlenable_items !=  nullptr && controlenable_items->has_data());
}

bool System::SnmpItems::InstItems::TrapsItems::PoeItems::has_operation() const
{
    return is_set(yfilter)
	|| (policenotify_items !=  nullptr && policenotify_items->has_operation())
	|| (controlenable_items !=  nullptr && controlenable_items->has_operation());
}

std::string System::SnmpItems::InstItems::TrapsItems::PoeItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::PoeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "poe-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::PoeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::PoeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policenotify-items")
    {
        if(policenotify_items == nullptr)
        {
            policenotify_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::PoeItems::PolicenotifyItems>();
        }
        return policenotify_items;
    }

    if(child_yang_name == "controlenable-items")
    {
        if(controlenable_items == nullptr)
        {
            controlenable_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::PoeItems::ControlenableItems>();
        }
        return controlenable_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::PoeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(policenotify_items != nullptr)
    {
        _children["policenotify-items"] = policenotify_items;
    }

    if(controlenable_items != nullptr)
    {
        _children["controlenable-items"] = controlenable_items;
    }

    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::PoeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SnmpItems::InstItems::TrapsItems::PoeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SnmpItems::InstItems::TrapsItems::PoeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policenotify-items" || name == "controlenable-items")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::PoeItems::PolicenotifyItems::PolicenotifyItems()
    :
    togglestate{YType::uint16, "toggleState"},
    togglestatecount{YType::uint16, "toggleStateCount"},
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "policenotify-items"; yang_parent_name = "poe-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::PoeItems::PolicenotifyItems::~PolicenotifyItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::PoeItems::PolicenotifyItems::has_data() const
{
    if (is_presence_container) return true;
    return togglestate.is_set
	|| togglestatecount.is_set
	|| trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::PoeItems::PolicenotifyItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(togglestate.yfilter)
	|| ydk::is_set(togglestatecount.yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::PoeItems::PolicenotifyItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/poe-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::PoeItems::PolicenotifyItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policenotify-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::PoeItems::PolicenotifyItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (togglestate.is_set || is_set(togglestate.yfilter)) leaf_name_data.push_back(togglestate.get_name_leafdata());
    if (togglestatecount.is_set || is_set(togglestatecount.yfilter)) leaf_name_data.push_back(togglestatecount.get_name_leafdata());
    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::PoeItems::PolicenotifyItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::PoeItems::PolicenotifyItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::PoeItems::PolicenotifyItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "toggleState")
    {
        togglestate = value;
        togglestate.value_namespace = name_space;
        togglestate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount = value;
        togglestatecount.value_namespace = name_space;
        togglestatecount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trapstatus")
    {
        trapstatus = value;
        trapstatus.value_namespace = name_space;
        trapstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction = value;
        istoggleaction.value_namespace = name_space;
        istoggleaction.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::TrapsItems::PoeItems::PolicenotifyItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "toggleState")
    {
        togglestate.yfilter = yfilter;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount.yfilter = yfilter;
    }
    if(value_path == "trapstatus")
    {
        trapstatus.yfilter = yfilter;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::TrapsItems::PoeItems::PolicenotifyItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "toggleState" || name == "toggleStateCount" || name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::PoeItems::ControlenableItems::ControlenableItems()
    :
    togglestate{YType::uint16, "toggleState"},
    togglestatecount{YType::uint16, "toggleStateCount"},
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "controlenable-items"; yang_parent_name = "poe-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::PoeItems::ControlenableItems::~ControlenableItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::PoeItems::ControlenableItems::has_data() const
{
    if (is_presence_container) return true;
    return togglestate.is_set
	|| togglestatecount.is_set
	|| trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::PoeItems::ControlenableItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(togglestate.yfilter)
	|| ydk::is_set(togglestatecount.yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::PoeItems::ControlenableItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/poe-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::PoeItems::ControlenableItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "controlenable-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::PoeItems::ControlenableItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (togglestate.is_set || is_set(togglestate.yfilter)) leaf_name_data.push_back(togglestate.get_name_leafdata());
    if (togglestatecount.is_set || is_set(togglestatecount.yfilter)) leaf_name_data.push_back(togglestatecount.get_name_leafdata());
    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::PoeItems::ControlenableItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::PoeItems::ControlenableItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::PoeItems::ControlenableItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "toggleState")
    {
        togglestate = value;
        togglestate.value_namespace = name_space;
        togglestate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount = value;
        togglestatecount.value_namespace = name_space;
        togglestatecount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trapstatus")
    {
        trapstatus = value;
        trapstatus.value_namespace = name_space;
        trapstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction = value;
        istoggleaction.value_namespace = name_space;
        istoggleaction.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::TrapsItems::PoeItems::ControlenableItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "toggleState")
    {
        togglestate.yfilter = yfilter;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount.yfilter = yfilter;
    }
    if(value_path == "trapstatus")
    {
        trapstatus.yfilter = yfilter;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::TrapsItems::PoeItems::ControlenableItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "toggleState" || name == "toggleStateCount" || name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::LinkItems::LinkItems()
    :
    ciscoxcvrmonstatuschg_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::LinkItems::CiscoxcvrmonstatuschgItems>())
    , linkdown_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::LinkItems::LinkDownItems>())
    , linkup_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::LinkItems::LinkUpItems>())
    , extendedlinkdown_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::LinkItems::ExtendedlinkDownItems>())
    , extendedlinkup_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::LinkItems::ExtendedlinkUpItems>())
    , cielinkdown_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::LinkItems::CieLinkDownItems>())
    , cielinkup_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::LinkItems::CieLinkUpItems>())
    , delayedlinkstatechange_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::LinkItems::DelayedlinkstatechangeItems>())
    , cerrdisableinterfaceeventrev1_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::LinkItems::Cerrdisableinterfaceeventrev1Items>())
    , cmnmacmovenotification_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::LinkItems::CmnmacmovenotificationItems>())
{
    ciscoxcvrmonstatuschg_items->parent = this;
    linkdown_items->parent = this;
    linkup_items->parent = this;
    extendedlinkdown_items->parent = this;
    extendedlinkup_items->parent = this;
    cielinkdown_items->parent = this;
    cielinkup_items->parent = this;
    delayedlinkstatechange_items->parent = this;
    cerrdisableinterfaceeventrev1_items->parent = this;
    cmnmacmovenotification_items->parent = this;

    yang_name = "link-items"; yang_parent_name = "traps-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::LinkItems::~LinkItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::LinkItems::has_data() const
{
    if (is_presence_container) return true;
    return (ciscoxcvrmonstatuschg_items !=  nullptr && ciscoxcvrmonstatuschg_items->has_data())
	|| (linkdown_items !=  nullptr && linkdown_items->has_data())
	|| (linkup_items !=  nullptr && linkup_items->has_data())
	|| (extendedlinkdown_items !=  nullptr && extendedlinkdown_items->has_data())
	|| (extendedlinkup_items !=  nullptr && extendedlinkup_items->has_data())
	|| (cielinkdown_items !=  nullptr && cielinkdown_items->has_data())
	|| (cielinkup_items !=  nullptr && cielinkup_items->has_data())
	|| (delayedlinkstatechange_items !=  nullptr && delayedlinkstatechange_items->has_data())
	|| (cerrdisableinterfaceeventrev1_items !=  nullptr && cerrdisableinterfaceeventrev1_items->has_data())
	|| (cmnmacmovenotification_items !=  nullptr && cmnmacmovenotification_items->has_data());
}

bool System::SnmpItems::InstItems::TrapsItems::LinkItems::has_operation() const
{
    return is_set(yfilter)
	|| (ciscoxcvrmonstatuschg_items !=  nullptr && ciscoxcvrmonstatuschg_items->has_operation())
	|| (linkdown_items !=  nullptr && linkdown_items->has_operation())
	|| (linkup_items !=  nullptr && linkup_items->has_operation())
	|| (extendedlinkdown_items !=  nullptr && extendedlinkdown_items->has_operation())
	|| (extendedlinkup_items !=  nullptr && extendedlinkup_items->has_operation())
	|| (cielinkdown_items !=  nullptr && cielinkdown_items->has_operation())
	|| (cielinkup_items !=  nullptr && cielinkup_items->has_operation())
	|| (delayedlinkstatechange_items !=  nullptr && delayedlinkstatechange_items->has_operation())
	|| (cerrdisableinterfaceeventrev1_items !=  nullptr && cerrdisableinterfaceeventrev1_items->has_operation())
	|| (cmnmacmovenotification_items !=  nullptr && cmnmacmovenotification_items->has_operation());
}

std::string System::SnmpItems::InstItems::TrapsItems::LinkItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::LinkItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::LinkItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::LinkItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ciscoxcvrmonstatuschg-items")
    {
        if(ciscoxcvrmonstatuschg_items == nullptr)
        {
            ciscoxcvrmonstatuschg_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::LinkItems::CiscoxcvrmonstatuschgItems>();
        }
        return ciscoxcvrmonstatuschg_items;
    }

    if(child_yang_name == "linkDown-items")
    {
        if(linkdown_items == nullptr)
        {
            linkdown_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::LinkItems::LinkDownItems>();
        }
        return linkdown_items;
    }

    if(child_yang_name == "linkUp-items")
    {
        if(linkup_items == nullptr)
        {
            linkup_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::LinkItems::LinkUpItems>();
        }
        return linkup_items;
    }

    if(child_yang_name == "extendedlinkDown-items")
    {
        if(extendedlinkdown_items == nullptr)
        {
            extendedlinkdown_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::LinkItems::ExtendedlinkDownItems>();
        }
        return extendedlinkdown_items;
    }

    if(child_yang_name == "extendedlinkUp-items")
    {
        if(extendedlinkup_items == nullptr)
        {
            extendedlinkup_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::LinkItems::ExtendedlinkUpItems>();
        }
        return extendedlinkup_items;
    }

    if(child_yang_name == "cieLinkDown-items")
    {
        if(cielinkdown_items == nullptr)
        {
            cielinkdown_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::LinkItems::CieLinkDownItems>();
        }
        return cielinkdown_items;
    }

    if(child_yang_name == "cieLinkUp-items")
    {
        if(cielinkup_items == nullptr)
        {
            cielinkup_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::LinkItems::CieLinkUpItems>();
        }
        return cielinkup_items;
    }

    if(child_yang_name == "delayedlinkstatechange-items")
    {
        if(delayedlinkstatechange_items == nullptr)
        {
            delayedlinkstatechange_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::LinkItems::DelayedlinkstatechangeItems>();
        }
        return delayedlinkstatechange_items;
    }

    if(child_yang_name == "cerrdisableinterfaceeventrev1-items")
    {
        if(cerrdisableinterfaceeventrev1_items == nullptr)
        {
            cerrdisableinterfaceeventrev1_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::LinkItems::Cerrdisableinterfaceeventrev1Items>();
        }
        return cerrdisableinterfaceeventrev1_items;
    }

    if(child_yang_name == "cmnmacmovenotification-items")
    {
        if(cmnmacmovenotification_items == nullptr)
        {
            cmnmacmovenotification_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::LinkItems::CmnmacmovenotificationItems>();
        }
        return cmnmacmovenotification_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::LinkItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ciscoxcvrmonstatuschg_items != nullptr)
    {
        _children["ciscoxcvrmonstatuschg-items"] = ciscoxcvrmonstatuschg_items;
    }

    if(linkdown_items != nullptr)
    {
        _children["linkDown-items"] = linkdown_items;
    }

    if(linkup_items != nullptr)
    {
        _children["linkUp-items"] = linkup_items;
    }

    if(extendedlinkdown_items != nullptr)
    {
        _children["extendedlinkDown-items"] = extendedlinkdown_items;
    }

    if(extendedlinkup_items != nullptr)
    {
        _children["extendedlinkUp-items"] = extendedlinkup_items;
    }

    if(cielinkdown_items != nullptr)
    {
        _children["cieLinkDown-items"] = cielinkdown_items;
    }

    if(cielinkup_items != nullptr)
    {
        _children["cieLinkUp-items"] = cielinkup_items;
    }

    if(delayedlinkstatechange_items != nullptr)
    {
        _children["delayedlinkstatechange-items"] = delayedlinkstatechange_items;
    }

    if(cerrdisableinterfaceeventrev1_items != nullptr)
    {
        _children["cerrdisableinterfaceeventrev1-items"] = cerrdisableinterfaceeventrev1_items;
    }

    if(cmnmacmovenotification_items != nullptr)
    {
        _children["cmnmacmovenotification-items"] = cmnmacmovenotification_items;
    }

    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::LinkItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SnmpItems::InstItems::TrapsItems::LinkItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SnmpItems::InstItems::TrapsItems::LinkItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciscoxcvrmonstatuschg-items" || name == "linkDown-items" || name == "linkUp-items" || name == "extendedlinkDown-items" || name == "extendedlinkUp-items" || name == "cieLinkDown-items" || name == "cieLinkUp-items" || name == "delayedlinkstatechange-items" || name == "cerrdisableinterfaceeventrev1-items" || name == "cmnmacmovenotification-items")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::LinkItems::CiscoxcvrmonstatuschgItems::CiscoxcvrmonstatuschgItems()
    :
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "ciscoxcvrmonstatuschg-items"; yang_parent_name = "link-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::LinkItems::CiscoxcvrmonstatuschgItems::~CiscoxcvrmonstatuschgItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::LinkItems::CiscoxcvrmonstatuschgItems::has_data() const
{
    if (is_presence_container) return true;
    return trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::LinkItems::CiscoxcvrmonstatuschgItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::LinkItems::CiscoxcvrmonstatuschgItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/link-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::LinkItems::CiscoxcvrmonstatuschgItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciscoxcvrmonstatuschg-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::LinkItems::CiscoxcvrmonstatuschgItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::LinkItems::CiscoxcvrmonstatuschgItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::LinkItems::CiscoxcvrmonstatuschgItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::LinkItems::CiscoxcvrmonstatuschgItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trapstatus")
    {
        trapstatus = value;
        trapstatus.value_namespace = name_space;
        trapstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction = value;
        istoggleaction.value_namespace = name_space;
        istoggleaction.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::TrapsItems::LinkItems::CiscoxcvrmonstatuschgItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trapstatus")
    {
        trapstatus.yfilter = yfilter;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::TrapsItems::LinkItems::CiscoxcvrmonstatuschgItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::LinkItems::LinkDownItems::LinkDownItems()
    :
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "linkDown-items"; yang_parent_name = "link-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::LinkItems::LinkDownItems::~LinkDownItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::LinkItems::LinkDownItems::has_data() const
{
    if (is_presence_container) return true;
    return trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::LinkItems::LinkDownItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::LinkItems::LinkDownItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/link-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::LinkItems::LinkDownItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "linkDown-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::LinkItems::LinkDownItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::LinkItems::LinkDownItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::LinkItems::LinkDownItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::LinkItems::LinkDownItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trapstatus")
    {
        trapstatus = value;
        trapstatus.value_namespace = name_space;
        trapstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction = value;
        istoggleaction.value_namespace = name_space;
        istoggleaction.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::TrapsItems::LinkItems::LinkDownItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trapstatus")
    {
        trapstatus.yfilter = yfilter;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::TrapsItems::LinkItems::LinkDownItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::LinkItems::LinkUpItems::LinkUpItems()
    :
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "linkUp-items"; yang_parent_name = "link-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::LinkItems::LinkUpItems::~LinkUpItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::LinkItems::LinkUpItems::has_data() const
{
    if (is_presence_container) return true;
    return trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::LinkItems::LinkUpItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::LinkItems::LinkUpItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/link-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::LinkItems::LinkUpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "linkUp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::LinkItems::LinkUpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::LinkItems::LinkUpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::LinkItems::LinkUpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::LinkItems::LinkUpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trapstatus")
    {
        trapstatus = value;
        trapstatus.value_namespace = name_space;
        trapstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction = value;
        istoggleaction.value_namespace = name_space;
        istoggleaction.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::TrapsItems::LinkItems::LinkUpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trapstatus")
    {
        trapstatus.yfilter = yfilter;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::TrapsItems::LinkItems::LinkUpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::LinkItems::ExtendedlinkDownItems::ExtendedlinkDownItems()
    :
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "extendedlinkDown-items"; yang_parent_name = "link-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::LinkItems::ExtendedlinkDownItems::~ExtendedlinkDownItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::LinkItems::ExtendedlinkDownItems::has_data() const
{
    if (is_presence_container) return true;
    return trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::LinkItems::ExtendedlinkDownItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::LinkItems::ExtendedlinkDownItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/link-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::LinkItems::ExtendedlinkDownItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extendedlinkDown-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::LinkItems::ExtendedlinkDownItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::LinkItems::ExtendedlinkDownItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::LinkItems::ExtendedlinkDownItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::LinkItems::ExtendedlinkDownItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trapstatus")
    {
        trapstatus = value;
        trapstatus.value_namespace = name_space;
        trapstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction = value;
        istoggleaction.value_namespace = name_space;
        istoggleaction.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::TrapsItems::LinkItems::ExtendedlinkDownItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trapstatus")
    {
        trapstatus.yfilter = yfilter;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::TrapsItems::LinkItems::ExtendedlinkDownItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::LinkItems::ExtendedlinkUpItems::ExtendedlinkUpItems()
    :
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "extendedlinkUp-items"; yang_parent_name = "link-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::LinkItems::ExtendedlinkUpItems::~ExtendedlinkUpItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::LinkItems::ExtendedlinkUpItems::has_data() const
{
    if (is_presence_container) return true;
    return trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::LinkItems::ExtendedlinkUpItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::LinkItems::ExtendedlinkUpItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/link-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::LinkItems::ExtendedlinkUpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extendedlinkUp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::LinkItems::ExtendedlinkUpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::LinkItems::ExtendedlinkUpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::LinkItems::ExtendedlinkUpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::LinkItems::ExtendedlinkUpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trapstatus")
    {
        trapstatus = value;
        trapstatus.value_namespace = name_space;
        trapstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction = value;
        istoggleaction.value_namespace = name_space;
        istoggleaction.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::TrapsItems::LinkItems::ExtendedlinkUpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trapstatus")
    {
        trapstatus.yfilter = yfilter;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::TrapsItems::LinkItems::ExtendedlinkUpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::LinkItems::CieLinkDownItems::CieLinkDownItems()
    :
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "cieLinkDown-items"; yang_parent_name = "link-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::LinkItems::CieLinkDownItems::~CieLinkDownItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::LinkItems::CieLinkDownItems::has_data() const
{
    if (is_presence_container) return true;
    return trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::LinkItems::CieLinkDownItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::LinkItems::CieLinkDownItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/link-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::LinkItems::CieLinkDownItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cieLinkDown-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::LinkItems::CieLinkDownItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::LinkItems::CieLinkDownItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::LinkItems::CieLinkDownItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::LinkItems::CieLinkDownItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trapstatus")
    {
        trapstatus = value;
        trapstatus.value_namespace = name_space;
        trapstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction = value;
        istoggleaction.value_namespace = name_space;
        istoggleaction.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::TrapsItems::LinkItems::CieLinkDownItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trapstatus")
    {
        trapstatus.yfilter = yfilter;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::TrapsItems::LinkItems::CieLinkDownItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::LinkItems::CieLinkUpItems::CieLinkUpItems()
    :
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "cieLinkUp-items"; yang_parent_name = "link-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::LinkItems::CieLinkUpItems::~CieLinkUpItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::LinkItems::CieLinkUpItems::has_data() const
{
    if (is_presence_container) return true;
    return trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::LinkItems::CieLinkUpItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::LinkItems::CieLinkUpItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/link-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::LinkItems::CieLinkUpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cieLinkUp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::LinkItems::CieLinkUpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::LinkItems::CieLinkUpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::LinkItems::CieLinkUpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::LinkItems::CieLinkUpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trapstatus")
    {
        trapstatus = value;
        trapstatus.value_namespace = name_space;
        trapstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction = value;
        istoggleaction.value_namespace = name_space;
        istoggleaction.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::TrapsItems::LinkItems::CieLinkUpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trapstatus")
    {
        trapstatus.yfilter = yfilter;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::TrapsItems::LinkItems::CieLinkUpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::LinkItems::DelayedlinkstatechangeItems::DelayedlinkstatechangeItems()
    :
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "delayedlinkstatechange-items"; yang_parent_name = "link-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::LinkItems::DelayedlinkstatechangeItems::~DelayedlinkstatechangeItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::LinkItems::DelayedlinkstatechangeItems::has_data() const
{
    if (is_presence_container) return true;
    return trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::LinkItems::DelayedlinkstatechangeItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::LinkItems::DelayedlinkstatechangeItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/link-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::LinkItems::DelayedlinkstatechangeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delayedlinkstatechange-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::LinkItems::DelayedlinkstatechangeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::LinkItems::DelayedlinkstatechangeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::LinkItems::DelayedlinkstatechangeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::LinkItems::DelayedlinkstatechangeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trapstatus")
    {
        trapstatus = value;
        trapstatus.value_namespace = name_space;
        trapstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction = value;
        istoggleaction.value_namespace = name_space;
        istoggleaction.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::TrapsItems::LinkItems::DelayedlinkstatechangeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trapstatus")
    {
        trapstatus.yfilter = yfilter;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::TrapsItems::LinkItems::DelayedlinkstatechangeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::LinkItems::Cerrdisableinterfaceeventrev1Items::Cerrdisableinterfaceeventrev1Items()
    :
    togglestate{YType::uint16, "toggleState"},
    togglestatecount{YType::uint16, "toggleStateCount"},
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "cerrdisableinterfaceeventrev1-items"; yang_parent_name = "link-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::LinkItems::Cerrdisableinterfaceeventrev1Items::~Cerrdisableinterfaceeventrev1Items()
{
}

bool System::SnmpItems::InstItems::TrapsItems::LinkItems::Cerrdisableinterfaceeventrev1Items::has_data() const
{
    if (is_presence_container) return true;
    return togglestate.is_set
	|| togglestatecount.is_set
	|| trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::LinkItems::Cerrdisableinterfaceeventrev1Items::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(togglestate.yfilter)
	|| ydk::is_set(togglestatecount.yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::LinkItems::Cerrdisableinterfaceeventrev1Items::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/link-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::LinkItems::Cerrdisableinterfaceeventrev1Items::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cerrdisableinterfaceeventrev1-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::LinkItems::Cerrdisableinterfaceeventrev1Items::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (togglestate.is_set || is_set(togglestate.yfilter)) leaf_name_data.push_back(togglestate.get_name_leafdata());
    if (togglestatecount.is_set || is_set(togglestatecount.yfilter)) leaf_name_data.push_back(togglestatecount.get_name_leafdata());
    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::LinkItems::Cerrdisableinterfaceeventrev1Items::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::LinkItems::Cerrdisableinterfaceeventrev1Items::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::LinkItems::Cerrdisableinterfaceeventrev1Items::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "toggleState")
    {
        togglestate = value;
        togglestate.value_namespace = name_space;
        togglestate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount = value;
        togglestatecount.value_namespace = name_space;
        togglestatecount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trapstatus")
    {
        trapstatus = value;
        trapstatus.value_namespace = name_space;
        trapstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction = value;
        istoggleaction.value_namespace = name_space;
        istoggleaction.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::TrapsItems::LinkItems::Cerrdisableinterfaceeventrev1Items::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "toggleState")
    {
        togglestate.yfilter = yfilter;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount.yfilter = yfilter;
    }
    if(value_path == "trapstatus")
    {
        trapstatus.yfilter = yfilter;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::TrapsItems::LinkItems::Cerrdisableinterfaceeventrev1Items::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "toggleState" || name == "toggleStateCount" || name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::LinkItems::CmnmacmovenotificationItems::CmnmacmovenotificationItems()
    :
    togglestate{YType::uint16, "toggleState"},
    togglestatecount{YType::uint16, "toggleStateCount"},
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "cmnmacmovenotification-items"; yang_parent_name = "link-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::LinkItems::CmnmacmovenotificationItems::~CmnmacmovenotificationItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::LinkItems::CmnmacmovenotificationItems::has_data() const
{
    if (is_presence_container) return true;
    return togglestate.is_set
	|| togglestatecount.is_set
	|| trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::LinkItems::CmnmacmovenotificationItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(togglestate.yfilter)
	|| ydk::is_set(togglestatecount.yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::LinkItems::CmnmacmovenotificationItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/link-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::LinkItems::CmnmacmovenotificationItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cmnmacmovenotification-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::LinkItems::CmnmacmovenotificationItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (togglestate.is_set || is_set(togglestate.yfilter)) leaf_name_data.push_back(togglestate.get_name_leafdata());
    if (togglestatecount.is_set || is_set(togglestatecount.yfilter)) leaf_name_data.push_back(togglestatecount.get_name_leafdata());
    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::LinkItems::CmnmacmovenotificationItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::LinkItems::CmnmacmovenotificationItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::LinkItems::CmnmacmovenotificationItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "toggleState")
    {
        togglestate = value;
        togglestate.value_namespace = name_space;
        togglestate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount = value;
        togglestatecount.value_namespace = name_space;
        togglestatecount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trapstatus")
    {
        trapstatus = value;
        trapstatus.value_namespace = name_space;
        trapstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction = value;
        istoggleaction.value_namespace = name_space;
        istoggleaction.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::TrapsItems::LinkItems::CmnmacmovenotificationItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "toggleState")
    {
        togglestate.yfilter = yfilter;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount.yfilter = yfilter;
    }
    if(value_path == "trapstatus")
    {
        trapstatus.yfilter = yfilter;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::TrapsItems::LinkItems::CmnmacmovenotificationItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "toggleState" || name == "toggleStateCount" || name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::LldpItems::LldpItems()
    :
    lldpremtableschange_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::LldpItems::LldpRemTablesChangeItems>())
{
    lldpremtableschange_items->parent = this;

    yang_name = "lldp-items"; yang_parent_name = "traps-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::LldpItems::~LldpItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::LldpItems::has_data() const
{
    if (is_presence_container) return true;
    return (lldpremtableschange_items !=  nullptr && lldpremtableschange_items->has_data());
}

bool System::SnmpItems::InstItems::TrapsItems::LldpItems::has_operation() const
{
    return is_set(yfilter)
	|| (lldpremtableschange_items !=  nullptr && lldpremtableschange_items->has_operation());
}

std::string System::SnmpItems::InstItems::TrapsItems::LldpItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::LldpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lldp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::LldpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::LldpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lldpRemTablesChange-items")
    {
        if(lldpremtableschange_items == nullptr)
        {
            lldpremtableschange_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::LldpItems::LldpRemTablesChangeItems>();
        }
        return lldpremtableschange_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::LldpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(lldpremtableschange_items != nullptr)
    {
        _children["lldpRemTablesChange-items"] = lldpremtableschange_items;
    }

    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::LldpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SnmpItems::InstItems::TrapsItems::LldpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SnmpItems::InstItems::TrapsItems::LldpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lldpRemTablesChange-items")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::LldpItems::LldpRemTablesChangeItems::LldpRemTablesChangeItems()
    :
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "lldpRemTablesChange-items"; yang_parent_name = "lldp-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::LldpItems::LldpRemTablesChangeItems::~LldpRemTablesChangeItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::LldpItems::LldpRemTablesChangeItems::has_data() const
{
    if (is_presence_container) return true;
    return trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::LldpItems::LldpRemTablesChangeItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::LldpItems::LldpRemTablesChangeItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/lldp-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::LldpItems::LldpRemTablesChangeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lldpRemTablesChange-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::LldpItems::LldpRemTablesChangeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::LldpItems::LldpRemTablesChangeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::LldpItems::LldpRemTablesChangeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::LldpItems::LldpRemTablesChangeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trapstatus")
    {
        trapstatus = value;
        trapstatus.value_namespace = name_space;
        trapstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction = value;
        istoggleaction.value_namespace = name_space;
        istoggleaction.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::TrapsItems::LldpItems::LldpRemTablesChangeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trapstatus")
    {
        trapstatus.yfilter = yfilter;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::TrapsItems::LldpItems::LldpRemTablesChangeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::MsdpItems::MsdpItems()
    :
    msdpbackwardtransition_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::MsdpItems::MsdpBackwardTransitionItems>())
{
    msdpbackwardtransition_items->parent = this;

    yang_name = "msdp-items"; yang_parent_name = "traps-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::MsdpItems::~MsdpItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::MsdpItems::has_data() const
{
    if (is_presence_container) return true;
    return (msdpbackwardtransition_items !=  nullptr && msdpbackwardtransition_items->has_data());
}

bool System::SnmpItems::InstItems::TrapsItems::MsdpItems::has_operation() const
{
    return is_set(yfilter)
	|| (msdpbackwardtransition_items !=  nullptr && msdpbackwardtransition_items->has_operation());
}

std::string System::SnmpItems::InstItems::TrapsItems::MsdpItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::MsdpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "msdp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::MsdpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::MsdpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "msdpBackwardTransition-items")
    {
        if(msdpbackwardtransition_items == nullptr)
        {
            msdpbackwardtransition_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::MsdpItems::MsdpBackwardTransitionItems>();
        }
        return msdpbackwardtransition_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::MsdpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(msdpbackwardtransition_items != nullptr)
    {
        _children["msdpBackwardTransition-items"] = msdpbackwardtransition_items;
    }

    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::MsdpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SnmpItems::InstItems::TrapsItems::MsdpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SnmpItems::InstItems::TrapsItems::MsdpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "msdpBackwardTransition-items")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::MsdpItems::MsdpBackwardTransitionItems::MsdpBackwardTransitionItems()
    :
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "msdpBackwardTransition-items"; yang_parent_name = "msdp-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::MsdpItems::MsdpBackwardTransitionItems::~MsdpBackwardTransitionItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::MsdpItems::MsdpBackwardTransitionItems::has_data() const
{
    if (is_presence_container) return true;
    return trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::MsdpItems::MsdpBackwardTransitionItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::MsdpItems::MsdpBackwardTransitionItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/msdp-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::MsdpItems::MsdpBackwardTransitionItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "msdpBackwardTransition-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::MsdpItems::MsdpBackwardTransitionItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::MsdpItems::MsdpBackwardTransitionItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::MsdpItems::MsdpBackwardTransitionItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::MsdpItems::MsdpBackwardTransitionItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trapstatus")
    {
        trapstatus = value;
        trapstatus.value_namespace = name_space;
        trapstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction = value;
        istoggleaction.value_namespace = name_space;
        istoggleaction.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::TrapsItems::MsdpItems::MsdpBackwardTransitionItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trapstatus")
    {
        trapstatus.yfilter = yfilter;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::TrapsItems::MsdpItems::MsdpBackwardTransitionItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::MmodeItems::MmodeItems()
    :
    csemaintmodechangenotify_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::MmodeItems::CseMaintModeChangeNotifyItems>())
    , csenormalmodechangenotify_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::MmodeItems::CseNormalModeChangeNotifyItems>())
{
    csemaintmodechangenotify_items->parent = this;
    csenormalmodechangenotify_items->parent = this;

    yang_name = "mmode-items"; yang_parent_name = "traps-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::MmodeItems::~MmodeItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::MmodeItems::has_data() const
{
    if (is_presence_container) return true;
    return (csemaintmodechangenotify_items !=  nullptr && csemaintmodechangenotify_items->has_data())
	|| (csenormalmodechangenotify_items !=  nullptr && csenormalmodechangenotify_items->has_data());
}

bool System::SnmpItems::InstItems::TrapsItems::MmodeItems::has_operation() const
{
    return is_set(yfilter)
	|| (csemaintmodechangenotify_items !=  nullptr && csemaintmodechangenotify_items->has_operation())
	|| (csenormalmodechangenotify_items !=  nullptr && csenormalmodechangenotify_items->has_operation());
}

std::string System::SnmpItems::InstItems::TrapsItems::MmodeItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::MmodeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mmode-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::MmodeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::MmodeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cseMaintModeChangeNotify-items")
    {
        if(csemaintmodechangenotify_items == nullptr)
        {
            csemaintmodechangenotify_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::MmodeItems::CseMaintModeChangeNotifyItems>();
        }
        return csemaintmodechangenotify_items;
    }

    if(child_yang_name == "cseNormalModeChangeNotify-items")
    {
        if(csenormalmodechangenotify_items == nullptr)
        {
            csenormalmodechangenotify_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::MmodeItems::CseNormalModeChangeNotifyItems>();
        }
        return csenormalmodechangenotify_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::MmodeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(csemaintmodechangenotify_items != nullptr)
    {
        _children["cseMaintModeChangeNotify-items"] = csemaintmodechangenotify_items;
    }

    if(csenormalmodechangenotify_items != nullptr)
    {
        _children["cseNormalModeChangeNotify-items"] = csenormalmodechangenotify_items;
    }

    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::MmodeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SnmpItems::InstItems::TrapsItems::MmodeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SnmpItems::InstItems::TrapsItems::MmodeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cseMaintModeChangeNotify-items" || name == "cseNormalModeChangeNotify-items")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::MmodeItems::CseMaintModeChangeNotifyItems::CseMaintModeChangeNotifyItems()
    :
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "cseMaintModeChangeNotify-items"; yang_parent_name = "mmode-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::MmodeItems::CseMaintModeChangeNotifyItems::~CseMaintModeChangeNotifyItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::MmodeItems::CseMaintModeChangeNotifyItems::has_data() const
{
    if (is_presence_container) return true;
    return trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::MmodeItems::CseMaintModeChangeNotifyItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::MmodeItems::CseMaintModeChangeNotifyItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/mmode-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::MmodeItems::CseMaintModeChangeNotifyItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cseMaintModeChangeNotify-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::MmodeItems::CseMaintModeChangeNotifyItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::MmodeItems::CseMaintModeChangeNotifyItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::MmodeItems::CseMaintModeChangeNotifyItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::MmodeItems::CseMaintModeChangeNotifyItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trapstatus")
    {
        trapstatus = value;
        trapstatus.value_namespace = name_space;
        trapstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction = value;
        istoggleaction.value_namespace = name_space;
        istoggleaction.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::TrapsItems::MmodeItems::CseMaintModeChangeNotifyItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trapstatus")
    {
        trapstatus.yfilter = yfilter;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::TrapsItems::MmodeItems::CseMaintModeChangeNotifyItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::MmodeItems::CseNormalModeChangeNotifyItems::CseNormalModeChangeNotifyItems()
    :
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "cseNormalModeChangeNotify-items"; yang_parent_name = "mmode-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::MmodeItems::CseNormalModeChangeNotifyItems::~CseNormalModeChangeNotifyItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::MmodeItems::CseNormalModeChangeNotifyItems::has_data() const
{
    if (is_presence_container) return true;
    return trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::MmodeItems::CseNormalModeChangeNotifyItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::MmodeItems::CseNormalModeChangeNotifyItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/mmode-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::MmodeItems::CseNormalModeChangeNotifyItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cseNormalModeChangeNotify-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::MmodeItems::CseNormalModeChangeNotifyItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::MmodeItems::CseNormalModeChangeNotifyItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::MmodeItems::CseNormalModeChangeNotifyItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::MmodeItems::CseNormalModeChangeNotifyItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trapstatus")
    {
        trapstatus = value;
        trapstatus.value_namespace = name_space;
        trapstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction = value;
        istoggleaction.value_namespace = name_space;
        istoggleaction.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::TrapsItems::MmodeItems::CseNormalModeChangeNotifyItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trapstatus")
    {
        trapstatus.yfilter = yfilter;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::TrapsItems::MmodeItems::CseNormalModeChangeNotifyItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::PimItems::PimItems()
    :
    pimneighborloss_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::PimItems::PimNeighborLossItems>())
{
    pimneighborloss_items->parent = this;

    yang_name = "pim-items"; yang_parent_name = "traps-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::PimItems::~PimItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::PimItems::has_data() const
{
    if (is_presence_container) return true;
    return (pimneighborloss_items !=  nullptr && pimneighborloss_items->has_data());
}

bool System::SnmpItems::InstItems::TrapsItems::PimItems::has_operation() const
{
    return is_set(yfilter)
	|| (pimneighborloss_items !=  nullptr && pimneighborloss_items->has_operation());
}

std::string System::SnmpItems::InstItems::TrapsItems::PimItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::PimItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pim-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::PimItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::PimItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pimNeighborLoss-items")
    {
        if(pimneighborloss_items == nullptr)
        {
            pimneighborloss_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::PimItems::PimNeighborLossItems>();
        }
        return pimneighborloss_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::PimItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(pimneighborloss_items != nullptr)
    {
        _children["pimNeighborLoss-items"] = pimneighborloss_items;
    }

    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::PimItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SnmpItems::InstItems::TrapsItems::PimItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SnmpItems::InstItems::TrapsItems::PimItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pimNeighborLoss-items")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::PimItems::PimNeighborLossItems::PimNeighborLossItems()
    :
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "pimNeighborLoss-items"; yang_parent_name = "pim-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::PimItems::PimNeighborLossItems::~PimNeighborLossItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::PimItems::PimNeighborLossItems::has_data() const
{
    if (is_presence_container) return true;
    return trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::PimItems::PimNeighborLossItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::PimItems::PimNeighborLossItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/pim-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::PimItems::PimNeighborLossItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pimNeighborLoss-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::PimItems::PimNeighborLossItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::PimItems::PimNeighborLossItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::PimItems::PimNeighborLossItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::PimItems::PimNeighborLossItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trapstatus")
    {
        trapstatus = value;
        trapstatus.value_namespace = name_space;
        trapstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction = value;
        istoggleaction.value_namespace = name_space;
        istoggleaction.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::TrapsItems::PimItems::PimNeighborLossItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trapstatus")
    {
        trapstatus.yfilter = yfilter;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::TrapsItems::PimItems::PimNeighborLossItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::RfItems::RfItems()
    :
    redundancyframework_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::RfItems::RedundancyframeworkItems>())
{
    redundancyframework_items->parent = this;

    yang_name = "rf-items"; yang_parent_name = "traps-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::RfItems::~RfItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::RfItems::has_data() const
{
    if (is_presence_container) return true;
    return (redundancyframework_items !=  nullptr && redundancyframework_items->has_data());
}

bool System::SnmpItems::InstItems::TrapsItems::RfItems::has_operation() const
{
    return is_set(yfilter)
	|| (redundancyframework_items !=  nullptr && redundancyframework_items->has_operation());
}

std::string System::SnmpItems::InstItems::TrapsItems::RfItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::RfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::RfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::RfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redundancyframework-items")
    {
        if(redundancyframework_items == nullptr)
        {
            redundancyframework_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::RfItems::RedundancyframeworkItems>();
        }
        return redundancyframework_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::RfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(redundancyframework_items != nullptr)
    {
        _children["redundancyframework-items"] = redundancyframework_items;
    }

    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::RfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SnmpItems::InstItems::TrapsItems::RfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SnmpItems::InstItems::TrapsItems::RfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redundancyframework-items")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::RfItems::RedundancyframeworkItems::RedundancyframeworkItems()
    :
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "redundancyframework-items"; yang_parent_name = "rf-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::RfItems::RedundancyframeworkItems::~RedundancyframeworkItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::RfItems::RedundancyframeworkItems::has_data() const
{
    if (is_presence_container) return true;
    return trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::RfItems::RedundancyframeworkItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::RfItems::RedundancyframeworkItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/rf-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::RfItems::RedundancyframeworkItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redundancyframework-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::RfItems::RedundancyframeworkItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::RfItems::RedundancyframeworkItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::RfItems::RedundancyframeworkItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::RfItems::RedundancyframeworkItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trapstatus")
    {
        trapstatus = value;
        trapstatus.value_namespace = name_space;
        trapstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction = value;
        istoggleaction.value_namespace = name_space;
        istoggleaction.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::TrapsItems::RfItems::RedundancyframeworkItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trapstatus")
    {
        trapstatus.yfilter = yfilter;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::TrapsItems::RfItems::RedundancyframeworkItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::RmonItems::RmonItems()
    :
    risingalarm_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::RmonItems::RisingAlarmItems>())
    , fallingalarm_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::RmonItems::FallingAlarmItems>())
    , hcrisingalarm_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::RmonItems::HcRisingAlarmItems>())
    , hcfallingalarm_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::RmonItems::HcFallingAlarmItems>())
{
    risingalarm_items->parent = this;
    fallingalarm_items->parent = this;
    hcrisingalarm_items->parent = this;
    hcfallingalarm_items->parent = this;

    yang_name = "rmon-items"; yang_parent_name = "traps-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::RmonItems::~RmonItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::RmonItems::has_data() const
{
    if (is_presence_container) return true;
    return (risingalarm_items !=  nullptr && risingalarm_items->has_data())
	|| (fallingalarm_items !=  nullptr && fallingalarm_items->has_data())
	|| (hcrisingalarm_items !=  nullptr && hcrisingalarm_items->has_data())
	|| (hcfallingalarm_items !=  nullptr && hcfallingalarm_items->has_data());
}

bool System::SnmpItems::InstItems::TrapsItems::RmonItems::has_operation() const
{
    return is_set(yfilter)
	|| (risingalarm_items !=  nullptr && risingalarm_items->has_operation())
	|| (fallingalarm_items !=  nullptr && fallingalarm_items->has_operation())
	|| (hcrisingalarm_items !=  nullptr && hcrisingalarm_items->has_operation())
	|| (hcfallingalarm_items !=  nullptr && hcfallingalarm_items->has_operation());
}

std::string System::SnmpItems::InstItems::TrapsItems::RmonItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::RmonItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rmon-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::RmonItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::RmonItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "risingAlarm-items")
    {
        if(risingalarm_items == nullptr)
        {
            risingalarm_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::RmonItems::RisingAlarmItems>();
        }
        return risingalarm_items;
    }

    if(child_yang_name == "fallingAlarm-items")
    {
        if(fallingalarm_items == nullptr)
        {
            fallingalarm_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::RmonItems::FallingAlarmItems>();
        }
        return fallingalarm_items;
    }

    if(child_yang_name == "hcRisingAlarm-items")
    {
        if(hcrisingalarm_items == nullptr)
        {
            hcrisingalarm_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::RmonItems::HcRisingAlarmItems>();
        }
        return hcrisingalarm_items;
    }

    if(child_yang_name == "hcFallingAlarm-items")
    {
        if(hcfallingalarm_items == nullptr)
        {
            hcfallingalarm_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::RmonItems::HcFallingAlarmItems>();
        }
        return hcfallingalarm_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::RmonItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(risingalarm_items != nullptr)
    {
        _children["risingAlarm-items"] = risingalarm_items;
    }

    if(fallingalarm_items != nullptr)
    {
        _children["fallingAlarm-items"] = fallingalarm_items;
    }

    if(hcrisingalarm_items != nullptr)
    {
        _children["hcRisingAlarm-items"] = hcrisingalarm_items;
    }

    if(hcfallingalarm_items != nullptr)
    {
        _children["hcFallingAlarm-items"] = hcfallingalarm_items;
    }

    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::RmonItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SnmpItems::InstItems::TrapsItems::RmonItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SnmpItems::InstItems::TrapsItems::RmonItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "risingAlarm-items" || name == "fallingAlarm-items" || name == "hcRisingAlarm-items" || name == "hcFallingAlarm-items")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::RmonItems::RisingAlarmItems::RisingAlarmItems()
    :
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "risingAlarm-items"; yang_parent_name = "rmon-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::RmonItems::RisingAlarmItems::~RisingAlarmItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::RmonItems::RisingAlarmItems::has_data() const
{
    if (is_presence_container) return true;
    return trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::RmonItems::RisingAlarmItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::RmonItems::RisingAlarmItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/rmon-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::RmonItems::RisingAlarmItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "risingAlarm-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::RmonItems::RisingAlarmItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::RmonItems::RisingAlarmItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::RmonItems::RisingAlarmItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::RmonItems::RisingAlarmItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trapstatus")
    {
        trapstatus = value;
        trapstatus.value_namespace = name_space;
        trapstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction = value;
        istoggleaction.value_namespace = name_space;
        istoggleaction.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::TrapsItems::RmonItems::RisingAlarmItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trapstatus")
    {
        trapstatus.yfilter = yfilter;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::TrapsItems::RmonItems::RisingAlarmItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::RmonItems::FallingAlarmItems::FallingAlarmItems()
    :
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "fallingAlarm-items"; yang_parent_name = "rmon-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::RmonItems::FallingAlarmItems::~FallingAlarmItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::RmonItems::FallingAlarmItems::has_data() const
{
    if (is_presence_container) return true;
    return trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::RmonItems::FallingAlarmItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::RmonItems::FallingAlarmItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/rmon-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::RmonItems::FallingAlarmItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fallingAlarm-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::RmonItems::FallingAlarmItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::RmonItems::FallingAlarmItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::RmonItems::FallingAlarmItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::RmonItems::FallingAlarmItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trapstatus")
    {
        trapstatus = value;
        trapstatus.value_namespace = name_space;
        trapstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction = value;
        istoggleaction.value_namespace = name_space;
        istoggleaction.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::TrapsItems::RmonItems::FallingAlarmItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trapstatus")
    {
        trapstatus.yfilter = yfilter;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::TrapsItems::RmonItems::FallingAlarmItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::RmonItems::HcRisingAlarmItems::HcRisingAlarmItems()
    :
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "hcRisingAlarm-items"; yang_parent_name = "rmon-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::RmonItems::HcRisingAlarmItems::~HcRisingAlarmItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::RmonItems::HcRisingAlarmItems::has_data() const
{
    if (is_presence_container) return true;
    return trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::RmonItems::HcRisingAlarmItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::RmonItems::HcRisingAlarmItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/rmon-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::RmonItems::HcRisingAlarmItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hcRisingAlarm-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::RmonItems::HcRisingAlarmItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::RmonItems::HcRisingAlarmItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::RmonItems::HcRisingAlarmItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::RmonItems::HcRisingAlarmItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trapstatus")
    {
        trapstatus = value;
        trapstatus.value_namespace = name_space;
        trapstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction = value;
        istoggleaction.value_namespace = name_space;
        istoggleaction.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::TrapsItems::RmonItems::HcRisingAlarmItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trapstatus")
    {
        trapstatus.yfilter = yfilter;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::TrapsItems::RmonItems::HcRisingAlarmItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::RmonItems::HcFallingAlarmItems::HcFallingAlarmItems()
    :
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "hcFallingAlarm-items"; yang_parent_name = "rmon-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::RmonItems::HcFallingAlarmItems::~HcFallingAlarmItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::RmonItems::HcFallingAlarmItems::has_data() const
{
    if (is_presence_container) return true;
    return trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::RmonItems::HcFallingAlarmItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::RmonItems::HcFallingAlarmItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/rmon-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::RmonItems::HcFallingAlarmItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hcFallingAlarm-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::RmonItems::HcFallingAlarmItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::RmonItems::HcFallingAlarmItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::RmonItems::HcFallingAlarmItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::RmonItems::HcFallingAlarmItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trapstatus")
    {
        trapstatus = value;
        trapstatus.value_namespace = name_space;
        trapstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction = value;
        istoggleaction.value_namespace = name_space;
        istoggleaction.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::TrapsItems::RmonItems::HcFallingAlarmItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trapstatus")
    {
        trapstatus.yfilter = yfilter;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::TrapsItems::RmonItems::HcFallingAlarmItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::SnmpItems_::SnmpItems_()
    :
    authentication_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::SnmpItems_::AuthenticationItems>())
{
    authentication_items->parent = this;

    yang_name = "snmp-items"; yang_parent_name = "traps-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::SnmpItems_::~SnmpItems_()
{
}

bool System::SnmpItems::InstItems::TrapsItems::SnmpItems_::has_data() const
{
    if (is_presence_container) return true;
    return (authentication_items !=  nullptr && authentication_items->has_data());
}

bool System::SnmpItems::InstItems::TrapsItems::SnmpItems_::has_operation() const
{
    return is_set(yfilter)
	|| (authentication_items !=  nullptr && authentication_items->has_operation());
}

std::string System::SnmpItems::InstItems::TrapsItems::SnmpItems_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::SnmpItems_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snmp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::SnmpItems_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::SnmpItems_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication-items")
    {
        if(authentication_items == nullptr)
        {
            authentication_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::SnmpItems_::AuthenticationItems>();
        }
        return authentication_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::SnmpItems_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(authentication_items != nullptr)
    {
        _children["authentication-items"] = authentication_items;
    }

    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::SnmpItems_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SnmpItems::InstItems::TrapsItems::SnmpItems_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SnmpItems::InstItems::TrapsItems::SnmpItems_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication-items")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::SnmpItems_::AuthenticationItems::AuthenticationItems()
    :
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "authentication-items"; yang_parent_name = "snmp-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::SnmpItems_::AuthenticationItems::~AuthenticationItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::SnmpItems_::AuthenticationItems::has_data() const
{
    if (is_presence_container) return true;
    return trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::SnmpItems_::AuthenticationItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::SnmpItems_::AuthenticationItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/snmp-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::SnmpItems_::AuthenticationItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::SnmpItems_::AuthenticationItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::SnmpItems_::AuthenticationItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::SnmpItems_::AuthenticationItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::SnmpItems_::AuthenticationItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trapstatus")
    {
        trapstatus = value;
        trapstatus.value_namespace = name_space;
        trapstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction = value;
        istoggleaction.value_namespace = name_space;
        istoggleaction.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::TrapsItems::SnmpItems_::AuthenticationItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trapstatus")
    {
        trapstatus.yfilter = yfilter;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::TrapsItems::SnmpItems_::AuthenticationItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::StpxItems::StpxItems()
    :
    inconsistency_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::StpxItems::InconsistencyItems>())
    , rootinconsistency_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::StpxItems::RootinconsistencyItems>())
    , loopinconsistency_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::StpxItems::LoopinconsistencyItems>())
{
    inconsistency_items->parent = this;
    rootinconsistency_items->parent = this;
    loopinconsistency_items->parent = this;

    yang_name = "stpx-items"; yang_parent_name = "traps-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::StpxItems::~StpxItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::StpxItems::has_data() const
{
    if (is_presence_container) return true;
    return (inconsistency_items !=  nullptr && inconsistency_items->has_data())
	|| (rootinconsistency_items !=  nullptr && rootinconsistency_items->has_data())
	|| (loopinconsistency_items !=  nullptr && loopinconsistency_items->has_data());
}

bool System::SnmpItems::InstItems::TrapsItems::StpxItems::has_operation() const
{
    return is_set(yfilter)
	|| (inconsistency_items !=  nullptr && inconsistency_items->has_operation())
	|| (rootinconsistency_items !=  nullptr && rootinconsistency_items->has_operation())
	|| (loopinconsistency_items !=  nullptr && loopinconsistency_items->has_operation());
}

std::string System::SnmpItems::InstItems::TrapsItems::StpxItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::StpxItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpx-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::StpxItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::StpxItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inconsistency-items")
    {
        if(inconsistency_items == nullptr)
        {
            inconsistency_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::StpxItems::InconsistencyItems>();
        }
        return inconsistency_items;
    }

    if(child_yang_name == "rootinconsistency-items")
    {
        if(rootinconsistency_items == nullptr)
        {
            rootinconsistency_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::StpxItems::RootinconsistencyItems>();
        }
        return rootinconsistency_items;
    }

    if(child_yang_name == "loopinconsistency-items")
    {
        if(loopinconsistency_items == nullptr)
        {
            loopinconsistency_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::StpxItems::LoopinconsistencyItems>();
        }
        return loopinconsistency_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::StpxItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(inconsistency_items != nullptr)
    {
        _children["inconsistency-items"] = inconsistency_items;
    }

    if(rootinconsistency_items != nullptr)
    {
        _children["rootinconsistency-items"] = rootinconsistency_items;
    }

    if(loopinconsistency_items != nullptr)
    {
        _children["loopinconsistency-items"] = loopinconsistency_items;
    }

    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::StpxItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SnmpItems::InstItems::TrapsItems::StpxItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SnmpItems::InstItems::TrapsItems::StpxItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inconsistency-items" || name == "rootinconsistency-items" || name == "loopinconsistency-items")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::StpxItems::InconsistencyItems::InconsistencyItems()
    :
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "inconsistency-items"; yang_parent_name = "stpx-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::StpxItems::InconsistencyItems::~InconsistencyItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::StpxItems::InconsistencyItems::has_data() const
{
    if (is_presence_container) return true;
    return trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::StpxItems::InconsistencyItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::StpxItems::InconsistencyItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/stpx-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::StpxItems::InconsistencyItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inconsistency-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::StpxItems::InconsistencyItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::StpxItems::InconsistencyItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::StpxItems::InconsistencyItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::StpxItems::InconsistencyItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trapstatus")
    {
        trapstatus = value;
        trapstatus.value_namespace = name_space;
        trapstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction = value;
        istoggleaction.value_namespace = name_space;
        istoggleaction.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::TrapsItems::StpxItems::InconsistencyItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trapstatus")
    {
        trapstatus.yfilter = yfilter;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::TrapsItems::StpxItems::InconsistencyItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::StpxItems::RootinconsistencyItems::RootinconsistencyItems()
    :
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "rootinconsistency-items"; yang_parent_name = "stpx-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::StpxItems::RootinconsistencyItems::~RootinconsistencyItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::StpxItems::RootinconsistencyItems::has_data() const
{
    if (is_presence_container) return true;
    return trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::StpxItems::RootinconsistencyItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::StpxItems::RootinconsistencyItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/stpx-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::StpxItems::RootinconsistencyItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rootinconsistency-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::StpxItems::RootinconsistencyItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::StpxItems::RootinconsistencyItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::StpxItems::RootinconsistencyItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::StpxItems::RootinconsistencyItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trapstatus")
    {
        trapstatus = value;
        trapstatus.value_namespace = name_space;
        trapstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction = value;
        istoggleaction.value_namespace = name_space;
        istoggleaction.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::TrapsItems::StpxItems::RootinconsistencyItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trapstatus")
    {
        trapstatus.yfilter = yfilter;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::TrapsItems::StpxItems::RootinconsistencyItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::StpxItems::LoopinconsistencyItems::LoopinconsistencyItems()
    :
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "loopinconsistency-items"; yang_parent_name = "stpx-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::StpxItems::LoopinconsistencyItems::~LoopinconsistencyItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::StpxItems::LoopinconsistencyItems::has_data() const
{
    if (is_presence_container) return true;
    return trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::StpxItems::LoopinconsistencyItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::StpxItems::LoopinconsistencyItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/stpx-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::StpxItems::LoopinconsistencyItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "loopinconsistency-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::StpxItems::LoopinconsistencyItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::StpxItems::LoopinconsistencyItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::StpxItems::LoopinconsistencyItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::StpxItems::LoopinconsistencyItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trapstatus")
    {
        trapstatus = value;
        trapstatus.value_namespace = name_space;
        trapstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction = value;
        istoggleaction.value_namespace = name_space;
        istoggleaction.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::TrapsItems::StpxItems::LoopinconsistencyItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trapstatus")
    {
        trapstatus.yfilter = yfilter;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::TrapsItems::StpxItems::LoopinconsistencyItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::SysmgrItems::SysmgrItems()
    :
    csefailswcorenotifyextended_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::SysmgrItems::CseFailSwCoreNotifyExtendedItems>())
{
    csefailswcorenotifyextended_items->parent = this;

    yang_name = "sysmgr-items"; yang_parent_name = "traps-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::SysmgrItems::~SysmgrItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::SysmgrItems::has_data() const
{
    if (is_presence_container) return true;
    return (csefailswcorenotifyextended_items !=  nullptr && csefailswcorenotifyextended_items->has_data());
}

bool System::SnmpItems::InstItems::TrapsItems::SysmgrItems::has_operation() const
{
    return is_set(yfilter)
	|| (csefailswcorenotifyextended_items !=  nullptr && csefailswcorenotifyextended_items->has_operation());
}

std::string System::SnmpItems::InstItems::TrapsItems::SysmgrItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::SysmgrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sysmgr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::SysmgrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::SysmgrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cseFailSwCoreNotifyExtended-items")
    {
        if(csefailswcorenotifyextended_items == nullptr)
        {
            csefailswcorenotifyextended_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::SysmgrItems::CseFailSwCoreNotifyExtendedItems>();
        }
        return csefailswcorenotifyextended_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::SysmgrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(csefailswcorenotifyextended_items != nullptr)
    {
        _children["cseFailSwCoreNotifyExtended-items"] = csefailswcorenotifyextended_items;
    }

    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::SysmgrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SnmpItems::InstItems::TrapsItems::SysmgrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SnmpItems::InstItems::TrapsItems::SysmgrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cseFailSwCoreNotifyExtended-items")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::SysmgrItems::CseFailSwCoreNotifyExtendedItems::CseFailSwCoreNotifyExtendedItems()
    :
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "cseFailSwCoreNotifyExtended-items"; yang_parent_name = "sysmgr-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::SysmgrItems::CseFailSwCoreNotifyExtendedItems::~CseFailSwCoreNotifyExtendedItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::SysmgrItems::CseFailSwCoreNotifyExtendedItems::has_data() const
{
    if (is_presence_container) return true;
    return trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::SysmgrItems::CseFailSwCoreNotifyExtendedItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::SysmgrItems::CseFailSwCoreNotifyExtendedItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/sysmgr-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::SysmgrItems::CseFailSwCoreNotifyExtendedItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cseFailSwCoreNotifyExtended-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::SysmgrItems::CseFailSwCoreNotifyExtendedItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::SysmgrItems::CseFailSwCoreNotifyExtendedItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::SysmgrItems::CseFailSwCoreNotifyExtendedItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::SysmgrItems::CseFailSwCoreNotifyExtendedItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trapstatus")
    {
        trapstatus = value;
        trapstatus.value_namespace = name_space;
        trapstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction = value;
        istoggleaction.value_namespace = name_space;
        istoggleaction.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::TrapsItems::SysmgrItems::CseFailSwCoreNotifyExtendedItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trapstatus")
    {
        trapstatus.yfilter = yfilter;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::TrapsItems::SysmgrItems::CseFailSwCoreNotifyExtendedItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::SystemItems::SystemItems()
    :
    clockchangenotification_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::SystemItems::ClockchangenotificationItems>())
{
    clockchangenotification_items->parent = this;

    yang_name = "system-items"; yang_parent_name = "traps-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::SystemItems::~SystemItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::SystemItems::has_data() const
{
    if (is_presence_container) return true;
    return (clockchangenotification_items !=  nullptr && clockchangenotification_items->has_data());
}

bool System::SnmpItems::InstItems::TrapsItems::SystemItems::has_operation() const
{
    return is_set(yfilter)
	|| (clockchangenotification_items !=  nullptr && clockchangenotification_items->has_operation());
}

std::string System::SnmpItems::InstItems::TrapsItems::SystemItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::SystemItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::SystemItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::SystemItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Clockchangenotification-items")
    {
        if(clockchangenotification_items == nullptr)
        {
            clockchangenotification_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::SystemItems::ClockchangenotificationItems>();
        }
        return clockchangenotification_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::SystemItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(clockchangenotification_items != nullptr)
    {
        _children["Clockchangenotification-items"] = clockchangenotification_items;
    }

    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::SystemItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SnmpItems::InstItems::TrapsItems::SystemItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SnmpItems::InstItems::TrapsItems::SystemItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Clockchangenotification-items")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::SystemItems::ClockchangenotificationItems::ClockchangenotificationItems()
    :
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "Clockchangenotification-items"; yang_parent_name = "system-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::SystemItems::ClockchangenotificationItems::~ClockchangenotificationItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::SystemItems::ClockchangenotificationItems::has_data() const
{
    if (is_presence_container) return true;
    return trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::SystemItems::ClockchangenotificationItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::SystemItems::ClockchangenotificationItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/system-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::SystemItems::ClockchangenotificationItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Clockchangenotification-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::SystemItems::ClockchangenotificationItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::SystemItems::ClockchangenotificationItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::SystemItems::ClockchangenotificationItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::SystemItems::ClockchangenotificationItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trapstatus")
    {
        trapstatus = value;
        trapstatus.value_namespace = name_space;
        trapstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction = value;
        istoggleaction.value_namespace = name_space;
        istoggleaction.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::TrapsItems::SystemItems::ClockchangenotificationItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trapstatus")
    {
        trapstatus.yfilter = yfilter;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::TrapsItems::SystemItems::ClockchangenotificationItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::UpgradeItems::UpgradeItems()
    :
    upgradejobstatusnotify_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::UpgradeItems::UpgradeJobStatusNotifyItems>())
{
    upgradejobstatusnotify_items->parent = this;

    yang_name = "upgrade-items"; yang_parent_name = "traps-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::UpgradeItems::~UpgradeItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::UpgradeItems::has_data() const
{
    if (is_presence_container) return true;
    return (upgradejobstatusnotify_items !=  nullptr && upgradejobstatusnotify_items->has_data());
}

bool System::SnmpItems::InstItems::TrapsItems::UpgradeItems::has_operation() const
{
    return is_set(yfilter)
	|| (upgradejobstatusnotify_items !=  nullptr && upgradejobstatusnotify_items->has_operation());
}

std::string System::SnmpItems::InstItems::TrapsItems::UpgradeItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::UpgradeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "upgrade-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::UpgradeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::UpgradeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "UpgradeJobStatusNotify-items")
    {
        if(upgradejobstatusnotify_items == nullptr)
        {
            upgradejobstatusnotify_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::UpgradeItems::UpgradeJobStatusNotifyItems>();
        }
        return upgradejobstatusnotify_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::UpgradeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(upgradejobstatusnotify_items != nullptr)
    {
        _children["UpgradeJobStatusNotify-items"] = upgradejobstatusnotify_items;
    }

    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::UpgradeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SnmpItems::InstItems::TrapsItems::UpgradeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SnmpItems::InstItems::TrapsItems::UpgradeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "UpgradeJobStatusNotify-items")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::UpgradeItems::UpgradeJobStatusNotifyItems::UpgradeJobStatusNotifyItems()
    :
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "UpgradeJobStatusNotify-items"; yang_parent_name = "upgrade-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::UpgradeItems::UpgradeJobStatusNotifyItems::~UpgradeJobStatusNotifyItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::UpgradeItems::UpgradeJobStatusNotifyItems::has_data() const
{
    if (is_presence_container) return true;
    return trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::UpgradeItems::UpgradeJobStatusNotifyItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::UpgradeItems::UpgradeJobStatusNotifyItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/upgrade-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::UpgradeItems::UpgradeJobStatusNotifyItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "UpgradeJobStatusNotify-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::UpgradeItems::UpgradeJobStatusNotifyItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::UpgradeItems::UpgradeJobStatusNotifyItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::UpgradeItems::UpgradeJobStatusNotifyItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::UpgradeItems::UpgradeJobStatusNotifyItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trapstatus")
    {
        trapstatus = value;
        trapstatus.value_namespace = name_space;
        trapstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction = value;
        istoggleaction.value_namespace = name_space;
        istoggleaction.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::TrapsItems::UpgradeItems::UpgradeJobStatusNotifyItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trapstatus")
    {
        trapstatus.yfilter = yfilter;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::TrapsItems::UpgradeItems::UpgradeJobStatusNotifyItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::VsanItems::VsanItems()
    :
    vsanportmembershipchange_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::VsanItems::VsanPortMembershipChangeItems>())
    , vsanstatuschange_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::VsanItems::VsanStatusChangeItems>())
{
    vsanportmembershipchange_items->parent = this;
    vsanstatuschange_items->parent = this;

    yang_name = "vsan-items"; yang_parent_name = "traps-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::VsanItems::~VsanItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::VsanItems::has_data() const
{
    if (is_presence_container) return true;
    return (vsanportmembershipchange_items !=  nullptr && vsanportmembershipchange_items->has_data())
	|| (vsanstatuschange_items !=  nullptr && vsanstatuschange_items->has_data());
}

bool System::SnmpItems::InstItems::TrapsItems::VsanItems::has_operation() const
{
    return is_set(yfilter)
	|| (vsanportmembershipchange_items !=  nullptr && vsanportmembershipchange_items->has_operation())
	|| (vsanstatuschange_items !=  nullptr && vsanstatuschange_items->has_operation());
}

std::string System::SnmpItems::InstItems::TrapsItems::VsanItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::VsanItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vsan-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::VsanItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::VsanItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vsanPortMembershipChange-items")
    {
        if(vsanportmembershipchange_items == nullptr)
        {
            vsanportmembershipchange_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::VsanItems::VsanPortMembershipChangeItems>();
        }
        return vsanportmembershipchange_items;
    }

    if(child_yang_name == "vsanStatusChange-items")
    {
        if(vsanstatuschange_items == nullptr)
        {
            vsanstatuschange_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::VsanItems::VsanStatusChangeItems>();
        }
        return vsanstatuschange_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::VsanItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vsanportmembershipchange_items != nullptr)
    {
        _children["vsanPortMembershipChange-items"] = vsanportmembershipchange_items;
    }

    if(vsanstatuschange_items != nullptr)
    {
        _children["vsanStatusChange-items"] = vsanstatuschange_items;
    }

    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::VsanItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SnmpItems::InstItems::TrapsItems::VsanItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SnmpItems::InstItems::TrapsItems::VsanItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vsanPortMembershipChange-items" || name == "vsanStatusChange-items")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::VsanItems::VsanPortMembershipChangeItems::VsanPortMembershipChangeItems()
    :
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "vsanPortMembershipChange-items"; yang_parent_name = "vsan-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::VsanItems::VsanPortMembershipChangeItems::~VsanPortMembershipChangeItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::VsanItems::VsanPortMembershipChangeItems::has_data() const
{
    if (is_presence_container) return true;
    return trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::VsanItems::VsanPortMembershipChangeItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::VsanItems::VsanPortMembershipChangeItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/vsan-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::VsanItems::VsanPortMembershipChangeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vsanPortMembershipChange-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::VsanItems::VsanPortMembershipChangeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::VsanItems::VsanPortMembershipChangeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::VsanItems::VsanPortMembershipChangeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::VsanItems::VsanPortMembershipChangeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trapstatus")
    {
        trapstatus = value;
        trapstatus.value_namespace = name_space;
        trapstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction = value;
        istoggleaction.value_namespace = name_space;
        istoggleaction.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::TrapsItems::VsanItems::VsanPortMembershipChangeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trapstatus")
    {
        trapstatus.yfilter = yfilter;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::TrapsItems::VsanItems::VsanPortMembershipChangeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::VsanItems::VsanStatusChangeItems::VsanStatusChangeItems()
    :
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "vsanStatusChange-items"; yang_parent_name = "vsan-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::VsanItems::VsanStatusChangeItems::~VsanStatusChangeItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::VsanItems::VsanStatusChangeItems::has_data() const
{
    if (is_presence_container) return true;
    return trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::VsanItems::VsanStatusChangeItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::VsanItems::VsanStatusChangeItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/vsan-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::VsanItems::VsanStatusChangeItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vsanStatusChange-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::VsanItems::VsanStatusChangeItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::VsanItems::VsanStatusChangeItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::VsanItems::VsanStatusChangeItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::VsanItems::VsanStatusChangeItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trapstatus")
    {
        trapstatus = value;
        trapstatus.value_namespace = name_space;
        trapstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction = value;
        istoggleaction.value_namespace = name_space;
        istoggleaction.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::TrapsItems::VsanItems::VsanStatusChangeItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trapstatus")
    {
        trapstatus.yfilter = yfilter;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::TrapsItems::VsanItems::VsanStatusChangeItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::VtpItems::VtpItems()
    :
    notifs_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::VtpItems::NotifsItems>())
    , vlancreate_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::VtpItems::VlancreateItems>())
    , vlandelete_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::VtpItems::VlandeleteItems>())
{
    notifs_items->parent = this;
    vlancreate_items->parent = this;
    vlandelete_items->parent = this;

    yang_name = "vtp-items"; yang_parent_name = "traps-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::VtpItems::~VtpItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::VtpItems::has_data() const
{
    if (is_presence_container) return true;
    return (notifs_items !=  nullptr && notifs_items->has_data())
	|| (vlancreate_items !=  nullptr && vlancreate_items->has_data())
	|| (vlandelete_items !=  nullptr && vlandelete_items->has_data());
}

bool System::SnmpItems::InstItems::TrapsItems::VtpItems::has_operation() const
{
    return is_set(yfilter)
	|| (notifs_items !=  nullptr && notifs_items->has_operation())
	|| (vlancreate_items !=  nullptr && vlancreate_items->has_operation())
	|| (vlandelete_items !=  nullptr && vlandelete_items->has_operation());
}

std::string System::SnmpItems::InstItems::TrapsItems::VtpItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::VtpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vtp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::VtpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::VtpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "notifs-items")
    {
        if(notifs_items == nullptr)
        {
            notifs_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::VtpItems::NotifsItems>();
        }
        return notifs_items;
    }

    if(child_yang_name == "vlancreate-items")
    {
        if(vlancreate_items == nullptr)
        {
            vlancreate_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::VtpItems::VlancreateItems>();
        }
        return vlancreate_items;
    }

    if(child_yang_name == "vlandelete-items")
    {
        if(vlandelete_items == nullptr)
        {
            vlandelete_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::VtpItems::VlandeleteItems>();
        }
        return vlandelete_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::VtpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(notifs_items != nullptr)
    {
        _children["notifs-items"] = notifs_items;
    }

    if(vlancreate_items != nullptr)
    {
        _children["vlancreate-items"] = vlancreate_items;
    }

    if(vlandelete_items != nullptr)
    {
        _children["vlandelete-items"] = vlandelete_items;
    }

    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::VtpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SnmpItems::InstItems::TrapsItems::VtpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SnmpItems::InstItems::TrapsItems::VtpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "notifs-items" || name == "vlancreate-items" || name == "vlandelete-items")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::VtpItems::NotifsItems::NotifsItems()
    :
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "notifs-items"; yang_parent_name = "vtp-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::VtpItems::NotifsItems::~NotifsItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::VtpItems::NotifsItems::has_data() const
{
    if (is_presence_container) return true;
    return trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::VtpItems::NotifsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::VtpItems::NotifsItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/vtp-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::VtpItems::NotifsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "notifs-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::VtpItems::NotifsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::VtpItems::NotifsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::VtpItems::NotifsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::VtpItems::NotifsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trapstatus")
    {
        trapstatus = value;
        trapstatus.value_namespace = name_space;
        trapstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction = value;
        istoggleaction.value_namespace = name_space;
        istoggleaction.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::TrapsItems::VtpItems::NotifsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trapstatus")
    {
        trapstatus.yfilter = yfilter;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::TrapsItems::VtpItems::NotifsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::VtpItems::VlancreateItems::VlancreateItems()
    :
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "vlancreate-items"; yang_parent_name = "vtp-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::VtpItems::VlancreateItems::~VlancreateItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::VtpItems::VlancreateItems::has_data() const
{
    if (is_presence_container) return true;
    return trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::VtpItems::VlancreateItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::VtpItems::VlancreateItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/vtp-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::VtpItems::VlancreateItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlancreate-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::VtpItems::VlancreateItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::VtpItems::VlancreateItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::VtpItems::VlancreateItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::VtpItems::VlancreateItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trapstatus")
    {
        trapstatus = value;
        trapstatus.value_namespace = name_space;
        trapstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction = value;
        istoggleaction.value_namespace = name_space;
        istoggleaction.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::TrapsItems::VtpItems::VlancreateItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trapstatus")
    {
        trapstatus.yfilter = yfilter;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::TrapsItems::VtpItems::VlancreateItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::VtpItems::VlandeleteItems::VlandeleteItems()
    :
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "vlandelete-items"; yang_parent_name = "vtp-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::VtpItems::VlandeleteItems::~VlandeleteItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::VtpItems::VlandeleteItems::has_data() const
{
    if (is_presence_container) return true;
    return trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::VtpItems::VlandeleteItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::VtpItems::VlandeleteItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/vtp-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::VtpItems::VlandeleteItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlandelete-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::VtpItems::VlandeleteItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::VtpItems::VlandeleteItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::VtpItems::VlandeleteItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::VtpItems::VlandeleteItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trapstatus")
    {
        trapstatus = value;
        trapstatus.value_namespace = name_space;
        trapstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction = value;
        istoggleaction.value_namespace = name_space;
        istoggleaction.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::TrapsItems::VtpItems::VlandeleteItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trapstatus")
    {
        trapstatus.yfilter = yfilter;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::TrapsItems::VtpItems::VlandeleteItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::PortsecurityItems::PortsecurityItems()
    :
    accesssecuremacviolation_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::PortsecurityItems::AccesssecuremacviolationItems>())
    , trunksecuremacviolation_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::PortsecurityItems::TrunksecuremacviolationItems>())
{
    accesssecuremacviolation_items->parent = this;
    trunksecuremacviolation_items->parent = this;

    yang_name = "portsecurity-items"; yang_parent_name = "traps-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::PortsecurityItems::~PortsecurityItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::PortsecurityItems::has_data() const
{
    if (is_presence_container) return true;
    return (accesssecuremacviolation_items !=  nullptr && accesssecuremacviolation_items->has_data())
	|| (trunksecuremacviolation_items !=  nullptr && trunksecuremacviolation_items->has_data());
}

bool System::SnmpItems::InstItems::TrapsItems::PortsecurityItems::has_operation() const
{
    return is_set(yfilter)
	|| (accesssecuremacviolation_items !=  nullptr && accesssecuremacviolation_items->has_operation())
	|| (trunksecuremacviolation_items !=  nullptr && trunksecuremacviolation_items->has_operation());
}

std::string System::SnmpItems::InstItems::TrapsItems::PortsecurityItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::PortsecurityItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "portsecurity-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::PortsecurityItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::PortsecurityItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "accesssecuremacviolation-items")
    {
        if(accesssecuremacviolation_items == nullptr)
        {
            accesssecuremacviolation_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::PortsecurityItems::AccesssecuremacviolationItems>();
        }
        return accesssecuremacviolation_items;
    }

    if(child_yang_name == "trunksecuremacviolation-items")
    {
        if(trunksecuremacviolation_items == nullptr)
        {
            trunksecuremacviolation_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::PortsecurityItems::TrunksecuremacviolationItems>();
        }
        return trunksecuremacviolation_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::PortsecurityItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(accesssecuremacviolation_items != nullptr)
    {
        _children["accesssecuremacviolation-items"] = accesssecuremacviolation_items;
    }

    if(trunksecuremacviolation_items != nullptr)
    {
        _children["trunksecuremacviolation-items"] = trunksecuremacviolation_items;
    }

    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::PortsecurityItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SnmpItems::InstItems::TrapsItems::PortsecurityItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SnmpItems::InstItems::TrapsItems::PortsecurityItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accesssecuremacviolation-items" || name == "trunksecuremacviolation-items")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::PortsecurityItems::AccesssecuremacviolationItems::AccesssecuremacviolationItems()
    :
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "accesssecuremacviolation-items"; yang_parent_name = "portsecurity-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::PortsecurityItems::AccesssecuremacviolationItems::~AccesssecuremacviolationItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::PortsecurityItems::AccesssecuremacviolationItems::has_data() const
{
    if (is_presence_container) return true;
    return trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::PortsecurityItems::AccesssecuremacviolationItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::PortsecurityItems::AccesssecuremacviolationItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/portsecurity-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::PortsecurityItems::AccesssecuremacviolationItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accesssecuremacviolation-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::PortsecurityItems::AccesssecuremacviolationItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::PortsecurityItems::AccesssecuremacviolationItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::PortsecurityItems::AccesssecuremacviolationItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::PortsecurityItems::AccesssecuremacviolationItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trapstatus")
    {
        trapstatus = value;
        trapstatus.value_namespace = name_space;
        trapstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction = value;
        istoggleaction.value_namespace = name_space;
        istoggleaction.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::TrapsItems::PortsecurityItems::AccesssecuremacviolationItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trapstatus")
    {
        trapstatus.yfilter = yfilter;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::TrapsItems::PortsecurityItems::AccesssecuremacviolationItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::PortsecurityItems::TrunksecuremacviolationItems::TrunksecuremacviolationItems()
    :
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "trunksecuremacviolation-items"; yang_parent_name = "portsecurity-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::PortsecurityItems::TrunksecuremacviolationItems::~TrunksecuremacviolationItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::PortsecurityItems::TrunksecuremacviolationItems::has_data() const
{
    if (is_presence_container) return true;
    return trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::PortsecurityItems::TrunksecuremacviolationItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::PortsecurityItems::TrunksecuremacviolationItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/portsecurity-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::PortsecurityItems::TrunksecuremacviolationItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trunksecuremacviolation-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::PortsecurityItems::TrunksecuremacviolationItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::PortsecurityItems::TrunksecuremacviolationItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::PortsecurityItems::TrunksecuremacviolationItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::PortsecurityItems::TrunksecuremacviolationItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trapstatus")
    {
        trapstatus = value;
        trapstatus.value_namespace = name_space;
        trapstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction = value;
        istoggleaction.value_namespace = name_space;
        istoggleaction.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::TrapsItems::PortsecurityItems::TrunksecuremacviolationItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trapstatus")
    {
        trapstatus.yfilter = yfilter;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::TrapsItems::PortsecurityItems::TrunksecuremacviolationItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::MplsItems::MplsItems()
    :
    ldp_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::MplsItems::LdpItems>())
{
    ldp_items->parent = this;

    yang_name = "mpls-items"; yang_parent_name = "traps-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::MplsItems::~MplsItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::MplsItems::has_data() const
{
    if (is_presence_container) return true;
    return (ldp_items !=  nullptr && ldp_items->has_data());
}

bool System::SnmpItems::InstItems::TrapsItems::MplsItems::has_operation() const
{
    return is_set(yfilter)
	|| (ldp_items !=  nullptr && ldp_items->has_operation());
}

std::string System::SnmpItems::InstItems::TrapsItems::MplsItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::MplsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::MplsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::MplsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ldp-items")
    {
        if(ldp_items == nullptr)
        {
            ldp_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::MplsItems::LdpItems>();
        }
        return ldp_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::MplsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ldp_items != nullptr)
    {
        _children["ldp-items"] = ldp_items;
    }

    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::MplsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SnmpItems::InstItems::TrapsItems::MplsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SnmpItems::InstItems::TrapsItems::MplsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ldp-items")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::MplsItems::LdpItems::LdpItems()
    :
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
        ,
    ldpsessiondown_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::MplsItems::LdpItems::LdpsessiondownItems>())
    , ldpsessionup_items(std::make_shared<System::SnmpItems::InstItems::TrapsItems::MplsItems::LdpItems::LdpsessionupItems>())
{
    ldpsessiondown_items->parent = this;
    ldpsessionup_items->parent = this;

    yang_name = "ldp-items"; yang_parent_name = "mpls-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::MplsItems::LdpItems::~LdpItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::MplsItems::LdpItems::has_data() const
{
    if (is_presence_container) return true;
    return trapstatus.is_set
	|| istoggleaction.is_set
	|| (ldpsessiondown_items !=  nullptr && ldpsessiondown_items->has_data())
	|| (ldpsessionup_items !=  nullptr && ldpsessionup_items->has_data());
}

bool System::SnmpItems::InstItems::TrapsItems::MplsItems::LdpItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter)
	|| (ldpsessiondown_items !=  nullptr && ldpsessiondown_items->has_operation())
	|| (ldpsessionup_items !=  nullptr && ldpsessionup_items->has_operation());
}

std::string System::SnmpItems::InstItems::TrapsItems::MplsItems::LdpItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/mpls-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::MplsItems::LdpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ldp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::MplsItems::LdpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::MplsItems::LdpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ldpsessiondown-items")
    {
        if(ldpsessiondown_items == nullptr)
        {
            ldpsessiondown_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::MplsItems::LdpItems::LdpsessiondownItems>();
        }
        return ldpsessiondown_items;
    }

    if(child_yang_name == "ldpsessionup-items")
    {
        if(ldpsessionup_items == nullptr)
        {
            ldpsessionup_items = std::make_shared<System::SnmpItems::InstItems::TrapsItems::MplsItems::LdpItems::LdpsessionupItems>();
        }
        return ldpsessionup_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::MplsItems::LdpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ldpsessiondown_items != nullptr)
    {
        _children["ldpsessiondown-items"] = ldpsessiondown_items;
    }

    if(ldpsessionup_items != nullptr)
    {
        _children["ldpsessionup-items"] = ldpsessionup_items;
    }

    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::MplsItems::LdpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trapstatus")
    {
        trapstatus = value;
        trapstatus.value_namespace = name_space;
        trapstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction = value;
        istoggleaction.value_namespace = name_space;
        istoggleaction.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::TrapsItems::MplsItems::LdpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trapstatus")
    {
        trapstatus.yfilter = yfilter;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::TrapsItems::MplsItems::LdpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ldpsessiondown-items" || name == "ldpsessionup-items" || name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::MplsItems::LdpItems::LdpsessiondownItems::LdpsessiondownItems()
    :
    togglestate{YType::uint16, "toggleState"},
    togglestatecount{YType::uint16, "toggleStateCount"},
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "ldpsessiondown-items"; yang_parent_name = "ldp-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::MplsItems::LdpItems::LdpsessiondownItems::~LdpsessiondownItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::MplsItems::LdpItems::LdpsessiondownItems::has_data() const
{
    if (is_presence_container) return true;
    return togglestate.is_set
	|| togglestatecount.is_set
	|| trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::MplsItems::LdpItems::LdpsessiondownItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(togglestate.yfilter)
	|| ydk::is_set(togglestatecount.yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::MplsItems::LdpItems::LdpsessiondownItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/mpls-items/ldp-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::MplsItems::LdpItems::LdpsessiondownItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ldpsessiondown-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::MplsItems::LdpItems::LdpsessiondownItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (togglestate.is_set || is_set(togglestate.yfilter)) leaf_name_data.push_back(togglestate.get_name_leafdata());
    if (togglestatecount.is_set || is_set(togglestatecount.yfilter)) leaf_name_data.push_back(togglestatecount.get_name_leafdata());
    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::MplsItems::LdpItems::LdpsessiondownItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::MplsItems::LdpItems::LdpsessiondownItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::MplsItems::LdpItems::LdpsessiondownItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "toggleState")
    {
        togglestate = value;
        togglestate.value_namespace = name_space;
        togglestate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount = value;
        togglestatecount.value_namespace = name_space;
        togglestatecount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trapstatus")
    {
        trapstatus = value;
        trapstatus.value_namespace = name_space;
        trapstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction = value;
        istoggleaction.value_namespace = name_space;
        istoggleaction.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::TrapsItems::MplsItems::LdpItems::LdpsessiondownItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "toggleState")
    {
        togglestate.yfilter = yfilter;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount.yfilter = yfilter;
    }
    if(value_path == "trapstatus")
    {
        trapstatus.yfilter = yfilter;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::TrapsItems::MplsItems::LdpItems::LdpsessiondownItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "toggleState" || name == "toggleStateCount" || name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::TrapsItems::MplsItems::LdpItems::LdpsessionupItems::LdpsessionupItems()
    :
    togglestate{YType::uint16, "toggleState"},
    togglestatecount{YType::uint16, "toggleStateCount"},
    trapstatus{YType::enumeration, "trapstatus"},
    istoggleaction{YType::uint16, "isToggleAction"}
{

    yang_name = "ldpsessionup-items"; yang_parent_name = "ldp-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::TrapsItems::MplsItems::LdpItems::LdpsessionupItems::~LdpsessionupItems()
{
}

bool System::SnmpItems::InstItems::TrapsItems::MplsItems::LdpItems::LdpsessionupItems::has_data() const
{
    if (is_presence_container) return true;
    return togglestate.is_set
	|| togglestatecount.is_set
	|| trapstatus.is_set
	|| istoggleaction.is_set;
}

bool System::SnmpItems::InstItems::TrapsItems::MplsItems::LdpItems::LdpsessionupItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(togglestate.yfilter)
	|| ydk::is_set(togglestatecount.yfilter)
	|| ydk::is_set(trapstatus.yfilter)
	|| ydk::is_set(istoggleaction.yfilter);
}

std::string System::SnmpItems::InstItems::TrapsItems::MplsItems::LdpItems::LdpsessionupItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/traps-items/mpls-items/ldp-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::TrapsItems::MplsItems::LdpItems::LdpsessionupItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ldpsessionup-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::TrapsItems::MplsItems::LdpItems::LdpsessionupItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (togglestate.is_set || is_set(togglestate.yfilter)) leaf_name_data.push_back(togglestate.get_name_leafdata());
    if (togglestatecount.is_set || is_set(togglestatecount.yfilter)) leaf_name_data.push_back(togglestatecount.get_name_leafdata());
    if (trapstatus.is_set || is_set(trapstatus.yfilter)) leaf_name_data.push_back(trapstatus.get_name_leafdata());
    if (istoggleaction.is_set || is_set(istoggleaction.yfilter)) leaf_name_data.push_back(istoggleaction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::TrapsItems::MplsItems::LdpItems::LdpsessionupItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::TrapsItems::MplsItems::LdpItems::LdpsessionupItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::TrapsItems::MplsItems::LdpItems::LdpsessionupItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "toggleState")
    {
        togglestate = value;
        togglestate.value_namespace = name_space;
        togglestate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount = value;
        togglestatecount.value_namespace = name_space;
        togglestatecount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trapstatus")
    {
        trapstatus = value;
        trapstatus.value_namespace = name_space;
        trapstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction = value;
        istoggleaction.value_namespace = name_space;
        istoggleaction.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::TrapsItems::MplsItems::LdpItems::LdpsessionupItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "toggleState")
    {
        togglestate.yfilter = yfilter;
    }
    if(value_path == "toggleStateCount")
    {
        togglestatecount.yfilter = yfilter;
    }
    if(value_path == "trapstatus")
    {
        trapstatus.yfilter = yfilter;
    }
    if(value_path == "isToggleAction")
    {
        istoggleaction.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::TrapsItems::MplsItems::LdpItems::LdpsessionupItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "toggleState" || name == "toggleStateCount" || name == "trapstatus" || name == "isToggleAction")
        return true;
    return false;
}

System::SnmpItems::InstItems::RmtUserItems::RmtUserItems()
    :
    remoteuser_list(this, {"username", "usrengineid"})
{

    yang_name = "rmtUser-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::RmtUserItems::~RmtUserItems()
{
}

bool System::SnmpItems::InstItems::RmtUserItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<remoteuser_list.len(); index++)
    {
        if(remoteuser_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::SnmpItems::InstItems::RmtUserItems::has_operation() const
{
    for (std::size_t index=0; index<remoteuser_list.len(); index++)
    {
        if(remoteuser_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::SnmpItems::InstItems::RmtUserItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::RmtUserItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rmtUser-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::RmtUserItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::RmtUserItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RemoteUser-list")
    {
        auto ent_ = std::make_shared<System::SnmpItems::InstItems::RmtUserItems::RemoteUserList>();
        ent_->parent = this;
        remoteuser_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::RmtUserItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : remoteuser_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::SnmpItems::InstItems::RmtUserItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SnmpItems::InstItems::RmtUserItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SnmpItems::InstItems::RmtUserItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RemoteUser-list")
        return true;
    return false;
}

System::SnmpItems::InstItems::RmtUserItems::RemoteUserList::RemoteUserList()
    :
    username{YType::str, "userName"},
    usrengineid{YType::str, "usrengineId"},
    authpwd{YType::str, "authpwd"},
    authtype{YType::enumeration, "authtype"},
    privpwd{YType::str, "privpwd"},
    privtype{YType::enumeration, "privtype"},
    islocalizedkey{YType::boolean, "islocalizedkey"},
    isenforcepriv{YType::boolean, "isenforcepriv"},
    usrengineidlen{YType::uint8, "usrengineIdlen"}
{

    yang_name = "RemoteUser-list"; yang_parent_name = "rmtUser-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::RmtUserItems::RemoteUserList::~RemoteUserList()
{
}

bool System::SnmpItems::InstItems::RmtUserItems::RemoteUserList::has_data() const
{
    if (is_presence_container) return true;
    return username.is_set
	|| usrengineid.is_set
	|| authpwd.is_set
	|| authtype.is_set
	|| privpwd.is_set
	|| privtype.is_set
	|| islocalizedkey.is_set
	|| isenforcepriv.is_set
	|| usrengineidlen.is_set;
}

bool System::SnmpItems::InstItems::RmtUserItems::RemoteUserList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(username.yfilter)
	|| ydk::is_set(usrengineid.yfilter)
	|| ydk::is_set(authpwd.yfilter)
	|| ydk::is_set(authtype.yfilter)
	|| ydk::is_set(privpwd.yfilter)
	|| ydk::is_set(privtype.yfilter)
	|| ydk::is_set(islocalizedkey.yfilter)
	|| ydk::is_set(isenforcepriv.yfilter)
	|| ydk::is_set(usrengineidlen.yfilter);
}

std::string System::SnmpItems::InstItems::RmtUserItems::RemoteUserList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/rmtUser-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::RmtUserItems::RemoteUserList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RemoteUser-list";
    ADD_KEY_TOKEN(username, "userName");
    ADD_KEY_TOKEN(usrengineid, "usrengineId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::RmtUserItems::RemoteUserList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (username.is_set || is_set(username.yfilter)) leaf_name_data.push_back(username.get_name_leafdata());
    if (usrengineid.is_set || is_set(usrengineid.yfilter)) leaf_name_data.push_back(usrengineid.get_name_leafdata());
    if (authpwd.is_set || is_set(authpwd.yfilter)) leaf_name_data.push_back(authpwd.get_name_leafdata());
    if (authtype.is_set || is_set(authtype.yfilter)) leaf_name_data.push_back(authtype.get_name_leafdata());
    if (privpwd.is_set || is_set(privpwd.yfilter)) leaf_name_data.push_back(privpwd.get_name_leafdata());
    if (privtype.is_set || is_set(privtype.yfilter)) leaf_name_data.push_back(privtype.get_name_leafdata());
    if (islocalizedkey.is_set || is_set(islocalizedkey.yfilter)) leaf_name_data.push_back(islocalizedkey.get_name_leafdata());
    if (isenforcepriv.is_set || is_set(isenforcepriv.yfilter)) leaf_name_data.push_back(isenforcepriv.get_name_leafdata());
    if (usrengineidlen.is_set || is_set(usrengineidlen.yfilter)) leaf_name_data.push_back(usrengineidlen.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::RmtUserItems::RemoteUserList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::RmtUserItems::RemoteUserList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::RmtUserItems::RemoteUserList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "userName")
    {
        username = value;
        username.value_namespace = name_space;
        username.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "usrengineId")
    {
        usrengineid = value;
        usrengineid.value_namespace = name_space;
        usrengineid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authpwd")
    {
        authpwd = value;
        authpwd.value_namespace = name_space;
        authpwd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authtype")
    {
        authtype = value;
        authtype.value_namespace = name_space;
        authtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "privpwd")
    {
        privpwd = value;
        privpwd.value_namespace = name_space;
        privpwd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "privtype")
    {
        privtype = value;
        privtype.value_namespace = name_space;
        privtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "islocalizedkey")
    {
        islocalizedkey = value;
        islocalizedkey.value_namespace = name_space;
        islocalizedkey.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isenforcepriv")
    {
        isenforcepriv = value;
        isenforcepriv.value_namespace = name_space;
        isenforcepriv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "usrengineIdlen")
    {
        usrengineidlen = value;
        usrengineidlen.value_namespace = name_space;
        usrengineidlen.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::RmtUserItems::RemoteUserList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "userName")
    {
        username.yfilter = yfilter;
    }
    if(value_path == "usrengineId")
    {
        usrengineid.yfilter = yfilter;
    }
    if(value_path == "authpwd")
    {
        authpwd.yfilter = yfilter;
    }
    if(value_path == "authtype")
    {
        authtype.yfilter = yfilter;
    }
    if(value_path == "privpwd")
    {
        privpwd.yfilter = yfilter;
    }
    if(value_path == "privtype")
    {
        privtype.yfilter = yfilter;
    }
    if(value_path == "islocalizedkey")
    {
        islocalizedkey.yfilter = yfilter;
    }
    if(value_path == "isenforcepriv")
    {
        isenforcepriv.yfilter = yfilter;
    }
    if(value_path == "usrengineIdlen")
    {
        usrengineidlen.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::RmtUserItems::RemoteUserList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "userName" || name == "usrengineId" || name == "authpwd" || name == "authtype" || name == "privpwd" || name == "privtype" || name == "islocalizedkey" || name == "isenforcepriv" || name == "usrengineIdlen")
        return true;
    return false;
}

System::SnmpItems::InstItems::LclUserItems::LclUserItems()
    :
    localuser_list(this, {"username"})
{

    yang_name = "lclUser-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::LclUserItems::~LclUserItems()
{
}

bool System::SnmpItems::InstItems::LclUserItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<localuser_list.len(); index++)
    {
        if(localuser_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::SnmpItems::InstItems::LclUserItems::has_operation() const
{
    for (std::size_t index=0; index<localuser_list.len(); index++)
    {
        if(localuser_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::SnmpItems::InstItems::LclUserItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::LclUserItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lclUser-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::LclUserItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::LclUserItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "LocalUser-list")
    {
        auto ent_ = std::make_shared<System::SnmpItems::InstItems::LclUserItems::LocalUserList>();
        ent_->parent = this;
        localuser_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::LclUserItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : localuser_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::SnmpItems::InstItems::LclUserItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SnmpItems::InstItems::LclUserItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SnmpItems::InstItems::LclUserItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LocalUser-list")
        return true;
    return false;
}

System::SnmpItems::InstItems::LclUserItems::LocalUserList::LocalUserList()
    :
    username{YType::str, "userName"},
    ipv4aclname{YType::str, "ipv4AclName"},
    ipv6aclname{YType::str, "ipv6AclName"},
    authpwd{YType::str, "authpwd"},
    authtype{YType::enumeration, "authtype"},
    privpwd{YType::str, "privpwd"},
    privtype{YType::enumeration, "privtype"},
    islocalizedkey{YType::boolean, "islocalizedkey"},
    isenforcepriv{YType::boolean, "isenforcepriv"},
    usrengineid{YType::str, "usrengineId"},
    usrengineidlen{YType::uint8, "usrengineIdlen"}
        ,
    group_items(std::make_shared<System::SnmpItems::InstItems::LclUserItems::LocalUserList::GroupItems>())
{
    group_items->parent = this;

    yang_name = "LocalUser-list"; yang_parent_name = "lclUser-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::InstItems::LclUserItems::LocalUserList::~LocalUserList()
{
}

bool System::SnmpItems::InstItems::LclUserItems::LocalUserList::has_data() const
{
    if (is_presence_container) return true;
    return username.is_set
	|| ipv4aclname.is_set
	|| ipv6aclname.is_set
	|| authpwd.is_set
	|| authtype.is_set
	|| privpwd.is_set
	|| privtype.is_set
	|| islocalizedkey.is_set
	|| isenforcepriv.is_set
	|| usrengineid.is_set
	|| usrengineidlen.is_set
	|| (group_items !=  nullptr && group_items->has_data());
}

bool System::SnmpItems::InstItems::LclUserItems::LocalUserList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(username.yfilter)
	|| ydk::is_set(ipv4aclname.yfilter)
	|| ydk::is_set(ipv6aclname.yfilter)
	|| ydk::is_set(authpwd.yfilter)
	|| ydk::is_set(authtype.yfilter)
	|| ydk::is_set(privpwd.yfilter)
	|| ydk::is_set(privtype.yfilter)
	|| ydk::is_set(islocalizedkey.yfilter)
	|| ydk::is_set(isenforcepriv.yfilter)
	|| ydk::is_set(usrengineid.yfilter)
	|| ydk::is_set(usrengineidlen.yfilter)
	|| (group_items !=  nullptr && group_items->has_operation());
}

std::string System::SnmpItems::InstItems::LclUserItems::LocalUserList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/inst-items/lclUser-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::InstItems::LclUserItems::LocalUserList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LocalUser-list";
    ADD_KEY_TOKEN(username, "userName");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::LclUserItems::LocalUserList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (username.is_set || is_set(username.yfilter)) leaf_name_data.push_back(username.get_name_leafdata());
    if (ipv4aclname.is_set || is_set(ipv4aclname.yfilter)) leaf_name_data.push_back(ipv4aclname.get_name_leafdata());
    if (ipv6aclname.is_set || is_set(ipv6aclname.yfilter)) leaf_name_data.push_back(ipv6aclname.get_name_leafdata());
    if (authpwd.is_set || is_set(authpwd.yfilter)) leaf_name_data.push_back(authpwd.get_name_leafdata());
    if (authtype.is_set || is_set(authtype.yfilter)) leaf_name_data.push_back(authtype.get_name_leafdata());
    if (privpwd.is_set || is_set(privpwd.yfilter)) leaf_name_data.push_back(privpwd.get_name_leafdata());
    if (privtype.is_set || is_set(privtype.yfilter)) leaf_name_data.push_back(privtype.get_name_leafdata());
    if (islocalizedkey.is_set || is_set(islocalizedkey.yfilter)) leaf_name_data.push_back(islocalizedkey.get_name_leafdata());
    if (isenforcepriv.is_set || is_set(isenforcepriv.yfilter)) leaf_name_data.push_back(isenforcepriv.get_name_leafdata());
    if (usrengineid.is_set || is_set(usrengineid.yfilter)) leaf_name_data.push_back(usrengineid.get_name_leafdata());
    if (usrengineidlen.is_set || is_set(usrengineidlen.yfilter)) leaf_name_data.push_back(usrengineidlen.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::LclUserItems::LocalUserList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-items")
    {
        if(group_items == nullptr)
        {
            group_items = std::make_shared<System::SnmpItems::InstItems::LclUserItems::LocalUserList::GroupItems>();
        }
        return group_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::LclUserItems::LocalUserList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(group_items != nullptr)
    {
        _children["group-items"] = group_items;
    }

    return _children;
}

void System::SnmpItems::InstItems::LclUserItems::LocalUserList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "userName")
    {
        username = value;
        username.value_namespace = name_space;
        username.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4AclName")
    {
        ipv4aclname = value;
        ipv4aclname.value_namespace = name_space;
        ipv4aclname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6AclName")
    {
        ipv6aclname = value;
        ipv6aclname.value_namespace = name_space;
        ipv6aclname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authpwd")
    {
        authpwd = value;
        authpwd.value_namespace = name_space;
        authpwd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authtype")
    {
        authtype = value;
        authtype.value_namespace = name_space;
        authtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "privpwd")
    {
        privpwd = value;
        privpwd.value_namespace = name_space;
        privpwd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "privtype")
    {
        privtype = value;
        privtype.value_namespace = name_space;
        privtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "islocalizedkey")
    {
        islocalizedkey = value;
        islocalizedkey.value_namespace = name_space;
        islocalizedkey.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isenforcepriv")
    {
        isenforcepriv = value;
        isenforcepriv.value_namespace = name_space;
        isenforcepriv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "usrengineId")
    {
        usrengineid = value;
        usrengineid.value_namespace = name_space;
        usrengineid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "usrengineIdlen")
    {
        usrengineidlen = value;
        usrengineidlen.value_namespace = name_space;
        usrengineidlen.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::LclUserItems::LocalUserList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "userName")
    {
        username.yfilter = yfilter;
    }
    if(value_path == "ipv4AclName")
    {
        ipv4aclname.yfilter = yfilter;
    }
    if(value_path == "ipv6AclName")
    {
        ipv6aclname.yfilter = yfilter;
    }
    if(value_path == "authpwd")
    {
        authpwd.yfilter = yfilter;
    }
    if(value_path == "authtype")
    {
        authtype.yfilter = yfilter;
    }
    if(value_path == "privpwd")
    {
        privpwd.yfilter = yfilter;
    }
    if(value_path == "privtype")
    {
        privtype.yfilter = yfilter;
    }
    if(value_path == "islocalizedkey")
    {
        islocalizedkey.yfilter = yfilter;
    }
    if(value_path == "isenforcepriv")
    {
        isenforcepriv.yfilter = yfilter;
    }
    if(value_path == "usrengineId")
    {
        usrengineid.yfilter = yfilter;
    }
    if(value_path == "usrengineIdlen")
    {
        usrengineidlen.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::LclUserItems::LocalUserList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-items" || name == "userName" || name == "ipv4AclName" || name == "ipv6AclName" || name == "authpwd" || name == "authtype" || name == "privpwd" || name == "privtype" || name == "islocalizedkey" || name == "isenforcepriv" || name == "usrengineId" || name == "usrengineIdlen")
        return true;
    return false;
}

System::SnmpItems::InstItems::LclUserItems::LocalUserList::GroupItems::GroupItems()
    :
    usergroup_list(this, {"groupname"})
{

    yang_name = "group-items"; yang_parent_name = "LocalUser-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::SnmpItems::InstItems::LclUserItems::LocalUserList::GroupItems::~GroupItems()
{
}

bool System::SnmpItems::InstItems::LclUserItems::LocalUserList::GroupItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<usergroup_list.len(); index++)
    {
        if(usergroup_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::SnmpItems::InstItems::LclUserItems::LocalUserList::GroupItems::has_operation() const
{
    for (std::size_t index=0; index<usergroup_list.len(); index++)
    {
        if(usergroup_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::SnmpItems::InstItems::LclUserItems::LocalUserList::GroupItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::LclUserItems::LocalUserList::GroupItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::LclUserItems::LocalUserList::GroupItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "UserGroup-list")
    {
        auto ent_ = std::make_shared<System::SnmpItems::InstItems::LclUserItems::LocalUserList::GroupItems::UserGroupList>();
        ent_->parent = this;
        usergroup_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::LclUserItems::LocalUserList::GroupItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : usergroup_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::SnmpItems::InstItems::LclUserItems::LocalUserList::GroupItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SnmpItems::InstItems::LclUserItems::LocalUserList::GroupItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SnmpItems::InstItems::LclUserItems::LocalUserList::GroupItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "UserGroup-list")
        return true;
    return false;
}

System::SnmpItems::InstItems::LclUserItems::LocalUserList::GroupItems::UserGroupList::UserGroupList()
    :
    groupname{YType::str, "groupName"}
{

    yang_name = "UserGroup-list"; yang_parent_name = "group-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::SnmpItems::InstItems::LclUserItems::LocalUserList::GroupItems::UserGroupList::~UserGroupList()
{
}

bool System::SnmpItems::InstItems::LclUserItems::LocalUserList::GroupItems::UserGroupList::has_data() const
{
    if (is_presence_container) return true;
    return groupname.is_set;
}

bool System::SnmpItems::InstItems::LclUserItems::LocalUserList::GroupItems::UserGroupList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(groupname.yfilter);
}

std::string System::SnmpItems::InstItems::LclUserItems::LocalUserList::GroupItems::UserGroupList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "UserGroup-list";
    ADD_KEY_TOKEN(groupname, "groupName");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::InstItems::LclUserItems::LocalUserList::GroupItems::UserGroupList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (groupname.is_set || is_set(groupname.yfilter)) leaf_name_data.push_back(groupname.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::InstItems::LclUserItems::LocalUserList::GroupItems::UserGroupList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::InstItems::LclUserItems::LocalUserList::GroupItems::UserGroupList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::InstItems::LclUserItems::LocalUserList::GroupItems::UserGroupList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "groupName")
    {
        groupname = value;
        groupname.value_namespace = name_space;
        groupname.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::InstItems::LclUserItems::LocalUserList::GroupItems::UserGroupList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "groupName")
    {
        groupname.yfilter = yfilter;
    }
}

bool System::SnmpItems::InstItems::LclUserItems::LocalUserList::GroupItems::UserGroupList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "groupName")
        return true;
    return false;
}

System::SnmpItems::ServershutdownItems::ServershutdownItems()
    :
    sysshutdown{YType::enumeration, "sysShutdown"}
{

    yang_name = "servershutdown-items"; yang_parent_name = "snmp-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SnmpItems::ServershutdownItems::~ServershutdownItems()
{
}

bool System::SnmpItems::ServershutdownItems::has_data() const
{
    if (is_presence_container) return true;
    return sysshutdown.is_set;
}

bool System::SnmpItems::ServershutdownItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sysshutdown.yfilter);
}

std::string System::SnmpItems::ServershutdownItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/snmp-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SnmpItems::ServershutdownItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "servershutdown-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SnmpItems::ServershutdownItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sysshutdown.is_set || is_set(sysshutdown.yfilter)) leaf_name_data.push_back(sysshutdown.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SnmpItems::ServershutdownItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SnmpItems::ServershutdownItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SnmpItems::ServershutdownItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sysShutdown")
    {
        sysshutdown = value;
        sysshutdown.value_namespace = name_space;
        sysshutdown.value_namespace_prefix = name_space_prefix;
    }
}

void System::SnmpItems::ServershutdownItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sysShutdown")
    {
        sysshutdown.yfilter = yfilter;
    }
}

bool System::SnmpItems::ServershutdownItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sysShutdown")
        return true;
    return false;
}

System::SyslogacctItems::SyslogacctItems()
    :
    timertick{YType::uint32, "timerTick"},
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "syslogacct-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SyslogacctItems::~SyslogacctItems()
{
}

bool System::SyslogacctItems::has_data() const
{
    if (is_presence_container) return true;
    return timertick.is_set
	|| name.is_set
	|| adminst.is_set
	|| operst.is_set;
}

bool System::SyslogacctItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timertick.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::SyslogacctItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SyslogacctItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "syslogacct-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SyslogacctItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timertick.is_set || is_set(timertick.yfilter)) leaf_name_data.push_back(timertick.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SyslogacctItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SyslogacctItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SyslogacctItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timerTick")
    {
        timertick = value;
        timertick.value_namespace = name_space;
        timertick.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
}

void System::SyslogacctItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timerTick")
    {
        timertick.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::SyslogacctItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timerTick" || name == "name" || name == "adminSt" || name == "operSt")
        return true;
    return false;
}

System::SyslogItems::SyslogItems()
    :
    timestamp_items(std::make_shared<System::SyslogItems::TimestampItems>())
    , level_items(std::make_shared<System::SyslogItems::LevelItems>())
    , monitor_items(std::make_shared<System::SyslogItems::MonitorItems>())
    , console_items(std::make_shared<System::SyslogItems::ConsoleItems>())
    , originid_items(std::make_shared<System::SyslogItems::OriginidItems>())
    , rdst_items(std::make_shared<System::SyslogItems::RdstItems>())
    , source_items(std::make_shared<System::SyslogItems::SourceItems>())
    , file_items(std::make_shared<System::SyslogItems::FileItems>())
    , inst_items(std::make_shared<System::SyslogItems::InstItems>())
{
    timestamp_items->parent = this;
    level_items->parent = this;
    monitor_items->parent = this;
    console_items->parent = this;
    originid_items->parent = this;
    rdst_items->parent = this;
    source_items->parent = this;
    file_items->parent = this;
    inst_items->parent = this;

    yang_name = "syslog-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SyslogItems::~SyslogItems()
{
}

bool System::SyslogItems::has_data() const
{
    if (is_presence_container) return true;
    return (timestamp_items !=  nullptr && timestamp_items->has_data())
	|| (level_items !=  nullptr && level_items->has_data())
	|| (monitor_items !=  nullptr && monitor_items->has_data())
	|| (console_items !=  nullptr && console_items->has_data())
	|| (originid_items !=  nullptr && originid_items->has_data())
	|| (rdst_items !=  nullptr && rdst_items->has_data())
	|| (source_items !=  nullptr && source_items->has_data())
	|| (file_items !=  nullptr && file_items->has_data())
	|| (inst_items !=  nullptr && inst_items->has_data());
}

bool System::SyslogItems::has_operation() const
{
    return is_set(yfilter)
	|| (timestamp_items !=  nullptr && timestamp_items->has_operation())
	|| (level_items !=  nullptr && level_items->has_operation())
	|| (monitor_items !=  nullptr && monitor_items->has_operation())
	|| (console_items !=  nullptr && console_items->has_operation())
	|| (originid_items !=  nullptr && originid_items->has_operation())
	|| (rdst_items !=  nullptr && rdst_items->has_operation())
	|| (source_items !=  nullptr && source_items->has_operation())
	|| (file_items !=  nullptr && file_items->has_operation())
	|| (inst_items !=  nullptr && inst_items->has_operation());
}

std::string System::SyslogItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SyslogItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "syslog-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SyslogItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SyslogItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "timestamp-items")
    {
        if(timestamp_items == nullptr)
        {
            timestamp_items = std::make_shared<System::SyslogItems::TimestampItems>();
        }
        return timestamp_items;
    }

    if(child_yang_name == "level-items")
    {
        if(level_items == nullptr)
        {
            level_items = std::make_shared<System::SyslogItems::LevelItems>();
        }
        return level_items;
    }

    if(child_yang_name == "monitor-items")
    {
        if(monitor_items == nullptr)
        {
            monitor_items = std::make_shared<System::SyslogItems::MonitorItems>();
        }
        return monitor_items;
    }

    if(child_yang_name == "console-items")
    {
        if(console_items == nullptr)
        {
            console_items = std::make_shared<System::SyslogItems::ConsoleItems>();
        }
        return console_items;
    }

    if(child_yang_name == "originid-items")
    {
        if(originid_items == nullptr)
        {
            originid_items = std::make_shared<System::SyslogItems::OriginidItems>();
        }
        return originid_items;
    }

    if(child_yang_name == "rdst-items")
    {
        if(rdst_items == nullptr)
        {
            rdst_items = std::make_shared<System::SyslogItems::RdstItems>();
        }
        return rdst_items;
    }

    if(child_yang_name == "source-items")
    {
        if(source_items == nullptr)
        {
            source_items = std::make_shared<System::SyslogItems::SourceItems>();
        }
        return source_items;
    }

    if(child_yang_name == "file-items")
    {
        if(file_items == nullptr)
        {
            file_items = std::make_shared<System::SyslogItems::FileItems>();
        }
        return file_items;
    }

    if(child_yang_name == "inst-items")
    {
        if(inst_items == nullptr)
        {
            inst_items = std::make_shared<System::SyslogItems::InstItems>();
        }
        return inst_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SyslogItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(timestamp_items != nullptr)
    {
        _children["timestamp-items"] = timestamp_items;
    }

    if(level_items != nullptr)
    {
        _children["level-items"] = level_items;
    }

    if(monitor_items != nullptr)
    {
        _children["monitor-items"] = monitor_items;
    }

    if(console_items != nullptr)
    {
        _children["console-items"] = console_items;
    }

    if(originid_items != nullptr)
    {
        _children["originid-items"] = originid_items;
    }

    if(rdst_items != nullptr)
    {
        _children["rdst-items"] = rdst_items;
    }

    if(source_items != nullptr)
    {
        _children["source-items"] = source_items;
    }

    if(file_items != nullptr)
    {
        _children["file-items"] = file_items;
    }

    if(inst_items != nullptr)
    {
        _children["inst-items"] = inst_items;
    }

    return _children;
}

void System::SyslogItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SyslogItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SyslogItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timestamp-items" || name == "level-items" || name == "monitor-items" || name == "console-items" || name == "originid-items" || name == "rdst-items" || name == "source-items" || name == "file-items" || name == "inst-items")
        return true;
    return false;
}

System::SyslogItems::TimestampItems::TimestampItems()
    :
    format{YType::enumeration, "format"}
{

    yang_name = "timestamp-items"; yang_parent_name = "syslog-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SyslogItems::TimestampItems::~TimestampItems()
{
}

bool System::SyslogItems::TimestampItems::has_data() const
{
    if (is_presence_container) return true;
    return format.is_set;
}

bool System::SyslogItems::TimestampItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(format.yfilter);
}

std::string System::SyslogItems::TimestampItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/syslog-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SyslogItems::TimestampItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timestamp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SyslogItems::TimestampItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (format.is_set || is_set(format.yfilter)) leaf_name_data.push_back(format.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SyslogItems::TimestampItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SyslogItems::TimestampItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SyslogItems::TimestampItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "format")
    {
        format = value;
        format.value_namespace = name_space;
        format.value_namespace_prefix = name_space_prefix;
    }
}

void System::SyslogItems::TimestampItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "format")
    {
        format.yfilter = yfilter;
    }
}

bool System::SyslogItems::TimestampItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "format")
        return true;
    return false;
}

System::SyslogItems::LevelItems::LevelItems()
    :
    level_list(this, {"facility"})
{

    yang_name = "level-items"; yang_parent_name = "syslog-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SyslogItems::LevelItems::~LevelItems()
{
}

bool System::SyslogItems::LevelItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<level_list.len(); index++)
    {
        if(level_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::SyslogItems::LevelItems::has_operation() const
{
    for (std::size_t index=0; index<level_list.len(); index++)
    {
        if(level_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::SyslogItems::LevelItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/syslog-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SyslogItems::LevelItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SyslogItems::LevelItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SyslogItems::LevelItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Level-list")
    {
        auto ent_ = std::make_shared<System::SyslogItems::LevelItems::LevelList>();
        ent_->parent = this;
        level_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SyslogItems::LevelItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : level_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::SyslogItems::LevelItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SyslogItems::LevelItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SyslogItems::LevelItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Level-list")
        return true;
    return false;
}

System::SyslogItems::LevelItems::LevelList::LevelList()
    :
    facility{YType::enumeration, "facility"},
    severity{YType::enumeration, "severity"}
{

    yang_name = "Level-list"; yang_parent_name = "level-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SyslogItems::LevelItems::LevelList::~LevelList()
{
}

bool System::SyslogItems::LevelItems::LevelList::has_data() const
{
    if (is_presence_container) return true;
    return facility.is_set
	|| severity.is_set;
}

bool System::SyslogItems::LevelItems::LevelList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(facility.yfilter)
	|| ydk::is_set(severity.yfilter);
}

std::string System::SyslogItems::LevelItems::LevelList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/syslog-items/level-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SyslogItems::LevelItems::LevelList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Level-list";
    ADD_KEY_TOKEN(facility, "facility");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SyslogItems::LevelItems::LevelList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (facility.is_set || is_set(facility.yfilter)) leaf_name_data.push_back(facility.get_name_leafdata());
    if (severity.is_set || is_set(severity.yfilter)) leaf_name_data.push_back(severity.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SyslogItems::LevelItems::LevelList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SyslogItems::LevelItems::LevelList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SyslogItems::LevelItems::LevelList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "facility")
    {
        facility = value;
        facility.value_namespace = name_space;
        facility.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "severity")
    {
        severity = value;
        severity.value_namespace = name_space;
        severity.value_namespace_prefix = name_space_prefix;
    }
}

void System::SyslogItems::LevelItems::LevelList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "facility")
    {
        facility.yfilter = yfilter;
    }
    if(value_path == "severity")
    {
        severity.yfilter = yfilter;
    }
}

bool System::SyslogItems::LevelItems::LevelList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "facility" || name == "severity")
        return true;
    return false;
}

System::SyslogItems::MonitorItems::MonitorItems()
    :
    adminstate{YType::enumeration, "adminState"},
    severity{YType::enumeration, "severity"}
{

    yang_name = "monitor-items"; yang_parent_name = "syslog-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SyslogItems::MonitorItems::~MonitorItems()
{
}

bool System::SyslogItems::MonitorItems::has_data() const
{
    if (is_presence_container) return true;
    return adminstate.is_set
	|| severity.is_set;
}

bool System::SyslogItems::MonitorItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminstate.yfilter)
	|| ydk::is_set(severity.yfilter);
}

std::string System::SyslogItems::MonitorItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/syslog-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SyslogItems::MonitorItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "monitor-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SyslogItems::MonitorItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminstate.is_set || is_set(adminstate.yfilter)) leaf_name_data.push_back(adminstate.get_name_leafdata());
    if (severity.is_set || is_set(severity.yfilter)) leaf_name_data.push_back(severity.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SyslogItems::MonitorItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SyslogItems::MonitorItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SyslogItems::MonitorItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adminState")
    {
        adminstate = value;
        adminstate.value_namespace = name_space;
        adminstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "severity")
    {
        severity = value;
        severity.value_namespace = name_space;
        severity.value_namespace_prefix = name_space_prefix;
    }
}

void System::SyslogItems::MonitorItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminState")
    {
        adminstate.yfilter = yfilter;
    }
    if(value_path == "severity")
    {
        severity.yfilter = yfilter;
    }
}

bool System::SyslogItems::MonitorItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adminState" || name == "severity")
        return true;
    return false;
}

System::SyslogItems::ConsoleItems::ConsoleItems()
    :
    adminstate{YType::enumeration, "adminState"},
    severity{YType::enumeration, "severity"}
{

    yang_name = "console-items"; yang_parent_name = "syslog-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SyslogItems::ConsoleItems::~ConsoleItems()
{
}

bool System::SyslogItems::ConsoleItems::has_data() const
{
    if (is_presence_container) return true;
    return adminstate.is_set
	|| severity.is_set;
}

bool System::SyslogItems::ConsoleItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminstate.yfilter)
	|| ydk::is_set(severity.yfilter);
}

std::string System::SyslogItems::ConsoleItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/syslog-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SyslogItems::ConsoleItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "console-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SyslogItems::ConsoleItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminstate.is_set || is_set(adminstate.yfilter)) leaf_name_data.push_back(adminstate.get_name_leafdata());
    if (severity.is_set || is_set(severity.yfilter)) leaf_name_data.push_back(severity.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SyslogItems::ConsoleItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SyslogItems::ConsoleItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SyslogItems::ConsoleItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adminState")
    {
        adminstate = value;
        adminstate.value_namespace = name_space;
        adminstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "severity")
    {
        severity = value;
        severity.value_namespace = name_space;
        severity.value_namespace_prefix = name_space_prefix;
    }
}

void System::SyslogItems::ConsoleItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminState")
    {
        adminstate.yfilter = yfilter;
    }
    if(value_path == "severity")
    {
        severity.yfilter = yfilter;
    }
}

bool System::SyslogItems::ConsoleItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adminState" || name == "severity")
        return true;
    return false;
}

System::SyslogItems::OriginidItems::OriginidItems()
    :
    idtype{YType::enumeration, "idtype"},
    idvalue{YType::str, "idvalue"}
{

    yang_name = "originid-items"; yang_parent_name = "syslog-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SyslogItems::OriginidItems::~OriginidItems()
{
}

bool System::SyslogItems::OriginidItems::has_data() const
{
    if (is_presence_container) return true;
    return idtype.is_set
	|| idvalue.is_set;
}

bool System::SyslogItems::OriginidItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(idtype.yfilter)
	|| ydk::is_set(idvalue.yfilter);
}

std::string System::SyslogItems::OriginidItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/syslog-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SyslogItems::OriginidItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "originid-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SyslogItems::OriginidItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (idtype.is_set || is_set(idtype.yfilter)) leaf_name_data.push_back(idtype.get_name_leafdata());
    if (idvalue.is_set || is_set(idvalue.yfilter)) leaf_name_data.push_back(idvalue.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SyslogItems::OriginidItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SyslogItems::OriginidItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SyslogItems::OriginidItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "idtype")
    {
        idtype = value;
        idtype.value_namespace = name_space;
        idtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idvalue")
    {
        idvalue = value;
        idvalue.value_namespace = name_space;
        idvalue.value_namespace_prefix = name_space_prefix;
    }
}

void System::SyslogItems::OriginidItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "idtype")
    {
        idtype.yfilter = yfilter;
    }
    if(value_path == "idvalue")
    {
        idvalue.yfilter = yfilter;
    }
}

bool System::SyslogItems::OriginidItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "idtype" || name == "idvalue")
        return true;
    return false;
}

System::SyslogItems::RdstItems::RdstItems()
    :
    remotedest_list(this, {"host"})
{

    yang_name = "rdst-items"; yang_parent_name = "syslog-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SyslogItems::RdstItems::~RdstItems()
{
}

bool System::SyslogItems::RdstItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<remotedest_list.len(); index++)
    {
        if(remotedest_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::SyslogItems::RdstItems::has_operation() const
{
    for (std::size_t index=0; index<remotedest_list.len(); index++)
    {
        if(remotedest_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::SyslogItems::RdstItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/syslog-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SyslogItems::RdstItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rdst-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SyslogItems::RdstItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SyslogItems::RdstItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RemoteDest-list")
    {
        auto ent_ = std::make_shared<System::SyslogItems::RdstItems::RemoteDestList>();
        ent_->parent = this;
        remotedest_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SyslogItems::RdstItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : remotedest_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::SyslogItems::RdstItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SyslogItems::RdstItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SyslogItems::RdstItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RemoteDest-list")
        return true;
    return false;
}

System::SyslogItems::RdstItems::RemoteDestList::RemoteDestList()
    :
    host{YType::str, "host"},
    severity{YType::enumeration, "severity"},
    port{YType::uint32, "port"},
    transport{YType::enumeration, "transport"},
    trustpointclientidentity{YType::str, "trustpointClientIdentity"},
    forwardingfacility{YType::enumeration, "forwardingFacility"},
    adminstate{YType::enumeration, "adminState"},
    vrfid{YType::uint32, "vrfId"},
    ip{YType::str, "ip"},
    operstate{YType::enumeration, "operState"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    epgdn{YType::str, "epgDn"},
    vrfname{YType::str, "vrfName"}
        ,
    destst_items(std::make_shared<System::SyslogItems::RdstItems::RemoteDestList::DeststItems>())
{
    destst_items->parent = this;

    yang_name = "RemoteDest-list"; yang_parent_name = "rdst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SyslogItems::RdstItems::RemoteDestList::~RemoteDestList()
{
}

bool System::SyslogItems::RdstItems::RemoteDestList::has_data() const
{
    if (is_presence_container) return true;
    return host.is_set
	|| severity.is_set
	|| port.is_set
	|| transport.is_set
	|| trustpointclientidentity.is_set
	|| forwardingfacility.is_set
	|| adminstate.is_set
	|| vrfid.is_set
	|| ip.is_set
	|| operstate.is_set
	|| name.is_set
	|| descr.is_set
	|| epgdn.is_set
	|| vrfname.is_set
	|| (destst_items !=  nullptr && destst_items->has_data());
}

bool System::SyslogItems::RdstItems::RemoteDestList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(host.yfilter)
	|| ydk::is_set(severity.yfilter)
	|| ydk::is_set(port.yfilter)
	|| ydk::is_set(transport.yfilter)
	|| ydk::is_set(trustpointclientidentity.yfilter)
	|| ydk::is_set(forwardingfacility.yfilter)
	|| ydk::is_set(adminstate.yfilter)
	|| ydk::is_set(vrfid.yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(operstate.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(epgdn.yfilter)
	|| ydk::is_set(vrfname.yfilter)
	|| (destst_items !=  nullptr && destst_items->has_operation());
}

std::string System::SyslogItems::RdstItems::RemoteDestList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/syslog-items/rdst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SyslogItems::RdstItems::RemoteDestList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RemoteDest-list";
    ADD_KEY_TOKEN(host, "host");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SyslogItems::RdstItems::RemoteDestList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (host.is_set || is_set(host.yfilter)) leaf_name_data.push_back(host.get_name_leafdata());
    if (severity.is_set || is_set(severity.yfilter)) leaf_name_data.push_back(severity.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());
    if (transport.is_set || is_set(transport.yfilter)) leaf_name_data.push_back(transport.get_name_leafdata());
    if (trustpointclientidentity.is_set || is_set(trustpointclientidentity.yfilter)) leaf_name_data.push_back(trustpointclientidentity.get_name_leafdata());
    if (forwardingfacility.is_set || is_set(forwardingfacility.yfilter)) leaf_name_data.push_back(forwardingfacility.get_name_leafdata());
    if (adminstate.is_set || is_set(adminstate.yfilter)) leaf_name_data.push_back(adminstate.get_name_leafdata());
    if (vrfid.is_set || is_set(vrfid.yfilter)) leaf_name_data.push_back(vrfid.get_name_leafdata());
    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (operstate.is_set || is_set(operstate.yfilter)) leaf_name_data.push_back(operstate.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (epgdn.is_set || is_set(epgdn.yfilter)) leaf_name_data.push_back(epgdn.get_name_leafdata());
    if (vrfname.is_set || is_set(vrfname.yfilter)) leaf_name_data.push_back(vrfname.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SyslogItems::RdstItems::RemoteDestList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destst-items")
    {
        if(destst_items == nullptr)
        {
            destst_items = std::make_shared<System::SyslogItems::RdstItems::RemoteDestList::DeststItems>();
        }
        return destst_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SyslogItems::RdstItems::RemoteDestList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(destst_items != nullptr)
    {
        _children["destst-items"] = destst_items;
    }

    return _children;
}

void System::SyslogItems::RdstItems::RemoteDestList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "host")
    {
        host = value;
        host.value_namespace = name_space;
        host.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "severity")
    {
        severity = value;
        severity.value_namespace = name_space;
        severity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transport")
    {
        transport = value;
        transport.value_namespace = name_space;
        transport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trustpointClientIdentity")
    {
        trustpointclientidentity = value;
        trustpointclientidentity.value_namespace = name_space;
        trustpointclientidentity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forwardingFacility")
    {
        forwardingfacility = value;
        forwardingfacility.value_namespace = name_space;
        forwardingfacility.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminState")
    {
        adminstate = value;
        adminstate.value_namespace = name_space;
        adminstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrfId")
    {
        vrfid = value;
        vrfid.value_namespace = name_space;
        vrfid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operState")
    {
        operstate = value;
        operstate.value_namespace = name_space;
        operstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "epgDn")
    {
        epgdn = value;
        epgdn.value_namespace = name_space;
        epgdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrfName")
    {
        vrfname = value;
        vrfname.value_namespace = name_space;
        vrfname.value_namespace_prefix = name_space_prefix;
    }
}

void System::SyslogItems::RdstItems::RemoteDestList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "host")
    {
        host.yfilter = yfilter;
    }
    if(value_path == "severity")
    {
        severity.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
    if(value_path == "transport")
    {
        transport.yfilter = yfilter;
    }
    if(value_path == "trustpointClientIdentity")
    {
        trustpointclientidentity.yfilter = yfilter;
    }
    if(value_path == "forwardingFacility")
    {
        forwardingfacility.yfilter = yfilter;
    }
    if(value_path == "adminState")
    {
        adminstate.yfilter = yfilter;
    }
    if(value_path == "vrfId")
    {
        vrfid.yfilter = yfilter;
    }
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "operState")
    {
        operstate.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "epgDn")
    {
        epgdn.yfilter = yfilter;
    }
    if(value_path == "vrfName")
    {
        vrfname.yfilter = yfilter;
    }
}

bool System::SyslogItems::RdstItems::RemoteDestList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destst-items" || name == "host" || name == "severity" || name == "port" || name == "transport" || name == "trustpointClientIdentity" || name == "forwardingFacility" || name == "adminState" || name == "vrfId" || name == "ip" || name == "operState" || name == "name" || name == "descr" || name == "epgDn" || name == "vrfName")
        return true;
    return false;
}

System::SyslogItems::RdstItems::RemoteDestList::DeststItems::DeststItems()
    :
    deststate_list(this, {"name"})
{

    yang_name = "destst-items"; yang_parent_name = "RemoteDest-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::SyslogItems::RdstItems::RemoteDestList::DeststItems::~DeststItems()
{
}

bool System::SyslogItems::RdstItems::RemoteDestList::DeststItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<deststate_list.len(); index++)
    {
        if(deststate_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::SyslogItems::RdstItems::RemoteDestList::DeststItems::has_operation() const
{
    for (std::size_t index=0; index<deststate_list.len(); index++)
    {
        if(deststate_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::SyslogItems::RdstItems::RemoteDestList::DeststItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destst-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SyslogItems::RdstItems::RemoteDestList::DeststItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SyslogItems::RdstItems::RemoteDestList::DeststItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "DestState-list")
    {
        auto ent_ = std::make_shared<System::SyslogItems::RdstItems::RemoteDestList::DeststItems::DestStateList>();
        ent_->parent = this;
        deststate_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SyslogItems::RdstItems::RemoteDestList::DeststItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : deststate_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::SyslogItems::RdstItems::RemoteDestList::DeststItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SyslogItems::RdstItems::RemoteDestList::DeststItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SyslogItems::RdstItems::RemoteDestList::DeststItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "DestState-list")
        return true;
    return false;
}

System::SyslogItems::RdstItems::RemoteDestList::DeststItems::DestStateList::DestStateList()
    :
    name{YType::str, "name"},
    operstate{YType::enumeration, "operState"},
    vrfid{YType::uint32, "vrfId"},
    ip{YType::str, "ip"},
    totalbufferedmsgs{YType::uint32, "totalBufferedMsgs"},
    totaldroppedmsgs{YType::uint32, "totalDroppedMsgs"},
    descr{YType::str, "descr"}
        ,
    msg_items(std::make_shared<System::SyslogItems::RdstItems::RemoteDestList::DeststItems::DestStateList::MsgItems>())
{
    msg_items->parent = this;

    yang_name = "DestState-list"; yang_parent_name = "destst-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::SyslogItems::RdstItems::RemoteDestList::DeststItems::DestStateList::~DestStateList()
{
}

bool System::SyslogItems::RdstItems::RemoteDestList::DeststItems::DestStateList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| operstate.is_set
	|| vrfid.is_set
	|| ip.is_set
	|| totalbufferedmsgs.is_set
	|| totaldroppedmsgs.is_set
	|| descr.is_set
	|| (msg_items !=  nullptr && msg_items->has_data());
}

bool System::SyslogItems::RdstItems::RemoteDestList::DeststItems::DestStateList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(operstate.yfilter)
	|| ydk::is_set(vrfid.yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(totalbufferedmsgs.yfilter)
	|| ydk::is_set(totaldroppedmsgs.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| (msg_items !=  nullptr && msg_items->has_operation());
}

std::string System::SyslogItems::RdstItems::RemoteDestList::DeststItems::DestStateList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DestState-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SyslogItems::RdstItems::RemoteDestList::DeststItems::DestStateList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (operstate.is_set || is_set(operstate.yfilter)) leaf_name_data.push_back(operstate.get_name_leafdata());
    if (vrfid.is_set || is_set(vrfid.yfilter)) leaf_name_data.push_back(vrfid.get_name_leafdata());
    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (totalbufferedmsgs.is_set || is_set(totalbufferedmsgs.yfilter)) leaf_name_data.push_back(totalbufferedmsgs.get_name_leafdata());
    if (totaldroppedmsgs.is_set || is_set(totaldroppedmsgs.yfilter)) leaf_name_data.push_back(totaldroppedmsgs.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SyslogItems::RdstItems::RemoteDestList::DeststItems::DestStateList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "msg-items")
    {
        if(msg_items == nullptr)
        {
            msg_items = std::make_shared<System::SyslogItems::RdstItems::RemoteDestList::DeststItems::DestStateList::MsgItems>();
        }
        return msg_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SyslogItems::RdstItems::RemoteDestList::DeststItems::DestStateList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(msg_items != nullptr)
    {
        _children["msg-items"] = msg_items;
    }

    return _children;
}

void System::SyslogItems::RdstItems::RemoteDestList::DeststItems::DestStateList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operState")
    {
        operstate = value;
        operstate.value_namespace = name_space;
        operstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrfId")
    {
        vrfid = value;
        vrfid.value_namespace = name_space;
        vrfid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "totalBufferedMsgs")
    {
        totalbufferedmsgs = value;
        totalbufferedmsgs.value_namespace = name_space;
        totalbufferedmsgs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "totalDroppedMsgs")
    {
        totaldroppedmsgs = value;
        totaldroppedmsgs.value_namespace = name_space;
        totaldroppedmsgs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::SyslogItems::RdstItems::RemoteDestList::DeststItems::DestStateList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "operState")
    {
        operstate.yfilter = yfilter;
    }
    if(value_path == "vrfId")
    {
        vrfid.yfilter = yfilter;
    }
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "totalBufferedMsgs")
    {
        totalbufferedmsgs.yfilter = yfilter;
    }
    if(value_path == "totalDroppedMsgs")
    {
        totaldroppedmsgs.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::SyslogItems::RdstItems::RemoteDestList::DeststItems::DestStateList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "msg-items" || name == "name" || name == "operState" || name == "vrfId" || name == "ip" || name == "totalBufferedMsgs" || name == "totalDroppedMsgs" || name == "descr")
        return true;
    return false;
}

System::SyslogItems::RdstItems::RemoteDestList::DeststItems::DestStateList::MsgItems::MsgItems()
    :
    logmsg_list(this, {"index_"})
{

    yang_name = "msg-items"; yang_parent_name = "DestState-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::SyslogItems::RdstItems::RemoteDestList::DeststItems::DestStateList::MsgItems::~MsgItems()
{
}

bool System::SyslogItems::RdstItems::RemoteDestList::DeststItems::DestStateList::MsgItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<logmsg_list.len(); index++)
    {
        if(logmsg_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::SyslogItems::RdstItems::RemoteDestList::DeststItems::DestStateList::MsgItems::has_operation() const
{
    for (std::size_t index=0; index<logmsg_list.len(); index++)
    {
        if(logmsg_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::SyslogItems::RdstItems::RemoteDestList::DeststItems::DestStateList::MsgItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "msg-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SyslogItems::RdstItems::RemoteDestList::DeststItems::DestStateList::MsgItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SyslogItems::RdstItems::RemoteDestList::DeststItems::DestStateList::MsgItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "LogMsg-list")
    {
        auto ent_ = std::make_shared<System::SyslogItems::RdstItems::RemoteDestList::DeststItems::DestStateList::MsgItems::LogMsgList>();
        ent_->parent = this;
        logmsg_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SyslogItems::RdstItems::RemoteDestList::DeststItems::DestStateList::MsgItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : logmsg_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::SyslogItems::RdstItems::RemoteDestList::DeststItems::DestStateList::MsgItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::SyslogItems::RdstItems::RemoteDestList::DeststItems::DestStateList::MsgItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::SyslogItems::RdstItems::RemoteDestList::DeststItems::DestStateList::MsgItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LogMsg-list")
        return true;
    return false;
}

System::SyslogItems::RdstItems::RemoteDestList::DeststItems::DestStateList::MsgItems::LogMsgList::LogMsgList()
    :
    index_{YType::uint32, "index"},
    message{YType::str, "message"},
    facility{YType::str, "facility"},
    severity{YType::uint16, "severity"},
    name{YType::str, "name"},
    descr{YType::str, "descr"}
{

    yang_name = "LogMsg-list"; yang_parent_name = "msg-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::SyslogItems::RdstItems::RemoteDestList::DeststItems::DestStateList::MsgItems::LogMsgList::~LogMsgList()
{
}

bool System::SyslogItems::RdstItems::RemoteDestList::DeststItems::DestStateList::MsgItems::LogMsgList::has_data() const
{
    if (is_presence_container) return true;
    return index_.is_set
	|| message.is_set
	|| facility.is_set
	|| severity.is_set
	|| name.is_set
	|| descr.is_set;
}

bool System::SyslogItems::RdstItems::RemoteDestList::DeststItems::DestStateList::MsgItems::LogMsgList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(message.yfilter)
	|| ydk::is_set(facility.yfilter)
	|| ydk::is_set(severity.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::SyslogItems::RdstItems::RemoteDestList::DeststItems::DestStateList::MsgItems::LogMsgList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LogMsg-list";
    ADD_KEY_TOKEN(index_, "index");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SyslogItems::RdstItems::RemoteDestList::DeststItems::DestStateList::MsgItems::LogMsgList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (message.is_set || is_set(message.yfilter)) leaf_name_data.push_back(message.get_name_leafdata());
    if (facility.is_set || is_set(facility.yfilter)) leaf_name_data.push_back(facility.get_name_leafdata());
    if (severity.is_set || is_set(severity.yfilter)) leaf_name_data.push_back(severity.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SyslogItems::RdstItems::RemoteDestList::DeststItems::DestStateList::MsgItems::LogMsgList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SyslogItems::RdstItems::RemoteDestList::DeststItems::DestStateList::MsgItems::LogMsgList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SyslogItems::RdstItems::RemoteDestList::DeststItems::DestStateList::MsgItems::LogMsgList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "message")
    {
        message = value;
        message.value_namespace = name_space;
        message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "facility")
    {
        facility = value;
        facility.value_namespace = name_space;
        facility.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "severity")
    {
        severity = value;
        severity.value_namespace = name_space;
        severity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::SyslogItems::RdstItems::RemoteDestList::DeststItems::DestStateList::MsgItems::LogMsgList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "message")
    {
        message.yfilter = yfilter;
    }
    if(value_path == "facility")
    {
        facility.yfilter = yfilter;
    }
    if(value_path == "severity")
    {
        severity.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::SyslogItems::RdstItems::RemoteDestList::DeststItems::DestStateList::MsgItems::LogMsgList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "index" || name == "message" || name == "facility" || name == "severity" || name == "name" || name == "descr")
        return true;
    return false;
}

System::SyslogItems::SourceItems::SourceItems()
    :
    adminstate{YType::enumeration, "adminState"},
    ifname{YType::str, "ifName"},
    operstate{YType::enumeration, "operState"}
{

    yang_name = "source-items"; yang_parent_name = "syslog-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SyslogItems::SourceItems::~SourceItems()
{
}

bool System::SyslogItems::SourceItems::has_data() const
{
    if (is_presence_container) return true;
    return adminstate.is_set
	|| ifname.is_set
	|| operstate.is_set;
}

bool System::SyslogItems::SourceItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminstate.yfilter)
	|| ydk::is_set(ifname.yfilter)
	|| ydk::is_set(operstate.yfilter);
}

std::string System::SyslogItems::SourceItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/syslog-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SyslogItems::SourceItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SyslogItems::SourceItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminstate.is_set || is_set(adminstate.yfilter)) leaf_name_data.push_back(adminstate.get_name_leafdata());
    if (ifname.is_set || is_set(ifname.yfilter)) leaf_name_data.push_back(ifname.get_name_leafdata());
    if (operstate.is_set || is_set(operstate.yfilter)) leaf_name_data.push_back(operstate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SyslogItems::SourceItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SyslogItems::SourceItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SyslogItems::SourceItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adminState")
    {
        adminstate = value;
        adminstate.value_namespace = name_space;
        adminstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifName")
    {
        ifname = value;
        ifname.value_namespace = name_space;
        ifname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operState")
    {
        operstate = value;
        operstate.value_namespace = name_space;
        operstate.value_namespace_prefix = name_space_prefix;
    }
}

void System::SyslogItems::SourceItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminState")
    {
        adminstate.yfilter = yfilter;
    }
    if(value_path == "ifName")
    {
        ifname.yfilter = yfilter;
    }
    if(value_path == "operState")
    {
        operstate.yfilter = yfilter;
    }
}

bool System::SyslogItems::SourceItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adminState" || name == "ifName" || name == "operState")
        return true;
    return false;
}

System::SyslogItems::FileItems::FileItems()
    :
    adminstate{YType::enumeration, "adminState"},
    severity{YType::enumeration, "severity"},
    size{YType::uint32, "size"},
    name{YType::str, "name"},
    descr{YType::str, "descr"}
{

    yang_name = "file-items"; yang_parent_name = "syslog-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SyslogItems::FileItems::~FileItems()
{
}

bool System::SyslogItems::FileItems::has_data() const
{
    if (is_presence_container) return true;
    return adminstate.is_set
	|| severity.is_set
	|| size.is_set
	|| name.is_set
	|| descr.is_set;
}

bool System::SyslogItems::FileItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminstate.yfilter)
	|| ydk::is_set(severity.yfilter)
	|| ydk::is_set(size.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::SyslogItems::FileItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/syslog-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SyslogItems::FileItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "file-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SyslogItems::FileItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminstate.is_set || is_set(adminstate.yfilter)) leaf_name_data.push_back(adminstate.get_name_leafdata());
    if (severity.is_set || is_set(severity.yfilter)) leaf_name_data.push_back(severity.get_name_leafdata());
    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SyslogItems::FileItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SyslogItems::FileItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SyslogItems::FileItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adminState")
    {
        adminstate = value;
        adminstate.value_namespace = name_space;
        adminstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "severity")
    {
        severity = value;
        severity.value_namespace = name_space;
        severity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::SyslogItems::FileItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminState")
    {
        adminstate.yfilter = yfilter;
    }
    if(value_path == "severity")
    {
        severity.yfilter = yfilter;
    }
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::SyslogItems::FileItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adminState" || name == "severity" || name == "size" || name == "name" || name == "descr")
        return true;
    return false;
}

System::SyslogItems::InstItems::InstItems()
    :
    modadminstate{YType::enumeration, "modAdminState"},
    modseverity{YType::enumeration, "modSeverity"}
{

    yang_name = "inst-items"; yang_parent_name = "syslog-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SyslogItems::InstItems::~InstItems()
{
}

bool System::SyslogItems::InstItems::has_data() const
{
    if (is_presence_container) return true;
    return modadminstate.is_set
	|| modseverity.is_set;
}

bool System::SyslogItems::InstItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(modadminstate.yfilter)
	|| ydk::is_set(modseverity.yfilter);
}

std::string System::SyslogItems::InstItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/syslog-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SyslogItems::InstItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inst-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SyslogItems::InstItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (modadminstate.is_set || is_set(modadminstate.yfilter)) leaf_name_data.push_back(modadminstate.get_name_leafdata());
    if (modseverity.is_set || is_set(modseverity.yfilter)) leaf_name_data.push_back(modseverity.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SyslogItems::InstItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SyslogItems::InstItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SyslogItems::InstItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "modAdminState")
    {
        modadminstate = value;
        modadminstate.value_namespace = name_space;
        modadminstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "modSeverity")
    {
        modseverity = value;
        modseverity.value_namespace = name_space;
        modseverity.value_namespace_prefix = name_space_prefix;
    }
}

void System::SyslogItems::InstItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "modAdminState")
    {
        modadminstate.yfilter = yfilter;
    }
    if(value_path == "modSeverity")
    {
        modseverity.yfilter = yfilter;
    }
}

bool System::SyslogItems::InstItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "modAdminState" || name == "modSeverity")
        return true;
    return false;
}

System::MtsItems::MtsItems()
    :
    topsaps_items(std::make_shared<System::MtsItems::TopsapsItems>())
    , qfullsaps_items(std::make_shared<System::MtsItems::QfullsapsItems>())
{
    topsaps_items->parent = this;
    qfullsaps_items->parent = this;

    yang_name = "mts-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::MtsItems::~MtsItems()
{
}

bool System::MtsItems::has_data() const
{
    if (is_presence_container) return true;
    return (topsaps_items !=  nullptr && topsaps_items->has_data())
	|| (qfullsaps_items !=  nullptr && qfullsaps_items->has_data());
}

bool System::MtsItems::has_operation() const
{
    return is_set(yfilter)
	|| (topsaps_items !=  nullptr && topsaps_items->has_operation())
	|| (qfullsaps_items !=  nullptr && qfullsaps_items->has_operation());
}

std::string System::MtsItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::MtsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mts-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MtsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MtsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "topsaps-items")
    {
        if(topsaps_items == nullptr)
        {
            topsaps_items = std::make_shared<System::MtsItems::TopsapsItems>();
        }
        return topsaps_items;
    }

    if(child_yang_name == "qfullsaps-items")
    {
        if(qfullsaps_items == nullptr)
        {
            qfullsaps_items = std::make_shared<System::MtsItems::QfullsapsItems>();
        }
        return qfullsaps_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MtsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(topsaps_items != nullptr)
    {
        _children["topsaps-items"] = topsaps_items;
    }

    if(qfullsaps_items != nullptr)
    {
        _children["qfullsaps-items"] = qfullsaps_items;
    }

    return _children;
}

void System::MtsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MtsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MtsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "topsaps-items" || name == "qfullsaps-items")
        return true;
    return false;
}

System::MtsItems::TopsapsItems::TopsapsItems()
    :
    memused{YType::uint32, "memUsed"}
        ,
    tsap_items(std::make_shared<System::MtsItems::TopsapsItems::TsapItems>())
{
    tsap_items->parent = this;

    yang_name = "topsaps-items"; yang_parent_name = "mts-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::MtsItems::TopsapsItems::~TopsapsItems()
{
}

bool System::MtsItems::TopsapsItems::has_data() const
{
    if (is_presence_container) return true;
    return memused.is_set
	|| (tsap_items !=  nullptr && tsap_items->has_data());
}

bool System::MtsItems::TopsapsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(memused.yfilter)
	|| (tsap_items !=  nullptr && tsap_items->has_operation());
}

std::string System::MtsItems::TopsapsItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/mts-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::MtsItems::TopsapsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topsaps-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MtsItems::TopsapsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (memused.is_set || is_set(memused.yfilter)) leaf_name_data.push_back(memused.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MtsItems::TopsapsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tsap-items")
    {
        if(tsap_items == nullptr)
        {
            tsap_items = std::make_shared<System::MtsItems::TopsapsItems::TsapItems>();
        }
        return tsap_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MtsItems::TopsapsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(tsap_items != nullptr)
    {
        _children["tsap-items"] = tsap_items;
    }

    return _children;
}

void System::MtsItems::TopsapsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "memUsed")
    {
        memused = value;
        memused.value_namespace = name_space;
        memused.value_namespace_prefix = name_space_prefix;
    }
}

void System::MtsItems::TopsapsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "memUsed")
    {
        memused.yfilter = yfilter;
    }
}

bool System::MtsItems::TopsapsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tsap-items" || name == "memUsed")
        return true;
    return false;
}

System::MtsItems::TopsapsItems::TsapItems::TsapItems()
    :
    tsap_list(this, {"index_"})
{

    yang_name = "tsap-items"; yang_parent_name = "topsaps-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::MtsItems::TopsapsItems::TsapItems::~TsapItems()
{
}

bool System::MtsItems::TopsapsItems::TsapItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tsap_list.len(); index++)
    {
        if(tsap_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::MtsItems::TopsapsItems::TsapItems::has_operation() const
{
    for (std::size_t index=0; index<tsap_list.len(); index++)
    {
        if(tsap_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::MtsItems::TopsapsItems::TsapItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/mts-items/topsaps-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::MtsItems::TopsapsItems::TsapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tsap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MtsItems::TopsapsItems::TsapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MtsItems::TopsapsItems::TsapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "TSap-list")
    {
        auto ent_ = std::make_shared<System::MtsItems::TopsapsItems::TsapItems::TSapList>();
        ent_->parent = this;
        tsap_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MtsItems::TopsapsItems::TsapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : tsap_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::MtsItems::TopsapsItems::TsapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MtsItems::TopsapsItems::TsapItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MtsItems::TopsapsItems::TsapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "TSap-list")
        return true;
    return false;
}

System::MtsItems::TopsapsItems::TsapItems::TSapList::TSapList()
    :
    index_{YType::uint32, "index"},
    sapid{YType::uint32, "sapId"},
    desc{YType::str, "desc"},
    process{YType::str, "process"},
    timestamp{YType::str, "timestamp"},
    msgcount{YType::uint32, "msgCount"},
    bytescount{YType::uint32, "bytesCount"},
    memusedintotalmem{YType::uint32, "memUsedInTotalMem"},
    memusedinsapshare{YType::uint32, "memUsedInSapShare"},
    nodeid{YType::uint32, "nodeId"}
{

    yang_name = "TSap-list"; yang_parent_name = "tsap-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::MtsItems::TopsapsItems::TsapItems::TSapList::~TSapList()
{
}

bool System::MtsItems::TopsapsItems::TsapItems::TSapList::has_data() const
{
    if (is_presence_container) return true;
    return index_.is_set
	|| sapid.is_set
	|| desc.is_set
	|| process.is_set
	|| timestamp.is_set
	|| msgcount.is_set
	|| bytescount.is_set
	|| memusedintotalmem.is_set
	|| memusedinsapshare.is_set
	|| nodeid.is_set;
}

bool System::MtsItems::TopsapsItems::TsapItems::TSapList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(sapid.yfilter)
	|| ydk::is_set(desc.yfilter)
	|| ydk::is_set(process.yfilter)
	|| ydk::is_set(timestamp.yfilter)
	|| ydk::is_set(msgcount.yfilter)
	|| ydk::is_set(bytescount.yfilter)
	|| ydk::is_set(memusedintotalmem.yfilter)
	|| ydk::is_set(memusedinsapshare.yfilter)
	|| ydk::is_set(nodeid.yfilter);
}

std::string System::MtsItems::TopsapsItems::TsapItems::TSapList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/mts-items/topsaps-items/tsap-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::MtsItems::TopsapsItems::TsapItems::TSapList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "TSap-list";
    ADD_KEY_TOKEN(index_, "index");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MtsItems::TopsapsItems::TsapItems::TSapList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (sapid.is_set || is_set(sapid.yfilter)) leaf_name_data.push_back(sapid.get_name_leafdata());
    if (desc.is_set || is_set(desc.yfilter)) leaf_name_data.push_back(desc.get_name_leafdata());
    if (process.is_set || is_set(process.yfilter)) leaf_name_data.push_back(process.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.yfilter)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (msgcount.is_set || is_set(msgcount.yfilter)) leaf_name_data.push_back(msgcount.get_name_leafdata());
    if (bytescount.is_set || is_set(bytescount.yfilter)) leaf_name_data.push_back(bytescount.get_name_leafdata());
    if (memusedintotalmem.is_set || is_set(memusedintotalmem.yfilter)) leaf_name_data.push_back(memusedintotalmem.get_name_leafdata());
    if (memusedinsapshare.is_set || is_set(memusedinsapshare.yfilter)) leaf_name_data.push_back(memusedinsapshare.get_name_leafdata());
    if (nodeid.is_set || is_set(nodeid.yfilter)) leaf_name_data.push_back(nodeid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MtsItems::TopsapsItems::TsapItems::TSapList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MtsItems::TopsapsItems::TsapItems::TSapList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::MtsItems::TopsapsItems::TsapItems::TSapList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sapId")
    {
        sapid = value;
        sapid.value_namespace = name_space;
        sapid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "desc")
    {
        desc = value;
        desc.value_namespace = name_space;
        desc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "process")
    {
        process = value;
        process.value_namespace = name_space;
        process.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timestamp")
    {
        timestamp = value;
        timestamp.value_namespace = name_space;
        timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msgCount")
    {
        msgcount = value;
        msgcount.value_namespace = name_space;
        msgcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bytesCount")
    {
        bytescount = value;
        bytescount.value_namespace = name_space;
        bytescount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "memUsedInTotalMem")
    {
        memusedintotalmem = value;
        memusedintotalmem.value_namespace = name_space;
        memusedintotalmem.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "memUsedInSapShare")
    {
        memusedinsapshare = value;
        memusedinsapshare.value_namespace = name_space;
        memusedinsapshare.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nodeId")
    {
        nodeid = value;
        nodeid.value_namespace = name_space;
        nodeid.value_namespace_prefix = name_space_prefix;
    }
}

void System::MtsItems::TopsapsItems::TsapItems::TSapList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "sapId")
    {
        sapid.yfilter = yfilter;
    }
    if(value_path == "desc")
    {
        desc.yfilter = yfilter;
    }
    if(value_path == "process")
    {
        process.yfilter = yfilter;
    }
    if(value_path == "timestamp")
    {
        timestamp.yfilter = yfilter;
    }
    if(value_path == "msgCount")
    {
        msgcount.yfilter = yfilter;
    }
    if(value_path == "bytesCount")
    {
        bytescount.yfilter = yfilter;
    }
    if(value_path == "memUsedInTotalMem")
    {
        memusedintotalmem.yfilter = yfilter;
    }
    if(value_path == "memUsedInSapShare")
    {
        memusedinsapshare.yfilter = yfilter;
    }
    if(value_path == "nodeId")
    {
        nodeid.yfilter = yfilter;
    }
}

bool System::MtsItems::TopsapsItems::TsapItems::TSapList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "index" || name == "sapId" || name == "desc" || name == "process" || name == "timestamp" || name == "msgCount" || name == "bytesCount" || name == "memUsedInTotalMem" || name == "memUsedInSapShare" || name == "nodeId")
        return true;
    return false;
}

System::MtsItems::QfullsapsItems::QfullsapsItems()
    :
    qsap_items(std::make_shared<System::MtsItems::QfullsapsItems::QsapItems>())
{
    qsap_items->parent = this;

    yang_name = "qfullsaps-items"; yang_parent_name = "mts-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::MtsItems::QfullsapsItems::~QfullsapsItems()
{
}

bool System::MtsItems::QfullsapsItems::has_data() const
{
    if (is_presence_container) return true;
    return (qsap_items !=  nullptr && qsap_items->has_data());
}

bool System::MtsItems::QfullsapsItems::has_operation() const
{
    return is_set(yfilter)
	|| (qsap_items !=  nullptr && qsap_items->has_operation());
}

std::string System::MtsItems::QfullsapsItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/mts-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::MtsItems::QfullsapsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qfullsaps-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MtsItems::QfullsapsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MtsItems::QfullsapsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "qsap-items")
    {
        if(qsap_items == nullptr)
        {
            qsap_items = std::make_shared<System::MtsItems::QfullsapsItems::QsapItems>();
        }
        return qsap_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MtsItems::QfullsapsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(qsap_items != nullptr)
    {
        _children["qsap-items"] = qsap_items;
    }

    return _children;
}

void System::MtsItems::QfullsapsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MtsItems::QfullsapsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MtsItems::QfullsapsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "qsap-items")
        return true;
    return false;
}

System::MtsItems::QfullsapsItems::QsapItems::QsapItems()
    :
    qsap_list(this, {"sapid"})
{

    yang_name = "qsap-items"; yang_parent_name = "qfullsaps-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::MtsItems::QfullsapsItems::QsapItems::~QsapItems()
{
}

bool System::MtsItems::QfullsapsItems::QsapItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<qsap_list.len(); index++)
    {
        if(qsap_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::MtsItems::QfullsapsItems::QsapItems::has_operation() const
{
    for (std::size_t index=0; index<qsap_list.len(); index++)
    {
        if(qsap_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::MtsItems::QfullsapsItems::QsapItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/mts-items/qfullsaps-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::MtsItems::QfullsapsItems::QsapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qsap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MtsItems::QfullsapsItems::QsapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MtsItems::QfullsapsItems::QsapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "QSap-list")
    {
        auto ent_ = std::make_shared<System::MtsItems::QfullsapsItems::QsapItems::QSapList>();
        ent_->parent = this;
        qsap_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MtsItems::QfullsapsItems::QsapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : qsap_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::MtsItems::QfullsapsItems::QsapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MtsItems::QfullsapsItems::QsapItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MtsItems::QfullsapsItems::QsapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "QSap-list")
        return true;
    return false;
}

System::MtsItems::QfullsapsItems::QsapItems::QSapList::QSapList()
    :
    sapid{YType::uint32, "sapId"},
    qstate{YType::str, "qstate"},
    desc{YType::str, "desc"},
    process{YType::str, "process"},
    timestamp{YType::str, "timestamp"},
    msgcount{YType::uint32, "msgCount"},
    bytescount{YType::uint32, "bytesCount"},
    memusedintotalmem{YType::uint32, "memUsedInTotalMem"},
    memusedinsapshare{YType::uint32, "memUsedInSapShare"},
    index_{YType::uint32, "index"},
    nodeid{YType::uint32, "nodeId"}
{

    yang_name = "QSap-list"; yang_parent_name = "qsap-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::MtsItems::QfullsapsItems::QsapItems::QSapList::~QSapList()
{
}

bool System::MtsItems::QfullsapsItems::QsapItems::QSapList::has_data() const
{
    if (is_presence_container) return true;
    return sapid.is_set
	|| qstate.is_set
	|| desc.is_set
	|| process.is_set
	|| timestamp.is_set
	|| msgcount.is_set
	|| bytescount.is_set
	|| memusedintotalmem.is_set
	|| memusedinsapshare.is_set
	|| index_.is_set
	|| nodeid.is_set;
}

bool System::MtsItems::QfullsapsItems::QsapItems::QSapList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sapid.yfilter)
	|| ydk::is_set(qstate.yfilter)
	|| ydk::is_set(desc.yfilter)
	|| ydk::is_set(process.yfilter)
	|| ydk::is_set(timestamp.yfilter)
	|| ydk::is_set(msgcount.yfilter)
	|| ydk::is_set(bytescount.yfilter)
	|| ydk::is_set(memusedintotalmem.yfilter)
	|| ydk::is_set(memusedinsapshare.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(nodeid.yfilter);
}

std::string System::MtsItems::QfullsapsItems::QsapItems::QSapList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/mts-items/qfullsaps-items/qsap-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::MtsItems::QfullsapsItems::QsapItems::QSapList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "QSap-list";
    ADD_KEY_TOKEN(sapid, "sapId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MtsItems::QfullsapsItems::QsapItems::QSapList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sapid.is_set || is_set(sapid.yfilter)) leaf_name_data.push_back(sapid.get_name_leafdata());
    if (qstate.is_set || is_set(qstate.yfilter)) leaf_name_data.push_back(qstate.get_name_leafdata());
    if (desc.is_set || is_set(desc.yfilter)) leaf_name_data.push_back(desc.get_name_leafdata());
    if (process.is_set || is_set(process.yfilter)) leaf_name_data.push_back(process.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.yfilter)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (msgcount.is_set || is_set(msgcount.yfilter)) leaf_name_data.push_back(msgcount.get_name_leafdata());
    if (bytescount.is_set || is_set(bytescount.yfilter)) leaf_name_data.push_back(bytescount.get_name_leafdata());
    if (memusedintotalmem.is_set || is_set(memusedintotalmem.yfilter)) leaf_name_data.push_back(memusedintotalmem.get_name_leafdata());
    if (memusedinsapshare.is_set || is_set(memusedinsapshare.yfilter)) leaf_name_data.push_back(memusedinsapshare.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (nodeid.is_set || is_set(nodeid.yfilter)) leaf_name_data.push_back(nodeid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MtsItems::QfullsapsItems::QsapItems::QSapList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MtsItems::QfullsapsItems::QsapItems::QSapList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::MtsItems::QfullsapsItems::QsapItems::QSapList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sapId")
    {
        sapid = value;
        sapid.value_namespace = name_space;
        sapid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qstate")
    {
        qstate = value;
        qstate.value_namespace = name_space;
        qstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "desc")
    {
        desc = value;
        desc.value_namespace = name_space;
        desc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "process")
    {
        process = value;
        process.value_namespace = name_space;
        process.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timestamp")
    {
        timestamp = value;
        timestamp.value_namespace = name_space;
        timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msgCount")
    {
        msgcount = value;
        msgcount.value_namespace = name_space;
        msgcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bytesCount")
    {
        bytescount = value;
        bytescount.value_namespace = name_space;
        bytescount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "memUsedInTotalMem")
    {
        memusedintotalmem = value;
        memusedintotalmem.value_namespace = name_space;
        memusedintotalmem.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "memUsedInSapShare")
    {
        memusedinsapshare = value;
        memusedinsapshare.value_namespace = name_space;
        memusedinsapshare.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nodeId")
    {
        nodeid = value;
        nodeid.value_namespace = name_space;
        nodeid.value_namespace_prefix = name_space_prefix;
    }
}

void System::MtsItems::QfullsapsItems::QsapItems::QSapList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sapId")
    {
        sapid.yfilter = yfilter;
    }
    if(value_path == "qstate")
    {
        qstate.yfilter = yfilter;
    }
    if(value_path == "desc")
    {
        desc.yfilter = yfilter;
    }
    if(value_path == "process")
    {
        process.yfilter = yfilter;
    }
    if(value_path == "timestamp")
    {
        timestamp.yfilter = yfilter;
    }
    if(value_path == "msgCount")
    {
        msgcount.yfilter = yfilter;
    }
    if(value_path == "bytesCount")
    {
        bytescount.yfilter = yfilter;
    }
    if(value_path == "memUsedInTotalMem")
    {
        memusedintotalmem.yfilter = yfilter;
    }
    if(value_path == "memUsedInSapShare")
    {
        memusedinsapshare.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "nodeId")
    {
        nodeid.yfilter = yfilter;
    }
}

bool System::MtsItems::QfullsapsItems::QsapItems::QSapList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sapId" || name == "qstate" || name == "desc" || name == "process" || name == "timestamp" || name == "msgCount" || name == "bytesCount" || name == "memUsedInTotalMem" || name == "memUsedInSapShare" || name == "index" || name == "nodeId")
        return true;
    return false;
}

System::NatItems::NatItems()
    :
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"}
        ,
    inst_items(std::make_shared<System::NatItems::InstItems>())
{
    inst_items->parent = this;

    yang_name = "nat-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::NatItems::~NatItems()
{
}

bool System::NatItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminst.is_set
	|| operst.is_set
	|| (inst_items !=  nullptr && inst_items->has_data());
}

bool System::NatItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| (inst_items !=  nullptr && inst_items->has_operation());
}

std::string System::NatItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::NatItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nat-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NatItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::NatItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inst-items")
    {
        if(inst_items == nullptr)
        {
            inst_items = std::make_shared<System::NatItems::InstItems>();
        }
        return inst_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::NatItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(inst_items != nullptr)
    {
        _children["inst-items"] = inst_items;
    }

    return _children;
}

void System::NatItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
}

void System::NatItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::NatItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inst-items" || name == "name" || name == "adminSt" || name == "operSt")
        return true;
    return false;
}

System::NatItems::InstItems::InstItems()
    :
    tcptimeout{YType::uint32, "tcpTimeout"},
    udptimeout{YType::uint32, "udpTimeout"},
    icmptimeout{YType::uint32, "icmpTimeout"},
    timeout{YType::uint32, "timeout"},
    samplingtimeout{YType::uint32, "samplingTimeout"},
    finrsttimeout{YType::int32, "finRstTimeout"},
    syntimeout{YType::int32, "synTimeout"},
    configerror{YType::enumeration, "configError"},
    logginglevel{YType::enumeration, "loggingLevel"},
    creationdelay{YType::enumeration, "creationDelay"},
    maxtranslation{YType::uint32, "maxTranslation"},
    allhost{YType::uint32, "allHost"},
    name{YType::str, "name"}
        ,
    globalstats_items(std::make_shared<System::NatItems::InstItems::GlobalstatsItems>())
    , dom_items(std::make_shared<System::NatItems::InstItems::DomItems>())
    , pool_items(std::make_shared<System::NatItems::InstItems::PoolItems>())
{
    globalstats_items->parent = this;
    dom_items->parent = this;
    pool_items->parent = this;

    yang_name = "inst-items"; yang_parent_name = "nat-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::NatItems::InstItems::~InstItems()
{
}

bool System::NatItems::InstItems::has_data() const
{
    if (is_presence_container) return true;
    return tcptimeout.is_set
	|| udptimeout.is_set
	|| icmptimeout.is_set
	|| timeout.is_set
	|| samplingtimeout.is_set
	|| finrsttimeout.is_set
	|| syntimeout.is_set
	|| configerror.is_set
	|| logginglevel.is_set
	|| creationdelay.is_set
	|| maxtranslation.is_set
	|| allhost.is_set
	|| name.is_set
	|| (globalstats_items !=  nullptr && globalstats_items->has_data())
	|| (dom_items !=  nullptr && dom_items->has_data())
	|| (pool_items !=  nullptr && pool_items->has_data());
}

bool System::NatItems::InstItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tcptimeout.yfilter)
	|| ydk::is_set(udptimeout.yfilter)
	|| ydk::is_set(icmptimeout.yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| ydk::is_set(samplingtimeout.yfilter)
	|| ydk::is_set(finrsttimeout.yfilter)
	|| ydk::is_set(syntimeout.yfilter)
	|| ydk::is_set(configerror.yfilter)
	|| ydk::is_set(logginglevel.yfilter)
	|| ydk::is_set(creationdelay.yfilter)
	|| ydk::is_set(maxtranslation.yfilter)
	|| ydk::is_set(allhost.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (globalstats_items !=  nullptr && globalstats_items->has_operation())
	|| (dom_items !=  nullptr && dom_items->has_operation())
	|| (pool_items !=  nullptr && pool_items->has_operation());
}

std::string System::NatItems::InstItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/nat-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::NatItems::InstItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inst-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NatItems::InstItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tcptimeout.is_set || is_set(tcptimeout.yfilter)) leaf_name_data.push_back(tcptimeout.get_name_leafdata());
    if (udptimeout.is_set || is_set(udptimeout.yfilter)) leaf_name_data.push_back(udptimeout.get_name_leafdata());
    if (icmptimeout.is_set || is_set(icmptimeout.yfilter)) leaf_name_data.push_back(icmptimeout.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (samplingtimeout.is_set || is_set(samplingtimeout.yfilter)) leaf_name_data.push_back(samplingtimeout.get_name_leafdata());
    if (finrsttimeout.is_set || is_set(finrsttimeout.yfilter)) leaf_name_data.push_back(finrsttimeout.get_name_leafdata());
    if (syntimeout.is_set || is_set(syntimeout.yfilter)) leaf_name_data.push_back(syntimeout.get_name_leafdata());
    if (configerror.is_set || is_set(configerror.yfilter)) leaf_name_data.push_back(configerror.get_name_leafdata());
    if (logginglevel.is_set || is_set(logginglevel.yfilter)) leaf_name_data.push_back(logginglevel.get_name_leafdata());
    if (creationdelay.is_set || is_set(creationdelay.yfilter)) leaf_name_data.push_back(creationdelay.get_name_leafdata());
    if (maxtranslation.is_set || is_set(maxtranslation.yfilter)) leaf_name_data.push_back(maxtranslation.get_name_leafdata());
    if (allhost.is_set || is_set(allhost.yfilter)) leaf_name_data.push_back(allhost.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::NatItems::InstItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "globalstats-items")
    {
        if(globalstats_items == nullptr)
        {
            globalstats_items = std::make_shared<System::NatItems::InstItems::GlobalstatsItems>();
        }
        return globalstats_items;
    }

    if(child_yang_name == "dom-items")
    {
        if(dom_items == nullptr)
        {
            dom_items = std::make_shared<System::NatItems::InstItems::DomItems>();
        }
        return dom_items;
    }

    if(child_yang_name == "pool-items")
    {
        if(pool_items == nullptr)
        {
            pool_items = std::make_shared<System::NatItems::InstItems::PoolItems>();
        }
        return pool_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::NatItems::InstItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(globalstats_items != nullptr)
    {
        _children["globalstats-items"] = globalstats_items;
    }

    if(dom_items != nullptr)
    {
        _children["dom-items"] = dom_items;
    }

    if(pool_items != nullptr)
    {
        _children["pool-items"] = pool_items;
    }

    return _children;
}

void System::NatItems::InstItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tcpTimeout")
    {
        tcptimeout = value;
        tcptimeout.value_namespace = name_space;
        tcptimeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udpTimeout")
    {
        udptimeout = value;
        udptimeout.value_namespace = name_space;
        udptimeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "icmpTimeout")
    {
        icmptimeout = value;
        icmptimeout.value_namespace = name_space;
        icmptimeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "samplingTimeout")
    {
        samplingtimeout = value;
        samplingtimeout.value_namespace = name_space;
        samplingtimeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "finRstTimeout")
    {
        finrsttimeout = value;
        finrsttimeout.value_namespace = name_space;
        finrsttimeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "synTimeout")
    {
        syntimeout = value;
        syntimeout.value_namespace = name_space;
        syntimeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configError")
    {
        configerror = value;
        configerror.value_namespace = name_space;
        configerror.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loggingLevel")
    {
        logginglevel = value;
        logginglevel.value_namespace = name_space;
        logginglevel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "creationDelay")
    {
        creationdelay = value;
        creationdelay.value_namespace = name_space;
        creationdelay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxTranslation")
    {
        maxtranslation = value;
        maxtranslation.value_namespace = name_space;
        maxtranslation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allHost")
    {
        allhost = value;
        allhost.value_namespace = name_space;
        allhost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::NatItems::InstItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tcpTimeout")
    {
        tcptimeout.yfilter = yfilter;
    }
    if(value_path == "udpTimeout")
    {
        udptimeout.yfilter = yfilter;
    }
    if(value_path == "icmpTimeout")
    {
        icmptimeout.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
    if(value_path == "samplingTimeout")
    {
        samplingtimeout.yfilter = yfilter;
    }
    if(value_path == "finRstTimeout")
    {
        finrsttimeout.yfilter = yfilter;
    }
    if(value_path == "synTimeout")
    {
        syntimeout.yfilter = yfilter;
    }
    if(value_path == "configError")
    {
        configerror.yfilter = yfilter;
    }
    if(value_path == "loggingLevel")
    {
        logginglevel.yfilter = yfilter;
    }
    if(value_path == "creationDelay")
    {
        creationdelay.yfilter = yfilter;
    }
    if(value_path == "maxTranslation")
    {
        maxtranslation.yfilter = yfilter;
    }
    if(value_path == "allHost")
    {
        allhost.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::NatItems::InstItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "globalstats-items" || name == "dom-items" || name == "pool-items" || name == "tcpTimeout" || name == "udpTimeout" || name == "icmpTimeout" || name == "timeout" || name == "samplingTimeout" || name == "finRstTimeout" || name == "synTimeout" || name == "configError" || name == "loggingLevel" || name == "creationDelay" || name == "maxTranslation" || name == "allHost" || name == "name")
        return true;
    return false;
}

System::NatItems::InstItems::GlobalstatsItems::GlobalstatsItems()
    :
    nattransstats_items(std::make_shared<System::NatItems::InstItems::GlobalstatsItems::NattransstatsItems>())
    , nattransexpiredstats_items(std::make_shared<System::NatItems::InstItems::GlobalstatsItems::NattransexpiredstatsItems>())
    , natpacketstats_items(std::make_shared<System::NatItems::InstItems::GlobalstatsItems::NatpacketstatsItems>())
    , nattcpstats_items(std::make_shared<System::NatItems::InstItems::GlobalstatsItems::NattcpstatsItems>())
    , natpktdrops_items(std::make_shared<System::NatItems::InstItems::GlobalstatsItems::NatpktdropsItems>())
    , acl_items(std::make_shared<System::NatItems::InstItems::GlobalstatsItems::AclItems>())
    , natifstats_items(std::make_shared<System::NatItems::InstItems::GlobalstatsItems::NatifstatsItems>())
{
    nattransstats_items->parent = this;
    nattransexpiredstats_items->parent = this;
    natpacketstats_items->parent = this;
    nattcpstats_items->parent = this;
    natpktdrops_items->parent = this;
    acl_items->parent = this;
    natifstats_items->parent = this;

    yang_name = "globalstats-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::NatItems::InstItems::GlobalstatsItems::~GlobalstatsItems()
{
}

bool System::NatItems::InstItems::GlobalstatsItems::has_data() const
{
    if (is_presence_container) return true;
    return (nattransstats_items !=  nullptr && nattransstats_items->has_data())
	|| (nattransexpiredstats_items !=  nullptr && nattransexpiredstats_items->has_data())
	|| (natpacketstats_items !=  nullptr && natpacketstats_items->has_data())
	|| (nattcpstats_items !=  nullptr && nattcpstats_items->has_data())
	|| (natpktdrops_items !=  nullptr && natpktdrops_items->has_data())
	|| (acl_items !=  nullptr && acl_items->has_data())
	|| (natifstats_items !=  nullptr && natifstats_items->has_data());
}

bool System::NatItems::InstItems::GlobalstatsItems::has_operation() const
{
    return is_set(yfilter)
	|| (nattransstats_items !=  nullptr && nattransstats_items->has_operation())
	|| (nattransexpiredstats_items !=  nullptr && nattransexpiredstats_items->has_operation())
	|| (natpacketstats_items !=  nullptr && natpacketstats_items->has_operation())
	|| (nattcpstats_items !=  nullptr && nattcpstats_items->has_operation())
	|| (natpktdrops_items !=  nullptr && natpktdrops_items->has_operation())
	|| (acl_items !=  nullptr && acl_items->has_operation())
	|| (natifstats_items !=  nullptr && natifstats_items->has_operation());
}

std::string System::NatItems::InstItems::GlobalstatsItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/nat-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::NatItems::InstItems::GlobalstatsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "globalstats-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NatItems::InstItems::GlobalstatsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::NatItems::InstItems::GlobalstatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nattransstats-items")
    {
        if(nattransstats_items == nullptr)
        {
            nattransstats_items = std::make_shared<System::NatItems::InstItems::GlobalstatsItems::NattransstatsItems>();
        }
        return nattransstats_items;
    }

    if(child_yang_name == "nattransexpiredstats-items")
    {
        if(nattransexpiredstats_items == nullptr)
        {
            nattransexpiredstats_items = std::make_shared<System::NatItems::InstItems::GlobalstatsItems::NattransexpiredstatsItems>();
        }
        return nattransexpiredstats_items;
    }

    if(child_yang_name == "natpacketstats-items")
    {
        if(natpacketstats_items == nullptr)
        {
            natpacketstats_items = std::make_shared<System::NatItems::InstItems::GlobalstatsItems::NatpacketstatsItems>();
        }
        return natpacketstats_items;
    }

    if(child_yang_name == "nattcpstats-items")
    {
        if(nattcpstats_items == nullptr)
        {
            nattcpstats_items = std::make_shared<System::NatItems::InstItems::GlobalstatsItems::NattcpstatsItems>();
        }
        return nattcpstats_items;
    }

    if(child_yang_name == "natpktdrops-items")
    {
        if(natpktdrops_items == nullptr)
        {
            natpktdrops_items = std::make_shared<System::NatItems::InstItems::GlobalstatsItems::NatpktdropsItems>();
        }
        return natpktdrops_items;
    }

    if(child_yang_name == "acl-items")
    {
        if(acl_items == nullptr)
        {
            acl_items = std::make_shared<System::NatItems::InstItems::GlobalstatsItems::AclItems>();
        }
        return acl_items;
    }

    if(child_yang_name == "natifstats-items")
    {
        if(natifstats_items == nullptr)
        {
            natifstats_items = std::make_shared<System::NatItems::InstItems::GlobalstatsItems::NatifstatsItems>();
        }
        return natifstats_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::NatItems::InstItems::GlobalstatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(nattransstats_items != nullptr)
    {
        _children["nattransstats-items"] = nattransstats_items;
    }

    if(nattransexpiredstats_items != nullptr)
    {
        _children["nattransexpiredstats-items"] = nattransexpiredstats_items;
    }

    if(natpacketstats_items != nullptr)
    {
        _children["natpacketstats-items"] = natpacketstats_items;
    }

    if(nattcpstats_items != nullptr)
    {
        _children["nattcpstats-items"] = nattcpstats_items;
    }

    if(natpktdrops_items != nullptr)
    {
        _children["natpktdrops-items"] = natpktdrops_items;
    }

    if(acl_items != nullptr)
    {
        _children["acl-items"] = acl_items;
    }

    if(natifstats_items != nullptr)
    {
        _children["natifstats-items"] = natifstats_items;
    }

    return _children;
}

void System::NatItems::InstItems::GlobalstatsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::NatItems::InstItems::GlobalstatsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::NatItems::InstItems::GlobalstatsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nattransstats-items" || name == "nattransexpiredstats-items" || name == "natpacketstats-items" || name == "nattcpstats-items" || name == "natpktdrops-items" || name == "acl-items" || name == "natifstats-items")
        return true;
    return false;
}

System::NatItems::InstItems::GlobalstatsItems::NattransstatsItems::NattransstatsItems()
    :
    maxdyntransallowed{YType::uint64, "maxDynTransAllowed"},
    maxperhosttransallowed{YType::uint64, "maxPerHostTransAllowed"},
    noofactivestatic{YType::uint64, "noOfActiveStatic"},
    noofactivedyanamic{YType::uint64, "noOfActiveDyanamic"},
    noofactiveicmp{YType::uint64, "noOfActiveICMP"}
{

    yang_name = "nattransstats-items"; yang_parent_name = "globalstats-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::NatItems::InstItems::GlobalstatsItems::NattransstatsItems::~NattransstatsItems()
{
}

bool System::NatItems::InstItems::GlobalstatsItems::NattransstatsItems::has_data() const
{
    if (is_presence_container) return true;
    return maxdyntransallowed.is_set
	|| maxperhosttransallowed.is_set
	|| noofactivestatic.is_set
	|| noofactivedyanamic.is_set
	|| noofactiveicmp.is_set;
}

bool System::NatItems::InstItems::GlobalstatsItems::NattransstatsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maxdyntransallowed.yfilter)
	|| ydk::is_set(maxperhosttransallowed.yfilter)
	|| ydk::is_set(noofactivestatic.yfilter)
	|| ydk::is_set(noofactivedyanamic.yfilter)
	|| ydk::is_set(noofactiveicmp.yfilter);
}

std::string System::NatItems::InstItems::GlobalstatsItems::NattransstatsItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/nat-items/inst-items/globalstats-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::NatItems::InstItems::GlobalstatsItems::NattransstatsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nattransstats-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NatItems::InstItems::GlobalstatsItems::NattransstatsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maxdyntransallowed.is_set || is_set(maxdyntransallowed.yfilter)) leaf_name_data.push_back(maxdyntransallowed.get_name_leafdata());
    if (maxperhosttransallowed.is_set || is_set(maxperhosttransallowed.yfilter)) leaf_name_data.push_back(maxperhosttransallowed.get_name_leafdata());
    if (noofactivestatic.is_set || is_set(noofactivestatic.yfilter)) leaf_name_data.push_back(noofactivestatic.get_name_leafdata());
    if (noofactivedyanamic.is_set || is_set(noofactivedyanamic.yfilter)) leaf_name_data.push_back(noofactivedyanamic.get_name_leafdata());
    if (noofactiveicmp.is_set || is_set(noofactiveicmp.yfilter)) leaf_name_data.push_back(noofactiveicmp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::NatItems::InstItems::GlobalstatsItems::NattransstatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::NatItems::InstItems::GlobalstatsItems::NattransstatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::NatItems::InstItems::GlobalstatsItems::NattransstatsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maxDynTransAllowed")
    {
        maxdyntransallowed = value;
        maxdyntransallowed.value_namespace = name_space;
        maxdyntransallowed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxPerHostTransAllowed")
    {
        maxperhosttransallowed = value;
        maxperhosttransallowed.value_namespace = name_space;
        maxperhosttransallowed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "noOfActiveStatic")
    {
        noofactivestatic = value;
        noofactivestatic.value_namespace = name_space;
        noofactivestatic.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "noOfActiveDyanamic")
    {
        noofactivedyanamic = value;
        noofactivedyanamic.value_namespace = name_space;
        noofactivedyanamic.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "noOfActiveICMP")
    {
        noofactiveicmp = value;
        noofactiveicmp.value_namespace = name_space;
        noofactiveicmp.value_namespace_prefix = name_space_prefix;
    }
}

void System::NatItems::InstItems::GlobalstatsItems::NattransstatsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maxDynTransAllowed")
    {
        maxdyntransallowed.yfilter = yfilter;
    }
    if(value_path == "maxPerHostTransAllowed")
    {
        maxperhosttransallowed.yfilter = yfilter;
    }
    if(value_path == "noOfActiveStatic")
    {
        noofactivestatic.yfilter = yfilter;
    }
    if(value_path == "noOfActiveDyanamic")
    {
        noofactivedyanamic.yfilter = yfilter;
    }
    if(value_path == "noOfActiveICMP")
    {
        noofactiveicmp.yfilter = yfilter;
    }
}

bool System::NatItems::InstItems::GlobalstatsItems::NattransstatsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maxDynTransAllowed" || name == "maxPerHostTransAllowed" || name == "noOfActiveStatic" || name == "noOfActiveDyanamic" || name == "noOfActiveICMP")
        return true;
    return false;
}

System::NatItems::InstItems::GlobalstatsItems::NattransexpiredstatsItems::NattransexpiredstatsItems()
    :
    totalnoofexpiredtranslations{YType::uint64, "totalNoOfExpiredTranslations"},
    noofsyntimerexpired{YType::uint64, "noOfSynTimerExpired"},
    nooffinrsttimerexpired{YType::uint64, "noOfFinRstTimerExpired"},
    noofinactivetimerexpired{YType::uint64, "noOfInactiveTimerExpired"}
{

    yang_name = "nattransexpiredstats-items"; yang_parent_name = "globalstats-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::NatItems::InstItems::GlobalstatsItems::NattransexpiredstatsItems::~NattransexpiredstatsItems()
{
}

bool System::NatItems::InstItems::GlobalstatsItems::NattransexpiredstatsItems::has_data() const
{
    if (is_presence_container) return true;
    return totalnoofexpiredtranslations.is_set
	|| noofsyntimerexpired.is_set
	|| nooffinrsttimerexpired.is_set
	|| noofinactivetimerexpired.is_set;
}

bool System::NatItems::InstItems::GlobalstatsItems::NattransexpiredstatsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(totalnoofexpiredtranslations.yfilter)
	|| ydk::is_set(noofsyntimerexpired.yfilter)
	|| ydk::is_set(nooffinrsttimerexpired.yfilter)
	|| ydk::is_set(noofinactivetimerexpired.yfilter);
}

std::string System::NatItems::InstItems::GlobalstatsItems::NattransexpiredstatsItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/nat-items/inst-items/globalstats-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::NatItems::InstItems::GlobalstatsItems::NattransexpiredstatsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nattransexpiredstats-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NatItems::InstItems::GlobalstatsItems::NattransexpiredstatsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (totalnoofexpiredtranslations.is_set || is_set(totalnoofexpiredtranslations.yfilter)) leaf_name_data.push_back(totalnoofexpiredtranslations.get_name_leafdata());
    if (noofsyntimerexpired.is_set || is_set(noofsyntimerexpired.yfilter)) leaf_name_data.push_back(noofsyntimerexpired.get_name_leafdata());
    if (nooffinrsttimerexpired.is_set || is_set(nooffinrsttimerexpired.yfilter)) leaf_name_data.push_back(nooffinrsttimerexpired.get_name_leafdata());
    if (noofinactivetimerexpired.is_set || is_set(noofinactivetimerexpired.yfilter)) leaf_name_data.push_back(noofinactivetimerexpired.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::NatItems::InstItems::GlobalstatsItems::NattransexpiredstatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::NatItems::InstItems::GlobalstatsItems::NattransexpiredstatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::NatItems::InstItems::GlobalstatsItems::NattransexpiredstatsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "totalNoOfExpiredTranslations")
    {
        totalnoofexpiredtranslations = value;
        totalnoofexpiredtranslations.value_namespace = name_space;
        totalnoofexpiredtranslations.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "noOfSynTimerExpired")
    {
        noofsyntimerexpired = value;
        noofsyntimerexpired.value_namespace = name_space;
        noofsyntimerexpired.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "noOfFinRstTimerExpired")
    {
        nooffinrsttimerexpired = value;
        nooffinrsttimerexpired.value_namespace = name_space;
        nooffinrsttimerexpired.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "noOfInactiveTimerExpired")
    {
        noofinactivetimerexpired = value;
        noofinactivetimerexpired.value_namespace = name_space;
        noofinactivetimerexpired.value_namespace_prefix = name_space_prefix;
    }
}

void System::NatItems::InstItems::GlobalstatsItems::NattransexpiredstatsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "totalNoOfExpiredTranslations")
    {
        totalnoofexpiredtranslations.yfilter = yfilter;
    }
    if(value_path == "noOfSynTimerExpired")
    {
        noofsyntimerexpired.yfilter = yfilter;
    }
    if(value_path == "noOfFinRstTimerExpired")
    {
        nooffinrsttimerexpired.yfilter = yfilter;
    }
    if(value_path == "noOfInactiveTimerExpired")
    {
        noofinactivetimerexpired.yfilter = yfilter;
    }
}

bool System::NatItems::InstItems::GlobalstatsItems::NattransexpiredstatsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "totalNoOfExpiredTranslations" || name == "noOfSynTimerExpired" || name == "noOfFinRstTimerExpired" || name == "noOfInactiveTimerExpired")
        return true;
    return false;
}

System::NatItems::InstItems::GlobalstatsItems::NatpacketstatsItems::NatpacketstatsItems()
    :
    totalhits{YType::uint64, "totalHits"},
    hitintoout{YType::uint64, "hitInToOut"},
    hitouttoin{YType::uint64, "hitOutToIn"},
    totalmisses{YType::uint64, "totalMisses"},
    missintoout{YType::uint64, "missInToOut"},
    missouttoin{YType::uint64, "missOutToIn"},
    totalswtranslation{YType::uint64, "totalSwTranslation"},
    swtranslationintoout{YType::uint64, "swTranslationInToOut"},
    swtranslationouttoin{YType::uint64, "swTranslationOutToIn"}
{

    yang_name = "natpacketstats-items"; yang_parent_name = "globalstats-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::NatItems::InstItems::GlobalstatsItems::NatpacketstatsItems::~NatpacketstatsItems()
{
}

bool System::NatItems::InstItems::GlobalstatsItems::NatpacketstatsItems::has_data() const
{
    if (is_presence_container) return true;
    return totalhits.is_set
	|| hitintoout.is_set
	|| hitouttoin.is_set
	|| totalmisses.is_set
	|| missintoout.is_set
	|| missouttoin.is_set
	|| totalswtranslation.is_set
	|| swtranslationintoout.is_set
	|| swtranslationouttoin.is_set;
}

bool System::NatItems::InstItems::GlobalstatsItems::NatpacketstatsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(totalhits.yfilter)
	|| ydk::is_set(hitintoout.yfilter)
	|| ydk::is_set(hitouttoin.yfilter)
	|| ydk::is_set(totalmisses.yfilter)
	|| ydk::is_set(missintoout.yfilter)
	|| ydk::is_set(missouttoin.yfilter)
	|| ydk::is_set(totalswtranslation.yfilter)
	|| ydk::is_set(swtranslationintoout.yfilter)
	|| ydk::is_set(swtranslationouttoin.yfilter);
}

std::string System::NatItems::InstItems::GlobalstatsItems::NatpacketstatsItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/nat-items/inst-items/globalstats-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::NatItems::InstItems::GlobalstatsItems::NatpacketstatsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "natpacketstats-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NatItems::InstItems::GlobalstatsItems::NatpacketstatsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (totalhits.is_set || is_set(totalhits.yfilter)) leaf_name_data.push_back(totalhits.get_name_leafdata());
    if (hitintoout.is_set || is_set(hitintoout.yfilter)) leaf_name_data.push_back(hitintoout.get_name_leafdata());
    if (hitouttoin.is_set || is_set(hitouttoin.yfilter)) leaf_name_data.push_back(hitouttoin.get_name_leafdata());
    if (totalmisses.is_set || is_set(totalmisses.yfilter)) leaf_name_data.push_back(totalmisses.get_name_leafdata());
    if (missintoout.is_set || is_set(missintoout.yfilter)) leaf_name_data.push_back(missintoout.get_name_leafdata());
    if (missouttoin.is_set || is_set(missouttoin.yfilter)) leaf_name_data.push_back(missouttoin.get_name_leafdata());
    if (totalswtranslation.is_set || is_set(totalswtranslation.yfilter)) leaf_name_data.push_back(totalswtranslation.get_name_leafdata());
    if (swtranslationintoout.is_set || is_set(swtranslationintoout.yfilter)) leaf_name_data.push_back(swtranslationintoout.get_name_leafdata());
    if (swtranslationouttoin.is_set || is_set(swtranslationouttoin.yfilter)) leaf_name_data.push_back(swtranslationouttoin.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::NatItems::InstItems::GlobalstatsItems::NatpacketstatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::NatItems::InstItems::GlobalstatsItems::NatpacketstatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::NatItems::InstItems::GlobalstatsItems::NatpacketstatsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "totalHits")
    {
        totalhits = value;
        totalhits.value_namespace = name_space;
        totalhits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hitInToOut")
    {
        hitintoout = value;
        hitintoout.value_namespace = name_space;
        hitintoout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hitOutToIn")
    {
        hitouttoin = value;
        hitouttoin.value_namespace = name_space;
        hitouttoin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "totalMisses")
    {
        totalmisses = value;
        totalmisses.value_namespace = name_space;
        totalmisses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "missInToOut")
    {
        missintoout = value;
        missintoout.value_namespace = name_space;
        missintoout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "missOutToIn")
    {
        missouttoin = value;
        missouttoin.value_namespace = name_space;
        missouttoin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "totalSwTranslation")
    {
        totalswtranslation = value;
        totalswtranslation.value_namespace = name_space;
        totalswtranslation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "swTranslationInToOut")
    {
        swtranslationintoout = value;
        swtranslationintoout.value_namespace = name_space;
        swtranslationintoout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "swTranslationOutToIn")
    {
        swtranslationouttoin = value;
        swtranslationouttoin.value_namespace = name_space;
        swtranslationouttoin.value_namespace_prefix = name_space_prefix;
    }
}

void System::NatItems::InstItems::GlobalstatsItems::NatpacketstatsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "totalHits")
    {
        totalhits.yfilter = yfilter;
    }
    if(value_path == "hitInToOut")
    {
        hitintoout.yfilter = yfilter;
    }
    if(value_path == "hitOutToIn")
    {
        hitouttoin.yfilter = yfilter;
    }
    if(value_path == "totalMisses")
    {
        totalmisses.yfilter = yfilter;
    }
    if(value_path == "missInToOut")
    {
        missintoout.yfilter = yfilter;
    }
    if(value_path == "missOutToIn")
    {
        missouttoin.yfilter = yfilter;
    }
    if(value_path == "totalSwTranslation")
    {
        totalswtranslation.yfilter = yfilter;
    }
    if(value_path == "swTranslationInToOut")
    {
        swtranslationintoout.yfilter = yfilter;
    }
    if(value_path == "swTranslationOutToIn")
    {
        swtranslationouttoin.yfilter = yfilter;
    }
}

bool System::NatItems::InstItems::GlobalstatsItems::NatpacketstatsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "totalHits" || name == "hitInToOut" || name == "hitOutToIn" || name == "totalMisses" || name == "missInToOut" || name == "missOutToIn" || name == "totalSwTranslation" || name == "swTranslationInToOut" || name == "swTranslationOutToIn")
        return true;
    return false;
}

System::NatItems::InstItems::GlobalstatsItems::NattcpstatsItems::NattcpstatsItems()
    :
    tcpestablished{YType::uint64, "tcpEstablished"},
    tcpclosed{YType::uint64, "tcpClosed"}
{

    yang_name = "nattcpstats-items"; yang_parent_name = "globalstats-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::NatItems::InstItems::GlobalstatsItems::NattcpstatsItems::~NattcpstatsItems()
{
}

bool System::NatItems::InstItems::GlobalstatsItems::NattcpstatsItems::has_data() const
{
    if (is_presence_container) return true;
    return tcpestablished.is_set
	|| tcpclosed.is_set;
}

bool System::NatItems::InstItems::GlobalstatsItems::NattcpstatsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tcpestablished.yfilter)
	|| ydk::is_set(tcpclosed.yfilter);
}

std::string System::NatItems::InstItems::GlobalstatsItems::NattcpstatsItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/nat-items/inst-items/globalstats-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::NatItems::InstItems::GlobalstatsItems::NattcpstatsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nattcpstats-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NatItems::InstItems::GlobalstatsItems::NattcpstatsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tcpestablished.is_set || is_set(tcpestablished.yfilter)) leaf_name_data.push_back(tcpestablished.get_name_leafdata());
    if (tcpclosed.is_set || is_set(tcpclosed.yfilter)) leaf_name_data.push_back(tcpclosed.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::NatItems::InstItems::GlobalstatsItems::NattcpstatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::NatItems::InstItems::GlobalstatsItems::NattcpstatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::NatItems::InstItems::GlobalstatsItems::NattcpstatsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tcpEstablished")
    {
        tcpestablished = value;
        tcpestablished.value_namespace = name_space;
        tcpestablished.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcpClosed")
    {
        tcpclosed = value;
        tcpclosed.value_namespace = name_space;
        tcpclosed.value_namespace_prefix = name_space_prefix;
    }
}

void System::NatItems::InstItems::GlobalstatsItems::NattcpstatsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tcpEstablished")
    {
        tcpestablished.yfilter = yfilter;
    }
    if(value_path == "tcpClosed")
    {
        tcpclosed.yfilter = yfilter;
    }
}

bool System::NatItems::InstItems::GlobalstatsItems::NattcpstatsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tcpEstablished" || name == "tcpClosed")
        return true;
    return false;
}

System::NatItems::InstItems::GlobalstatsItems::NatpktdropsItems::NatpktdropsItems()
    :
    addrallocdrops{YType::uint64, "addrAllocDrops"},
    portallocdrops{YType::uint64, "portAllocDrops"},
    maxlimitdrops{YType::uint64, "maxLimitDrops"},
    icmpmaxlimitdrops{YType::uint64, "icmpMaxLimitDrops"},
    allowedhostlimitdrops{YType::uint64, "allowedHostLimitDrops"},
    totalswdrops{YType::uint64, "totalSwDrops"},
    swdropintoout{YType::uint64, "swDropInToOut"},
    swdropouttoin{YType::uint64, "swDropOutToIn"}
{

    yang_name = "natpktdrops-items"; yang_parent_name = "globalstats-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::NatItems::InstItems::GlobalstatsItems::NatpktdropsItems::~NatpktdropsItems()
{
}

bool System::NatItems::InstItems::GlobalstatsItems::NatpktdropsItems::has_data() const
{
    if (is_presence_container) return true;
    return addrallocdrops.is_set
	|| portallocdrops.is_set
	|| maxlimitdrops.is_set
	|| icmpmaxlimitdrops.is_set
	|| allowedhostlimitdrops.is_set
	|| totalswdrops.is_set
	|| swdropintoout.is_set
	|| swdropouttoin.is_set;
}

bool System::NatItems::InstItems::GlobalstatsItems::NatpktdropsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addrallocdrops.yfilter)
	|| ydk::is_set(portallocdrops.yfilter)
	|| ydk::is_set(maxlimitdrops.yfilter)
	|| ydk::is_set(icmpmaxlimitdrops.yfilter)
	|| ydk::is_set(allowedhostlimitdrops.yfilter)
	|| ydk::is_set(totalswdrops.yfilter)
	|| ydk::is_set(swdropintoout.yfilter)
	|| ydk::is_set(swdropouttoin.yfilter);
}

std::string System::NatItems::InstItems::GlobalstatsItems::NatpktdropsItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/nat-items/inst-items/globalstats-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::NatItems::InstItems::GlobalstatsItems::NatpktdropsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "natpktdrops-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NatItems::InstItems::GlobalstatsItems::NatpktdropsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addrallocdrops.is_set || is_set(addrallocdrops.yfilter)) leaf_name_data.push_back(addrallocdrops.get_name_leafdata());
    if (portallocdrops.is_set || is_set(portallocdrops.yfilter)) leaf_name_data.push_back(portallocdrops.get_name_leafdata());
    if (maxlimitdrops.is_set || is_set(maxlimitdrops.yfilter)) leaf_name_data.push_back(maxlimitdrops.get_name_leafdata());
    if (icmpmaxlimitdrops.is_set || is_set(icmpmaxlimitdrops.yfilter)) leaf_name_data.push_back(icmpmaxlimitdrops.get_name_leafdata());
    if (allowedhostlimitdrops.is_set || is_set(allowedhostlimitdrops.yfilter)) leaf_name_data.push_back(allowedhostlimitdrops.get_name_leafdata());
    if (totalswdrops.is_set || is_set(totalswdrops.yfilter)) leaf_name_data.push_back(totalswdrops.get_name_leafdata());
    if (swdropintoout.is_set || is_set(swdropintoout.yfilter)) leaf_name_data.push_back(swdropintoout.get_name_leafdata());
    if (swdropouttoin.is_set || is_set(swdropouttoin.yfilter)) leaf_name_data.push_back(swdropouttoin.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::NatItems::InstItems::GlobalstatsItems::NatpktdropsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::NatItems::InstItems::GlobalstatsItems::NatpktdropsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::NatItems::InstItems::GlobalstatsItems::NatpktdropsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addrAllocDrops")
    {
        addrallocdrops = value;
        addrallocdrops.value_namespace = name_space;
        addrallocdrops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "portAllocDrops")
    {
        portallocdrops = value;
        portallocdrops.value_namespace = name_space;
        portallocdrops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxLimitDrops")
    {
        maxlimitdrops = value;
        maxlimitdrops.value_namespace = name_space;
        maxlimitdrops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "icmpMaxLimitDrops")
    {
        icmpmaxlimitdrops = value;
        icmpmaxlimitdrops.value_namespace = name_space;
        icmpmaxlimitdrops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allowedHostLimitDrops")
    {
        allowedhostlimitdrops = value;
        allowedhostlimitdrops.value_namespace = name_space;
        allowedhostlimitdrops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "totalSwDrops")
    {
        totalswdrops = value;
        totalswdrops.value_namespace = name_space;
        totalswdrops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "swDropInToOut")
    {
        swdropintoout = value;
        swdropintoout.value_namespace = name_space;
        swdropintoout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "swDropOutToIn")
    {
        swdropouttoin = value;
        swdropouttoin.value_namespace = name_space;
        swdropouttoin.value_namespace_prefix = name_space_prefix;
    }
}

void System::NatItems::InstItems::GlobalstatsItems::NatpktdropsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addrAllocDrops")
    {
        addrallocdrops.yfilter = yfilter;
    }
    if(value_path == "portAllocDrops")
    {
        portallocdrops.yfilter = yfilter;
    }
    if(value_path == "maxLimitDrops")
    {
        maxlimitdrops.yfilter = yfilter;
    }
    if(value_path == "icmpMaxLimitDrops")
    {
        icmpmaxlimitdrops.yfilter = yfilter;
    }
    if(value_path == "allowedHostLimitDrops")
    {
        allowedhostlimitdrops.yfilter = yfilter;
    }
    if(value_path == "totalSwDrops")
    {
        totalswdrops.yfilter = yfilter;
    }
    if(value_path == "swDropInToOut")
    {
        swdropintoout.yfilter = yfilter;
    }
    if(value_path == "swDropOutToIn")
    {
        swdropouttoin.yfilter = yfilter;
    }
}

bool System::NatItems::InstItems::GlobalstatsItems::NatpktdropsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addrAllocDrops" || name == "portAllocDrops" || name == "maxLimitDrops" || name == "icmpMaxLimitDrops" || name == "allowedHostLimitDrops" || name == "totalSwDrops" || name == "swDropInToOut" || name == "swDropOutToIn")
        return true;
    return false;
}

System::NatItems::InstItems::GlobalstatsItems::AclItems::AclItems()
    :
    nataclpooldb_list(this, {"aclname"})
{

    yang_name = "acl-items"; yang_parent_name = "globalstats-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::NatItems::InstItems::GlobalstatsItems::AclItems::~AclItems()
{
}

bool System::NatItems::InstItems::GlobalstatsItems::AclItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<nataclpooldb_list.len(); index++)
    {
        if(nataclpooldb_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::NatItems::InstItems::GlobalstatsItems::AclItems::has_operation() const
{
    for (std::size_t index=0; index<nataclpooldb_list.len(); index++)
    {
        if(nataclpooldb_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::NatItems::InstItems::GlobalstatsItems::AclItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/nat-items/inst-items/globalstats-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::NatItems::InstItems::GlobalstatsItems::AclItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acl-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NatItems::InstItems::GlobalstatsItems::AclItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::NatItems::InstItems::GlobalstatsItems::AclItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "NatAclPooldb-list")
    {
        auto ent_ = std::make_shared<System::NatItems::InstItems::GlobalstatsItems::AclItems::NatAclPooldbList>();
        ent_->parent = this;
        nataclpooldb_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::NatItems::InstItems::GlobalstatsItems::AclItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : nataclpooldb_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::NatItems::InstItems::GlobalstatsItems::AclItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::NatItems::InstItems::GlobalstatsItems::AclItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::NatItems::InstItems::GlobalstatsItems::AclItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "NatAclPooldb-list")
        return true;
    return false;
}

System::NatItems::InstItems::GlobalstatsItems::AclItems::NatAclPooldbList::NatAclPooldbList()
    :
    aclname{YType::str, "aclName"},
    overload{YType::str, "overload"},
    poolname{YType::str, "poolName"},
    ruletype{YType::str, "ruleType"},
    noofaddrinpool{YType::uint64, "noOfAddrInPool"},
    noofallocated{YType::uint64, "noOfAllocated"},
    noofmissed{YType::uint64, "noOfMissed"},
    ifoverloadname{YType::str, "ifOverloadName"},
    ifoverloadaddr{YType::str, "ifOverloadAddr"},
    ifoverloadstate{YType::str, "ifOverloadState"}
{

    yang_name = "NatAclPooldb-list"; yang_parent_name = "acl-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::NatItems::InstItems::GlobalstatsItems::AclItems::NatAclPooldbList::~NatAclPooldbList()
{
}

bool System::NatItems::InstItems::GlobalstatsItems::AclItems::NatAclPooldbList::has_data() const
{
    if (is_presence_container) return true;
    return aclname.is_set
	|| overload.is_set
	|| poolname.is_set
	|| ruletype.is_set
	|| noofaddrinpool.is_set
	|| noofallocated.is_set
	|| noofmissed.is_set
	|| ifoverloadname.is_set
	|| ifoverloadaddr.is_set
	|| ifoverloadstate.is_set;
}

bool System::NatItems::InstItems::GlobalstatsItems::AclItems::NatAclPooldbList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aclname.yfilter)
	|| ydk::is_set(overload.yfilter)
	|| ydk::is_set(poolname.yfilter)
	|| ydk::is_set(ruletype.yfilter)
	|| ydk::is_set(noofaddrinpool.yfilter)
	|| ydk::is_set(noofallocated.yfilter)
	|| ydk::is_set(noofmissed.yfilter)
	|| ydk::is_set(ifoverloadname.yfilter)
	|| ydk::is_set(ifoverloadaddr.yfilter)
	|| ydk::is_set(ifoverloadstate.yfilter);
}

std::string System::NatItems::InstItems::GlobalstatsItems::AclItems::NatAclPooldbList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/nat-items/inst-items/globalstats-items/acl-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::NatItems::InstItems::GlobalstatsItems::AclItems::NatAclPooldbList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "NatAclPooldb-list";
    ADD_KEY_TOKEN(aclname, "aclName");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NatItems::InstItems::GlobalstatsItems::AclItems::NatAclPooldbList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aclname.is_set || is_set(aclname.yfilter)) leaf_name_data.push_back(aclname.get_name_leafdata());
    if (overload.is_set || is_set(overload.yfilter)) leaf_name_data.push_back(overload.get_name_leafdata());
    if (poolname.is_set || is_set(poolname.yfilter)) leaf_name_data.push_back(poolname.get_name_leafdata());
    if (ruletype.is_set || is_set(ruletype.yfilter)) leaf_name_data.push_back(ruletype.get_name_leafdata());
    if (noofaddrinpool.is_set || is_set(noofaddrinpool.yfilter)) leaf_name_data.push_back(noofaddrinpool.get_name_leafdata());
    if (noofallocated.is_set || is_set(noofallocated.yfilter)) leaf_name_data.push_back(noofallocated.get_name_leafdata());
    if (noofmissed.is_set || is_set(noofmissed.yfilter)) leaf_name_data.push_back(noofmissed.get_name_leafdata());
    if (ifoverloadname.is_set || is_set(ifoverloadname.yfilter)) leaf_name_data.push_back(ifoverloadname.get_name_leafdata());
    if (ifoverloadaddr.is_set || is_set(ifoverloadaddr.yfilter)) leaf_name_data.push_back(ifoverloadaddr.get_name_leafdata());
    if (ifoverloadstate.is_set || is_set(ifoverloadstate.yfilter)) leaf_name_data.push_back(ifoverloadstate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::NatItems::InstItems::GlobalstatsItems::AclItems::NatAclPooldbList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::NatItems::InstItems::GlobalstatsItems::AclItems::NatAclPooldbList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::NatItems::InstItems::GlobalstatsItems::AclItems::NatAclPooldbList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aclName")
    {
        aclname = value;
        aclname.value_namespace = name_space;
        aclname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overload")
    {
        overload = value;
        overload.value_namespace = name_space;
        overload.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "poolName")
    {
        poolname = value;
        poolname.value_namespace = name_space;
        poolname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ruleType")
    {
        ruletype = value;
        ruletype.value_namespace = name_space;
        ruletype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "noOfAddrInPool")
    {
        noofaddrinpool = value;
        noofaddrinpool.value_namespace = name_space;
        noofaddrinpool.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "noOfAllocated")
    {
        noofallocated = value;
        noofallocated.value_namespace = name_space;
        noofallocated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "noOfMissed")
    {
        noofmissed = value;
        noofmissed.value_namespace = name_space;
        noofmissed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifOverloadName")
    {
        ifoverloadname = value;
        ifoverloadname.value_namespace = name_space;
        ifoverloadname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifOverloadAddr")
    {
        ifoverloadaddr = value;
        ifoverloadaddr.value_namespace = name_space;
        ifoverloadaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifOverloadState")
    {
        ifoverloadstate = value;
        ifoverloadstate.value_namespace = name_space;
        ifoverloadstate.value_namespace_prefix = name_space_prefix;
    }
}

void System::NatItems::InstItems::GlobalstatsItems::AclItems::NatAclPooldbList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aclName")
    {
        aclname.yfilter = yfilter;
    }
    if(value_path == "overload")
    {
        overload.yfilter = yfilter;
    }
    if(value_path == "poolName")
    {
        poolname.yfilter = yfilter;
    }
    if(value_path == "ruleType")
    {
        ruletype.yfilter = yfilter;
    }
    if(value_path == "noOfAddrInPool")
    {
        noofaddrinpool.yfilter = yfilter;
    }
    if(value_path == "noOfAllocated")
    {
        noofallocated.yfilter = yfilter;
    }
    if(value_path == "noOfMissed")
    {
        noofmissed.yfilter = yfilter;
    }
    if(value_path == "ifOverloadName")
    {
        ifoverloadname.yfilter = yfilter;
    }
    if(value_path == "ifOverloadAddr")
    {
        ifoverloadaddr.yfilter = yfilter;
    }
    if(value_path == "ifOverloadState")
    {
        ifoverloadstate.yfilter = yfilter;
    }
}

bool System::NatItems::InstItems::GlobalstatsItems::AclItems::NatAclPooldbList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aclName" || name == "overload" || name == "poolName" || name == "ruleType" || name == "noOfAddrInPool" || name == "noOfAllocated" || name == "noOfMissed" || name == "ifOverloadName" || name == "ifOverloadAddr" || name == "ifOverloadState")
        return true;
    return false;
}

System::NatItems::InstItems::GlobalstatsItems::NatifstatsItems::NatifstatsItems()
    :
    noofinsideinterface{YType::uint64, "noOfInsideInterface"},
    noofoutsideinterface{YType::uint64, "noOfOutsideInterface"}
{

    yang_name = "natifstats-items"; yang_parent_name = "globalstats-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::NatItems::InstItems::GlobalstatsItems::NatifstatsItems::~NatifstatsItems()
{
}

bool System::NatItems::InstItems::GlobalstatsItems::NatifstatsItems::has_data() const
{
    if (is_presence_container) return true;
    return noofinsideinterface.is_set
	|| noofoutsideinterface.is_set;
}

bool System::NatItems::InstItems::GlobalstatsItems::NatifstatsItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(noofinsideinterface.yfilter)
	|| ydk::is_set(noofoutsideinterface.yfilter);
}

std::string System::NatItems::InstItems::GlobalstatsItems::NatifstatsItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/nat-items/inst-items/globalstats-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::NatItems::InstItems::GlobalstatsItems::NatifstatsItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "natifstats-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::NatItems::InstItems::GlobalstatsItems::NatifstatsItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (noofinsideinterface.is_set || is_set(noofinsideinterface.yfilter)) leaf_name_data.push_back(noofinsideinterface.get_name_leafdata());
    if (noofoutsideinterface.is_set || is_set(noofoutsideinterface.yfilter)) leaf_name_data.push_back(noofoutsideinterface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::NatItems::InstItems::GlobalstatsItems::NatifstatsItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::NatItems::InstItems::GlobalstatsItems::NatifstatsItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::NatItems::InstItems::GlobalstatsItems::NatifstatsItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "noOfInsideInterface")
    {
        noofinsideinterface = value;
        noofinsideinterface.value_namespace = name_space;
        noofinsideinterface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "noOfOutsideInterface")
    {
        noofoutsideinterface = value;
        noofoutsideinterface.value_namespace = name_space;
        noofoutsideinterface.value_namespace_prefix = name_space_prefix;
    }
}

void System::NatItems::InstItems::GlobalstatsItems::NatifstatsItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "noOfInsideInterface")
    {
        noofinsideinterface.yfilter = yfilter;
    }
    if(value_path == "noOfOutsideInterface")
    {
        noofoutsideinterface.yfilter = yfilter;
    }
}

bool System::NatItems::InstItems::GlobalstatsItems::NatifstatsItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "noOfInsideInterface" || name == "noOfOutsideInterface")
        return true;
    return false;
}


}
}

