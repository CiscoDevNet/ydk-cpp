
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_NX_OS_device_23.hpp"
#include "Cisco_NX_OS_device_24.hpp"

using namespace ydk;

namespace cisco_nx_os {
namespace Cisco_NX_OS_device {

System::CommItems::SshItems::KeyItems::SshKeyList::SshKeyList()
    :
    type{YType::enumeration, "type"},
    keylen{YType::uint32, "keyLen"}
{

    yang_name = "SshKey-list"; yang_parent_name = "key-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::CommItems::SshItems::KeyItems::SshKeyList::~SshKeyList()
{
}

bool System::CommItems::SshItems::KeyItems::SshKeyList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| keylen.is_set;
}

bool System::CommItems::SshItems::KeyItems::SshKeyList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(keylen.yfilter);
}

std::string System::CommItems::SshItems::KeyItems::SshKeyList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/comm-items/ssh-items/key-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::CommItems::SshItems::KeyItems::SshKeyList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SshKey-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CommItems::SshItems::KeyItems::SshKeyList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (keylen.is_set || is_set(keylen.yfilter)) leaf_name_data.push_back(keylen.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CommItems::SshItems::KeyItems::SshKeyList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CommItems::SshItems::KeyItems::SshKeyList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::CommItems::SshItems::KeyItems::SshKeyList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keyLen")
    {
        keylen = value;
        keylen.value_namespace = name_space;
        keylen.value_namespace_prefix = name_space_prefix;
    }
}

void System::CommItems::SshItems::KeyItems::SshKeyList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "keyLen")
    {
        keylen.yfilter = yfilter;
    }
}

bool System::CommItems::SshItems::KeyItems::SshKeyList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "keyLen")
        return true;
    return false;
}

System::CommItems::SshItems::RekeyItems::RekeyItems()
    :
    maxdata{YType::str, "maxData"},
    maxtime{YType::str, "maxTime"}
{

    yang_name = "rekey-items"; yang_parent_name = "ssh-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::CommItems::SshItems::RekeyItems::~RekeyItems()
{
}

bool System::CommItems::SshItems::RekeyItems::has_data() const
{
    if (is_presence_container) return true;
    return maxdata.is_set
	|| maxtime.is_set;
}

bool System::CommItems::SshItems::RekeyItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maxdata.yfilter)
	|| ydk::is_set(maxtime.yfilter);
}

std::string System::CommItems::SshItems::RekeyItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/comm-items/ssh-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::CommItems::SshItems::RekeyItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rekey-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CommItems::SshItems::RekeyItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maxdata.is_set || is_set(maxdata.yfilter)) leaf_name_data.push_back(maxdata.get_name_leafdata());
    if (maxtime.is_set || is_set(maxtime.yfilter)) leaf_name_data.push_back(maxtime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CommItems::SshItems::RekeyItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CommItems::SshItems::RekeyItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::CommItems::SshItems::RekeyItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maxData")
    {
        maxdata = value;
        maxdata.value_namespace = name_space;
        maxdata.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxTime")
    {
        maxtime = value;
        maxtime.value_namespace = name_space;
        maxtime.value_namespace_prefix = name_space_prefix;
    }
}

void System::CommItems::SshItems::RekeyItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maxData")
    {
        maxdata.yfilter = yfilter;
    }
    if(value_path == "maxTime")
    {
        maxtime.yfilter = yfilter;
    }
}

bool System::CommItems::SshItems::RekeyItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maxData" || name == "maxTime")
        return true;
    return false;
}

System::CommItems::SshItems::SshsessionItems::SshsessionItems()
    :
    idletimeout{YType::uint32, "idleTimeout"},
    keepalivecount{YType::uint32, "keepAliveCount"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    port{YType::uint32, "port"},
    adminst{YType::enumeration, "adminSt"},
    proto{YType::enumeration, "proto"}
{

    yang_name = "sshsession-items"; yang_parent_name = "ssh-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::CommItems::SshItems::SshsessionItems::~SshsessionItems()
{
}

bool System::CommItems::SshItems::SshsessionItems::has_data() const
{
    if (is_presence_container) return true;
    return idletimeout.is_set
	|| keepalivecount.is_set
	|| name.is_set
	|| descr.is_set
	|| port.is_set
	|| adminst.is_set
	|| proto.is_set;
}

bool System::CommItems::SshItems::SshsessionItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(idletimeout.yfilter)
	|| ydk::is_set(keepalivecount.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(port.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(proto.yfilter);
}

std::string System::CommItems::SshItems::SshsessionItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/comm-items/ssh-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::CommItems::SshItems::SshsessionItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sshsession-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::CommItems::SshItems::SshsessionItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (idletimeout.is_set || is_set(idletimeout.yfilter)) leaf_name_data.push_back(idletimeout.get_name_leafdata());
    if (keepalivecount.is_set || is_set(keepalivecount.yfilter)) leaf_name_data.push_back(keepalivecount.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (proto.is_set || is_set(proto.yfilter)) leaf_name_data.push_back(proto.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::CommItems::SshItems::SshsessionItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::CommItems::SshItems::SshsessionItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::CommItems::SshItems::SshsessionItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "idleTimeout")
    {
        idletimeout = value;
        idletimeout.value_namespace = name_space;
        idletimeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keepAliveCount")
    {
        keepalivecount = value;
        keepalivecount.value_namespace = name_space;
        keepalivecount.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proto")
    {
        proto = value;
        proto.value_namespace = name_space;
        proto.value_namespace_prefix = name_space_prefix;
    }
}

void System::CommItems::SshItems::SshsessionItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "idleTimeout")
    {
        idletimeout.yfilter = yfilter;
    }
    if(value_path == "keepAliveCount")
    {
        keepalivecount.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "proto")
    {
        proto.yfilter = yfilter;
    }
}

bool System::CommItems::SshItems::SshsessionItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "idleTimeout" || name == "keepAliveCount" || name == "name" || name == "descr" || name == "port" || name == "adminSt" || name == "proto")
        return true;
    return false;
}

System::UserextItems::UserextItems()
    :
    pwdstrengthcheck{YType::enumeration, "pwdStrengthCheck"},
    pwdsecuremode{YType::enumeration, "pwdSecureMode"},
    pwdminlength{YType::uint16, "pwdMinLength"},
    pwdmaxlength{YType::uint16, "pwdMaxLength"},
    svcpwdrecovery{YType::enumeration, "svcPwdRecovery"},
    maxlogins{YType::uint32, "maxLogins"},
    name{YType::str, "name"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"}
        ,
    radiusext_items(std::make_shared<System::UserextItems::RadiusextItems>())
    , ldapext_items(std::make_shared<System::UserextItems::LdapextItems>())
    , tacacsext_items(std::make_shared<System::UserextItems::TacacsextItems>())
    , authrealm_items(std::make_shared<System::UserextItems::AuthrealmItems>())
    , logindomain_items(std::make_shared<System::UserextItems::LogindomainItems>())
    , postloginbanner_items(std::make_shared<System::UserextItems::PostloginbannerItems>())
    , preloginbanner_items(std::make_shared<System::UserextItems::PreloginbannerItems>())
    , remoteuser_items(std::make_shared<System::UserextItems::RemoteuserItems>())
    , user_items(std::make_shared<System::UserextItems::UserItems>())
    , role_items(std::make_shared<System::UserextItems::RoleItems>())
    , factoryrole_items(std::make_shared<System::UserextItems::FactoryroleItems>())
    , domain_items(std::make_shared<System::UserextItems::DomainItems>())
    , pwdprofile_items(std::make_shared<System::UserextItems::PwdprofileItems>())
    , pkiext_items(std::make_shared<System::UserextItems::PkiextItems>())
    , rtfabricresuserep_items(std::make_shared<System::UserextItems::RtfabricResUserEpItems>())
    , rtaaauserep_items(std::make_shared<System::UserextItems::RtaaaUserEpItems>())
{
    radiusext_items->parent = this;
    ldapext_items->parent = this;
    tacacsext_items->parent = this;
    authrealm_items->parent = this;
    logindomain_items->parent = this;
    postloginbanner_items->parent = this;
    preloginbanner_items->parent = this;
    remoteuser_items->parent = this;
    user_items->parent = this;
    role_items->parent = this;
    factoryrole_items->parent = this;
    domain_items->parent = this;
    pwdprofile_items->parent = this;
    pkiext_items->parent = this;
    rtfabricresuserep_items->parent = this;
    rtaaauserep_items->parent = this;

    yang_name = "userext-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::~UserextItems()
{
}

bool System::UserextItems::has_data() const
{
    if (is_presence_container) return true;
    return pwdstrengthcheck.is_set
	|| pwdsecuremode.is_set
	|| pwdminlength.is_set
	|| pwdmaxlength.is_set
	|| svcpwdrecovery.is_set
	|| maxlogins.is_set
	|| name.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set
	|| (radiusext_items !=  nullptr && radiusext_items->has_data())
	|| (ldapext_items !=  nullptr && ldapext_items->has_data())
	|| (tacacsext_items !=  nullptr && tacacsext_items->has_data())
	|| (authrealm_items !=  nullptr && authrealm_items->has_data())
	|| (logindomain_items !=  nullptr && logindomain_items->has_data())
	|| (postloginbanner_items !=  nullptr && postloginbanner_items->has_data())
	|| (preloginbanner_items !=  nullptr && preloginbanner_items->has_data())
	|| (remoteuser_items !=  nullptr && remoteuser_items->has_data())
	|| (user_items !=  nullptr && user_items->has_data())
	|| (role_items !=  nullptr && role_items->has_data())
	|| (factoryrole_items !=  nullptr && factoryrole_items->has_data())
	|| (domain_items !=  nullptr && domain_items->has_data())
	|| (pwdprofile_items !=  nullptr && pwdprofile_items->has_data())
	|| (pkiext_items !=  nullptr && pkiext_items->has_data())
	|| (rtfabricresuserep_items !=  nullptr && rtfabricresuserep_items->has_data())
	|| (rtaaauserep_items !=  nullptr && rtaaauserep_items->has_data());
}

bool System::UserextItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pwdstrengthcheck.yfilter)
	|| ydk::is_set(pwdsecuremode.yfilter)
	|| ydk::is_set(pwdminlength.yfilter)
	|| ydk::is_set(pwdmaxlength.yfilter)
	|| ydk::is_set(svcpwdrecovery.yfilter)
	|| ydk::is_set(maxlogins.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| (radiusext_items !=  nullptr && radiusext_items->has_operation())
	|| (ldapext_items !=  nullptr && ldapext_items->has_operation())
	|| (tacacsext_items !=  nullptr && tacacsext_items->has_operation())
	|| (authrealm_items !=  nullptr && authrealm_items->has_operation())
	|| (logindomain_items !=  nullptr && logindomain_items->has_operation())
	|| (postloginbanner_items !=  nullptr && postloginbanner_items->has_operation())
	|| (preloginbanner_items !=  nullptr && preloginbanner_items->has_operation())
	|| (remoteuser_items !=  nullptr && remoteuser_items->has_operation())
	|| (user_items !=  nullptr && user_items->has_operation())
	|| (role_items !=  nullptr && role_items->has_operation())
	|| (factoryrole_items !=  nullptr && factoryrole_items->has_operation())
	|| (domain_items !=  nullptr && domain_items->has_operation())
	|| (pwdprofile_items !=  nullptr && pwdprofile_items->has_operation())
	|| (pkiext_items !=  nullptr && pkiext_items->has_operation())
	|| (rtfabricresuserep_items !=  nullptr && rtfabricresuserep_items->has_operation())
	|| (rtaaauserep_items !=  nullptr && rtaaauserep_items->has_operation());
}

std::string System::UserextItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "userext-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pwdstrengthcheck.is_set || is_set(pwdstrengthcheck.yfilter)) leaf_name_data.push_back(pwdstrengthcheck.get_name_leafdata());
    if (pwdsecuremode.is_set || is_set(pwdsecuremode.yfilter)) leaf_name_data.push_back(pwdsecuremode.get_name_leafdata());
    if (pwdminlength.is_set || is_set(pwdminlength.yfilter)) leaf_name_data.push_back(pwdminlength.get_name_leafdata());
    if (pwdmaxlength.is_set || is_set(pwdmaxlength.yfilter)) leaf_name_data.push_back(pwdmaxlength.get_name_leafdata());
    if (svcpwdrecovery.is_set || is_set(svcpwdrecovery.yfilter)) leaf_name_data.push_back(svcpwdrecovery.get_name_leafdata());
    if (maxlogins.is_set || is_set(maxlogins.yfilter)) leaf_name_data.push_back(maxlogins.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::UserextItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "radiusext-items")
    {
        if(radiusext_items == nullptr)
        {
            radiusext_items = std::make_shared<System::UserextItems::RadiusextItems>();
        }
        return radiusext_items;
    }

    if(child_yang_name == "ldapext-items")
    {
        if(ldapext_items == nullptr)
        {
            ldapext_items = std::make_shared<System::UserextItems::LdapextItems>();
        }
        return ldapext_items;
    }

    if(child_yang_name == "tacacsext-items")
    {
        if(tacacsext_items == nullptr)
        {
            tacacsext_items = std::make_shared<System::UserextItems::TacacsextItems>();
        }
        return tacacsext_items;
    }

    if(child_yang_name == "authrealm-items")
    {
        if(authrealm_items == nullptr)
        {
            authrealm_items = std::make_shared<System::UserextItems::AuthrealmItems>();
        }
        return authrealm_items;
    }

    if(child_yang_name == "logindomain-items")
    {
        if(logindomain_items == nullptr)
        {
            logindomain_items = std::make_shared<System::UserextItems::LogindomainItems>();
        }
        return logindomain_items;
    }

    if(child_yang_name == "postloginbanner-items")
    {
        if(postloginbanner_items == nullptr)
        {
            postloginbanner_items = std::make_shared<System::UserextItems::PostloginbannerItems>();
        }
        return postloginbanner_items;
    }

    if(child_yang_name == "preloginbanner-items")
    {
        if(preloginbanner_items == nullptr)
        {
            preloginbanner_items = std::make_shared<System::UserextItems::PreloginbannerItems>();
        }
        return preloginbanner_items;
    }

    if(child_yang_name == "remoteuser-items")
    {
        if(remoteuser_items == nullptr)
        {
            remoteuser_items = std::make_shared<System::UserextItems::RemoteuserItems>();
        }
        return remoteuser_items;
    }

    if(child_yang_name == "user-items")
    {
        if(user_items == nullptr)
        {
            user_items = std::make_shared<System::UserextItems::UserItems>();
        }
        return user_items;
    }

    if(child_yang_name == "role-items")
    {
        if(role_items == nullptr)
        {
            role_items = std::make_shared<System::UserextItems::RoleItems>();
        }
        return role_items;
    }

    if(child_yang_name == "factoryrole-items")
    {
        if(factoryrole_items == nullptr)
        {
            factoryrole_items = std::make_shared<System::UserextItems::FactoryroleItems>();
        }
        return factoryrole_items;
    }

    if(child_yang_name == "domain-items")
    {
        if(domain_items == nullptr)
        {
            domain_items = std::make_shared<System::UserextItems::DomainItems>();
        }
        return domain_items;
    }

    if(child_yang_name == "pwdprofile-items")
    {
        if(pwdprofile_items == nullptr)
        {
            pwdprofile_items = std::make_shared<System::UserextItems::PwdprofileItems>();
        }
        return pwdprofile_items;
    }

    if(child_yang_name == "pkiext-items")
    {
        if(pkiext_items == nullptr)
        {
            pkiext_items = std::make_shared<System::UserextItems::PkiextItems>();
        }
        return pkiext_items;
    }

    if(child_yang_name == "rtfabricResUserEp-items")
    {
        if(rtfabricresuserep_items == nullptr)
        {
            rtfabricresuserep_items = std::make_shared<System::UserextItems::RtfabricResUserEpItems>();
        }
        return rtfabricresuserep_items;
    }

    if(child_yang_name == "rtaaaUserEp-items")
    {
        if(rtaaauserep_items == nullptr)
        {
            rtaaauserep_items = std::make_shared<System::UserextItems::RtaaaUserEpItems>();
        }
        return rtaaauserep_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::UserextItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(radiusext_items != nullptr)
    {
        _children["radiusext-items"] = radiusext_items;
    }

    if(ldapext_items != nullptr)
    {
        _children["ldapext-items"] = ldapext_items;
    }

    if(tacacsext_items != nullptr)
    {
        _children["tacacsext-items"] = tacacsext_items;
    }

    if(authrealm_items != nullptr)
    {
        _children["authrealm-items"] = authrealm_items;
    }

    if(logindomain_items != nullptr)
    {
        _children["logindomain-items"] = logindomain_items;
    }

    if(postloginbanner_items != nullptr)
    {
        _children["postloginbanner-items"] = postloginbanner_items;
    }

    if(preloginbanner_items != nullptr)
    {
        _children["preloginbanner-items"] = preloginbanner_items;
    }

    if(remoteuser_items != nullptr)
    {
        _children["remoteuser-items"] = remoteuser_items;
    }

    if(user_items != nullptr)
    {
        _children["user-items"] = user_items;
    }

    if(role_items != nullptr)
    {
        _children["role-items"] = role_items;
    }

    if(factoryrole_items != nullptr)
    {
        _children["factoryrole-items"] = factoryrole_items;
    }

    if(domain_items != nullptr)
    {
        _children["domain-items"] = domain_items;
    }

    if(pwdprofile_items != nullptr)
    {
        _children["pwdprofile-items"] = pwdprofile_items;
    }

    if(pkiext_items != nullptr)
    {
        _children["pkiext-items"] = pkiext_items;
    }

    if(rtfabricresuserep_items != nullptr)
    {
        _children["rtfabricResUserEp-items"] = rtfabricresuserep_items;
    }

    if(rtaaauserep_items != nullptr)
    {
        _children["rtaaaUserEp-items"] = rtaaauserep_items;
    }

    return _children;
}

void System::UserextItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pwdStrengthCheck")
    {
        pwdstrengthcheck = value;
        pwdstrengthcheck.value_namespace = name_space;
        pwdstrengthcheck.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pwdSecureMode")
    {
        pwdsecuremode = value;
        pwdsecuremode.value_namespace = name_space;
        pwdsecuremode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pwdMinLength")
    {
        pwdminlength = value;
        pwdminlength.value_namespace = name_space;
        pwdminlength.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pwdMaxLength")
    {
        pwdmaxlength = value;
        pwdmaxlength.value_namespace = name_space;
        pwdmaxlength.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "svcPwdRecovery")
    {
        svcpwdrecovery = value;
        svcpwdrecovery.value_namespace = name_space;
        svcpwdrecovery.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxLogins")
    {
        maxlogins = value;
        maxlogins.value_namespace = name_space;
        maxlogins.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerKey")
    {
        ownerkey = value;
        ownerkey.value_namespace = name_space;
        ownerkey.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerTag")
    {
        ownertag = value;
        ownertag.value_namespace = name_space;
        ownertag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::UserextItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pwdStrengthCheck")
    {
        pwdstrengthcheck.yfilter = yfilter;
    }
    if(value_path == "pwdSecureMode")
    {
        pwdsecuremode.yfilter = yfilter;
    }
    if(value_path == "pwdMinLength")
    {
        pwdminlength.yfilter = yfilter;
    }
    if(value_path == "pwdMaxLength")
    {
        pwdmaxlength.yfilter = yfilter;
    }
    if(value_path == "svcPwdRecovery")
    {
        svcpwdrecovery.yfilter = yfilter;
    }
    if(value_path == "maxLogins")
    {
        maxlogins.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ownerKey")
    {
        ownerkey.yfilter = yfilter;
    }
    if(value_path == "ownerTag")
    {
        ownertag.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::UserextItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "radiusext-items" || name == "ldapext-items" || name == "tacacsext-items" || name == "authrealm-items" || name == "logindomain-items" || name == "postloginbanner-items" || name == "preloginbanner-items" || name == "remoteuser-items" || name == "user-items" || name == "role-items" || name == "factoryrole-items" || name == "domain-items" || name == "pwdprofile-items" || name == "pkiext-items" || name == "rtfabricResUserEp-items" || name == "rtaaaUserEp-items" || name == "pwdStrengthCheck" || name == "pwdSecureMode" || name == "pwdMinLength" || name == "pwdMaxLength" || name == "svcPwdRecovery" || name == "maxLogins" || name == "name" || name == "ownerKey" || name == "ownerTag" || name == "descr")
        return true;
    return false;
}

System::UserextItems::RadiusextItems::RadiusextItems()
    :
    deadtime{YType::uint32, "deadtime"},
    key{YType::str, "key"},
    keyenc{YType::enumeration, "keyEnc"},
    logginglevel{YType::enumeration, "loggingLevel"},
    name{YType::str, "name"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"},
    timeout{YType::uint32, "timeout"},
    retries{YType::uint32, "retries"},
    srcif{YType::str, "srcIf"}
        ,
    radiusprovider_items(std::make_shared<System::UserextItems::RadiusextItems::RadiusproviderItems>())
    , radiusprovidergroup_items(std::make_shared<System::UserextItems::RadiusextItems::RadiusprovidergroupItems>())
    , radiusservermonitor_items(std::make_shared<System::UserextItems::RadiusextItems::RadiusservermonitorItems>())
    , rtfabricresradiusep_items(std::make_shared<System::UserextItems::RadiusextItems::RtfabricResRadiusEpItems>())
{
    radiusprovider_items->parent = this;
    radiusprovidergroup_items->parent = this;
    radiusservermonitor_items->parent = this;
    rtfabricresradiusep_items->parent = this;

    yang_name = "radiusext-items"; yang_parent_name = "userext-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::RadiusextItems::~RadiusextItems()
{
}

bool System::UserextItems::RadiusextItems::has_data() const
{
    if (is_presence_container) return true;
    return deadtime.is_set
	|| key.is_set
	|| keyenc.is_set
	|| logginglevel.is_set
	|| name.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set
	|| timeout.is_set
	|| retries.is_set
	|| srcif.is_set
	|| (radiusprovider_items !=  nullptr && radiusprovider_items->has_data())
	|| (radiusprovidergroup_items !=  nullptr && radiusprovidergroup_items->has_data())
	|| (radiusservermonitor_items !=  nullptr && radiusservermonitor_items->has_data())
	|| (rtfabricresradiusep_items !=  nullptr && rtfabricresradiusep_items->has_data());
}

bool System::UserextItems::RadiusextItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(deadtime.yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(keyenc.yfilter)
	|| ydk::is_set(logginglevel.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| ydk::is_set(retries.yfilter)
	|| ydk::is_set(srcif.yfilter)
	|| (radiusprovider_items !=  nullptr && radiusprovider_items->has_operation())
	|| (radiusprovidergroup_items !=  nullptr && radiusprovidergroup_items->has_operation())
	|| (radiusservermonitor_items !=  nullptr && radiusservermonitor_items->has_operation())
	|| (rtfabricresradiusep_items !=  nullptr && rtfabricresradiusep_items->has_operation());
}

std::string System::UserextItems::RadiusextItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/userext-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::RadiusextItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "radiusext-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::RadiusextItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (deadtime.is_set || is_set(deadtime.yfilter)) leaf_name_data.push_back(deadtime.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (keyenc.is_set || is_set(keyenc.yfilter)) leaf_name_data.push_back(keyenc.get_name_leafdata());
    if (logginglevel.is_set || is_set(logginglevel.yfilter)) leaf_name_data.push_back(logginglevel.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (retries.is_set || is_set(retries.yfilter)) leaf_name_data.push_back(retries.get_name_leafdata());
    if (srcif.is_set || is_set(srcif.yfilter)) leaf_name_data.push_back(srcif.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::UserextItems::RadiusextItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "radiusprovider-items")
    {
        if(radiusprovider_items == nullptr)
        {
            radiusprovider_items = std::make_shared<System::UserextItems::RadiusextItems::RadiusproviderItems>();
        }
        return radiusprovider_items;
    }

    if(child_yang_name == "radiusprovidergroup-items")
    {
        if(radiusprovidergroup_items == nullptr)
        {
            radiusprovidergroup_items = std::make_shared<System::UserextItems::RadiusextItems::RadiusprovidergroupItems>();
        }
        return radiusprovidergroup_items;
    }

    if(child_yang_name == "radiusservermonitor-items")
    {
        if(radiusservermonitor_items == nullptr)
        {
            radiusservermonitor_items = std::make_shared<System::UserextItems::RadiusextItems::RadiusservermonitorItems>();
        }
        return radiusservermonitor_items;
    }

    if(child_yang_name == "rtfabricResRadiusEp-items")
    {
        if(rtfabricresradiusep_items == nullptr)
        {
            rtfabricresradiusep_items = std::make_shared<System::UserextItems::RadiusextItems::RtfabricResRadiusEpItems>();
        }
        return rtfabricresradiusep_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::UserextItems::RadiusextItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(radiusprovider_items != nullptr)
    {
        _children["radiusprovider-items"] = radiusprovider_items;
    }

    if(radiusprovidergroup_items != nullptr)
    {
        _children["radiusprovidergroup-items"] = radiusprovidergroup_items;
    }

    if(radiusservermonitor_items != nullptr)
    {
        _children["radiusservermonitor-items"] = radiusservermonitor_items;
    }

    if(rtfabricresradiusep_items != nullptr)
    {
        _children["rtfabricResRadiusEp-items"] = rtfabricresradiusep_items;
    }

    return _children;
}

void System::UserextItems::RadiusextItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "deadtime")
    {
        deadtime = value;
        deadtime.value_namespace = name_space;
        deadtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keyEnc")
    {
        keyenc = value;
        keyenc.value_namespace = name_space;
        keyenc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loggingLevel")
    {
        logginglevel = value;
        logginglevel.value_namespace = name_space;
        logginglevel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerKey")
    {
        ownerkey = value;
        ownerkey.value_namespace = name_space;
        ownerkey.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerTag")
    {
        ownertag = value;
        ownertag.value_namespace = name_space;
        ownertag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retries")
    {
        retries = value;
        retries.value_namespace = name_space;
        retries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcIf")
    {
        srcif = value;
        srcif.value_namespace = name_space;
        srcif.value_namespace_prefix = name_space_prefix;
    }
}

void System::UserextItems::RadiusextItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "deadtime")
    {
        deadtime.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "keyEnc")
    {
        keyenc.yfilter = yfilter;
    }
    if(value_path == "loggingLevel")
    {
        logginglevel.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ownerKey")
    {
        ownerkey.yfilter = yfilter;
    }
    if(value_path == "ownerTag")
    {
        ownertag.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
    if(value_path == "retries")
    {
        retries.yfilter = yfilter;
    }
    if(value_path == "srcIf")
    {
        srcif.yfilter = yfilter;
    }
}

bool System::UserextItems::RadiusextItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "radiusprovider-items" || name == "radiusprovidergroup-items" || name == "radiusservermonitor-items" || name == "rtfabricResRadiusEp-items" || name == "deadtime" || name == "key" || name == "keyEnc" || name == "loggingLevel" || name == "name" || name == "ownerKey" || name == "ownerTag" || name == "descr" || name == "timeout" || name == "retries" || name == "srcIf")
        return true;
    return false;
}

System::UserextItems::RadiusextItems::RadiusproviderItems::RadiusproviderItems()
    :
    radiusprovider_list(this, {"name"})
{

    yang_name = "radiusprovider-items"; yang_parent_name = "radiusext-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::RadiusextItems::RadiusproviderItems::~RadiusproviderItems()
{
}

bool System::UserextItems::RadiusextItems::RadiusproviderItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<radiusprovider_list.len(); index++)
    {
        if(radiusprovider_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::UserextItems::RadiusextItems::RadiusproviderItems::has_operation() const
{
    for (std::size_t index=0; index<radiusprovider_list.len(); index++)
    {
        if(radiusprovider_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::UserextItems::RadiusextItems::RadiusproviderItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/userext-items/radiusext-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::RadiusextItems::RadiusproviderItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "radiusprovider-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::RadiusextItems::RadiusproviderItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::UserextItems::RadiusextItems::RadiusproviderItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RadiusProvider-list")
    {
        auto ent_ = std::make_shared<System::UserextItems::RadiusextItems::RadiusproviderItems::RadiusProviderList>();
        ent_->parent = this;
        radiusprovider_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::UserextItems::RadiusextItems::RadiusproviderItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : radiusprovider_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::UserextItems::RadiusextItems::RadiusproviderItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::UserextItems::RadiusextItems::RadiusproviderItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::UserextItems::RadiusextItems::RadiusproviderItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RadiusProvider-list")
        return true;
    return false;
}

System::UserextItems::RadiusextItems::RadiusproviderItems::RadiusProviderList::RadiusProviderList()
    :
    name{YType::str, "name"},
    usetype{YType::enumeration, "useType"},
    authport{YType::uint32, "authPort"},
    acctport{YType::uint32, "acctPort"},
    authprotocol{YType::enumeration, "authProtocol"},
    monitoringidletime{YType::uint16, "monitoringIdleTime"},
    monitoringpasswordtype{YType::enumeration, "monitoringPasswordType"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"},
    key{YType::str, "key"},
    keyenc{YType::enumeration, "keyEnc"},
    timeout{YType::uint32, "timeout"},
    retries{YType::uint32, "retries"},
    monitoringuser{YType::str, "monitoringUser"},
    monitoringpassword{YType::str, "monitoringPassword"},
    epgdn{YType::str, "epgDn"},
    snmpindex{YType::uint32, "snmpIndex"}
{

    yang_name = "RadiusProvider-list"; yang_parent_name = "radiusprovider-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::RadiusextItems::RadiusproviderItems::RadiusProviderList::~RadiusProviderList()
{
}

bool System::UserextItems::RadiusextItems::RadiusproviderItems::RadiusProviderList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| usetype.is_set
	|| authport.is_set
	|| acctport.is_set
	|| authprotocol.is_set
	|| monitoringidletime.is_set
	|| monitoringpasswordtype.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set
	|| key.is_set
	|| keyenc.is_set
	|| timeout.is_set
	|| retries.is_set
	|| monitoringuser.is_set
	|| monitoringpassword.is_set
	|| epgdn.is_set
	|| snmpindex.is_set;
}

bool System::UserextItems::RadiusextItems::RadiusproviderItems::RadiusProviderList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(usetype.yfilter)
	|| ydk::is_set(authport.yfilter)
	|| ydk::is_set(acctport.yfilter)
	|| ydk::is_set(authprotocol.yfilter)
	|| ydk::is_set(monitoringidletime.yfilter)
	|| ydk::is_set(monitoringpasswordtype.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(keyenc.yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| ydk::is_set(retries.yfilter)
	|| ydk::is_set(monitoringuser.yfilter)
	|| ydk::is_set(monitoringpassword.yfilter)
	|| ydk::is_set(epgdn.yfilter)
	|| ydk::is_set(snmpindex.yfilter);
}

std::string System::UserextItems::RadiusextItems::RadiusproviderItems::RadiusProviderList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/userext-items/radiusext-items/radiusprovider-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::RadiusextItems::RadiusproviderItems::RadiusProviderList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RadiusProvider-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::RadiusextItems::RadiusproviderItems::RadiusProviderList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (usetype.is_set || is_set(usetype.yfilter)) leaf_name_data.push_back(usetype.get_name_leafdata());
    if (authport.is_set || is_set(authport.yfilter)) leaf_name_data.push_back(authport.get_name_leafdata());
    if (acctport.is_set || is_set(acctport.yfilter)) leaf_name_data.push_back(acctport.get_name_leafdata());
    if (authprotocol.is_set || is_set(authprotocol.yfilter)) leaf_name_data.push_back(authprotocol.get_name_leafdata());
    if (monitoringidletime.is_set || is_set(monitoringidletime.yfilter)) leaf_name_data.push_back(monitoringidletime.get_name_leafdata());
    if (monitoringpasswordtype.is_set || is_set(monitoringpasswordtype.yfilter)) leaf_name_data.push_back(monitoringpasswordtype.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (keyenc.is_set || is_set(keyenc.yfilter)) leaf_name_data.push_back(keyenc.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (retries.is_set || is_set(retries.yfilter)) leaf_name_data.push_back(retries.get_name_leafdata());
    if (monitoringuser.is_set || is_set(monitoringuser.yfilter)) leaf_name_data.push_back(monitoringuser.get_name_leafdata());
    if (monitoringpassword.is_set || is_set(monitoringpassword.yfilter)) leaf_name_data.push_back(monitoringpassword.get_name_leafdata());
    if (epgdn.is_set || is_set(epgdn.yfilter)) leaf_name_data.push_back(epgdn.get_name_leafdata());
    if (snmpindex.is_set || is_set(snmpindex.yfilter)) leaf_name_data.push_back(snmpindex.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::UserextItems::RadiusextItems::RadiusproviderItems::RadiusProviderList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::UserextItems::RadiusextItems::RadiusproviderItems::RadiusProviderList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::UserextItems::RadiusextItems::RadiusproviderItems::RadiusProviderList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "useType")
    {
        usetype = value;
        usetype.value_namespace = name_space;
        usetype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authPort")
    {
        authport = value;
        authport.value_namespace = name_space;
        authport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acctPort")
    {
        acctport = value;
        acctport.value_namespace = name_space;
        acctport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authProtocol")
    {
        authprotocol = value;
        authprotocol.value_namespace = name_space;
        authprotocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "monitoringIdleTime")
    {
        monitoringidletime = value;
        monitoringidletime.value_namespace = name_space;
        monitoringidletime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "monitoringPasswordType")
    {
        monitoringpasswordtype = value;
        monitoringpasswordtype.value_namespace = name_space;
        monitoringpasswordtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerKey")
    {
        ownerkey = value;
        ownerkey.value_namespace = name_space;
        ownerkey.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerTag")
    {
        ownertag = value;
        ownertag.value_namespace = name_space;
        ownertag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keyEnc")
    {
        keyenc = value;
        keyenc.value_namespace = name_space;
        keyenc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retries")
    {
        retries = value;
        retries.value_namespace = name_space;
        retries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "monitoringUser")
    {
        monitoringuser = value;
        monitoringuser.value_namespace = name_space;
        monitoringuser.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "monitoringPassword")
    {
        monitoringpassword = value;
        monitoringpassword.value_namespace = name_space;
        monitoringpassword.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "epgDn")
    {
        epgdn = value;
        epgdn.value_namespace = name_space;
        epgdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmpIndex")
    {
        snmpindex = value;
        snmpindex.value_namespace = name_space;
        snmpindex.value_namespace_prefix = name_space_prefix;
    }
}

void System::UserextItems::RadiusextItems::RadiusproviderItems::RadiusProviderList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "useType")
    {
        usetype.yfilter = yfilter;
    }
    if(value_path == "authPort")
    {
        authport.yfilter = yfilter;
    }
    if(value_path == "acctPort")
    {
        acctport.yfilter = yfilter;
    }
    if(value_path == "authProtocol")
    {
        authprotocol.yfilter = yfilter;
    }
    if(value_path == "monitoringIdleTime")
    {
        monitoringidletime.yfilter = yfilter;
    }
    if(value_path == "monitoringPasswordType")
    {
        monitoringpasswordtype.yfilter = yfilter;
    }
    if(value_path == "ownerKey")
    {
        ownerkey.yfilter = yfilter;
    }
    if(value_path == "ownerTag")
    {
        ownertag.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "keyEnc")
    {
        keyenc.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
    if(value_path == "retries")
    {
        retries.yfilter = yfilter;
    }
    if(value_path == "monitoringUser")
    {
        monitoringuser.yfilter = yfilter;
    }
    if(value_path == "monitoringPassword")
    {
        monitoringpassword.yfilter = yfilter;
    }
    if(value_path == "epgDn")
    {
        epgdn.yfilter = yfilter;
    }
    if(value_path == "snmpIndex")
    {
        snmpindex.yfilter = yfilter;
    }
}

bool System::UserextItems::RadiusextItems::RadiusproviderItems::RadiusProviderList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "useType" || name == "authPort" || name == "acctPort" || name == "authProtocol" || name == "monitoringIdleTime" || name == "monitoringPasswordType" || name == "ownerKey" || name == "ownerTag" || name == "descr" || name == "key" || name == "keyEnc" || name == "timeout" || name == "retries" || name == "monitoringUser" || name == "monitoringPassword" || name == "epgDn" || name == "snmpIndex")
        return true;
    return false;
}

System::UserextItems::RadiusextItems::RadiusprovidergroupItems::RadiusprovidergroupItems()
    :
    radiusprovidergroup_list(this, {"name"})
{

    yang_name = "radiusprovidergroup-items"; yang_parent_name = "radiusext-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::RadiusextItems::RadiusprovidergroupItems::~RadiusprovidergroupItems()
{
}

bool System::UserextItems::RadiusextItems::RadiusprovidergroupItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<radiusprovidergroup_list.len(); index++)
    {
        if(radiusprovidergroup_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::UserextItems::RadiusextItems::RadiusprovidergroupItems::has_operation() const
{
    for (std::size_t index=0; index<radiusprovidergroup_list.len(); index++)
    {
        if(radiusprovidergroup_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::UserextItems::RadiusextItems::RadiusprovidergroupItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/userext-items/radiusext-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::RadiusextItems::RadiusprovidergroupItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "radiusprovidergroup-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::RadiusextItems::RadiusprovidergroupItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::UserextItems::RadiusextItems::RadiusprovidergroupItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RadiusProviderGroup-list")
    {
        auto ent_ = std::make_shared<System::UserextItems::RadiusextItems::RadiusprovidergroupItems::RadiusProviderGroupList>();
        ent_->parent = this;
        radiusprovidergroup_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::UserextItems::RadiusextItems::RadiusprovidergroupItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : radiusprovidergroup_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::UserextItems::RadiusextItems::RadiusprovidergroupItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::UserextItems::RadiusextItems::RadiusprovidergroupItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::UserextItems::RadiusextItems::RadiusprovidergroupItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RadiusProviderGroup-list")
        return true;
    return false;
}

System::UserextItems::RadiusextItems::RadiusprovidergroupItems::RadiusProviderGroupList::RadiusProviderGroupList()
    :
    name{YType::str, "name"},
    deadtime{YType::uint32, "deadtime"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"},
    snmpindex{YType::uint32, "snmpIndex"},
    srcif{YType::str, "srcIf"},
    vrf{YType::str, "vrf"}
        ,
    providerref_items(std::make_shared<System::UserextItems::RadiusextItems::RadiusprovidergroupItems::RadiusProviderGroupList::ProviderrefItems>())
{
    providerref_items->parent = this;

    yang_name = "RadiusProviderGroup-list"; yang_parent_name = "radiusprovidergroup-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::RadiusextItems::RadiusprovidergroupItems::RadiusProviderGroupList::~RadiusProviderGroupList()
{
}

bool System::UserextItems::RadiusextItems::RadiusprovidergroupItems::RadiusProviderGroupList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| deadtime.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set
	|| snmpindex.is_set
	|| srcif.is_set
	|| vrf.is_set
	|| (providerref_items !=  nullptr && providerref_items->has_data());
}

bool System::UserextItems::RadiusextItems::RadiusprovidergroupItems::RadiusProviderGroupList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(deadtime.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(snmpindex.yfilter)
	|| ydk::is_set(srcif.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| (providerref_items !=  nullptr && providerref_items->has_operation());
}

std::string System::UserextItems::RadiusextItems::RadiusprovidergroupItems::RadiusProviderGroupList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/userext-items/radiusext-items/radiusprovidergroup-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::RadiusextItems::RadiusprovidergroupItems::RadiusProviderGroupList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RadiusProviderGroup-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::RadiusextItems::RadiusprovidergroupItems::RadiusProviderGroupList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (deadtime.is_set || is_set(deadtime.yfilter)) leaf_name_data.push_back(deadtime.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (snmpindex.is_set || is_set(snmpindex.yfilter)) leaf_name_data.push_back(snmpindex.get_name_leafdata());
    if (srcif.is_set || is_set(srcif.yfilter)) leaf_name_data.push_back(srcif.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::UserextItems::RadiusextItems::RadiusprovidergroupItems::RadiusProviderGroupList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "providerref-items")
    {
        if(providerref_items == nullptr)
        {
            providerref_items = std::make_shared<System::UserextItems::RadiusextItems::RadiusprovidergroupItems::RadiusProviderGroupList::ProviderrefItems>();
        }
        return providerref_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::UserextItems::RadiusextItems::RadiusprovidergroupItems::RadiusProviderGroupList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(providerref_items != nullptr)
    {
        _children["providerref-items"] = providerref_items;
    }

    return _children;
}

void System::UserextItems::RadiusextItems::RadiusprovidergroupItems::RadiusProviderGroupList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "deadtime")
    {
        deadtime = value;
        deadtime.value_namespace = name_space;
        deadtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerKey")
    {
        ownerkey = value;
        ownerkey.value_namespace = name_space;
        ownerkey.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerTag")
    {
        ownertag = value;
        ownertag.value_namespace = name_space;
        ownertag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmpIndex")
    {
        snmpindex = value;
        snmpindex.value_namespace = name_space;
        snmpindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcIf")
    {
        srcif = value;
        srcif.value_namespace = name_space;
        srcif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void System::UserextItems::RadiusextItems::RadiusprovidergroupItems::RadiusProviderGroupList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "deadtime")
    {
        deadtime.yfilter = yfilter;
    }
    if(value_path == "ownerKey")
    {
        ownerkey.yfilter = yfilter;
    }
    if(value_path == "ownerTag")
    {
        ownertag.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "snmpIndex")
    {
        snmpindex.yfilter = yfilter;
    }
    if(value_path == "srcIf")
    {
        srcif.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool System::UserextItems::RadiusextItems::RadiusprovidergroupItems::RadiusProviderGroupList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "providerref-items" || name == "name" || name == "deadtime" || name == "ownerKey" || name == "ownerTag" || name == "descr" || name == "snmpIndex" || name == "srcIf" || name == "vrf")
        return true;
    return false;
}

System::UserextItems::RadiusextItems::RadiusprovidergroupItems::RadiusProviderGroupList::ProviderrefItems::ProviderrefItems()
    :
    providerref_list(this, {"name"})
{

    yang_name = "providerref-items"; yang_parent_name = "RadiusProviderGroup-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::UserextItems::RadiusextItems::RadiusprovidergroupItems::RadiusProviderGroupList::ProviderrefItems::~ProviderrefItems()
{
}

bool System::UserextItems::RadiusextItems::RadiusprovidergroupItems::RadiusProviderGroupList::ProviderrefItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<providerref_list.len(); index++)
    {
        if(providerref_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::UserextItems::RadiusextItems::RadiusprovidergroupItems::RadiusProviderGroupList::ProviderrefItems::has_operation() const
{
    for (std::size_t index=0; index<providerref_list.len(); index++)
    {
        if(providerref_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::UserextItems::RadiusextItems::RadiusprovidergroupItems::RadiusProviderGroupList::ProviderrefItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "providerref-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::RadiusextItems::RadiusprovidergroupItems::RadiusProviderGroupList::ProviderrefItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::UserextItems::RadiusextItems::RadiusprovidergroupItems::RadiusProviderGroupList::ProviderrefItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ProviderRef-list")
    {
        auto ent_ = std::make_shared<System::UserextItems::RadiusextItems::RadiusprovidergroupItems::RadiusProviderGroupList::ProviderrefItems::ProviderRefList>();
        ent_->parent = this;
        providerref_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::UserextItems::RadiusextItems::RadiusprovidergroupItems::RadiusProviderGroupList::ProviderrefItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : providerref_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::UserextItems::RadiusextItems::RadiusprovidergroupItems::RadiusProviderGroupList::ProviderrefItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::UserextItems::RadiusextItems::RadiusprovidergroupItems::RadiusProviderGroupList::ProviderrefItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::UserextItems::RadiusextItems::RadiusprovidergroupItems::RadiusProviderGroupList::ProviderrefItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ProviderRef-list")
        return true;
    return false;
}

System::UserextItems::RadiusextItems::RadiusprovidergroupItems::RadiusProviderGroupList::ProviderrefItems::ProviderRefList::ProviderRefList()
    :
    name{YType::str, "name"},
    order{YType::uint16, "order"},
    snmpindex{YType::uint32, "snmpIndex"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"}
{

    yang_name = "ProviderRef-list"; yang_parent_name = "providerref-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::UserextItems::RadiusextItems::RadiusprovidergroupItems::RadiusProviderGroupList::ProviderrefItems::ProviderRefList::~ProviderRefList()
{
}

bool System::UserextItems::RadiusextItems::RadiusprovidergroupItems::RadiusProviderGroupList::ProviderrefItems::ProviderRefList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| order.is_set
	|| snmpindex.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set;
}

bool System::UserextItems::RadiusextItems::RadiusprovidergroupItems::RadiusProviderGroupList::ProviderrefItems::ProviderRefList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(order.yfilter)
	|| ydk::is_set(snmpindex.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::UserextItems::RadiusextItems::RadiusprovidergroupItems::RadiusProviderGroupList::ProviderrefItems::ProviderRefList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ProviderRef-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::RadiusextItems::RadiusprovidergroupItems::RadiusProviderGroupList::ProviderrefItems::ProviderRefList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (order.is_set || is_set(order.yfilter)) leaf_name_data.push_back(order.get_name_leafdata());
    if (snmpindex.is_set || is_set(snmpindex.yfilter)) leaf_name_data.push_back(snmpindex.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::UserextItems::RadiusextItems::RadiusprovidergroupItems::RadiusProviderGroupList::ProviderrefItems::ProviderRefList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::UserextItems::RadiusextItems::RadiusprovidergroupItems::RadiusProviderGroupList::ProviderrefItems::ProviderRefList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::UserextItems::RadiusextItems::RadiusprovidergroupItems::RadiusProviderGroupList::ProviderrefItems::ProviderRefList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "order")
    {
        order = value;
        order.value_namespace = name_space;
        order.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmpIndex")
    {
        snmpindex = value;
        snmpindex.value_namespace = name_space;
        snmpindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerKey")
    {
        ownerkey = value;
        ownerkey.value_namespace = name_space;
        ownerkey.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerTag")
    {
        ownertag = value;
        ownertag.value_namespace = name_space;
        ownertag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::UserextItems::RadiusextItems::RadiusprovidergroupItems::RadiusProviderGroupList::ProviderrefItems::ProviderRefList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "order")
    {
        order.yfilter = yfilter;
    }
    if(value_path == "snmpIndex")
    {
        snmpindex.yfilter = yfilter;
    }
    if(value_path == "ownerKey")
    {
        ownerkey.yfilter = yfilter;
    }
    if(value_path == "ownerTag")
    {
        ownertag.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::UserextItems::RadiusextItems::RadiusprovidergroupItems::RadiusProviderGroupList::ProviderrefItems::ProviderRefList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "order" || name == "snmpIndex" || name == "ownerKey" || name == "ownerTag" || name == "descr")
        return true;
    return false;
}

System::UserextItems::RadiusextItems::RadiusservermonitorItems::RadiusservermonitorItems()
    :
    pwd{YType::str, "pwd"},
    passwordtype{YType::enumeration, "passwordType"},
    idletime{YType::uint16, "idleTime"},
    name{YType::str, "name"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"}
{

    yang_name = "radiusservermonitor-items"; yang_parent_name = "radiusext-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::RadiusextItems::RadiusservermonitorItems::~RadiusservermonitorItems()
{
}

bool System::UserextItems::RadiusextItems::RadiusservermonitorItems::has_data() const
{
    if (is_presence_container) return true;
    return pwd.is_set
	|| passwordtype.is_set
	|| idletime.is_set
	|| name.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set;
}

bool System::UserextItems::RadiusextItems::RadiusservermonitorItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pwd.yfilter)
	|| ydk::is_set(passwordtype.yfilter)
	|| ydk::is_set(idletime.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::UserextItems::RadiusextItems::RadiusservermonitorItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/userext-items/radiusext-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::RadiusextItems::RadiusservermonitorItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "radiusservermonitor-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::RadiusextItems::RadiusservermonitorItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pwd.is_set || is_set(pwd.yfilter)) leaf_name_data.push_back(pwd.get_name_leafdata());
    if (passwordtype.is_set || is_set(passwordtype.yfilter)) leaf_name_data.push_back(passwordtype.get_name_leafdata());
    if (idletime.is_set || is_set(idletime.yfilter)) leaf_name_data.push_back(idletime.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::UserextItems::RadiusextItems::RadiusservermonitorItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::UserextItems::RadiusextItems::RadiusservermonitorItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::UserextItems::RadiusextItems::RadiusservermonitorItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pwd")
    {
        pwd = value;
        pwd.value_namespace = name_space;
        pwd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "passwordType")
    {
        passwordtype = value;
        passwordtype.value_namespace = name_space;
        passwordtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idleTime")
    {
        idletime = value;
        idletime.value_namespace = name_space;
        idletime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerKey")
    {
        ownerkey = value;
        ownerkey.value_namespace = name_space;
        ownerkey.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerTag")
    {
        ownertag = value;
        ownertag.value_namespace = name_space;
        ownertag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::UserextItems::RadiusextItems::RadiusservermonitorItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pwd")
    {
        pwd.yfilter = yfilter;
    }
    if(value_path == "passwordType")
    {
        passwordtype.yfilter = yfilter;
    }
    if(value_path == "idleTime")
    {
        idletime.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ownerKey")
    {
        ownerkey.yfilter = yfilter;
    }
    if(value_path == "ownerTag")
    {
        ownertag.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::UserextItems::RadiusextItems::RadiusservermonitorItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pwd" || name == "passwordType" || name == "idleTime" || name == "name" || name == "ownerKey" || name == "ownerTag" || name == "descr")
        return true;
    return false;
}

System::UserextItems::RadiusextItems::RtfabricResRadiusEpItems::RtfabricResRadiusEpItems()
    :
    rtfabricresradiusep_list(this, {"tdn"})
{

    yang_name = "rtfabricResRadiusEp-items"; yang_parent_name = "radiusext-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::RadiusextItems::RtfabricResRadiusEpItems::~RtfabricResRadiusEpItems()
{
}

bool System::UserextItems::RadiusextItems::RtfabricResRadiusEpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtfabricresradiusep_list.len(); index++)
    {
        if(rtfabricresradiusep_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::UserextItems::RadiusextItems::RtfabricResRadiusEpItems::has_operation() const
{
    for (std::size_t index=0; index<rtfabricresradiusep_list.len(); index++)
    {
        if(rtfabricresradiusep_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::UserextItems::RadiusextItems::RtfabricResRadiusEpItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/userext-items/radiusext-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::RadiusextItems::RtfabricResRadiusEpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtfabricResRadiusEp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::RadiusextItems::RtfabricResRadiusEpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::UserextItems::RadiusextItems::RtfabricResRadiusEpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtFabricResRadiusEp-list")
    {
        auto ent_ = std::make_shared<System::UserextItems::RadiusextItems::RtfabricResRadiusEpItems::RtFabricResRadiusEpList>();
        ent_->parent = this;
        rtfabricresradiusep_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::UserextItems::RadiusextItems::RtfabricResRadiusEpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rtfabricresradiusep_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::UserextItems::RadiusextItems::RtfabricResRadiusEpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::UserextItems::RadiusextItems::RtfabricResRadiusEpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::UserextItems::RadiusextItems::RtfabricResRadiusEpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtFabricResRadiusEp-list")
        return true;
    return false;
}

System::UserextItems::RadiusextItems::RtfabricResRadiusEpItems::RtFabricResRadiusEpList::RtFabricResRadiusEpList()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "RtFabricResRadiusEp-list"; yang_parent_name = "rtfabricResRadiusEp-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::RadiusextItems::RtfabricResRadiusEpItems::RtFabricResRadiusEpList::~RtFabricResRadiusEpList()
{
}

bool System::UserextItems::RadiusextItems::RtfabricResRadiusEpItems::RtFabricResRadiusEpList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::UserextItems::RadiusextItems::RtfabricResRadiusEpItems::RtFabricResRadiusEpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::UserextItems::RadiusextItems::RtfabricResRadiusEpItems::RtFabricResRadiusEpList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/userext-items/radiusext-items/rtfabricResRadiusEp-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::RadiusextItems::RtfabricResRadiusEpItems::RtFabricResRadiusEpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtFabricResRadiusEp-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::RadiusextItems::RtfabricResRadiusEpItems::RtFabricResRadiusEpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::UserextItems::RadiusextItems::RtfabricResRadiusEpItems::RtFabricResRadiusEpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::UserextItems::RadiusextItems::RtfabricResRadiusEpItems::RtFabricResRadiusEpList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::UserextItems::RadiusextItems::RtfabricResRadiusEpItems::RtFabricResRadiusEpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::UserextItems::RadiusextItems::RtfabricResRadiusEpItems::RtFabricResRadiusEpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::UserextItems::RadiusextItems::RtfabricResRadiusEpItems::RtFabricResRadiusEpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::UserextItems::LdapextItems::LdapextItems()
    :
    deadtime{YType::uint32, "deadtime"},
    port{YType::uint32, "port"},
    attribute{YType::str, "attribute"},
    basedn{YType::str, "basedn"},
    filter{YType::str, "filter"},
    logginglevel{YType::enumeration, "loggingLevel"},
    name{YType::str, "name"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"},
    timeout{YType::uint32, "timeout"},
    retries{YType::uint32, "retries"},
    srcif{YType::str, "srcIf"}
        ,
    ldapprovidergroup_items(std::make_shared<System::UserextItems::LdapextItems::LdapprovidergroupItems>())
    , ldapprovider_items(std::make_shared<System::UserextItems::LdapextItems::LdapproviderItems>())
    , searchmap_items(std::make_shared<System::UserextItems::LdapextItems::SearchmapItems>())
    , rtfabricresldapep_items(std::make_shared<System::UserextItems::LdapextItems::RtfabricResLdapEpItems>())
{
    ldapprovidergroup_items->parent = this;
    ldapprovider_items->parent = this;
    searchmap_items->parent = this;
    rtfabricresldapep_items->parent = this;

    yang_name = "ldapext-items"; yang_parent_name = "userext-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::LdapextItems::~LdapextItems()
{
}

bool System::UserextItems::LdapextItems::has_data() const
{
    if (is_presence_container) return true;
    return deadtime.is_set
	|| port.is_set
	|| attribute.is_set
	|| basedn.is_set
	|| filter.is_set
	|| logginglevel.is_set
	|| name.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set
	|| timeout.is_set
	|| retries.is_set
	|| srcif.is_set
	|| (ldapprovidergroup_items !=  nullptr && ldapprovidergroup_items->has_data())
	|| (ldapprovider_items !=  nullptr && ldapprovider_items->has_data())
	|| (searchmap_items !=  nullptr && searchmap_items->has_data())
	|| (rtfabricresldapep_items !=  nullptr && rtfabricresldapep_items->has_data());
}

bool System::UserextItems::LdapextItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(deadtime.yfilter)
	|| ydk::is_set(port.yfilter)
	|| ydk::is_set(attribute.yfilter)
	|| ydk::is_set(basedn.yfilter)
	|| ydk::is_set(filter.yfilter)
	|| ydk::is_set(logginglevel.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| ydk::is_set(retries.yfilter)
	|| ydk::is_set(srcif.yfilter)
	|| (ldapprovidergroup_items !=  nullptr && ldapprovidergroup_items->has_operation())
	|| (ldapprovider_items !=  nullptr && ldapprovider_items->has_operation())
	|| (searchmap_items !=  nullptr && searchmap_items->has_operation())
	|| (rtfabricresldapep_items !=  nullptr && rtfabricresldapep_items->has_operation());
}

std::string System::UserextItems::LdapextItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/userext-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::LdapextItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ldapext-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::LdapextItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (deadtime.is_set || is_set(deadtime.yfilter)) leaf_name_data.push_back(deadtime.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());
    if (attribute.is_set || is_set(attribute.yfilter)) leaf_name_data.push_back(attribute.get_name_leafdata());
    if (basedn.is_set || is_set(basedn.yfilter)) leaf_name_data.push_back(basedn.get_name_leafdata());
    if (filter.is_set || is_set(filter.yfilter)) leaf_name_data.push_back(filter.get_name_leafdata());
    if (logginglevel.is_set || is_set(logginglevel.yfilter)) leaf_name_data.push_back(logginglevel.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (retries.is_set || is_set(retries.yfilter)) leaf_name_data.push_back(retries.get_name_leafdata());
    if (srcif.is_set || is_set(srcif.yfilter)) leaf_name_data.push_back(srcif.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::UserextItems::LdapextItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ldapprovidergroup-items")
    {
        if(ldapprovidergroup_items == nullptr)
        {
            ldapprovidergroup_items = std::make_shared<System::UserextItems::LdapextItems::LdapprovidergroupItems>();
        }
        return ldapprovidergroup_items;
    }

    if(child_yang_name == "ldapprovider-items")
    {
        if(ldapprovider_items == nullptr)
        {
            ldapprovider_items = std::make_shared<System::UserextItems::LdapextItems::LdapproviderItems>();
        }
        return ldapprovider_items;
    }

    if(child_yang_name == "searchmap-items")
    {
        if(searchmap_items == nullptr)
        {
            searchmap_items = std::make_shared<System::UserextItems::LdapextItems::SearchmapItems>();
        }
        return searchmap_items;
    }

    if(child_yang_name == "rtfabricResLdapEp-items")
    {
        if(rtfabricresldapep_items == nullptr)
        {
            rtfabricresldapep_items = std::make_shared<System::UserextItems::LdapextItems::RtfabricResLdapEpItems>();
        }
        return rtfabricresldapep_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::UserextItems::LdapextItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ldapprovidergroup_items != nullptr)
    {
        _children["ldapprovidergroup-items"] = ldapprovidergroup_items;
    }

    if(ldapprovider_items != nullptr)
    {
        _children["ldapprovider-items"] = ldapprovider_items;
    }

    if(searchmap_items != nullptr)
    {
        _children["searchmap-items"] = searchmap_items;
    }

    if(rtfabricresldapep_items != nullptr)
    {
        _children["rtfabricResLdapEp-items"] = rtfabricresldapep_items;
    }

    return _children;
}

void System::UserextItems::LdapextItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "deadtime")
    {
        deadtime = value;
        deadtime.value_namespace = name_space;
        deadtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute")
    {
        attribute = value;
        attribute.value_namespace = name_space;
        attribute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "basedn")
    {
        basedn = value;
        basedn.value_namespace = name_space;
        basedn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "filter")
    {
        filter = value;
        filter.value_namespace = name_space;
        filter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loggingLevel")
    {
        logginglevel = value;
        logginglevel.value_namespace = name_space;
        logginglevel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerKey")
    {
        ownerkey = value;
        ownerkey.value_namespace = name_space;
        ownerkey.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerTag")
    {
        ownertag = value;
        ownertag.value_namespace = name_space;
        ownertag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retries")
    {
        retries = value;
        retries.value_namespace = name_space;
        retries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcIf")
    {
        srcif = value;
        srcif.value_namespace = name_space;
        srcif.value_namespace_prefix = name_space_prefix;
    }
}

void System::UserextItems::LdapextItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "deadtime")
    {
        deadtime.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
    if(value_path == "attribute")
    {
        attribute.yfilter = yfilter;
    }
    if(value_path == "basedn")
    {
        basedn.yfilter = yfilter;
    }
    if(value_path == "filter")
    {
        filter.yfilter = yfilter;
    }
    if(value_path == "loggingLevel")
    {
        logginglevel.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ownerKey")
    {
        ownerkey.yfilter = yfilter;
    }
    if(value_path == "ownerTag")
    {
        ownertag.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
    if(value_path == "retries")
    {
        retries.yfilter = yfilter;
    }
    if(value_path == "srcIf")
    {
        srcif.yfilter = yfilter;
    }
}

bool System::UserextItems::LdapextItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ldapprovidergroup-items" || name == "ldapprovider-items" || name == "searchmap-items" || name == "rtfabricResLdapEp-items" || name == "deadtime" || name == "port" || name == "attribute" || name == "basedn" || name == "filter" || name == "loggingLevel" || name == "name" || name == "ownerKey" || name == "ownerTag" || name == "descr" || name == "timeout" || name == "retries" || name == "srcIf")
        return true;
    return false;
}

System::UserextItems::LdapextItems::LdapprovidergroupItems::LdapprovidergroupItems()
    :
    ldapprovidergroup_list(this, {"name"})
{

    yang_name = "ldapprovidergroup-items"; yang_parent_name = "ldapext-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::LdapextItems::LdapprovidergroupItems::~LdapprovidergroupItems()
{
}

bool System::UserextItems::LdapextItems::LdapprovidergroupItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ldapprovidergroup_list.len(); index++)
    {
        if(ldapprovidergroup_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::UserextItems::LdapextItems::LdapprovidergroupItems::has_operation() const
{
    for (std::size_t index=0; index<ldapprovidergroup_list.len(); index++)
    {
        if(ldapprovidergroup_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::UserextItems::LdapextItems::LdapprovidergroupItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/userext-items/ldapext-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::LdapextItems::LdapprovidergroupItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ldapprovidergroup-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::LdapextItems::LdapprovidergroupItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::UserextItems::LdapextItems::LdapprovidergroupItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "LdapProviderGroup-list")
    {
        auto ent_ = std::make_shared<System::UserextItems::LdapextItems::LdapprovidergroupItems::LdapProviderGroupList>();
        ent_->parent = this;
        ldapprovidergroup_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::UserextItems::LdapextItems::LdapprovidergroupItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ldapprovidergroup_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::UserextItems::LdapextItems::LdapprovidergroupItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::UserextItems::LdapextItems::LdapprovidergroupItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::UserextItems::LdapextItems::LdapprovidergroupItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LdapProviderGroup-list")
        return true;
    return false;
}

System::UserextItems::LdapextItems::LdapprovidergroupItems::LdapProviderGroupList::LdapProviderGroupList()
    :
    name{YType::str, "name"},
    deadtime{YType::uint32, "deadtime"},
    enauthcompare{YType::boolean, "enAuthCompare"},
    encertdnmatch{YType::boolean, "enCertDnMatch"},
    enuserservergroup{YType::boolean, "enUserServerGroup"},
    enauthbindfirst{YType::boolean, "enAuthBindFirst"},
    authbasednappendstr{YType::str, "authBaseDnAppendStr"},
    authcomparepasswdattribute{YType::str, "authComparePasswdAttribute"},
    authmechanism{YType::enumeration, "authMechanism"},
    searchmap{YType::str, "searchMap"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"},
    snmpindex{YType::uint32, "snmpIndex"},
    srcif{YType::str, "srcIf"},
    vrf{YType::str, "vrf"}
        ,
    providerref_items(std::make_shared<System::UserextItems::LdapextItems::LdapprovidergroupItems::LdapProviderGroupList::ProviderrefItems>())
{
    providerref_items->parent = this;

    yang_name = "LdapProviderGroup-list"; yang_parent_name = "ldapprovidergroup-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::LdapextItems::LdapprovidergroupItems::LdapProviderGroupList::~LdapProviderGroupList()
{
}

bool System::UserextItems::LdapextItems::LdapprovidergroupItems::LdapProviderGroupList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| deadtime.is_set
	|| enauthcompare.is_set
	|| encertdnmatch.is_set
	|| enuserservergroup.is_set
	|| enauthbindfirst.is_set
	|| authbasednappendstr.is_set
	|| authcomparepasswdattribute.is_set
	|| authmechanism.is_set
	|| searchmap.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set
	|| snmpindex.is_set
	|| srcif.is_set
	|| vrf.is_set
	|| (providerref_items !=  nullptr && providerref_items->has_data());
}

bool System::UserextItems::LdapextItems::LdapprovidergroupItems::LdapProviderGroupList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(deadtime.yfilter)
	|| ydk::is_set(enauthcompare.yfilter)
	|| ydk::is_set(encertdnmatch.yfilter)
	|| ydk::is_set(enuserservergroup.yfilter)
	|| ydk::is_set(enauthbindfirst.yfilter)
	|| ydk::is_set(authbasednappendstr.yfilter)
	|| ydk::is_set(authcomparepasswdattribute.yfilter)
	|| ydk::is_set(authmechanism.yfilter)
	|| ydk::is_set(searchmap.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(snmpindex.yfilter)
	|| ydk::is_set(srcif.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| (providerref_items !=  nullptr && providerref_items->has_operation());
}

std::string System::UserextItems::LdapextItems::LdapprovidergroupItems::LdapProviderGroupList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/userext-items/ldapext-items/ldapprovidergroup-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::LdapextItems::LdapprovidergroupItems::LdapProviderGroupList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LdapProviderGroup-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::LdapextItems::LdapprovidergroupItems::LdapProviderGroupList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (deadtime.is_set || is_set(deadtime.yfilter)) leaf_name_data.push_back(deadtime.get_name_leafdata());
    if (enauthcompare.is_set || is_set(enauthcompare.yfilter)) leaf_name_data.push_back(enauthcompare.get_name_leafdata());
    if (encertdnmatch.is_set || is_set(encertdnmatch.yfilter)) leaf_name_data.push_back(encertdnmatch.get_name_leafdata());
    if (enuserservergroup.is_set || is_set(enuserservergroup.yfilter)) leaf_name_data.push_back(enuserservergroup.get_name_leafdata());
    if (enauthbindfirst.is_set || is_set(enauthbindfirst.yfilter)) leaf_name_data.push_back(enauthbindfirst.get_name_leafdata());
    if (authbasednappendstr.is_set || is_set(authbasednappendstr.yfilter)) leaf_name_data.push_back(authbasednappendstr.get_name_leafdata());
    if (authcomparepasswdattribute.is_set || is_set(authcomparepasswdattribute.yfilter)) leaf_name_data.push_back(authcomparepasswdattribute.get_name_leafdata());
    if (authmechanism.is_set || is_set(authmechanism.yfilter)) leaf_name_data.push_back(authmechanism.get_name_leafdata());
    if (searchmap.is_set || is_set(searchmap.yfilter)) leaf_name_data.push_back(searchmap.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (snmpindex.is_set || is_set(snmpindex.yfilter)) leaf_name_data.push_back(snmpindex.get_name_leafdata());
    if (srcif.is_set || is_set(srcif.yfilter)) leaf_name_data.push_back(srcif.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::UserextItems::LdapextItems::LdapprovidergroupItems::LdapProviderGroupList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "providerref-items")
    {
        if(providerref_items == nullptr)
        {
            providerref_items = std::make_shared<System::UserextItems::LdapextItems::LdapprovidergroupItems::LdapProviderGroupList::ProviderrefItems>();
        }
        return providerref_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::UserextItems::LdapextItems::LdapprovidergroupItems::LdapProviderGroupList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(providerref_items != nullptr)
    {
        _children["providerref-items"] = providerref_items;
    }

    return _children;
}

void System::UserextItems::LdapextItems::LdapprovidergroupItems::LdapProviderGroupList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "deadtime")
    {
        deadtime = value;
        deadtime.value_namespace = name_space;
        deadtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enAuthCompare")
    {
        enauthcompare = value;
        enauthcompare.value_namespace = name_space;
        enauthcompare.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enCertDnMatch")
    {
        encertdnmatch = value;
        encertdnmatch.value_namespace = name_space;
        encertdnmatch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enUserServerGroup")
    {
        enuserservergroup = value;
        enuserservergroup.value_namespace = name_space;
        enuserservergroup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enAuthBindFirst")
    {
        enauthbindfirst = value;
        enauthbindfirst.value_namespace = name_space;
        enauthbindfirst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authBaseDnAppendStr")
    {
        authbasednappendstr = value;
        authbasednappendstr.value_namespace = name_space;
        authbasednappendstr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authComparePasswdAttribute")
    {
        authcomparepasswdattribute = value;
        authcomparepasswdattribute.value_namespace = name_space;
        authcomparepasswdattribute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authMechanism")
    {
        authmechanism = value;
        authmechanism.value_namespace = name_space;
        authmechanism.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "searchMap")
    {
        searchmap = value;
        searchmap.value_namespace = name_space;
        searchmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerKey")
    {
        ownerkey = value;
        ownerkey.value_namespace = name_space;
        ownerkey.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerTag")
    {
        ownertag = value;
        ownertag.value_namespace = name_space;
        ownertag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmpIndex")
    {
        snmpindex = value;
        snmpindex.value_namespace = name_space;
        snmpindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcIf")
    {
        srcif = value;
        srcif.value_namespace = name_space;
        srcif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void System::UserextItems::LdapextItems::LdapprovidergroupItems::LdapProviderGroupList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "deadtime")
    {
        deadtime.yfilter = yfilter;
    }
    if(value_path == "enAuthCompare")
    {
        enauthcompare.yfilter = yfilter;
    }
    if(value_path == "enCertDnMatch")
    {
        encertdnmatch.yfilter = yfilter;
    }
    if(value_path == "enUserServerGroup")
    {
        enuserservergroup.yfilter = yfilter;
    }
    if(value_path == "enAuthBindFirst")
    {
        enauthbindfirst.yfilter = yfilter;
    }
    if(value_path == "authBaseDnAppendStr")
    {
        authbasednappendstr.yfilter = yfilter;
    }
    if(value_path == "authComparePasswdAttribute")
    {
        authcomparepasswdattribute.yfilter = yfilter;
    }
    if(value_path == "authMechanism")
    {
        authmechanism.yfilter = yfilter;
    }
    if(value_path == "searchMap")
    {
        searchmap.yfilter = yfilter;
    }
    if(value_path == "ownerKey")
    {
        ownerkey.yfilter = yfilter;
    }
    if(value_path == "ownerTag")
    {
        ownertag.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "snmpIndex")
    {
        snmpindex.yfilter = yfilter;
    }
    if(value_path == "srcIf")
    {
        srcif.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool System::UserextItems::LdapextItems::LdapprovidergroupItems::LdapProviderGroupList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "providerref-items" || name == "name" || name == "deadtime" || name == "enAuthCompare" || name == "enCertDnMatch" || name == "enUserServerGroup" || name == "enAuthBindFirst" || name == "authBaseDnAppendStr" || name == "authComparePasswdAttribute" || name == "authMechanism" || name == "searchMap" || name == "ownerKey" || name == "ownerTag" || name == "descr" || name == "snmpIndex" || name == "srcIf" || name == "vrf")
        return true;
    return false;
}

System::UserextItems::LdapextItems::LdapprovidergroupItems::LdapProviderGroupList::ProviderrefItems::ProviderrefItems()
    :
    providerref_list(this, {"name"})
{

    yang_name = "providerref-items"; yang_parent_name = "LdapProviderGroup-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::UserextItems::LdapextItems::LdapprovidergroupItems::LdapProviderGroupList::ProviderrefItems::~ProviderrefItems()
{
}

bool System::UserextItems::LdapextItems::LdapprovidergroupItems::LdapProviderGroupList::ProviderrefItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<providerref_list.len(); index++)
    {
        if(providerref_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::UserextItems::LdapextItems::LdapprovidergroupItems::LdapProviderGroupList::ProviderrefItems::has_operation() const
{
    for (std::size_t index=0; index<providerref_list.len(); index++)
    {
        if(providerref_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::UserextItems::LdapextItems::LdapprovidergroupItems::LdapProviderGroupList::ProviderrefItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "providerref-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::LdapextItems::LdapprovidergroupItems::LdapProviderGroupList::ProviderrefItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::UserextItems::LdapextItems::LdapprovidergroupItems::LdapProviderGroupList::ProviderrefItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ProviderRef-list")
    {
        auto ent_ = std::make_shared<System::UserextItems::LdapextItems::LdapprovidergroupItems::LdapProviderGroupList::ProviderrefItems::ProviderRefList>();
        ent_->parent = this;
        providerref_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::UserextItems::LdapextItems::LdapprovidergroupItems::LdapProviderGroupList::ProviderrefItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : providerref_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::UserextItems::LdapextItems::LdapprovidergroupItems::LdapProviderGroupList::ProviderrefItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::UserextItems::LdapextItems::LdapprovidergroupItems::LdapProviderGroupList::ProviderrefItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::UserextItems::LdapextItems::LdapprovidergroupItems::LdapProviderGroupList::ProviderrefItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ProviderRef-list")
        return true;
    return false;
}

System::UserextItems::LdapextItems::LdapprovidergroupItems::LdapProviderGroupList::ProviderrefItems::ProviderRefList::ProviderRefList()
    :
    name{YType::str, "name"},
    order{YType::uint16, "order"},
    snmpindex{YType::uint32, "snmpIndex"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"}
{

    yang_name = "ProviderRef-list"; yang_parent_name = "providerref-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::UserextItems::LdapextItems::LdapprovidergroupItems::LdapProviderGroupList::ProviderrefItems::ProviderRefList::~ProviderRefList()
{
}

bool System::UserextItems::LdapextItems::LdapprovidergroupItems::LdapProviderGroupList::ProviderrefItems::ProviderRefList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| order.is_set
	|| snmpindex.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set;
}

bool System::UserextItems::LdapextItems::LdapprovidergroupItems::LdapProviderGroupList::ProviderrefItems::ProviderRefList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(order.yfilter)
	|| ydk::is_set(snmpindex.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::UserextItems::LdapextItems::LdapprovidergroupItems::LdapProviderGroupList::ProviderrefItems::ProviderRefList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ProviderRef-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::LdapextItems::LdapprovidergroupItems::LdapProviderGroupList::ProviderrefItems::ProviderRefList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (order.is_set || is_set(order.yfilter)) leaf_name_data.push_back(order.get_name_leafdata());
    if (snmpindex.is_set || is_set(snmpindex.yfilter)) leaf_name_data.push_back(snmpindex.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::UserextItems::LdapextItems::LdapprovidergroupItems::LdapProviderGroupList::ProviderrefItems::ProviderRefList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::UserextItems::LdapextItems::LdapprovidergroupItems::LdapProviderGroupList::ProviderrefItems::ProviderRefList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::UserextItems::LdapextItems::LdapprovidergroupItems::LdapProviderGroupList::ProviderrefItems::ProviderRefList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "order")
    {
        order = value;
        order.value_namespace = name_space;
        order.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmpIndex")
    {
        snmpindex = value;
        snmpindex.value_namespace = name_space;
        snmpindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerKey")
    {
        ownerkey = value;
        ownerkey.value_namespace = name_space;
        ownerkey.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerTag")
    {
        ownertag = value;
        ownertag.value_namespace = name_space;
        ownertag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::UserextItems::LdapextItems::LdapprovidergroupItems::LdapProviderGroupList::ProviderrefItems::ProviderRefList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "order")
    {
        order.yfilter = yfilter;
    }
    if(value_path == "snmpIndex")
    {
        snmpindex.yfilter = yfilter;
    }
    if(value_path == "ownerKey")
    {
        ownerkey.yfilter = yfilter;
    }
    if(value_path == "ownerTag")
    {
        ownertag.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::UserextItems::LdapextItems::LdapprovidergroupItems::LdapProviderGroupList::ProviderrefItems::ProviderRefList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "order" || name == "snmpIndex" || name == "ownerKey" || name == "ownerTag" || name == "descr")
        return true;
    return false;
}

System::UserextItems::LdapextItems::LdapproviderItems::LdapproviderItems()
    :
    ldapprovider_list(this, {"name"})
{

    yang_name = "ldapprovider-items"; yang_parent_name = "ldapext-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::LdapextItems::LdapproviderItems::~LdapproviderItems()
{
}

bool System::UserextItems::LdapextItems::LdapproviderItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ldapprovider_list.len(); index++)
    {
        if(ldapprovider_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::UserextItems::LdapextItems::LdapproviderItems::has_operation() const
{
    for (std::size_t index=0; index<ldapprovider_list.len(); index++)
    {
        if(ldapprovider_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::UserextItems::LdapextItems::LdapproviderItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/userext-items/ldapext-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::LdapextItems::LdapproviderItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ldapprovider-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::LdapextItems::LdapproviderItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::UserextItems::LdapextItems::LdapproviderItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "LdapProvider-list")
    {
        auto ent_ = std::make_shared<System::UserextItems::LdapextItems::LdapproviderItems::LdapProviderList>();
        ent_->parent = this;
        ldapprovider_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::UserextItems::LdapextItems::LdapproviderItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ldapprovider_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::UserextItems::LdapextItems::LdapproviderItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::UserextItems::LdapextItems::LdapproviderItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::UserextItems::LdapextItems::LdapproviderItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LdapProvider-list")
        return true;
    return false;
}

System::UserextItems::LdapextItems::LdapproviderItems::LdapProviderList::LdapProviderList()
    :
    name{YType::str, "name"},
    rootdn{YType::str, "rootdn"},
    rootdnpwd{YType::str, "rootdnPwd"},
    pwdencrypttype{YType::enumeration, "pwdEncryptType"},
    port{YType::uint32, "port"},
    enablessl{YType::boolean, "enableSSL"},
    sslvalidationlevel{YType::enumeration, "SSLValidationLevel"},
    attribute{YType::str, "attribute"},
    basedn{YType::str, "basedn"},
    filter{YType::str, "filter"},
    monitoringpasswordtype{YType::enumeration, "monitoringPasswordType"},
    monitoringidletime{YType::uint16, "monitoringIdleTime"},
    monitoringrootdn{YType::str, "monitoringRootdn"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"},
    key{YType::str, "key"},
    keyset{YType::boolean, "keySet"},
    keyenc{YType::enumeration, "keyEnc"},
    timeout{YType::uint32, "timeout"},
    retries{YType::uint32, "retries"},
    operstate{YType::enumeration, "operState"},
    monitoringuser{YType::str, "monitoringUser"},
    monitoringpassword{YType::str, "monitoringPassword"},
    epgdn{YType::str, "epgDn"},
    vrfname{YType::str, "vrfName"},
    snmpindex{YType::uint32, "snmpIndex"}
{

    yang_name = "LdapProvider-list"; yang_parent_name = "ldapprovider-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::LdapextItems::LdapproviderItems::LdapProviderList::~LdapProviderList()
{
}

bool System::UserextItems::LdapextItems::LdapproviderItems::LdapProviderList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| rootdn.is_set
	|| rootdnpwd.is_set
	|| pwdencrypttype.is_set
	|| port.is_set
	|| enablessl.is_set
	|| sslvalidationlevel.is_set
	|| attribute.is_set
	|| basedn.is_set
	|| filter.is_set
	|| monitoringpasswordtype.is_set
	|| monitoringidletime.is_set
	|| monitoringrootdn.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set
	|| key.is_set
	|| keyset.is_set
	|| keyenc.is_set
	|| timeout.is_set
	|| retries.is_set
	|| operstate.is_set
	|| monitoringuser.is_set
	|| monitoringpassword.is_set
	|| epgdn.is_set
	|| vrfname.is_set
	|| snmpindex.is_set;
}

bool System::UserextItems::LdapextItems::LdapproviderItems::LdapProviderList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(rootdn.yfilter)
	|| ydk::is_set(rootdnpwd.yfilter)
	|| ydk::is_set(pwdencrypttype.yfilter)
	|| ydk::is_set(port.yfilter)
	|| ydk::is_set(enablessl.yfilter)
	|| ydk::is_set(sslvalidationlevel.yfilter)
	|| ydk::is_set(attribute.yfilter)
	|| ydk::is_set(basedn.yfilter)
	|| ydk::is_set(filter.yfilter)
	|| ydk::is_set(monitoringpasswordtype.yfilter)
	|| ydk::is_set(monitoringidletime.yfilter)
	|| ydk::is_set(monitoringrootdn.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(keyset.yfilter)
	|| ydk::is_set(keyenc.yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| ydk::is_set(retries.yfilter)
	|| ydk::is_set(operstate.yfilter)
	|| ydk::is_set(monitoringuser.yfilter)
	|| ydk::is_set(monitoringpassword.yfilter)
	|| ydk::is_set(epgdn.yfilter)
	|| ydk::is_set(vrfname.yfilter)
	|| ydk::is_set(snmpindex.yfilter);
}

std::string System::UserextItems::LdapextItems::LdapproviderItems::LdapProviderList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/userext-items/ldapext-items/ldapprovider-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::LdapextItems::LdapproviderItems::LdapProviderList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LdapProvider-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::LdapextItems::LdapproviderItems::LdapProviderList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (rootdn.is_set || is_set(rootdn.yfilter)) leaf_name_data.push_back(rootdn.get_name_leafdata());
    if (rootdnpwd.is_set || is_set(rootdnpwd.yfilter)) leaf_name_data.push_back(rootdnpwd.get_name_leafdata());
    if (pwdencrypttype.is_set || is_set(pwdencrypttype.yfilter)) leaf_name_data.push_back(pwdencrypttype.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());
    if (enablessl.is_set || is_set(enablessl.yfilter)) leaf_name_data.push_back(enablessl.get_name_leafdata());
    if (sslvalidationlevel.is_set || is_set(sslvalidationlevel.yfilter)) leaf_name_data.push_back(sslvalidationlevel.get_name_leafdata());
    if (attribute.is_set || is_set(attribute.yfilter)) leaf_name_data.push_back(attribute.get_name_leafdata());
    if (basedn.is_set || is_set(basedn.yfilter)) leaf_name_data.push_back(basedn.get_name_leafdata());
    if (filter.is_set || is_set(filter.yfilter)) leaf_name_data.push_back(filter.get_name_leafdata());
    if (monitoringpasswordtype.is_set || is_set(monitoringpasswordtype.yfilter)) leaf_name_data.push_back(monitoringpasswordtype.get_name_leafdata());
    if (monitoringidletime.is_set || is_set(monitoringidletime.yfilter)) leaf_name_data.push_back(monitoringidletime.get_name_leafdata());
    if (monitoringrootdn.is_set || is_set(monitoringrootdn.yfilter)) leaf_name_data.push_back(monitoringrootdn.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (keyset.is_set || is_set(keyset.yfilter)) leaf_name_data.push_back(keyset.get_name_leafdata());
    if (keyenc.is_set || is_set(keyenc.yfilter)) leaf_name_data.push_back(keyenc.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (retries.is_set || is_set(retries.yfilter)) leaf_name_data.push_back(retries.get_name_leafdata());
    if (operstate.is_set || is_set(operstate.yfilter)) leaf_name_data.push_back(operstate.get_name_leafdata());
    if (monitoringuser.is_set || is_set(monitoringuser.yfilter)) leaf_name_data.push_back(monitoringuser.get_name_leafdata());
    if (monitoringpassword.is_set || is_set(monitoringpassword.yfilter)) leaf_name_data.push_back(monitoringpassword.get_name_leafdata());
    if (epgdn.is_set || is_set(epgdn.yfilter)) leaf_name_data.push_back(epgdn.get_name_leafdata());
    if (vrfname.is_set || is_set(vrfname.yfilter)) leaf_name_data.push_back(vrfname.get_name_leafdata());
    if (snmpindex.is_set || is_set(snmpindex.yfilter)) leaf_name_data.push_back(snmpindex.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::UserextItems::LdapextItems::LdapproviderItems::LdapProviderList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::UserextItems::LdapextItems::LdapproviderItems::LdapProviderList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::UserextItems::LdapextItems::LdapproviderItems::LdapProviderList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rootdn")
    {
        rootdn = value;
        rootdn.value_namespace = name_space;
        rootdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rootdnPwd")
    {
        rootdnpwd = value;
        rootdnpwd.value_namespace = name_space;
        rootdnpwd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pwdEncryptType")
    {
        pwdencrypttype = value;
        pwdencrypttype.value_namespace = name_space;
        pwdencrypttype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enableSSL")
    {
        enablessl = value;
        enablessl.value_namespace = name_space;
        enablessl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "SSLValidationLevel")
    {
        sslvalidationlevel = value;
        sslvalidationlevel.value_namespace = name_space;
        sslvalidationlevel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute")
    {
        attribute = value;
        attribute.value_namespace = name_space;
        attribute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "basedn")
    {
        basedn = value;
        basedn.value_namespace = name_space;
        basedn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "filter")
    {
        filter = value;
        filter.value_namespace = name_space;
        filter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "monitoringPasswordType")
    {
        monitoringpasswordtype = value;
        monitoringpasswordtype.value_namespace = name_space;
        monitoringpasswordtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "monitoringIdleTime")
    {
        monitoringidletime = value;
        monitoringidletime.value_namespace = name_space;
        monitoringidletime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "monitoringRootdn")
    {
        monitoringrootdn = value;
        monitoringrootdn.value_namespace = name_space;
        monitoringrootdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerKey")
    {
        ownerkey = value;
        ownerkey.value_namespace = name_space;
        ownerkey.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerTag")
    {
        ownertag = value;
        ownertag.value_namespace = name_space;
        ownertag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keySet")
    {
        keyset = value;
        keyset.value_namespace = name_space;
        keyset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keyEnc")
    {
        keyenc = value;
        keyenc.value_namespace = name_space;
        keyenc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retries")
    {
        retries = value;
        retries.value_namespace = name_space;
        retries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operState")
    {
        operstate = value;
        operstate.value_namespace = name_space;
        operstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "monitoringUser")
    {
        monitoringuser = value;
        monitoringuser.value_namespace = name_space;
        monitoringuser.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "monitoringPassword")
    {
        monitoringpassword = value;
        monitoringpassword.value_namespace = name_space;
        monitoringpassword.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "snmpIndex")
    {
        snmpindex = value;
        snmpindex.value_namespace = name_space;
        snmpindex.value_namespace_prefix = name_space_prefix;
    }
}

void System::UserextItems::LdapextItems::LdapproviderItems::LdapProviderList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "rootdn")
    {
        rootdn.yfilter = yfilter;
    }
    if(value_path == "rootdnPwd")
    {
        rootdnpwd.yfilter = yfilter;
    }
    if(value_path == "pwdEncryptType")
    {
        pwdencrypttype.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
    if(value_path == "enableSSL")
    {
        enablessl.yfilter = yfilter;
    }
    if(value_path == "SSLValidationLevel")
    {
        sslvalidationlevel.yfilter = yfilter;
    }
    if(value_path == "attribute")
    {
        attribute.yfilter = yfilter;
    }
    if(value_path == "basedn")
    {
        basedn.yfilter = yfilter;
    }
    if(value_path == "filter")
    {
        filter.yfilter = yfilter;
    }
    if(value_path == "monitoringPasswordType")
    {
        monitoringpasswordtype.yfilter = yfilter;
    }
    if(value_path == "monitoringIdleTime")
    {
        monitoringidletime.yfilter = yfilter;
    }
    if(value_path == "monitoringRootdn")
    {
        monitoringrootdn.yfilter = yfilter;
    }
    if(value_path == "ownerKey")
    {
        ownerkey.yfilter = yfilter;
    }
    if(value_path == "ownerTag")
    {
        ownertag.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "keySet")
    {
        keyset.yfilter = yfilter;
    }
    if(value_path == "keyEnc")
    {
        keyenc.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
    if(value_path == "retries")
    {
        retries.yfilter = yfilter;
    }
    if(value_path == "operState")
    {
        operstate.yfilter = yfilter;
    }
    if(value_path == "monitoringUser")
    {
        monitoringuser.yfilter = yfilter;
    }
    if(value_path == "monitoringPassword")
    {
        monitoringpassword.yfilter = yfilter;
    }
    if(value_path == "epgDn")
    {
        epgdn.yfilter = yfilter;
    }
    if(value_path == "vrfName")
    {
        vrfname.yfilter = yfilter;
    }
    if(value_path == "snmpIndex")
    {
        snmpindex.yfilter = yfilter;
    }
}

bool System::UserextItems::LdapextItems::LdapproviderItems::LdapProviderList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "rootdn" || name == "rootdnPwd" || name == "pwdEncryptType" || name == "port" || name == "enableSSL" || name == "SSLValidationLevel" || name == "attribute" || name == "basedn" || name == "filter" || name == "monitoringPasswordType" || name == "monitoringIdleTime" || name == "monitoringRootdn" || name == "ownerKey" || name == "ownerTag" || name == "descr" || name == "key" || name == "keySet" || name == "keyEnc" || name == "timeout" || name == "retries" || name == "operState" || name == "monitoringUser" || name == "monitoringPassword" || name == "epgDn" || name == "vrfName" || name == "snmpIndex")
        return true;
    return false;
}

System::UserextItems::LdapextItems::SearchmapItems::SearchmapItems()
    :
    ldapsearchmap_list(this, {"name"})
{

    yang_name = "searchmap-items"; yang_parent_name = "ldapext-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::LdapextItems::SearchmapItems::~SearchmapItems()
{
}

bool System::UserextItems::LdapextItems::SearchmapItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ldapsearchmap_list.len(); index++)
    {
        if(ldapsearchmap_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::UserextItems::LdapextItems::SearchmapItems::has_operation() const
{
    for (std::size_t index=0; index<ldapsearchmap_list.len(); index++)
    {
        if(ldapsearchmap_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::UserextItems::LdapextItems::SearchmapItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/userext-items/ldapext-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::LdapextItems::SearchmapItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "searchmap-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::LdapextItems::SearchmapItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::UserextItems::LdapextItems::SearchmapItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "LdapSearchMap-list")
    {
        auto ent_ = std::make_shared<System::UserextItems::LdapextItems::SearchmapItems::LdapSearchMapList>();
        ent_->parent = this;
        ldapsearchmap_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::UserextItems::LdapextItems::SearchmapItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ldapsearchmap_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::UserextItems::LdapextItems::SearchmapItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::UserextItems::LdapextItems::SearchmapItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::UserextItems::LdapextItems::SearchmapItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LdapSearchMap-list")
        return true;
    return false;
}

System::UserextItems::LdapextItems::SearchmapItems::LdapSearchMapList::LdapSearchMapList()
    :
    name{YType::str, "name"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"}
        ,
    entry_items(std::make_shared<System::UserextItems::LdapextItems::SearchmapItems::LdapSearchMapList::EntryItems>())
{
    entry_items->parent = this;

    yang_name = "LdapSearchMap-list"; yang_parent_name = "searchmap-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::LdapextItems::SearchmapItems::LdapSearchMapList::~LdapSearchMapList()
{
}

bool System::UserextItems::LdapextItems::SearchmapItems::LdapSearchMapList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set
	|| (entry_items !=  nullptr && entry_items->has_data());
}

bool System::UserextItems::LdapextItems::SearchmapItems::LdapSearchMapList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| (entry_items !=  nullptr && entry_items->has_operation());
}

std::string System::UserextItems::LdapextItems::SearchmapItems::LdapSearchMapList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/userext-items/ldapext-items/searchmap-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::LdapextItems::SearchmapItems::LdapSearchMapList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LdapSearchMap-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::LdapextItems::SearchmapItems::LdapSearchMapList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::UserextItems::LdapextItems::SearchmapItems::LdapSearchMapList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "entry-items")
    {
        if(entry_items == nullptr)
        {
            entry_items = std::make_shared<System::UserextItems::LdapextItems::SearchmapItems::LdapSearchMapList::EntryItems>();
        }
        return entry_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::UserextItems::LdapextItems::SearchmapItems::LdapSearchMapList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(entry_items != nullptr)
    {
        _children["entry-items"] = entry_items;
    }

    return _children;
}

void System::UserextItems::LdapextItems::SearchmapItems::LdapSearchMapList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerKey")
    {
        ownerkey = value;
        ownerkey.value_namespace = name_space;
        ownerkey.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerTag")
    {
        ownertag = value;
        ownertag.value_namespace = name_space;
        ownertag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::UserextItems::LdapextItems::SearchmapItems::LdapSearchMapList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ownerKey")
    {
        ownerkey.yfilter = yfilter;
    }
    if(value_path == "ownerTag")
    {
        ownertag.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::UserextItems::LdapextItems::SearchmapItems::LdapSearchMapList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry-items" || name == "name" || name == "ownerKey" || name == "ownerTag" || name == "descr")
        return true;
    return false;
}

System::UserextItems::LdapextItems::SearchmapItems::LdapSearchMapList::EntryItems::EntryItems()
    :
    ldapsearchmapentry_list(this, {"type"})
{

    yang_name = "entry-items"; yang_parent_name = "LdapSearchMap-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::UserextItems::LdapextItems::SearchmapItems::LdapSearchMapList::EntryItems::~EntryItems()
{
}

bool System::UserextItems::LdapextItems::SearchmapItems::LdapSearchMapList::EntryItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ldapsearchmapentry_list.len(); index++)
    {
        if(ldapsearchmapentry_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::UserextItems::LdapextItems::SearchmapItems::LdapSearchMapList::EntryItems::has_operation() const
{
    for (std::size_t index=0; index<ldapsearchmapentry_list.len(); index++)
    {
        if(ldapsearchmapentry_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::UserextItems::LdapextItems::SearchmapItems::LdapSearchMapList::EntryItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "entry-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::LdapextItems::SearchmapItems::LdapSearchMapList::EntryItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::UserextItems::LdapextItems::SearchmapItems::LdapSearchMapList::EntryItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "LdapSearchMapEntry-list")
    {
        auto ent_ = std::make_shared<System::UserextItems::LdapextItems::SearchmapItems::LdapSearchMapList::EntryItems::LdapSearchMapEntryList>();
        ent_->parent = this;
        ldapsearchmapentry_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::UserextItems::LdapextItems::SearchmapItems::LdapSearchMapList::EntryItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ldapsearchmapentry_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::UserextItems::LdapextItems::SearchmapItems::LdapSearchMapList::EntryItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::UserextItems::LdapextItems::SearchmapItems::LdapSearchMapList::EntryItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::UserextItems::LdapextItems::SearchmapItems::LdapSearchMapList::EntryItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LdapSearchMapEntry-list")
        return true;
    return false;
}

System::UserextItems::LdapextItems::SearchmapItems::LdapSearchMapList::EntryItems::LdapSearchMapEntryList::LdapSearchMapEntryList()
    :
    type{YType::enumeration, "type"},
    basedn{YType::str, "baseDn"},
    attribute{YType::str, "attribute"},
    searchfilter{YType::str, "searchFilter"},
    name{YType::str, "name"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"}
{

    yang_name = "LdapSearchMapEntry-list"; yang_parent_name = "entry-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::UserextItems::LdapextItems::SearchmapItems::LdapSearchMapList::EntryItems::LdapSearchMapEntryList::~LdapSearchMapEntryList()
{
}

bool System::UserextItems::LdapextItems::SearchmapItems::LdapSearchMapList::EntryItems::LdapSearchMapEntryList::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| basedn.is_set
	|| attribute.is_set
	|| searchfilter.is_set
	|| name.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set;
}

bool System::UserextItems::LdapextItems::SearchmapItems::LdapSearchMapList::EntryItems::LdapSearchMapEntryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(basedn.yfilter)
	|| ydk::is_set(attribute.yfilter)
	|| ydk::is_set(searchfilter.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::UserextItems::LdapextItems::SearchmapItems::LdapSearchMapList::EntryItems::LdapSearchMapEntryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LdapSearchMapEntry-list";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::LdapextItems::SearchmapItems::LdapSearchMapList::EntryItems::LdapSearchMapEntryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (basedn.is_set || is_set(basedn.yfilter)) leaf_name_data.push_back(basedn.get_name_leafdata());
    if (attribute.is_set || is_set(attribute.yfilter)) leaf_name_data.push_back(attribute.get_name_leafdata());
    if (searchfilter.is_set || is_set(searchfilter.yfilter)) leaf_name_data.push_back(searchfilter.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::UserextItems::LdapextItems::SearchmapItems::LdapSearchMapList::EntryItems::LdapSearchMapEntryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::UserextItems::LdapextItems::SearchmapItems::LdapSearchMapList::EntryItems::LdapSearchMapEntryList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::UserextItems::LdapextItems::SearchmapItems::LdapSearchMapList::EntryItems::LdapSearchMapEntryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "baseDn")
    {
        basedn = value;
        basedn.value_namespace = name_space;
        basedn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute")
    {
        attribute = value;
        attribute.value_namespace = name_space;
        attribute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "searchFilter")
    {
        searchfilter = value;
        searchfilter.value_namespace = name_space;
        searchfilter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerKey")
    {
        ownerkey = value;
        ownerkey.value_namespace = name_space;
        ownerkey.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerTag")
    {
        ownertag = value;
        ownertag.value_namespace = name_space;
        ownertag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::UserextItems::LdapextItems::SearchmapItems::LdapSearchMapList::EntryItems::LdapSearchMapEntryList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "baseDn")
    {
        basedn.yfilter = yfilter;
    }
    if(value_path == "attribute")
    {
        attribute.yfilter = yfilter;
    }
    if(value_path == "searchFilter")
    {
        searchfilter.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ownerKey")
    {
        ownerkey.yfilter = yfilter;
    }
    if(value_path == "ownerTag")
    {
        ownertag.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::UserextItems::LdapextItems::SearchmapItems::LdapSearchMapList::EntryItems::LdapSearchMapEntryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "baseDn" || name == "attribute" || name == "searchFilter" || name == "name" || name == "ownerKey" || name == "ownerTag" || name == "descr")
        return true;
    return false;
}

System::UserextItems::LdapextItems::RtfabricResLdapEpItems::RtfabricResLdapEpItems()
    :
    rtfabricresldapep_list(this, {"tdn"})
{

    yang_name = "rtfabricResLdapEp-items"; yang_parent_name = "ldapext-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::LdapextItems::RtfabricResLdapEpItems::~RtfabricResLdapEpItems()
{
}

bool System::UserextItems::LdapextItems::RtfabricResLdapEpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtfabricresldapep_list.len(); index++)
    {
        if(rtfabricresldapep_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::UserextItems::LdapextItems::RtfabricResLdapEpItems::has_operation() const
{
    for (std::size_t index=0; index<rtfabricresldapep_list.len(); index++)
    {
        if(rtfabricresldapep_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::UserextItems::LdapextItems::RtfabricResLdapEpItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/userext-items/ldapext-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::LdapextItems::RtfabricResLdapEpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtfabricResLdapEp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::LdapextItems::RtfabricResLdapEpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::UserextItems::LdapextItems::RtfabricResLdapEpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtFabricResLdapEp-list")
    {
        auto ent_ = std::make_shared<System::UserextItems::LdapextItems::RtfabricResLdapEpItems::RtFabricResLdapEpList>();
        ent_->parent = this;
        rtfabricresldapep_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::UserextItems::LdapextItems::RtfabricResLdapEpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rtfabricresldapep_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::UserextItems::LdapextItems::RtfabricResLdapEpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::UserextItems::LdapextItems::RtfabricResLdapEpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::UserextItems::LdapextItems::RtfabricResLdapEpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtFabricResLdapEp-list")
        return true;
    return false;
}

System::UserextItems::LdapextItems::RtfabricResLdapEpItems::RtFabricResLdapEpList::RtFabricResLdapEpList()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "RtFabricResLdapEp-list"; yang_parent_name = "rtfabricResLdapEp-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::LdapextItems::RtfabricResLdapEpItems::RtFabricResLdapEpList::~RtFabricResLdapEpList()
{
}

bool System::UserextItems::LdapextItems::RtfabricResLdapEpItems::RtFabricResLdapEpList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::UserextItems::LdapextItems::RtfabricResLdapEpItems::RtFabricResLdapEpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::UserextItems::LdapextItems::RtfabricResLdapEpItems::RtFabricResLdapEpList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/userext-items/ldapext-items/rtfabricResLdapEp-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::LdapextItems::RtfabricResLdapEpItems::RtFabricResLdapEpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtFabricResLdapEp-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::LdapextItems::RtfabricResLdapEpItems::RtFabricResLdapEpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::UserextItems::LdapextItems::RtfabricResLdapEpItems::RtFabricResLdapEpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::UserextItems::LdapextItems::RtfabricResLdapEpItems::RtFabricResLdapEpList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::UserextItems::LdapextItems::RtfabricResLdapEpItems::RtFabricResLdapEpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::UserextItems::LdapextItems::RtfabricResLdapEpItems::RtFabricResLdapEpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::UserextItems::LdapextItems::RtfabricResLdapEpItems::RtFabricResLdapEpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::UserextItems::TacacsextItems::TacacsextItems()
    :
    deadtime{YType::uint32, "deadtime"},
    key{YType::str, "key"},
    keyenc{YType::enumeration, "keyEnc"},
    logginglevel{YType::enumeration, "loggingLevel"},
    name{YType::str, "name"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"},
    timeout{YType::uint32, "timeout"},
    retries{YType::uint32, "retries"},
    srcif{YType::str, "srcIf"}
        ,
    tacacsplusprovider_items(std::make_shared<System::UserextItems::TacacsextItems::TacacsplusproviderItems>())
    , tacacsplusprovidergroup_items(std::make_shared<System::UserextItems::TacacsextItems::TacacsplusprovidergroupItems>())
    , tacacsservermonitor_items(std::make_shared<System::UserextItems::TacacsextItems::TacacsservermonitorItems>())
    , rtfabricrestacacsplusep_items(std::make_shared<System::UserextItems::TacacsextItems::RtfabricResTacacsPlusEpItems>())
{
    tacacsplusprovider_items->parent = this;
    tacacsplusprovidergroup_items->parent = this;
    tacacsservermonitor_items->parent = this;
    rtfabricrestacacsplusep_items->parent = this;

    yang_name = "tacacsext-items"; yang_parent_name = "userext-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::TacacsextItems::~TacacsextItems()
{
}

bool System::UserextItems::TacacsextItems::has_data() const
{
    if (is_presence_container) return true;
    return deadtime.is_set
	|| key.is_set
	|| keyenc.is_set
	|| logginglevel.is_set
	|| name.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set
	|| timeout.is_set
	|| retries.is_set
	|| srcif.is_set
	|| (tacacsplusprovider_items !=  nullptr && tacacsplusprovider_items->has_data())
	|| (tacacsplusprovidergroup_items !=  nullptr && tacacsplusprovidergroup_items->has_data())
	|| (tacacsservermonitor_items !=  nullptr && tacacsservermonitor_items->has_data())
	|| (rtfabricrestacacsplusep_items !=  nullptr && rtfabricrestacacsplusep_items->has_data());
}

bool System::UserextItems::TacacsextItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(deadtime.yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(keyenc.yfilter)
	|| ydk::is_set(logginglevel.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| ydk::is_set(retries.yfilter)
	|| ydk::is_set(srcif.yfilter)
	|| (tacacsplusprovider_items !=  nullptr && tacacsplusprovider_items->has_operation())
	|| (tacacsplusprovidergroup_items !=  nullptr && tacacsplusprovidergroup_items->has_operation())
	|| (tacacsservermonitor_items !=  nullptr && tacacsservermonitor_items->has_operation())
	|| (rtfabricrestacacsplusep_items !=  nullptr && rtfabricrestacacsplusep_items->has_operation());
}

std::string System::UserextItems::TacacsextItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/userext-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::TacacsextItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tacacsext-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::TacacsextItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (deadtime.is_set || is_set(deadtime.yfilter)) leaf_name_data.push_back(deadtime.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (keyenc.is_set || is_set(keyenc.yfilter)) leaf_name_data.push_back(keyenc.get_name_leafdata());
    if (logginglevel.is_set || is_set(logginglevel.yfilter)) leaf_name_data.push_back(logginglevel.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (retries.is_set || is_set(retries.yfilter)) leaf_name_data.push_back(retries.get_name_leafdata());
    if (srcif.is_set || is_set(srcif.yfilter)) leaf_name_data.push_back(srcif.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::UserextItems::TacacsextItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tacacsplusprovider-items")
    {
        if(tacacsplusprovider_items == nullptr)
        {
            tacacsplusprovider_items = std::make_shared<System::UserextItems::TacacsextItems::TacacsplusproviderItems>();
        }
        return tacacsplusprovider_items;
    }

    if(child_yang_name == "tacacsplusprovidergroup-items")
    {
        if(tacacsplusprovidergroup_items == nullptr)
        {
            tacacsplusprovidergroup_items = std::make_shared<System::UserextItems::TacacsextItems::TacacsplusprovidergroupItems>();
        }
        return tacacsplusprovidergroup_items;
    }

    if(child_yang_name == "tacacsservermonitor-items")
    {
        if(tacacsservermonitor_items == nullptr)
        {
            tacacsservermonitor_items = std::make_shared<System::UserextItems::TacacsextItems::TacacsservermonitorItems>();
        }
        return tacacsservermonitor_items;
    }

    if(child_yang_name == "rtfabricResTacacsPlusEp-items")
    {
        if(rtfabricrestacacsplusep_items == nullptr)
        {
            rtfabricrestacacsplusep_items = std::make_shared<System::UserextItems::TacacsextItems::RtfabricResTacacsPlusEpItems>();
        }
        return rtfabricrestacacsplusep_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::UserextItems::TacacsextItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(tacacsplusprovider_items != nullptr)
    {
        _children["tacacsplusprovider-items"] = tacacsplusprovider_items;
    }

    if(tacacsplusprovidergroup_items != nullptr)
    {
        _children["tacacsplusprovidergroup-items"] = tacacsplusprovidergroup_items;
    }

    if(tacacsservermonitor_items != nullptr)
    {
        _children["tacacsservermonitor-items"] = tacacsservermonitor_items;
    }

    if(rtfabricrestacacsplusep_items != nullptr)
    {
        _children["rtfabricResTacacsPlusEp-items"] = rtfabricrestacacsplusep_items;
    }

    return _children;
}

void System::UserextItems::TacacsextItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "deadtime")
    {
        deadtime = value;
        deadtime.value_namespace = name_space;
        deadtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keyEnc")
    {
        keyenc = value;
        keyenc.value_namespace = name_space;
        keyenc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loggingLevel")
    {
        logginglevel = value;
        logginglevel.value_namespace = name_space;
        logginglevel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerKey")
    {
        ownerkey = value;
        ownerkey.value_namespace = name_space;
        ownerkey.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerTag")
    {
        ownertag = value;
        ownertag.value_namespace = name_space;
        ownertag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retries")
    {
        retries = value;
        retries.value_namespace = name_space;
        retries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcIf")
    {
        srcif = value;
        srcif.value_namespace = name_space;
        srcif.value_namespace_prefix = name_space_prefix;
    }
}

void System::UserextItems::TacacsextItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "deadtime")
    {
        deadtime.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "keyEnc")
    {
        keyenc.yfilter = yfilter;
    }
    if(value_path == "loggingLevel")
    {
        logginglevel.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ownerKey")
    {
        ownerkey.yfilter = yfilter;
    }
    if(value_path == "ownerTag")
    {
        ownertag.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
    if(value_path == "retries")
    {
        retries.yfilter = yfilter;
    }
    if(value_path == "srcIf")
    {
        srcif.yfilter = yfilter;
    }
}

bool System::UserextItems::TacacsextItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tacacsplusprovider-items" || name == "tacacsplusprovidergroup-items" || name == "tacacsservermonitor-items" || name == "rtfabricResTacacsPlusEp-items" || name == "deadtime" || name == "key" || name == "keyEnc" || name == "loggingLevel" || name == "name" || name == "ownerKey" || name == "ownerTag" || name == "descr" || name == "timeout" || name == "retries" || name == "srcIf")
        return true;
    return false;
}

System::UserextItems::TacacsextItems::TacacsplusproviderItems::TacacsplusproviderItems()
    :
    tacacsplusprovider_list(this, {"name"})
{

    yang_name = "tacacsplusprovider-items"; yang_parent_name = "tacacsext-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::TacacsextItems::TacacsplusproviderItems::~TacacsplusproviderItems()
{
}

bool System::UserextItems::TacacsextItems::TacacsplusproviderItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tacacsplusprovider_list.len(); index++)
    {
        if(tacacsplusprovider_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::UserextItems::TacacsextItems::TacacsplusproviderItems::has_operation() const
{
    for (std::size_t index=0; index<tacacsplusprovider_list.len(); index++)
    {
        if(tacacsplusprovider_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::UserextItems::TacacsextItems::TacacsplusproviderItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/userext-items/tacacsext-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::TacacsextItems::TacacsplusproviderItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tacacsplusprovider-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::TacacsextItems::TacacsplusproviderItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::UserextItems::TacacsextItems::TacacsplusproviderItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "TacacsPlusProvider-list")
    {
        auto ent_ = std::make_shared<System::UserextItems::TacacsextItems::TacacsplusproviderItems::TacacsPlusProviderList>();
        ent_->parent = this;
        tacacsplusprovider_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::UserextItems::TacacsextItems::TacacsplusproviderItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : tacacsplusprovider_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::UserextItems::TacacsextItems::TacacsplusproviderItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::UserextItems::TacacsextItems::TacacsplusproviderItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::UserextItems::TacacsextItems::TacacsplusproviderItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "TacacsPlusProvider-list")
        return true;
    return false;
}

System::UserextItems::TacacsextItems::TacacsplusproviderItems::TacacsPlusProviderList::TacacsPlusProviderList()
    :
    name{YType::str, "name"},
    port{YType::uint32, "port"},
    authprotocol{YType::enumeration, "authProtocol"},
    singleconnection{YType::enumeration, "singleConnection"},
    monitoringidletime{YType::uint16, "monitoringIdleTime"},
    monitoringpasswordtype{YType::enumeration, "monitoringPasswordType"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"},
    key{YType::str, "key"},
    keyenc{YType::enumeration, "keyEnc"},
    timeout{YType::uint32, "timeout"},
    retries{YType::uint32, "retries"},
    monitoringuser{YType::str, "monitoringUser"},
    monitoringpassword{YType::str, "monitoringPassword"},
    epgdn{YType::str, "epgDn"},
    snmpindex{YType::uint32, "snmpIndex"}
{

    yang_name = "TacacsPlusProvider-list"; yang_parent_name = "tacacsplusprovider-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::TacacsextItems::TacacsplusproviderItems::TacacsPlusProviderList::~TacacsPlusProviderList()
{
}

bool System::UserextItems::TacacsextItems::TacacsplusproviderItems::TacacsPlusProviderList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| port.is_set
	|| authprotocol.is_set
	|| singleconnection.is_set
	|| monitoringidletime.is_set
	|| monitoringpasswordtype.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set
	|| key.is_set
	|| keyenc.is_set
	|| timeout.is_set
	|| retries.is_set
	|| monitoringuser.is_set
	|| monitoringpassword.is_set
	|| epgdn.is_set
	|| snmpindex.is_set;
}

bool System::UserextItems::TacacsextItems::TacacsplusproviderItems::TacacsPlusProviderList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(port.yfilter)
	|| ydk::is_set(authprotocol.yfilter)
	|| ydk::is_set(singleconnection.yfilter)
	|| ydk::is_set(monitoringidletime.yfilter)
	|| ydk::is_set(monitoringpasswordtype.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(keyenc.yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| ydk::is_set(retries.yfilter)
	|| ydk::is_set(monitoringuser.yfilter)
	|| ydk::is_set(monitoringpassword.yfilter)
	|| ydk::is_set(epgdn.yfilter)
	|| ydk::is_set(snmpindex.yfilter);
}

std::string System::UserextItems::TacacsextItems::TacacsplusproviderItems::TacacsPlusProviderList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/userext-items/tacacsext-items/tacacsplusprovider-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::TacacsextItems::TacacsplusproviderItems::TacacsPlusProviderList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "TacacsPlusProvider-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::TacacsextItems::TacacsplusproviderItems::TacacsPlusProviderList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());
    if (authprotocol.is_set || is_set(authprotocol.yfilter)) leaf_name_data.push_back(authprotocol.get_name_leafdata());
    if (singleconnection.is_set || is_set(singleconnection.yfilter)) leaf_name_data.push_back(singleconnection.get_name_leafdata());
    if (monitoringidletime.is_set || is_set(monitoringidletime.yfilter)) leaf_name_data.push_back(monitoringidletime.get_name_leafdata());
    if (monitoringpasswordtype.is_set || is_set(monitoringpasswordtype.yfilter)) leaf_name_data.push_back(monitoringpasswordtype.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (keyenc.is_set || is_set(keyenc.yfilter)) leaf_name_data.push_back(keyenc.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (retries.is_set || is_set(retries.yfilter)) leaf_name_data.push_back(retries.get_name_leafdata());
    if (monitoringuser.is_set || is_set(monitoringuser.yfilter)) leaf_name_data.push_back(monitoringuser.get_name_leafdata());
    if (monitoringpassword.is_set || is_set(monitoringpassword.yfilter)) leaf_name_data.push_back(monitoringpassword.get_name_leafdata());
    if (epgdn.is_set || is_set(epgdn.yfilter)) leaf_name_data.push_back(epgdn.get_name_leafdata());
    if (snmpindex.is_set || is_set(snmpindex.yfilter)) leaf_name_data.push_back(snmpindex.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::UserextItems::TacacsextItems::TacacsplusproviderItems::TacacsPlusProviderList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::UserextItems::TacacsextItems::TacacsplusproviderItems::TacacsPlusProviderList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::UserextItems::TacacsextItems::TacacsplusproviderItems::TacacsPlusProviderList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authProtocol")
    {
        authprotocol = value;
        authprotocol.value_namespace = name_space;
        authprotocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "singleConnection")
    {
        singleconnection = value;
        singleconnection.value_namespace = name_space;
        singleconnection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "monitoringIdleTime")
    {
        monitoringidletime = value;
        monitoringidletime.value_namespace = name_space;
        monitoringidletime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "monitoringPasswordType")
    {
        monitoringpasswordtype = value;
        monitoringpasswordtype.value_namespace = name_space;
        monitoringpasswordtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerKey")
    {
        ownerkey = value;
        ownerkey.value_namespace = name_space;
        ownerkey.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerTag")
    {
        ownertag = value;
        ownertag.value_namespace = name_space;
        ownertag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keyEnc")
    {
        keyenc = value;
        keyenc.value_namespace = name_space;
        keyenc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retries")
    {
        retries = value;
        retries.value_namespace = name_space;
        retries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "monitoringUser")
    {
        monitoringuser = value;
        monitoringuser.value_namespace = name_space;
        monitoringuser.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "monitoringPassword")
    {
        monitoringpassword = value;
        monitoringpassword.value_namespace = name_space;
        monitoringpassword.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "epgDn")
    {
        epgdn = value;
        epgdn.value_namespace = name_space;
        epgdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmpIndex")
    {
        snmpindex = value;
        snmpindex.value_namespace = name_space;
        snmpindex.value_namespace_prefix = name_space_prefix;
    }
}

void System::UserextItems::TacacsextItems::TacacsplusproviderItems::TacacsPlusProviderList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
    if(value_path == "authProtocol")
    {
        authprotocol.yfilter = yfilter;
    }
    if(value_path == "singleConnection")
    {
        singleconnection.yfilter = yfilter;
    }
    if(value_path == "monitoringIdleTime")
    {
        monitoringidletime.yfilter = yfilter;
    }
    if(value_path == "monitoringPasswordType")
    {
        monitoringpasswordtype.yfilter = yfilter;
    }
    if(value_path == "ownerKey")
    {
        ownerkey.yfilter = yfilter;
    }
    if(value_path == "ownerTag")
    {
        ownertag.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "keyEnc")
    {
        keyenc.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
    if(value_path == "retries")
    {
        retries.yfilter = yfilter;
    }
    if(value_path == "monitoringUser")
    {
        monitoringuser.yfilter = yfilter;
    }
    if(value_path == "monitoringPassword")
    {
        monitoringpassword.yfilter = yfilter;
    }
    if(value_path == "epgDn")
    {
        epgdn.yfilter = yfilter;
    }
    if(value_path == "snmpIndex")
    {
        snmpindex.yfilter = yfilter;
    }
}

bool System::UserextItems::TacacsextItems::TacacsplusproviderItems::TacacsPlusProviderList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "port" || name == "authProtocol" || name == "singleConnection" || name == "monitoringIdleTime" || name == "monitoringPasswordType" || name == "ownerKey" || name == "ownerTag" || name == "descr" || name == "key" || name == "keyEnc" || name == "timeout" || name == "retries" || name == "monitoringUser" || name == "monitoringPassword" || name == "epgDn" || name == "snmpIndex")
        return true;
    return false;
}

System::UserextItems::TacacsextItems::TacacsplusprovidergroupItems::TacacsplusprovidergroupItems()
    :
    tacacsplusprovidergroup_list(this, {"name"})
{

    yang_name = "tacacsplusprovidergroup-items"; yang_parent_name = "tacacsext-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::TacacsextItems::TacacsplusprovidergroupItems::~TacacsplusprovidergroupItems()
{
}

bool System::UserextItems::TacacsextItems::TacacsplusprovidergroupItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tacacsplusprovidergroup_list.len(); index++)
    {
        if(tacacsplusprovidergroup_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::UserextItems::TacacsextItems::TacacsplusprovidergroupItems::has_operation() const
{
    for (std::size_t index=0; index<tacacsplusprovidergroup_list.len(); index++)
    {
        if(tacacsplusprovidergroup_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::UserextItems::TacacsextItems::TacacsplusprovidergroupItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/userext-items/tacacsext-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::TacacsextItems::TacacsplusprovidergroupItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tacacsplusprovidergroup-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::TacacsextItems::TacacsplusprovidergroupItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::UserextItems::TacacsextItems::TacacsplusprovidergroupItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "TacacsPlusProviderGroup-list")
    {
        auto ent_ = std::make_shared<System::UserextItems::TacacsextItems::TacacsplusprovidergroupItems::TacacsPlusProviderGroupList>();
        ent_->parent = this;
        tacacsplusprovidergroup_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::UserextItems::TacacsextItems::TacacsplusprovidergroupItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : tacacsplusprovidergroup_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::UserextItems::TacacsextItems::TacacsplusprovidergroupItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::UserextItems::TacacsextItems::TacacsplusprovidergroupItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::UserextItems::TacacsextItems::TacacsplusprovidergroupItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "TacacsPlusProviderGroup-list")
        return true;
    return false;
}

System::UserextItems::TacacsextItems::TacacsplusprovidergroupItems::TacacsPlusProviderGroupList::TacacsPlusProviderGroupList()
    :
    name{YType::str, "name"},
    deadtime{YType::uint32, "deadtime"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"},
    snmpindex{YType::uint32, "snmpIndex"},
    srcif{YType::str, "srcIf"},
    vrf{YType::str, "vrf"}
        ,
    providerref_items(std::make_shared<System::UserextItems::TacacsextItems::TacacsplusprovidergroupItems::TacacsPlusProviderGroupList::ProviderrefItems>())
{
    providerref_items->parent = this;

    yang_name = "TacacsPlusProviderGroup-list"; yang_parent_name = "tacacsplusprovidergroup-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::TacacsextItems::TacacsplusprovidergroupItems::TacacsPlusProviderGroupList::~TacacsPlusProviderGroupList()
{
}

bool System::UserextItems::TacacsextItems::TacacsplusprovidergroupItems::TacacsPlusProviderGroupList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| deadtime.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set
	|| snmpindex.is_set
	|| srcif.is_set
	|| vrf.is_set
	|| (providerref_items !=  nullptr && providerref_items->has_data());
}

bool System::UserextItems::TacacsextItems::TacacsplusprovidergroupItems::TacacsPlusProviderGroupList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(deadtime.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(snmpindex.yfilter)
	|| ydk::is_set(srcif.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| (providerref_items !=  nullptr && providerref_items->has_operation());
}

std::string System::UserextItems::TacacsextItems::TacacsplusprovidergroupItems::TacacsPlusProviderGroupList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/userext-items/tacacsext-items/tacacsplusprovidergroup-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::TacacsextItems::TacacsplusprovidergroupItems::TacacsPlusProviderGroupList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "TacacsPlusProviderGroup-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::TacacsextItems::TacacsplusprovidergroupItems::TacacsPlusProviderGroupList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (deadtime.is_set || is_set(deadtime.yfilter)) leaf_name_data.push_back(deadtime.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (snmpindex.is_set || is_set(snmpindex.yfilter)) leaf_name_data.push_back(snmpindex.get_name_leafdata());
    if (srcif.is_set || is_set(srcif.yfilter)) leaf_name_data.push_back(srcif.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::UserextItems::TacacsextItems::TacacsplusprovidergroupItems::TacacsPlusProviderGroupList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "providerref-items")
    {
        if(providerref_items == nullptr)
        {
            providerref_items = std::make_shared<System::UserextItems::TacacsextItems::TacacsplusprovidergroupItems::TacacsPlusProviderGroupList::ProviderrefItems>();
        }
        return providerref_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::UserextItems::TacacsextItems::TacacsplusprovidergroupItems::TacacsPlusProviderGroupList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(providerref_items != nullptr)
    {
        _children["providerref-items"] = providerref_items;
    }

    return _children;
}

void System::UserextItems::TacacsextItems::TacacsplusprovidergroupItems::TacacsPlusProviderGroupList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "deadtime")
    {
        deadtime = value;
        deadtime.value_namespace = name_space;
        deadtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerKey")
    {
        ownerkey = value;
        ownerkey.value_namespace = name_space;
        ownerkey.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerTag")
    {
        ownertag = value;
        ownertag.value_namespace = name_space;
        ownertag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmpIndex")
    {
        snmpindex = value;
        snmpindex.value_namespace = name_space;
        snmpindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcIf")
    {
        srcif = value;
        srcif.value_namespace = name_space;
        srcif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void System::UserextItems::TacacsextItems::TacacsplusprovidergroupItems::TacacsPlusProviderGroupList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "deadtime")
    {
        deadtime.yfilter = yfilter;
    }
    if(value_path == "ownerKey")
    {
        ownerkey.yfilter = yfilter;
    }
    if(value_path == "ownerTag")
    {
        ownertag.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "snmpIndex")
    {
        snmpindex.yfilter = yfilter;
    }
    if(value_path == "srcIf")
    {
        srcif.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool System::UserextItems::TacacsextItems::TacacsplusprovidergroupItems::TacacsPlusProviderGroupList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "providerref-items" || name == "name" || name == "deadtime" || name == "ownerKey" || name == "ownerTag" || name == "descr" || name == "snmpIndex" || name == "srcIf" || name == "vrf")
        return true;
    return false;
}

System::UserextItems::TacacsextItems::TacacsplusprovidergroupItems::TacacsPlusProviderGroupList::ProviderrefItems::ProviderrefItems()
    :
    providerref_list(this, {"name"})
{

    yang_name = "providerref-items"; yang_parent_name = "TacacsPlusProviderGroup-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::UserextItems::TacacsextItems::TacacsplusprovidergroupItems::TacacsPlusProviderGroupList::ProviderrefItems::~ProviderrefItems()
{
}

bool System::UserextItems::TacacsextItems::TacacsplusprovidergroupItems::TacacsPlusProviderGroupList::ProviderrefItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<providerref_list.len(); index++)
    {
        if(providerref_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::UserextItems::TacacsextItems::TacacsplusprovidergroupItems::TacacsPlusProviderGroupList::ProviderrefItems::has_operation() const
{
    for (std::size_t index=0; index<providerref_list.len(); index++)
    {
        if(providerref_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::UserextItems::TacacsextItems::TacacsplusprovidergroupItems::TacacsPlusProviderGroupList::ProviderrefItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "providerref-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::TacacsextItems::TacacsplusprovidergroupItems::TacacsPlusProviderGroupList::ProviderrefItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::UserextItems::TacacsextItems::TacacsplusprovidergroupItems::TacacsPlusProviderGroupList::ProviderrefItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ProviderRef-list")
    {
        auto ent_ = std::make_shared<System::UserextItems::TacacsextItems::TacacsplusprovidergroupItems::TacacsPlusProviderGroupList::ProviderrefItems::ProviderRefList>();
        ent_->parent = this;
        providerref_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::UserextItems::TacacsextItems::TacacsplusprovidergroupItems::TacacsPlusProviderGroupList::ProviderrefItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : providerref_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::UserextItems::TacacsextItems::TacacsplusprovidergroupItems::TacacsPlusProviderGroupList::ProviderrefItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::UserextItems::TacacsextItems::TacacsplusprovidergroupItems::TacacsPlusProviderGroupList::ProviderrefItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::UserextItems::TacacsextItems::TacacsplusprovidergroupItems::TacacsPlusProviderGroupList::ProviderrefItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ProviderRef-list")
        return true;
    return false;
}

System::UserextItems::TacacsextItems::TacacsplusprovidergroupItems::TacacsPlusProviderGroupList::ProviderrefItems::ProviderRefList::ProviderRefList()
    :
    name{YType::str, "name"},
    order{YType::uint16, "order"},
    snmpindex{YType::uint32, "snmpIndex"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"}
{

    yang_name = "ProviderRef-list"; yang_parent_name = "providerref-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::UserextItems::TacacsextItems::TacacsplusprovidergroupItems::TacacsPlusProviderGroupList::ProviderrefItems::ProviderRefList::~ProviderRefList()
{
}

bool System::UserextItems::TacacsextItems::TacacsplusprovidergroupItems::TacacsPlusProviderGroupList::ProviderrefItems::ProviderRefList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| order.is_set
	|| snmpindex.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set;
}

bool System::UserextItems::TacacsextItems::TacacsplusprovidergroupItems::TacacsPlusProviderGroupList::ProviderrefItems::ProviderRefList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(order.yfilter)
	|| ydk::is_set(snmpindex.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::UserextItems::TacacsextItems::TacacsplusprovidergroupItems::TacacsPlusProviderGroupList::ProviderrefItems::ProviderRefList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ProviderRef-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::TacacsextItems::TacacsplusprovidergroupItems::TacacsPlusProviderGroupList::ProviderrefItems::ProviderRefList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (order.is_set || is_set(order.yfilter)) leaf_name_data.push_back(order.get_name_leafdata());
    if (snmpindex.is_set || is_set(snmpindex.yfilter)) leaf_name_data.push_back(snmpindex.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::UserextItems::TacacsextItems::TacacsplusprovidergroupItems::TacacsPlusProviderGroupList::ProviderrefItems::ProviderRefList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::UserextItems::TacacsextItems::TacacsplusprovidergroupItems::TacacsPlusProviderGroupList::ProviderrefItems::ProviderRefList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::UserextItems::TacacsextItems::TacacsplusprovidergroupItems::TacacsPlusProviderGroupList::ProviderrefItems::ProviderRefList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "order")
    {
        order = value;
        order.value_namespace = name_space;
        order.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmpIndex")
    {
        snmpindex = value;
        snmpindex.value_namespace = name_space;
        snmpindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerKey")
    {
        ownerkey = value;
        ownerkey.value_namespace = name_space;
        ownerkey.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerTag")
    {
        ownertag = value;
        ownertag.value_namespace = name_space;
        ownertag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::UserextItems::TacacsextItems::TacacsplusprovidergroupItems::TacacsPlusProviderGroupList::ProviderrefItems::ProviderRefList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "order")
    {
        order.yfilter = yfilter;
    }
    if(value_path == "snmpIndex")
    {
        snmpindex.yfilter = yfilter;
    }
    if(value_path == "ownerKey")
    {
        ownerkey.yfilter = yfilter;
    }
    if(value_path == "ownerTag")
    {
        ownertag.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::UserextItems::TacacsextItems::TacacsplusprovidergroupItems::TacacsPlusProviderGroupList::ProviderrefItems::ProviderRefList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "order" || name == "snmpIndex" || name == "ownerKey" || name == "ownerTag" || name == "descr")
        return true;
    return false;
}

System::UserextItems::TacacsextItems::TacacsservermonitorItems::TacacsservermonitorItems()
    :
    pwd{YType::str, "pwd"},
    passwordtype{YType::enumeration, "passwordType"},
    idletime{YType::uint16, "idleTime"},
    name{YType::str, "name"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"}
{

    yang_name = "tacacsservermonitor-items"; yang_parent_name = "tacacsext-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::TacacsextItems::TacacsservermonitorItems::~TacacsservermonitorItems()
{
}

bool System::UserextItems::TacacsextItems::TacacsservermonitorItems::has_data() const
{
    if (is_presence_container) return true;
    return pwd.is_set
	|| passwordtype.is_set
	|| idletime.is_set
	|| name.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set;
}

bool System::UserextItems::TacacsextItems::TacacsservermonitorItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pwd.yfilter)
	|| ydk::is_set(passwordtype.yfilter)
	|| ydk::is_set(idletime.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::UserextItems::TacacsextItems::TacacsservermonitorItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/userext-items/tacacsext-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::TacacsextItems::TacacsservermonitorItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tacacsservermonitor-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::TacacsextItems::TacacsservermonitorItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pwd.is_set || is_set(pwd.yfilter)) leaf_name_data.push_back(pwd.get_name_leafdata());
    if (passwordtype.is_set || is_set(passwordtype.yfilter)) leaf_name_data.push_back(passwordtype.get_name_leafdata());
    if (idletime.is_set || is_set(idletime.yfilter)) leaf_name_data.push_back(idletime.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::UserextItems::TacacsextItems::TacacsservermonitorItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::UserextItems::TacacsextItems::TacacsservermonitorItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::UserextItems::TacacsextItems::TacacsservermonitorItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pwd")
    {
        pwd = value;
        pwd.value_namespace = name_space;
        pwd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "passwordType")
    {
        passwordtype = value;
        passwordtype.value_namespace = name_space;
        passwordtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idleTime")
    {
        idletime = value;
        idletime.value_namespace = name_space;
        idletime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerKey")
    {
        ownerkey = value;
        ownerkey.value_namespace = name_space;
        ownerkey.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerTag")
    {
        ownertag = value;
        ownertag.value_namespace = name_space;
        ownertag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::UserextItems::TacacsextItems::TacacsservermonitorItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pwd")
    {
        pwd.yfilter = yfilter;
    }
    if(value_path == "passwordType")
    {
        passwordtype.yfilter = yfilter;
    }
    if(value_path == "idleTime")
    {
        idletime.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ownerKey")
    {
        ownerkey.yfilter = yfilter;
    }
    if(value_path == "ownerTag")
    {
        ownertag.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::UserextItems::TacacsextItems::TacacsservermonitorItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pwd" || name == "passwordType" || name == "idleTime" || name == "name" || name == "ownerKey" || name == "ownerTag" || name == "descr")
        return true;
    return false;
}

System::UserextItems::TacacsextItems::RtfabricResTacacsPlusEpItems::RtfabricResTacacsPlusEpItems()
    :
    rtfabricrestacacsplusep_list(this, {"tdn"})
{

    yang_name = "rtfabricResTacacsPlusEp-items"; yang_parent_name = "tacacsext-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::TacacsextItems::RtfabricResTacacsPlusEpItems::~RtfabricResTacacsPlusEpItems()
{
}

bool System::UserextItems::TacacsextItems::RtfabricResTacacsPlusEpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtfabricrestacacsplusep_list.len(); index++)
    {
        if(rtfabricrestacacsplusep_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::UserextItems::TacacsextItems::RtfabricResTacacsPlusEpItems::has_operation() const
{
    for (std::size_t index=0; index<rtfabricrestacacsplusep_list.len(); index++)
    {
        if(rtfabricrestacacsplusep_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::UserextItems::TacacsextItems::RtfabricResTacacsPlusEpItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/userext-items/tacacsext-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::TacacsextItems::RtfabricResTacacsPlusEpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtfabricResTacacsPlusEp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::TacacsextItems::RtfabricResTacacsPlusEpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::UserextItems::TacacsextItems::RtfabricResTacacsPlusEpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtFabricResTacacsPlusEp-list")
    {
        auto ent_ = std::make_shared<System::UserextItems::TacacsextItems::RtfabricResTacacsPlusEpItems::RtFabricResTacacsPlusEpList>();
        ent_->parent = this;
        rtfabricrestacacsplusep_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::UserextItems::TacacsextItems::RtfabricResTacacsPlusEpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rtfabricrestacacsplusep_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::UserextItems::TacacsextItems::RtfabricResTacacsPlusEpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::UserextItems::TacacsextItems::RtfabricResTacacsPlusEpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::UserextItems::TacacsextItems::RtfabricResTacacsPlusEpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtFabricResTacacsPlusEp-list")
        return true;
    return false;
}

System::UserextItems::TacacsextItems::RtfabricResTacacsPlusEpItems::RtFabricResTacacsPlusEpList::RtFabricResTacacsPlusEpList()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "RtFabricResTacacsPlusEp-list"; yang_parent_name = "rtfabricResTacacsPlusEp-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::TacacsextItems::RtfabricResTacacsPlusEpItems::RtFabricResTacacsPlusEpList::~RtFabricResTacacsPlusEpList()
{
}

bool System::UserextItems::TacacsextItems::RtfabricResTacacsPlusEpItems::RtFabricResTacacsPlusEpList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::UserextItems::TacacsextItems::RtfabricResTacacsPlusEpItems::RtFabricResTacacsPlusEpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::UserextItems::TacacsextItems::RtfabricResTacacsPlusEpItems::RtFabricResTacacsPlusEpList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/userext-items/tacacsext-items/rtfabricResTacacsPlusEp-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::TacacsextItems::RtfabricResTacacsPlusEpItems::RtFabricResTacacsPlusEpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtFabricResTacacsPlusEp-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::TacacsextItems::RtfabricResTacacsPlusEpItems::RtFabricResTacacsPlusEpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::UserextItems::TacacsextItems::RtfabricResTacacsPlusEpItems::RtFabricResTacacsPlusEpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::UserextItems::TacacsextItems::RtfabricResTacacsPlusEpItems::RtFabricResTacacsPlusEpList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::UserextItems::TacacsextItems::RtfabricResTacacsPlusEpItems::RtFabricResTacacsPlusEpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::UserextItems::TacacsextItems::RtfabricResTacacsPlusEpItems::RtFabricResTacacsPlusEpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::UserextItems::TacacsextItems::RtfabricResTacacsPlusEpItems::RtFabricResTacacsPlusEpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::UserextItems::AuthrealmItems::AuthrealmItems()
    :
    defrolepolicy{YType::enumeration, "defRolePolicy"},
    raddirectedreq{YType::enumeration, "radDirectedReq"},
    tacdirectedreq{YType::enumeration, "tacDirectedReq"},
    logginglevel{YType::enumeration, "loggingLevel"},
    name{YType::str, "name"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"}
        ,
    aaagroup_items(std::make_shared<System::UserextItems::AuthrealmItems::AaagroupItems>())
    , defaultauth_items(std::make_shared<System::UserextItems::AuthrealmItems::DefaultauthItems>())
    , defaultauthor_items(std::make_shared<System::UserextItems::AuthrealmItems::DefaultauthorItems>())
    , consoleauthor_items(std::make_shared<System::UserextItems::AuthrealmItems::ConsoleauthorItems>())
    , defaultacc_items(std::make_shared<System::UserextItems::AuthrealmItems::DefaultaccItems>())
    , pkisshcert_items(std::make_shared<System::UserextItems::AuthrealmItems::PkisshcertItems>())
    , pkisshpubkey_items(std::make_shared<System::UserextItems::AuthrealmItems::PkisshpubkeyItems>())
    , consoleauth_items(std::make_shared<System::UserextItems::AuthrealmItems::ConsoleauthItems>())
    , rtfabricresauthrealm_items(std::make_shared<System::UserextItems::AuthrealmItems::RtfabricResAuthRealmItems>())
{
    aaagroup_items->parent = this;
    defaultauth_items->parent = this;
    defaultauthor_items->parent = this;
    consoleauthor_items->parent = this;
    defaultacc_items->parent = this;
    pkisshcert_items->parent = this;
    pkisshpubkey_items->parent = this;
    consoleauth_items->parent = this;
    rtfabricresauthrealm_items->parent = this;

    yang_name = "authrealm-items"; yang_parent_name = "userext-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::AuthrealmItems::~AuthrealmItems()
{
}

bool System::UserextItems::AuthrealmItems::has_data() const
{
    if (is_presence_container) return true;
    return defrolepolicy.is_set
	|| raddirectedreq.is_set
	|| tacdirectedreq.is_set
	|| logginglevel.is_set
	|| name.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set
	|| (aaagroup_items !=  nullptr && aaagroup_items->has_data())
	|| (defaultauth_items !=  nullptr && defaultauth_items->has_data())
	|| (defaultauthor_items !=  nullptr && defaultauthor_items->has_data())
	|| (consoleauthor_items !=  nullptr && consoleauthor_items->has_data())
	|| (defaultacc_items !=  nullptr && defaultacc_items->has_data())
	|| (pkisshcert_items !=  nullptr && pkisshcert_items->has_data())
	|| (pkisshpubkey_items !=  nullptr && pkisshpubkey_items->has_data())
	|| (consoleauth_items !=  nullptr && consoleauth_items->has_data())
	|| (rtfabricresauthrealm_items !=  nullptr && rtfabricresauthrealm_items->has_data());
}

bool System::UserextItems::AuthrealmItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(defrolepolicy.yfilter)
	|| ydk::is_set(raddirectedreq.yfilter)
	|| ydk::is_set(tacdirectedreq.yfilter)
	|| ydk::is_set(logginglevel.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| (aaagroup_items !=  nullptr && aaagroup_items->has_operation())
	|| (defaultauth_items !=  nullptr && defaultauth_items->has_operation())
	|| (defaultauthor_items !=  nullptr && defaultauthor_items->has_operation())
	|| (consoleauthor_items !=  nullptr && consoleauthor_items->has_operation())
	|| (defaultacc_items !=  nullptr && defaultacc_items->has_operation())
	|| (pkisshcert_items !=  nullptr && pkisshcert_items->has_operation())
	|| (pkisshpubkey_items !=  nullptr && pkisshpubkey_items->has_operation())
	|| (consoleauth_items !=  nullptr && consoleauth_items->has_operation())
	|| (rtfabricresauthrealm_items !=  nullptr && rtfabricresauthrealm_items->has_operation());
}

std::string System::UserextItems::AuthrealmItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/userext-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::AuthrealmItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authrealm-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::AuthrealmItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (defrolepolicy.is_set || is_set(defrolepolicy.yfilter)) leaf_name_data.push_back(defrolepolicy.get_name_leafdata());
    if (raddirectedreq.is_set || is_set(raddirectedreq.yfilter)) leaf_name_data.push_back(raddirectedreq.get_name_leafdata());
    if (tacdirectedreq.is_set || is_set(tacdirectedreq.yfilter)) leaf_name_data.push_back(tacdirectedreq.get_name_leafdata());
    if (logginglevel.is_set || is_set(logginglevel.yfilter)) leaf_name_data.push_back(logginglevel.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::UserextItems::AuthrealmItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aaagroup-items")
    {
        if(aaagroup_items == nullptr)
        {
            aaagroup_items = std::make_shared<System::UserextItems::AuthrealmItems::AaagroupItems>();
        }
        return aaagroup_items;
    }

    if(child_yang_name == "defaultauth-items")
    {
        if(defaultauth_items == nullptr)
        {
            defaultauth_items = std::make_shared<System::UserextItems::AuthrealmItems::DefaultauthItems>();
        }
        return defaultauth_items;
    }

    if(child_yang_name == "defaultauthor-items")
    {
        if(defaultauthor_items == nullptr)
        {
            defaultauthor_items = std::make_shared<System::UserextItems::AuthrealmItems::DefaultauthorItems>();
        }
        return defaultauthor_items;
    }

    if(child_yang_name == "consoleauthor-items")
    {
        if(consoleauthor_items == nullptr)
        {
            consoleauthor_items = std::make_shared<System::UserextItems::AuthrealmItems::ConsoleauthorItems>();
        }
        return consoleauthor_items;
    }

    if(child_yang_name == "defaultacc-items")
    {
        if(defaultacc_items == nullptr)
        {
            defaultacc_items = std::make_shared<System::UserextItems::AuthrealmItems::DefaultaccItems>();
        }
        return defaultacc_items;
    }

    if(child_yang_name == "pkisshcert-items")
    {
        if(pkisshcert_items == nullptr)
        {
            pkisshcert_items = std::make_shared<System::UserextItems::AuthrealmItems::PkisshcertItems>();
        }
        return pkisshcert_items;
    }

    if(child_yang_name == "pkisshpubkey-items")
    {
        if(pkisshpubkey_items == nullptr)
        {
            pkisshpubkey_items = std::make_shared<System::UserextItems::AuthrealmItems::PkisshpubkeyItems>();
        }
        return pkisshpubkey_items;
    }

    if(child_yang_name == "consoleauth-items")
    {
        if(consoleauth_items == nullptr)
        {
            consoleauth_items = std::make_shared<System::UserextItems::AuthrealmItems::ConsoleauthItems>();
        }
        return consoleauth_items;
    }

    if(child_yang_name == "rtfabricResAuthRealm-items")
    {
        if(rtfabricresauthrealm_items == nullptr)
        {
            rtfabricresauthrealm_items = std::make_shared<System::UserextItems::AuthrealmItems::RtfabricResAuthRealmItems>();
        }
        return rtfabricresauthrealm_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::UserextItems::AuthrealmItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(aaagroup_items != nullptr)
    {
        _children["aaagroup-items"] = aaagroup_items;
    }

    if(defaultauth_items != nullptr)
    {
        _children["defaultauth-items"] = defaultauth_items;
    }

    if(defaultauthor_items != nullptr)
    {
        _children["defaultauthor-items"] = defaultauthor_items;
    }

    if(consoleauthor_items != nullptr)
    {
        _children["consoleauthor-items"] = consoleauthor_items;
    }

    if(defaultacc_items != nullptr)
    {
        _children["defaultacc-items"] = defaultacc_items;
    }

    if(pkisshcert_items != nullptr)
    {
        _children["pkisshcert-items"] = pkisshcert_items;
    }

    if(pkisshpubkey_items != nullptr)
    {
        _children["pkisshpubkey-items"] = pkisshpubkey_items;
    }

    if(consoleauth_items != nullptr)
    {
        _children["consoleauth-items"] = consoleauth_items;
    }

    if(rtfabricresauthrealm_items != nullptr)
    {
        _children["rtfabricResAuthRealm-items"] = rtfabricresauthrealm_items;
    }

    return _children;
}

void System::UserextItems::AuthrealmItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "defRolePolicy")
    {
        defrolepolicy = value;
        defrolepolicy.value_namespace = name_space;
        defrolepolicy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "radDirectedReq")
    {
        raddirectedreq = value;
        raddirectedreq.value_namespace = name_space;
        raddirectedreq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tacDirectedReq")
    {
        tacdirectedreq = value;
        tacdirectedreq.value_namespace = name_space;
        tacdirectedreq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loggingLevel")
    {
        logginglevel = value;
        logginglevel.value_namespace = name_space;
        logginglevel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerKey")
    {
        ownerkey = value;
        ownerkey.value_namespace = name_space;
        ownerkey.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerTag")
    {
        ownertag = value;
        ownertag.value_namespace = name_space;
        ownertag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::UserextItems::AuthrealmItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "defRolePolicy")
    {
        defrolepolicy.yfilter = yfilter;
    }
    if(value_path == "radDirectedReq")
    {
        raddirectedreq.yfilter = yfilter;
    }
    if(value_path == "tacDirectedReq")
    {
        tacdirectedreq.yfilter = yfilter;
    }
    if(value_path == "loggingLevel")
    {
        logginglevel.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ownerKey")
    {
        ownerkey.yfilter = yfilter;
    }
    if(value_path == "ownerTag")
    {
        ownertag.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::UserextItems::AuthrealmItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aaagroup-items" || name == "defaultauth-items" || name == "defaultauthor-items" || name == "consoleauthor-items" || name == "defaultacc-items" || name == "pkisshcert-items" || name == "pkisshpubkey-items" || name == "consoleauth-items" || name == "rtfabricResAuthRealm-items" || name == "defRolePolicy" || name == "radDirectedReq" || name == "tacDirectedReq" || name == "loggingLevel" || name == "name" || name == "ownerKey" || name == "ownerTag" || name == "descr")
        return true;
    return false;
}

System::UserextItems::AuthrealmItems::AaagroupItems::AaagroupItems()
    :
    aaaservergroup_list(this, {"name"})
{

    yang_name = "aaagroup-items"; yang_parent_name = "authrealm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::AuthrealmItems::AaagroupItems::~AaagroupItems()
{
}

bool System::UserextItems::AuthrealmItems::AaagroupItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<aaaservergroup_list.len(); index++)
    {
        if(aaaservergroup_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::UserextItems::AuthrealmItems::AaagroupItems::has_operation() const
{
    for (std::size_t index=0; index<aaaservergroup_list.len(); index++)
    {
        if(aaaservergroup_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::UserextItems::AuthrealmItems::AaagroupItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/userext-items/authrealm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::AuthrealmItems::AaagroupItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aaagroup-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::AuthrealmItems::AaagroupItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::UserextItems::AuthrealmItems::AaagroupItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "AaaServerGroup-list")
    {
        auto ent_ = std::make_shared<System::UserextItems::AuthrealmItems::AaagroupItems::AaaServerGroupList>();
        ent_->parent = this;
        aaaservergroup_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::UserextItems::AuthrealmItems::AaagroupItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : aaaservergroup_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::UserextItems::AuthrealmItems::AaagroupItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::UserextItems::AuthrealmItems::AaagroupItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::UserextItems::AuthrealmItems::AaagroupItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "AaaServerGroup-list")
        return true;
    return false;
}

System::UserextItems::AuthrealmItems::AaagroupItems::AaaServerGroupList::AaaServerGroupList()
    :
    name{YType::str, "name"},
    protocol{YType::enumeration, "protocol"}
{

    yang_name = "AaaServerGroup-list"; yang_parent_name = "aaagroup-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::AuthrealmItems::AaagroupItems::AaaServerGroupList::~AaaServerGroupList()
{
}

bool System::UserextItems::AuthrealmItems::AaagroupItems::AaaServerGroupList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| protocol.is_set;
}

bool System::UserextItems::AuthrealmItems::AaagroupItems::AaaServerGroupList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(protocol.yfilter);
}

std::string System::UserextItems::AuthrealmItems::AaagroupItems::AaaServerGroupList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/userext-items/authrealm-items/aaagroup-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::AuthrealmItems::AaagroupItems::AaaServerGroupList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "AaaServerGroup-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::AuthrealmItems::AaagroupItems::AaaServerGroupList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::UserextItems::AuthrealmItems::AaagroupItems::AaaServerGroupList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::UserextItems::AuthrealmItems::AaagroupItems::AaaServerGroupList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::UserextItems::AuthrealmItems::AaagroupItems::AaaServerGroupList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
}

void System::UserextItems::AuthrealmItems::AaagroupItems::AaaServerGroupList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
}

bool System::UserextItems::AuthrealmItems::AaagroupItems::AaaServerGroupList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "protocol")
        return true;
    return false;
}

System::UserextItems::AuthrealmItems::DefaultauthItems::DefaultauthItems()
    :
    name{YType::str, "name"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"},
    realm{YType::enumeration, "realm"},
    providergroup{YType::str, "providerGroup"},
    providergroup2{YType::str, "providerGroup2"},
    providergroup3{YType::str, "providerGroup3"},
    providergroup4{YType::str, "providerGroup4"},
    providergroup5{YType::str, "providerGroup5"},
    providergroup6{YType::str, "providerGroup6"},
    providergroup7{YType::str, "providerGroup7"},
    providergroup8{YType::str, "providerGroup8"},
    erren{YType::boolean, "errEn"},
    authprotocol{YType::enumeration, "authProtocol"},
    fallback{YType::enumeration, "fallback"},
    local{YType::enumeration, "local"},
    none{YType::enumeration, "none"}
{

    yang_name = "defaultauth-items"; yang_parent_name = "authrealm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::AuthrealmItems::DefaultauthItems::~DefaultauthItems()
{
}

bool System::UserextItems::AuthrealmItems::DefaultauthItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set
	|| realm.is_set
	|| providergroup.is_set
	|| providergroup2.is_set
	|| providergroup3.is_set
	|| providergroup4.is_set
	|| providergroup5.is_set
	|| providergroup6.is_set
	|| providergroup7.is_set
	|| providergroup8.is_set
	|| erren.is_set
	|| authprotocol.is_set
	|| fallback.is_set
	|| local.is_set
	|| none.is_set;
}

bool System::UserextItems::AuthrealmItems::DefaultauthItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(realm.yfilter)
	|| ydk::is_set(providergroup.yfilter)
	|| ydk::is_set(providergroup2.yfilter)
	|| ydk::is_set(providergroup3.yfilter)
	|| ydk::is_set(providergroup4.yfilter)
	|| ydk::is_set(providergroup5.yfilter)
	|| ydk::is_set(providergroup6.yfilter)
	|| ydk::is_set(providergroup7.yfilter)
	|| ydk::is_set(providergroup8.yfilter)
	|| ydk::is_set(erren.yfilter)
	|| ydk::is_set(authprotocol.yfilter)
	|| ydk::is_set(fallback.yfilter)
	|| ydk::is_set(local.yfilter)
	|| ydk::is_set(none.yfilter);
}

std::string System::UserextItems::AuthrealmItems::DefaultauthItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/userext-items/authrealm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::AuthrealmItems::DefaultauthItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "defaultauth-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::AuthrealmItems::DefaultauthItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (realm.is_set || is_set(realm.yfilter)) leaf_name_data.push_back(realm.get_name_leafdata());
    if (providergroup.is_set || is_set(providergroup.yfilter)) leaf_name_data.push_back(providergroup.get_name_leafdata());
    if (providergroup2.is_set || is_set(providergroup2.yfilter)) leaf_name_data.push_back(providergroup2.get_name_leafdata());
    if (providergroup3.is_set || is_set(providergroup3.yfilter)) leaf_name_data.push_back(providergroup3.get_name_leafdata());
    if (providergroup4.is_set || is_set(providergroup4.yfilter)) leaf_name_data.push_back(providergroup4.get_name_leafdata());
    if (providergroup5.is_set || is_set(providergroup5.yfilter)) leaf_name_data.push_back(providergroup5.get_name_leafdata());
    if (providergroup6.is_set || is_set(providergroup6.yfilter)) leaf_name_data.push_back(providergroup6.get_name_leafdata());
    if (providergroup7.is_set || is_set(providergroup7.yfilter)) leaf_name_data.push_back(providergroup7.get_name_leafdata());
    if (providergroup8.is_set || is_set(providergroup8.yfilter)) leaf_name_data.push_back(providergroup8.get_name_leafdata());
    if (erren.is_set || is_set(erren.yfilter)) leaf_name_data.push_back(erren.get_name_leafdata());
    if (authprotocol.is_set || is_set(authprotocol.yfilter)) leaf_name_data.push_back(authprotocol.get_name_leafdata());
    if (fallback.is_set || is_set(fallback.yfilter)) leaf_name_data.push_back(fallback.get_name_leafdata());
    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::UserextItems::AuthrealmItems::DefaultauthItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::UserextItems::AuthrealmItems::DefaultauthItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::UserextItems::AuthrealmItems::DefaultauthItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerKey")
    {
        ownerkey = value;
        ownerkey.value_namespace = name_space;
        ownerkey.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerTag")
    {
        ownertag = value;
        ownertag.value_namespace = name_space;
        ownertag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "realm")
    {
        realm = value;
        realm.value_namespace = name_space;
        realm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup")
    {
        providergroup = value;
        providergroup.value_namespace = name_space;
        providergroup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup2")
    {
        providergroup2 = value;
        providergroup2.value_namespace = name_space;
        providergroup2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup3")
    {
        providergroup3 = value;
        providergroup3.value_namespace = name_space;
        providergroup3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup4")
    {
        providergroup4 = value;
        providergroup4.value_namespace = name_space;
        providergroup4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup5")
    {
        providergroup5 = value;
        providergroup5.value_namespace = name_space;
        providergroup5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup6")
    {
        providergroup6 = value;
        providergroup6.value_namespace = name_space;
        providergroup6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup7")
    {
        providergroup7 = value;
        providergroup7.value_namespace = name_space;
        providergroup7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup8")
    {
        providergroup8 = value;
        providergroup8.value_namespace = name_space;
        providergroup8.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errEn")
    {
        erren = value;
        erren.value_namespace = name_space;
        erren.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authProtocol")
    {
        authprotocol = value;
        authprotocol.value_namespace = name_space;
        authprotocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fallback")
    {
        fallback = value;
        fallback.value_namespace = name_space;
        fallback.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
}

void System::UserextItems::AuthrealmItems::DefaultauthItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ownerKey")
    {
        ownerkey.yfilter = yfilter;
    }
    if(value_path == "ownerTag")
    {
        ownertag.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "realm")
    {
        realm.yfilter = yfilter;
    }
    if(value_path == "providerGroup")
    {
        providergroup.yfilter = yfilter;
    }
    if(value_path == "providerGroup2")
    {
        providergroup2.yfilter = yfilter;
    }
    if(value_path == "providerGroup3")
    {
        providergroup3.yfilter = yfilter;
    }
    if(value_path == "providerGroup4")
    {
        providergroup4.yfilter = yfilter;
    }
    if(value_path == "providerGroup5")
    {
        providergroup5.yfilter = yfilter;
    }
    if(value_path == "providerGroup6")
    {
        providergroup6.yfilter = yfilter;
    }
    if(value_path == "providerGroup7")
    {
        providergroup7.yfilter = yfilter;
    }
    if(value_path == "providerGroup8")
    {
        providergroup8.yfilter = yfilter;
    }
    if(value_path == "errEn")
    {
        erren.yfilter = yfilter;
    }
    if(value_path == "authProtocol")
    {
        authprotocol.yfilter = yfilter;
    }
    if(value_path == "fallback")
    {
        fallback.yfilter = yfilter;
    }
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
}

bool System::UserextItems::AuthrealmItems::DefaultauthItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "ownerKey" || name == "ownerTag" || name == "descr" || name == "realm" || name == "providerGroup" || name == "providerGroup2" || name == "providerGroup3" || name == "providerGroup4" || name == "providerGroup5" || name == "providerGroup6" || name == "providerGroup7" || name == "providerGroup8" || name == "errEn" || name == "authProtocol" || name == "fallback" || name == "local" || name == "none")
        return true;
    return false;
}

System::UserextItems::AuthrealmItems::DefaultauthorItems::DefaultauthorItems()
    :
    defaultauthor_list(this, {"cmdtype"})
{

    yang_name = "defaultauthor-items"; yang_parent_name = "authrealm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::AuthrealmItems::DefaultauthorItems::~DefaultauthorItems()
{
}

bool System::UserextItems::AuthrealmItems::DefaultauthorItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<defaultauthor_list.len(); index++)
    {
        if(defaultauthor_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::UserextItems::AuthrealmItems::DefaultauthorItems::has_operation() const
{
    for (std::size_t index=0; index<defaultauthor_list.len(); index++)
    {
        if(defaultauthor_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::UserextItems::AuthrealmItems::DefaultauthorItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/userext-items/authrealm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::AuthrealmItems::DefaultauthorItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "defaultauthor-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::AuthrealmItems::DefaultauthorItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::UserextItems::AuthrealmItems::DefaultauthorItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "DefaultAuthor-list")
    {
        auto ent_ = std::make_shared<System::UserextItems::AuthrealmItems::DefaultauthorItems::DefaultAuthorList>();
        ent_->parent = this;
        defaultauthor_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::UserextItems::AuthrealmItems::DefaultauthorItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : defaultauthor_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::UserextItems::AuthrealmItems::DefaultauthorItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::UserextItems::AuthrealmItems::DefaultauthorItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::UserextItems::AuthrealmItems::DefaultauthorItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "DefaultAuthor-list")
        return true;
    return false;
}

System::UserextItems::AuthrealmItems::DefaultauthorItems::DefaultAuthorList::DefaultAuthorList()
    :
    cmdtype{YType::enumeration, "cmdType"},
    name{YType::str, "name"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"},
    realm{YType::enumeration, "realm"},
    providergroup{YType::str, "providerGroup"},
    providergroup2{YType::str, "providerGroup2"},
    providergroup3{YType::str, "providerGroup3"},
    providergroup4{YType::str, "providerGroup4"},
    providergroup5{YType::str, "providerGroup5"},
    providergroup6{YType::str, "providerGroup6"},
    providergroup7{YType::str, "providerGroup7"},
    providergroup8{YType::str, "providerGroup8"},
    authormethodnone{YType::boolean, "authorMethodNone"},
    localrbac{YType::boolean, "localRbac"}
{

    yang_name = "DefaultAuthor-list"; yang_parent_name = "defaultauthor-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::AuthrealmItems::DefaultauthorItems::DefaultAuthorList::~DefaultAuthorList()
{
}

bool System::UserextItems::AuthrealmItems::DefaultauthorItems::DefaultAuthorList::has_data() const
{
    if (is_presence_container) return true;
    return cmdtype.is_set
	|| name.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set
	|| realm.is_set
	|| providergroup.is_set
	|| providergroup2.is_set
	|| providergroup3.is_set
	|| providergroup4.is_set
	|| providergroup5.is_set
	|| providergroup6.is_set
	|| providergroup7.is_set
	|| providergroup8.is_set
	|| authormethodnone.is_set
	|| localrbac.is_set;
}

bool System::UserextItems::AuthrealmItems::DefaultauthorItems::DefaultAuthorList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cmdtype.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(realm.yfilter)
	|| ydk::is_set(providergroup.yfilter)
	|| ydk::is_set(providergroup2.yfilter)
	|| ydk::is_set(providergroup3.yfilter)
	|| ydk::is_set(providergroup4.yfilter)
	|| ydk::is_set(providergroup5.yfilter)
	|| ydk::is_set(providergroup6.yfilter)
	|| ydk::is_set(providergroup7.yfilter)
	|| ydk::is_set(providergroup8.yfilter)
	|| ydk::is_set(authormethodnone.yfilter)
	|| ydk::is_set(localrbac.yfilter);
}

std::string System::UserextItems::AuthrealmItems::DefaultauthorItems::DefaultAuthorList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/userext-items/authrealm-items/defaultauthor-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::AuthrealmItems::DefaultauthorItems::DefaultAuthorList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DefaultAuthor-list";
    ADD_KEY_TOKEN(cmdtype, "cmdType");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::AuthrealmItems::DefaultauthorItems::DefaultAuthorList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cmdtype.is_set || is_set(cmdtype.yfilter)) leaf_name_data.push_back(cmdtype.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (realm.is_set || is_set(realm.yfilter)) leaf_name_data.push_back(realm.get_name_leafdata());
    if (providergroup.is_set || is_set(providergroup.yfilter)) leaf_name_data.push_back(providergroup.get_name_leafdata());
    if (providergroup2.is_set || is_set(providergroup2.yfilter)) leaf_name_data.push_back(providergroup2.get_name_leafdata());
    if (providergroup3.is_set || is_set(providergroup3.yfilter)) leaf_name_data.push_back(providergroup3.get_name_leafdata());
    if (providergroup4.is_set || is_set(providergroup4.yfilter)) leaf_name_data.push_back(providergroup4.get_name_leafdata());
    if (providergroup5.is_set || is_set(providergroup5.yfilter)) leaf_name_data.push_back(providergroup5.get_name_leafdata());
    if (providergroup6.is_set || is_set(providergroup6.yfilter)) leaf_name_data.push_back(providergroup6.get_name_leafdata());
    if (providergroup7.is_set || is_set(providergroup7.yfilter)) leaf_name_data.push_back(providergroup7.get_name_leafdata());
    if (providergroup8.is_set || is_set(providergroup8.yfilter)) leaf_name_data.push_back(providergroup8.get_name_leafdata());
    if (authormethodnone.is_set || is_set(authormethodnone.yfilter)) leaf_name_data.push_back(authormethodnone.get_name_leafdata());
    if (localrbac.is_set || is_set(localrbac.yfilter)) leaf_name_data.push_back(localrbac.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::UserextItems::AuthrealmItems::DefaultauthorItems::DefaultAuthorList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::UserextItems::AuthrealmItems::DefaultauthorItems::DefaultAuthorList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::UserextItems::AuthrealmItems::DefaultauthorItems::DefaultAuthorList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cmdType")
    {
        cmdtype = value;
        cmdtype.value_namespace = name_space;
        cmdtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerKey")
    {
        ownerkey = value;
        ownerkey.value_namespace = name_space;
        ownerkey.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerTag")
    {
        ownertag = value;
        ownertag.value_namespace = name_space;
        ownertag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "realm")
    {
        realm = value;
        realm.value_namespace = name_space;
        realm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup")
    {
        providergroup = value;
        providergroup.value_namespace = name_space;
        providergroup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup2")
    {
        providergroup2 = value;
        providergroup2.value_namespace = name_space;
        providergroup2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup3")
    {
        providergroup3 = value;
        providergroup3.value_namespace = name_space;
        providergroup3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup4")
    {
        providergroup4 = value;
        providergroup4.value_namespace = name_space;
        providergroup4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup5")
    {
        providergroup5 = value;
        providergroup5.value_namespace = name_space;
        providergroup5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup6")
    {
        providergroup6 = value;
        providergroup6.value_namespace = name_space;
        providergroup6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup7")
    {
        providergroup7 = value;
        providergroup7.value_namespace = name_space;
        providergroup7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup8")
    {
        providergroup8 = value;
        providergroup8.value_namespace = name_space;
        providergroup8.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authorMethodNone")
    {
        authormethodnone = value;
        authormethodnone.value_namespace = name_space;
        authormethodnone.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "localRbac")
    {
        localrbac = value;
        localrbac.value_namespace = name_space;
        localrbac.value_namespace_prefix = name_space_prefix;
    }
}

void System::UserextItems::AuthrealmItems::DefaultauthorItems::DefaultAuthorList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cmdType")
    {
        cmdtype.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ownerKey")
    {
        ownerkey.yfilter = yfilter;
    }
    if(value_path == "ownerTag")
    {
        ownertag.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "realm")
    {
        realm.yfilter = yfilter;
    }
    if(value_path == "providerGroup")
    {
        providergroup.yfilter = yfilter;
    }
    if(value_path == "providerGroup2")
    {
        providergroup2.yfilter = yfilter;
    }
    if(value_path == "providerGroup3")
    {
        providergroup3.yfilter = yfilter;
    }
    if(value_path == "providerGroup4")
    {
        providergroup4.yfilter = yfilter;
    }
    if(value_path == "providerGroup5")
    {
        providergroup5.yfilter = yfilter;
    }
    if(value_path == "providerGroup6")
    {
        providergroup6.yfilter = yfilter;
    }
    if(value_path == "providerGroup7")
    {
        providergroup7.yfilter = yfilter;
    }
    if(value_path == "providerGroup8")
    {
        providergroup8.yfilter = yfilter;
    }
    if(value_path == "authorMethodNone")
    {
        authormethodnone.yfilter = yfilter;
    }
    if(value_path == "localRbac")
    {
        localrbac.yfilter = yfilter;
    }
}

bool System::UserextItems::AuthrealmItems::DefaultauthorItems::DefaultAuthorList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cmdType" || name == "name" || name == "ownerKey" || name == "ownerTag" || name == "descr" || name == "realm" || name == "providerGroup" || name == "providerGroup2" || name == "providerGroup3" || name == "providerGroup4" || name == "providerGroup5" || name == "providerGroup6" || name == "providerGroup7" || name == "providerGroup8" || name == "authorMethodNone" || name == "localRbac")
        return true;
    return false;
}

System::UserextItems::AuthrealmItems::ConsoleauthorItems::ConsoleauthorItems()
    :
    consoleauthor_list(this, {"cmdtype"})
{

    yang_name = "consoleauthor-items"; yang_parent_name = "authrealm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::AuthrealmItems::ConsoleauthorItems::~ConsoleauthorItems()
{
}

bool System::UserextItems::AuthrealmItems::ConsoleauthorItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<consoleauthor_list.len(); index++)
    {
        if(consoleauthor_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::UserextItems::AuthrealmItems::ConsoleauthorItems::has_operation() const
{
    for (std::size_t index=0; index<consoleauthor_list.len(); index++)
    {
        if(consoleauthor_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::UserextItems::AuthrealmItems::ConsoleauthorItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/userext-items/authrealm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::AuthrealmItems::ConsoleauthorItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "consoleauthor-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::AuthrealmItems::ConsoleauthorItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::UserextItems::AuthrealmItems::ConsoleauthorItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ConsoleAuthor-list")
    {
        auto ent_ = std::make_shared<System::UserextItems::AuthrealmItems::ConsoleauthorItems::ConsoleAuthorList>();
        ent_->parent = this;
        consoleauthor_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::UserextItems::AuthrealmItems::ConsoleauthorItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : consoleauthor_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::UserextItems::AuthrealmItems::ConsoleauthorItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::UserextItems::AuthrealmItems::ConsoleauthorItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::UserextItems::AuthrealmItems::ConsoleauthorItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ConsoleAuthor-list")
        return true;
    return false;
}

System::UserextItems::AuthrealmItems::ConsoleauthorItems::ConsoleAuthorList::ConsoleAuthorList()
    :
    cmdtype{YType::enumeration, "cmdType"},
    name{YType::str, "name"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"},
    realm{YType::enumeration, "realm"},
    providergroup{YType::str, "providerGroup"},
    providergroup2{YType::str, "providerGroup2"},
    providergroup3{YType::str, "providerGroup3"},
    providergroup4{YType::str, "providerGroup4"},
    providergroup5{YType::str, "providerGroup5"},
    providergroup6{YType::str, "providerGroup6"},
    providergroup7{YType::str, "providerGroup7"},
    providergroup8{YType::str, "providerGroup8"},
    authormethodnone{YType::boolean, "authorMethodNone"},
    localrbac{YType::boolean, "localRbac"}
{

    yang_name = "ConsoleAuthor-list"; yang_parent_name = "consoleauthor-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::AuthrealmItems::ConsoleauthorItems::ConsoleAuthorList::~ConsoleAuthorList()
{
}

bool System::UserextItems::AuthrealmItems::ConsoleauthorItems::ConsoleAuthorList::has_data() const
{
    if (is_presence_container) return true;
    return cmdtype.is_set
	|| name.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set
	|| realm.is_set
	|| providergroup.is_set
	|| providergroup2.is_set
	|| providergroup3.is_set
	|| providergroup4.is_set
	|| providergroup5.is_set
	|| providergroup6.is_set
	|| providergroup7.is_set
	|| providergroup8.is_set
	|| authormethodnone.is_set
	|| localrbac.is_set;
}

bool System::UserextItems::AuthrealmItems::ConsoleauthorItems::ConsoleAuthorList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cmdtype.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(realm.yfilter)
	|| ydk::is_set(providergroup.yfilter)
	|| ydk::is_set(providergroup2.yfilter)
	|| ydk::is_set(providergroup3.yfilter)
	|| ydk::is_set(providergroup4.yfilter)
	|| ydk::is_set(providergroup5.yfilter)
	|| ydk::is_set(providergroup6.yfilter)
	|| ydk::is_set(providergroup7.yfilter)
	|| ydk::is_set(providergroup8.yfilter)
	|| ydk::is_set(authormethodnone.yfilter)
	|| ydk::is_set(localrbac.yfilter);
}

std::string System::UserextItems::AuthrealmItems::ConsoleauthorItems::ConsoleAuthorList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/userext-items/authrealm-items/consoleauthor-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::AuthrealmItems::ConsoleauthorItems::ConsoleAuthorList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ConsoleAuthor-list";
    ADD_KEY_TOKEN(cmdtype, "cmdType");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::AuthrealmItems::ConsoleauthorItems::ConsoleAuthorList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cmdtype.is_set || is_set(cmdtype.yfilter)) leaf_name_data.push_back(cmdtype.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (realm.is_set || is_set(realm.yfilter)) leaf_name_data.push_back(realm.get_name_leafdata());
    if (providergroup.is_set || is_set(providergroup.yfilter)) leaf_name_data.push_back(providergroup.get_name_leafdata());
    if (providergroup2.is_set || is_set(providergroup2.yfilter)) leaf_name_data.push_back(providergroup2.get_name_leafdata());
    if (providergroup3.is_set || is_set(providergroup3.yfilter)) leaf_name_data.push_back(providergroup3.get_name_leafdata());
    if (providergroup4.is_set || is_set(providergroup4.yfilter)) leaf_name_data.push_back(providergroup4.get_name_leafdata());
    if (providergroup5.is_set || is_set(providergroup5.yfilter)) leaf_name_data.push_back(providergroup5.get_name_leafdata());
    if (providergroup6.is_set || is_set(providergroup6.yfilter)) leaf_name_data.push_back(providergroup6.get_name_leafdata());
    if (providergroup7.is_set || is_set(providergroup7.yfilter)) leaf_name_data.push_back(providergroup7.get_name_leafdata());
    if (providergroup8.is_set || is_set(providergroup8.yfilter)) leaf_name_data.push_back(providergroup8.get_name_leafdata());
    if (authormethodnone.is_set || is_set(authormethodnone.yfilter)) leaf_name_data.push_back(authormethodnone.get_name_leafdata());
    if (localrbac.is_set || is_set(localrbac.yfilter)) leaf_name_data.push_back(localrbac.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::UserextItems::AuthrealmItems::ConsoleauthorItems::ConsoleAuthorList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::UserextItems::AuthrealmItems::ConsoleauthorItems::ConsoleAuthorList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::UserextItems::AuthrealmItems::ConsoleauthorItems::ConsoleAuthorList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cmdType")
    {
        cmdtype = value;
        cmdtype.value_namespace = name_space;
        cmdtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerKey")
    {
        ownerkey = value;
        ownerkey.value_namespace = name_space;
        ownerkey.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerTag")
    {
        ownertag = value;
        ownertag.value_namespace = name_space;
        ownertag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "realm")
    {
        realm = value;
        realm.value_namespace = name_space;
        realm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup")
    {
        providergroup = value;
        providergroup.value_namespace = name_space;
        providergroup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup2")
    {
        providergroup2 = value;
        providergroup2.value_namespace = name_space;
        providergroup2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup3")
    {
        providergroup3 = value;
        providergroup3.value_namespace = name_space;
        providergroup3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup4")
    {
        providergroup4 = value;
        providergroup4.value_namespace = name_space;
        providergroup4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup5")
    {
        providergroup5 = value;
        providergroup5.value_namespace = name_space;
        providergroup5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup6")
    {
        providergroup6 = value;
        providergroup6.value_namespace = name_space;
        providergroup6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup7")
    {
        providergroup7 = value;
        providergroup7.value_namespace = name_space;
        providergroup7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup8")
    {
        providergroup8 = value;
        providergroup8.value_namespace = name_space;
        providergroup8.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authorMethodNone")
    {
        authormethodnone = value;
        authormethodnone.value_namespace = name_space;
        authormethodnone.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "localRbac")
    {
        localrbac = value;
        localrbac.value_namespace = name_space;
        localrbac.value_namespace_prefix = name_space_prefix;
    }
}

void System::UserextItems::AuthrealmItems::ConsoleauthorItems::ConsoleAuthorList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cmdType")
    {
        cmdtype.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ownerKey")
    {
        ownerkey.yfilter = yfilter;
    }
    if(value_path == "ownerTag")
    {
        ownertag.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "realm")
    {
        realm.yfilter = yfilter;
    }
    if(value_path == "providerGroup")
    {
        providergroup.yfilter = yfilter;
    }
    if(value_path == "providerGroup2")
    {
        providergroup2.yfilter = yfilter;
    }
    if(value_path == "providerGroup3")
    {
        providergroup3.yfilter = yfilter;
    }
    if(value_path == "providerGroup4")
    {
        providergroup4.yfilter = yfilter;
    }
    if(value_path == "providerGroup5")
    {
        providergroup5.yfilter = yfilter;
    }
    if(value_path == "providerGroup6")
    {
        providergroup6.yfilter = yfilter;
    }
    if(value_path == "providerGroup7")
    {
        providergroup7.yfilter = yfilter;
    }
    if(value_path == "providerGroup8")
    {
        providergroup8.yfilter = yfilter;
    }
    if(value_path == "authorMethodNone")
    {
        authormethodnone.yfilter = yfilter;
    }
    if(value_path == "localRbac")
    {
        localrbac.yfilter = yfilter;
    }
}

bool System::UserextItems::AuthrealmItems::ConsoleauthorItems::ConsoleAuthorList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cmdType" || name == "name" || name == "ownerKey" || name == "ownerTag" || name == "descr" || name == "realm" || name == "providerGroup" || name == "providerGroup2" || name == "providerGroup3" || name == "providerGroup4" || name == "providerGroup5" || name == "providerGroup6" || name == "providerGroup7" || name == "providerGroup8" || name == "authorMethodNone" || name == "localRbac")
        return true;
    return false;
}

System::UserextItems::AuthrealmItems::DefaultaccItems::DefaultaccItems()
    :
    name{YType::str, "name"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"},
    realm{YType::enumeration, "realm"},
    providergroup{YType::str, "providerGroup"},
    providergroup2{YType::str, "providerGroup2"},
    providergroup3{YType::str, "providerGroup3"},
    providergroup4{YType::str, "providerGroup4"},
    providergroup5{YType::str, "providerGroup5"},
    providergroup6{YType::str, "providerGroup6"},
    providergroup7{YType::str, "providerGroup7"},
    providergroup8{YType::str, "providerGroup8"},
    accmethodnone{YType::boolean, "accMethodNone"},
    localrbac{YType::boolean, "localRbac"}
{

    yang_name = "defaultacc-items"; yang_parent_name = "authrealm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::AuthrealmItems::DefaultaccItems::~DefaultaccItems()
{
}

bool System::UserextItems::AuthrealmItems::DefaultaccItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set
	|| realm.is_set
	|| providergroup.is_set
	|| providergroup2.is_set
	|| providergroup3.is_set
	|| providergroup4.is_set
	|| providergroup5.is_set
	|| providergroup6.is_set
	|| providergroup7.is_set
	|| providergroup8.is_set
	|| accmethodnone.is_set
	|| localrbac.is_set;
}

bool System::UserextItems::AuthrealmItems::DefaultaccItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(realm.yfilter)
	|| ydk::is_set(providergroup.yfilter)
	|| ydk::is_set(providergroup2.yfilter)
	|| ydk::is_set(providergroup3.yfilter)
	|| ydk::is_set(providergroup4.yfilter)
	|| ydk::is_set(providergroup5.yfilter)
	|| ydk::is_set(providergroup6.yfilter)
	|| ydk::is_set(providergroup7.yfilter)
	|| ydk::is_set(providergroup8.yfilter)
	|| ydk::is_set(accmethodnone.yfilter)
	|| ydk::is_set(localrbac.yfilter);
}

std::string System::UserextItems::AuthrealmItems::DefaultaccItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/userext-items/authrealm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::AuthrealmItems::DefaultaccItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "defaultacc-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::AuthrealmItems::DefaultaccItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (realm.is_set || is_set(realm.yfilter)) leaf_name_data.push_back(realm.get_name_leafdata());
    if (providergroup.is_set || is_set(providergroup.yfilter)) leaf_name_data.push_back(providergroup.get_name_leafdata());
    if (providergroup2.is_set || is_set(providergroup2.yfilter)) leaf_name_data.push_back(providergroup2.get_name_leafdata());
    if (providergroup3.is_set || is_set(providergroup3.yfilter)) leaf_name_data.push_back(providergroup3.get_name_leafdata());
    if (providergroup4.is_set || is_set(providergroup4.yfilter)) leaf_name_data.push_back(providergroup4.get_name_leafdata());
    if (providergroup5.is_set || is_set(providergroup5.yfilter)) leaf_name_data.push_back(providergroup5.get_name_leafdata());
    if (providergroup6.is_set || is_set(providergroup6.yfilter)) leaf_name_data.push_back(providergroup6.get_name_leafdata());
    if (providergroup7.is_set || is_set(providergroup7.yfilter)) leaf_name_data.push_back(providergroup7.get_name_leafdata());
    if (providergroup8.is_set || is_set(providergroup8.yfilter)) leaf_name_data.push_back(providergroup8.get_name_leafdata());
    if (accmethodnone.is_set || is_set(accmethodnone.yfilter)) leaf_name_data.push_back(accmethodnone.get_name_leafdata());
    if (localrbac.is_set || is_set(localrbac.yfilter)) leaf_name_data.push_back(localrbac.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::UserextItems::AuthrealmItems::DefaultaccItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::UserextItems::AuthrealmItems::DefaultaccItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::UserextItems::AuthrealmItems::DefaultaccItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerKey")
    {
        ownerkey = value;
        ownerkey.value_namespace = name_space;
        ownerkey.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerTag")
    {
        ownertag = value;
        ownertag.value_namespace = name_space;
        ownertag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "realm")
    {
        realm = value;
        realm.value_namespace = name_space;
        realm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup")
    {
        providergroup = value;
        providergroup.value_namespace = name_space;
        providergroup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup2")
    {
        providergroup2 = value;
        providergroup2.value_namespace = name_space;
        providergroup2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup3")
    {
        providergroup3 = value;
        providergroup3.value_namespace = name_space;
        providergroup3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup4")
    {
        providergroup4 = value;
        providergroup4.value_namespace = name_space;
        providergroup4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup5")
    {
        providergroup5 = value;
        providergroup5.value_namespace = name_space;
        providergroup5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup6")
    {
        providergroup6 = value;
        providergroup6.value_namespace = name_space;
        providergroup6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup7")
    {
        providergroup7 = value;
        providergroup7.value_namespace = name_space;
        providergroup7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup8")
    {
        providergroup8 = value;
        providergroup8.value_namespace = name_space;
        providergroup8.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accMethodNone")
    {
        accmethodnone = value;
        accmethodnone.value_namespace = name_space;
        accmethodnone.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "localRbac")
    {
        localrbac = value;
        localrbac.value_namespace = name_space;
        localrbac.value_namespace_prefix = name_space_prefix;
    }
}

void System::UserextItems::AuthrealmItems::DefaultaccItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ownerKey")
    {
        ownerkey.yfilter = yfilter;
    }
    if(value_path == "ownerTag")
    {
        ownertag.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "realm")
    {
        realm.yfilter = yfilter;
    }
    if(value_path == "providerGroup")
    {
        providergroup.yfilter = yfilter;
    }
    if(value_path == "providerGroup2")
    {
        providergroup2.yfilter = yfilter;
    }
    if(value_path == "providerGroup3")
    {
        providergroup3.yfilter = yfilter;
    }
    if(value_path == "providerGroup4")
    {
        providergroup4.yfilter = yfilter;
    }
    if(value_path == "providerGroup5")
    {
        providergroup5.yfilter = yfilter;
    }
    if(value_path == "providerGroup6")
    {
        providergroup6.yfilter = yfilter;
    }
    if(value_path == "providerGroup7")
    {
        providergroup7.yfilter = yfilter;
    }
    if(value_path == "providerGroup8")
    {
        providergroup8.yfilter = yfilter;
    }
    if(value_path == "accMethodNone")
    {
        accmethodnone.yfilter = yfilter;
    }
    if(value_path == "localRbac")
    {
        localrbac.yfilter = yfilter;
    }
}

bool System::UserextItems::AuthrealmItems::DefaultaccItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "ownerKey" || name == "ownerTag" || name == "descr" || name == "realm" || name == "providerGroup" || name == "providerGroup2" || name == "providerGroup3" || name == "providerGroup4" || name == "providerGroup5" || name == "providerGroup6" || name == "providerGroup7" || name == "providerGroup8" || name == "accMethodNone" || name == "localRbac")
        return true;
    return false;
}

System::UserextItems::AuthrealmItems::PkisshcertItems::PkisshcertItems()
    :
    local{YType::boolean, "local"},
    name{YType::str, "name"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"},
    realm{YType::enumeration, "realm"},
    providergroup{YType::str, "providerGroup"},
    providergroup2{YType::str, "providerGroup2"},
    providergroup3{YType::str, "providerGroup3"},
    providergroup4{YType::str, "providerGroup4"},
    providergroup5{YType::str, "providerGroup5"},
    providergroup6{YType::str, "providerGroup6"},
    providergroup7{YType::str, "providerGroup7"},
    providergroup8{YType::str, "providerGroup8"}
{

    yang_name = "pkisshcert-items"; yang_parent_name = "authrealm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::AuthrealmItems::PkisshcertItems::~PkisshcertItems()
{
}

bool System::UserextItems::AuthrealmItems::PkisshcertItems::has_data() const
{
    if (is_presence_container) return true;
    return local.is_set
	|| name.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set
	|| realm.is_set
	|| providergroup.is_set
	|| providergroup2.is_set
	|| providergroup3.is_set
	|| providergroup4.is_set
	|| providergroup5.is_set
	|| providergroup6.is_set
	|| providergroup7.is_set
	|| providergroup8.is_set;
}

bool System::UserextItems::AuthrealmItems::PkisshcertItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(realm.yfilter)
	|| ydk::is_set(providergroup.yfilter)
	|| ydk::is_set(providergroup2.yfilter)
	|| ydk::is_set(providergroup3.yfilter)
	|| ydk::is_set(providergroup4.yfilter)
	|| ydk::is_set(providergroup5.yfilter)
	|| ydk::is_set(providergroup6.yfilter)
	|| ydk::is_set(providergroup7.yfilter)
	|| ydk::is_set(providergroup8.yfilter);
}

std::string System::UserextItems::AuthrealmItems::PkisshcertItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/userext-items/authrealm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::AuthrealmItems::PkisshcertItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pkisshcert-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::AuthrealmItems::PkisshcertItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (realm.is_set || is_set(realm.yfilter)) leaf_name_data.push_back(realm.get_name_leafdata());
    if (providergroup.is_set || is_set(providergroup.yfilter)) leaf_name_data.push_back(providergroup.get_name_leafdata());
    if (providergroup2.is_set || is_set(providergroup2.yfilter)) leaf_name_data.push_back(providergroup2.get_name_leafdata());
    if (providergroup3.is_set || is_set(providergroup3.yfilter)) leaf_name_data.push_back(providergroup3.get_name_leafdata());
    if (providergroup4.is_set || is_set(providergroup4.yfilter)) leaf_name_data.push_back(providergroup4.get_name_leafdata());
    if (providergroup5.is_set || is_set(providergroup5.yfilter)) leaf_name_data.push_back(providergroup5.get_name_leafdata());
    if (providergroup6.is_set || is_set(providergroup6.yfilter)) leaf_name_data.push_back(providergroup6.get_name_leafdata());
    if (providergroup7.is_set || is_set(providergroup7.yfilter)) leaf_name_data.push_back(providergroup7.get_name_leafdata());
    if (providergroup8.is_set || is_set(providergroup8.yfilter)) leaf_name_data.push_back(providergroup8.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::UserextItems::AuthrealmItems::PkisshcertItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::UserextItems::AuthrealmItems::PkisshcertItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::UserextItems::AuthrealmItems::PkisshcertItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerKey")
    {
        ownerkey = value;
        ownerkey.value_namespace = name_space;
        ownerkey.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerTag")
    {
        ownertag = value;
        ownertag.value_namespace = name_space;
        ownertag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "realm")
    {
        realm = value;
        realm.value_namespace = name_space;
        realm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup")
    {
        providergroup = value;
        providergroup.value_namespace = name_space;
        providergroup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup2")
    {
        providergroup2 = value;
        providergroup2.value_namespace = name_space;
        providergroup2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup3")
    {
        providergroup3 = value;
        providergroup3.value_namespace = name_space;
        providergroup3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup4")
    {
        providergroup4 = value;
        providergroup4.value_namespace = name_space;
        providergroup4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup5")
    {
        providergroup5 = value;
        providergroup5.value_namespace = name_space;
        providergroup5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup6")
    {
        providergroup6 = value;
        providergroup6.value_namespace = name_space;
        providergroup6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup7")
    {
        providergroup7 = value;
        providergroup7.value_namespace = name_space;
        providergroup7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup8")
    {
        providergroup8 = value;
        providergroup8.value_namespace = name_space;
        providergroup8.value_namespace_prefix = name_space_prefix;
    }
}

void System::UserextItems::AuthrealmItems::PkisshcertItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ownerKey")
    {
        ownerkey.yfilter = yfilter;
    }
    if(value_path == "ownerTag")
    {
        ownertag.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "realm")
    {
        realm.yfilter = yfilter;
    }
    if(value_path == "providerGroup")
    {
        providergroup.yfilter = yfilter;
    }
    if(value_path == "providerGroup2")
    {
        providergroup2.yfilter = yfilter;
    }
    if(value_path == "providerGroup3")
    {
        providergroup3.yfilter = yfilter;
    }
    if(value_path == "providerGroup4")
    {
        providergroup4.yfilter = yfilter;
    }
    if(value_path == "providerGroup5")
    {
        providergroup5.yfilter = yfilter;
    }
    if(value_path == "providerGroup6")
    {
        providergroup6.yfilter = yfilter;
    }
    if(value_path == "providerGroup7")
    {
        providergroup7.yfilter = yfilter;
    }
    if(value_path == "providerGroup8")
    {
        providergroup8.yfilter = yfilter;
    }
}

bool System::UserextItems::AuthrealmItems::PkisshcertItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local" || name == "name" || name == "ownerKey" || name == "ownerTag" || name == "descr" || name == "realm" || name == "providerGroup" || name == "providerGroup2" || name == "providerGroup3" || name == "providerGroup4" || name == "providerGroup5" || name == "providerGroup6" || name == "providerGroup7" || name == "providerGroup8")
        return true;
    return false;
}

System::UserextItems::AuthrealmItems::PkisshpubkeyItems::PkisshpubkeyItems()
    :
    local{YType::boolean, "local"},
    name{YType::str, "name"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"},
    realm{YType::enumeration, "realm"},
    providergroup{YType::str, "providerGroup"},
    providergroup2{YType::str, "providerGroup2"},
    providergroup3{YType::str, "providerGroup3"},
    providergroup4{YType::str, "providerGroup4"},
    providergroup5{YType::str, "providerGroup5"},
    providergroup6{YType::str, "providerGroup6"},
    providergroup7{YType::str, "providerGroup7"},
    providergroup8{YType::str, "providerGroup8"}
{

    yang_name = "pkisshpubkey-items"; yang_parent_name = "authrealm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::AuthrealmItems::PkisshpubkeyItems::~PkisshpubkeyItems()
{
}

bool System::UserextItems::AuthrealmItems::PkisshpubkeyItems::has_data() const
{
    if (is_presence_container) return true;
    return local.is_set
	|| name.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set
	|| realm.is_set
	|| providergroup.is_set
	|| providergroup2.is_set
	|| providergroup3.is_set
	|| providergroup4.is_set
	|| providergroup5.is_set
	|| providergroup6.is_set
	|| providergroup7.is_set
	|| providergroup8.is_set;
}

bool System::UserextItems::AuthrealmItems::PkisshpubkeyItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(realm.yfilter)
	|| ydk::is_set(providergroup.yfilter)
	|| ydk::is_set(providergroup2.yfilter)
	|| ydk::is_set(providergroup3.yfilter)
	|| ydk::is_set(providergroup4.yfilter)
	|| ydk::is_set(providergroup5.yfilter)
	|| ydk::is_set(providergroup6.yfilter)
	|| ydk::is_set(providergroup7.yfilter)
	|| ydk::is_set(providergroup8.yfilter);
}

std::string System::UserextItems::AuthrealmItems::PkisshpubkeyItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/userext-items/authrealm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::AuthrealmItems::PkisshpubkeyItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pkisshpubkey-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::AuthrealmItems::PkisshpubkeyItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (realm.is_set || is_set(realm.yfilter)) leaf_name_data.push_back(realm.get_name_leafdata());
    if (providergroup.is_set || is_set(providergroup.yfilter)) leaf_name_data.push_back(providergroup.get_name_leafdata());
    if (providergroup2.is_set || is_set(providergroup2.yfilter)) leaf_name_data.push_back(providergroup2.get_name_leafdata());
    if (providergroup3.is_set || is_set(providergroup3.yfilter)) leaf_name_data.push_back(providergroup3.get_name_leafdata());
    if (providergroup4.is_set || is_set(providergroup4.yfilter)) leaf_name_data.push_back(providergroup4.get_name_leafdata());
    if (providergroup5.is_set || is_set(providergroup5.yfilter)) leaf_name_data.push_back(providergroup5.get_name_leafdata());
    if (providergroup6.is_set || is_set(providergroup6.yfilter)) leaf_name_data.push_back(providergroup6.get_name_leafdata());
    if (providergroup7.is_set || is_set(providergroup7.yfilter)) leaf_name_data.push_back(providergroup7.get_name_leafdata());
    if (providergroup8.is_set || is_set(providergroup8.yfilter)) leaf_name_data.push_back(providergroup8.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::UserextItems::AuthrealmItems::PkisshpubkeyItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::UserextItems::AuthrealmItems::PkisshpubkeyItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::UserextItems::AuthrealmItems::PkisshpubkeyItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerKey")
    {
        ownerkey = value;
        ownerkey.value_namespace = name_space;
        ownerkey.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerTag")
    {
        ownertag = value;
        ownertag.value_namespace = name_space;
        ownertag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "realm")
    {
        realm = value;
        realm.value_namespace = name_space;
        realm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup")
    {
        providergroup = value;
        providergroup.value_namespace = name_space;
        providergroup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup2")
    {
        providergroup2 = value;
        providergroup2.value_namespace = name_space;
        providergroup2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup3")
    {
        providergroup3 = value;
        providergroup3.value_namespace = name_space;
        providergroup3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup4")
    {
        providergroup4 = value;
        providergroup4.value_namespace = name_space;
        providergroup4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup5")
    {
        providergroup5 = value;
        providergroup5.value_namespace = name_space;
        providergroup5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup6")
    {
        providergroup6 = value;
        providergroup6.value_namespace = name_space;
        providergroup6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup7")
    {
        providergroup7 = value;
        providergroup7.value_namespace = name_space;
        providergroup7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup8")
    {
        providergroup8 = value;
        providergroup8.value_namespace = name_space;
        providergroup8.value_namespace_prefix = name_space_prefix;
    }
}

void System::UserextItems::AuthrealmItems::PkisshpubkeyItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ownerKey")
    {
        ownerkey.yfilter = yfilter;
    }
    if(value_path == "ownerTag")
    {
        ownertag.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "realm")
    {
        realm.yfilter = yfilter;
    }
    if(value_path == "providerGroup")
    {
        providergroup.yfilter = yfilter;
    }
    if(value_path == "providerGroup2")
    {
        providergroup2.yfilter = yfilter;
    }
    if(value_path == "providerGroup3")
    {
        providergroup3.yfilter = yfilter;
    }
    if(value_path == "providerGroup4")
    {
        providergroup4.yfilter = yfilter;
    }
    if(value_path == "providerGroup5")
    {
        providergroup5.yfilter = yfilter;
    }
    if(value_path == "providerGroup6")
    {
        providergroup6.yfilter = yfilter;
    }
    if(value_path == "providerGroup7")
    {
        providergroup7.yfilter = yfilter;
    }
    if(value_path == "providerGroup8")
    {
        providergroup8.yfilter = yfilter;
    }
}

bool System::UserextItems::AuthrealmItems::PkisshpubkeyItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local" || name == "name" || name == "ownerKey" || name == "ownerTag" || name == "descr" || name == "realm" || name == "providerGroup" || name == "providerGroup2" || name == "providerGroup3" || name == "providerGroup4" || name == "providerGroup5" || name == "providerGroup6" || name == "providerGroup7" || name == "providerGroup8")
        return true;
    return false;
}

System::UserextItems::AuthrealmItems::ConsoleauthItems::ConsoleauthItems()
    :
    name{YType::str, "name"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"},
    realm{YType::enumeration, "realm"},
    providergroup{YType::str, "providerGroup"},
    providergroup2{YType::str, "providerGroup2"},
    providergroup3{YType::str, "providerGroup3"},
    providergroup4{YType::str, "providerGroup4"},
    providergroup5{YType::str, "providerGroup5"},
    providergroup6{YType::str, "providerGroup6"},
    providergroup7{YType::str, "providerGroup7"},
    providergroup8{YType::str, "providerGroup8"},
    erren{YType::boolean, "errEn"},
    authprotocol{YType::enumeration, "authProtocol"},
    fallback{YType::enumeration, "fallback"},
    local{YType::enumeration, "local"},
    none{YType::enumeration, "none"}
{

    yang_name = "consoleauth-items"; yang_parent_name = "authrealm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::AuthrealmItems::ConsoleauthItems::~ConsoleauthItems()
{
}

bool System::UserextItems::AuthrealmItems::ConsoleauthItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set
	|| realm.is_set
	|| providergroup.is_set
	|| providergroup2.is_set
	|| providergroup3.is_set
	|| providergroup4.is_set
	|| providergroup5.is_set
	|| providergroup6.is_set
	|| providergroup7.is_set
	|| providergroup8.is_set
	|| erren.is_set
	|| authprotocol.is_set
	|| fallback.is_set
	|| local.is_set
	|| none.is_set;
}

bool System::UserextItems::AuthrealmItems::ConsoleauthItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(realm.yfilter)
	|| ydk::is_set(providergroup.yfilter)
	|| ydk::is_set(providergroup2.yfilter)
	|| ydk::is_set(providergroup3.yfilter)
	|| ydk::is_set(providergroup4.yfilter)
	|| ydk::is_set(providergroup5.yfilter)
	|| ydk::is_set(providergroup6.yfilter)
	|| ydk::is_set(providergroup7.yfilter)
	|| ydk::is_set(providergroup8.yfilter)
	|| ydk::is_set(erren.yfilter)
	|| ydk::is_set(authprotocol.yfilter)
	|| ydk::is_set(fallback.yfilter)
	|| ydk::is_set(local.yfilter)
	|| ydk::is_set(none.yfilter);
}

std::string System::UserextItems::AuthrealmItems::ConsoleauthItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/userext-items/authrealm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::AuthrealmItems::ConsoleauthItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "consoleauth-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::AuthrealmItems::ConsoleauthItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (realm.is_set || is_set(realm.yfilter)) leaf_name_data.push_back(realm.get_name_leafdata());
    if (providergroup.is_set || is_set(providergroup.yfilter)) leaf_name_data.push_back(providergroup.get_name_leafdata());
    if (providergroup2.is_set || is_set(providergroup2.yfilter)) leaf_name_data.push_back(providergroup2.get_name_leafdata());
    if (providergroup3.is_set || is_set(providergroup3.yfilter)) leaf_name_data.push_back(providergroup3.get_name_leafdata());
    if (providergroup4.is_set || is_set(providergroup4.yfilter)) leaf_name_data.push_back(providergroup4.get_name_leafdata());
    if (providergroup5.is_set || is_set(providergroup5.yfilter)) leaf_name_data.push_back(providergroup5.get_name_leafdata());
    if (providergroup6.is_set || is_set(providergroup6.yfilter)) leaf_name_data.push_back(providergroup6.get_name_leafdata());
    if (providergroup7.is_set || is_set(providergroup7.yfilter)) leaf_name_data.push_back(providergroup7.get_name_leafdata());
    if (providergroup8.is_set || is_set(providergroup8.yfilter)) leaf_name_data.push_back(providergroup8.get_name_leafdata());
    if (erren.is_set || is_set(erren.yfilter)) leaf_name_data.push_back(erren.get_name_leafdata());
    if (authprotocol.is_set || is_set(authprotocol.yfilter)) leaf_name_data.push_back(authprotocol.get_name_leafdata());
    if (fallback.is_set || is_set(fallback.yfilter)) leaf_name_data.push_back(fallback.get_name_leafdata());
    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::UserextItems::AuthrealmItems::ConsoleauthItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::UserextItems::AuthrealmItems::ConsoleauthItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::UserextItems::AuthrealmItems::ConsoleauthItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerKey")
    {
        ownerkey = value;
        ownerkey.value_namespace = name_space;
        ownerkey.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerTag")
    {
        ownertag = value;
        ownertag.value_namespace = name_space;
        ownertag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "realm")
    {
        realm = value;
        realm.value_namespace = name_space;
        realm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup")
    {
        providergroup = value;
        providergroup.value_namespace = name_space;
        providergroup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup2")
    {
        providergroup2 = value;
        providergroup2.value_namespace = name_space;
        providergroup2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup3")
    {
        providergroup3 = value;
        providergroup3.value_namespace = name_space;
        providergroup3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup4")
    {
        providergroup4 = value;
        providergroup4.value_namespace = name_space;
        providergroup4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup5")
    {
        providergroup5 = value;
        providergroup5.value_namespace = name_space;
        providergroup5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup6")
    {
        providergroup6 = value;
        providergroup6.value_namespace = name_space;
        providergroup6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup7")
    {
        providergroup7 = value;
        providergroup7.value_namespace = name_space;
        providergroup7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup8")
    {
        providergroup8 = value;
        providergroup8.value_namespace = name_space;
        providergroup8.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errEn")
    {
        erren = value;
        erren.value_namespace = name_space;
        erren.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authProtocol")
    {
        authprotocol = value;
        authprotocol.value_namespace = name_space;
        authprotocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fallback")
    {
        fallback = value;
        fallback.value_namespace = name_space;
        fallback.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
}

void System::UserextItems::AuthrealmItems::ConsoleauthItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ownerKey")
    {
        ownerkey.yfilter = yfilter;
    }
    if(value_path == "ownerTag")
    {
        ownertag.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "realm")
    {
        realm.yfilter = yfilter;
    }
    if(value_path == "providerGroup")
    {
        providergroup.yfilter = yfilter;
    }
    if(value_path == "providerGroup2")
    {
        providergroup2.yfilter = yfilter;
    }
    if(value_path == "providerGroup3")
    {
        providergroup3.yfilter = yfilter;
    }
    if(value_path == "providerGroup4")
    {
        providergroup4.yfilter = yfilter;
    }
    if(value_path == "providerGroup5")
    {
        providergroup5.yfilter = yfilter;
    }
    if(value_path == "providerGroup6")
    {
        providergroup6.yfilter = yfilter;
    }
    if(value_path == "providerGroup7")
    {
        providergroup7.yfilter = yfilter;
    }
    if(value_path == "providerGroup8")
    {
        providergroup8.yfilter = yfilter;
    }
    if(value_path == "errEn")
    {
        erren.yfilter = yfilter;
    }
    if(value_path == "authProtocol")
    {
        authprotocol.yfilter = yfilter;
    }
    if(value_path == "fallback")
    {
        fallback.yfilter = yfilter;
    }
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
}

bool System::UserextItems::AuthrealmItems::ConsoleauthItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "ownerKey" || name == "ownerTag" || name == "descr" || name == "realm" || name == "providerGroup" || name == "providerGroup2" || name == "providerGroup3" || name == "providerGroup4" || name == "providerGroup5" || name == "providerGroup6" || name == "providerGroup7" || name == "providerGroup8" || name == "errEn" || name == "authProtocol" || name == "fallback" || name == "local" || name == "none")
        return true;
    return false;
}

System::UserextItems::AuthrealmItems::RtfabricResAuthRealmItems::RtfabricResAuthRealmItems()
    :
    rtfabricresauthrealm_list(this, {"tdn"})
{

    yang_name = "rtfabricResAuthRealm-items"; yang_parent_name = "authrealm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::AuthrealmItems::RtfabricResAuthRealmItems::~RtfabricResAuthRealmItems()
{
}

bool System::UserextItems::AuthrealmItems::RtfabricResAuthRealmItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtfabricresauthrealm_list.len(); index++)
    {
        if(rtfabricresauthrealm_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::UserextItems::AuthrealmItems::RtfabricResAuthRealmItems::has_operation() const
{
    for (std::size_t index=0; index<rtfabricresauthrealm_list.len(); index++)
    {
        if(rtfabricresauthrealm_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::UserextItems::AuthrealmItems::RtfabricResAuthRealmItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/userext-items/authrealm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::AuthrealmItems::RtfabricResAuthRealmItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtfabricResAuthRealm-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::AuthrealmItems::RtfabricResAuthRealmItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::UserextItems::AuthrealmItems::RtfabricResAuthRealmItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtFabricResAuthRealm-list")
    {
        auto ent_ = std::make_shared<System::UserextItems::AuthrealmItems::RtfabricResAuthRealmItems::RtFabricResAuthRealmList>();
        ent_->parent = this;
        rtfabricresauthrealm_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::UserextItems::AuthrealmItems::RtfabricResAuthRealmItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rtfabricresauthrealm_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::UserextItems::AuthrealmItems::RtfabricResAuthRealmItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::UserextItems::AuthrealmItems::RtfabricResAuthRealmItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::UserextItems::AuthrealmItems::RtfabricResAuthRealmItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtFabricResAuthRealm-list")
        return true;
    return false;
}

System::UserextItems::AuthrealmItems::RtfabricResAuthRealmItems::RtFabricResAuthRealmList::RtFabricResAuthRealmList()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "RtFabricResAuthRealm-list"; yang_parent_name = "rtfabricResAuthRealm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::AuthrealmItems::RtfabricResAuthRealmItems::RtFabricResAuthRealmList::~RtFabricResAuthRealmList()
{
}

bool System::UserextItems::AuthrealmItems::RtfabricResAuthRealmItems::RtFabricResAuthRealmList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::UserextItems::AuthrealmItems::RtfabricResAuthRealmItems::RtFabricResAuthRealmList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::UserextItems::AuthrealmItems::RtfabricResAuthRealmItems::RtFabricResAuthRealmList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/userext-items/authrealm-items/rtfabricResAuthRealm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::AuthrealmItems::RtfabricResAuthRealmItems::RtFabricResAuthRealmList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtFabricResAuthRealm-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::AuthrealmItems::RtfabricResAuthRealmItems::RtFabricResAuthRealmList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::UserextItems::AuthrealmItems::RtfabricResAuthRealmItems::RtFabricResAuthRealmList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::UserextItems::AuthrealmItems::RtfabricResAuthRealmItems::RtFabricResAuthRealmList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::UserextItems::AuthrealmItems::RtfabricResAuthRealmItems::RtFabricResAuthRealmList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::UserextItems::AuthrealmItems::RtfabricResAuthRealmItems::RtFabricResAuthRealmList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::UserextItems::AuthrealmItems::RtfabricResAuthRealmItems::RtFabricResAuthRealmList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::UserextItems::LogindomainItems::LogindomainItems()
    :
    logindomain_list(this, {"name"})
{

    yang_name = "logindomain-items"; yang_parent_name = "userext-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::LogindomainItems::~LogindomainItems()
{
}

bool System::UserextItems::LogindomainItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<logindomain_list.len(); index++)
    {
        if(logindomain_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::UserextItems::LogindomainItems::has_operation() const
{
    for (std::size_t index=0; index<logindomain_list.len(); index++)
    {
        if(logindomain_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::UserextItems::LogindomainItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/userext-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::LogindomainItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logindomain-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::LogindomainItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::UserextItems::LogindomainItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "LoginDomain-list")
    {
        auto ent_ = std::make_shared<System::UserextItems::LogindomainItems::LoginDomainList>();
        ent_->parent = this;
        logindomain_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::UserextItems::LogindomainItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : logindomain_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::UserextItems::LogindomainItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::UserextItems::LogindomainItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::UserextItems::LogindomainItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LoginDomain-list")
        return true;
    return false;
}

System::UserextItems::LogindomainItems::LoginDomainList::LoginDomainList()
    :
    name{YType::str, "name"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"}
        ,
    domainauth_items(std::make_shared<System::UserextItems::LogindomainItems::LoginDomainList::DomainauthItems>())
    , rtaaalogindomain_items(std::make_shared<System::UserextItems::LogindomainItems::LoginDomainList::RtaaaLoginDomainItems>())
{
    domainauth_items->parent = this;
    rtaaalogindomain_items->parent = this;

    yang_name = "LoginDomain-list"; yang_parent_name = "logindomain-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::LogindomainItems::LoginDomainList::~LoginDomainList()
{
}

bool System::UserextItems::LogindomainItems::LoginDomainList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set
	|| (domainauth_items !=  nullptr && domainauth_items->has_data())
	|| (rtaaalogindomain_items !=  nullptr && rtaaalogindomain_items->has_data());
}

bool System::UserextItems::LogindomainItems::LoginDomainList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| (domainauth_items !=  nullptr && domainauth_items->has_operation())
	|| (rtaaalogindomain_items !=  nullptr && rtaaalogindomain_items->has_operation());
}

std::string System::UserextItems::LogindomainItems::LoginDomainList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/userext-items/logindomain-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::LogindomainItems::LoginDomainList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LoginDomain-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::LogindomainItems::LoginDomainList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::UserextItems::LogindomainItems::LoginDomainList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "domainauth-items")
    {
        if(domainauth_items == nullptr)
        {
            domainauth_items = std::make_shared<System::UserextItems::LogindomainItems::LoginDomainList::DomainauthItems>();
        }
        return domainauth_items;
    }

    if(child_yang_name == "rtaaaLoginDomain-items")
    {
        if(rtaaalogindomain_items == nullptr)
        {
            rtaaalogindomain_items = std::make_shared<System::UserextItems::LogindomainItems::LoginDomainList::RtaaaLoginDomainItems>();
        }
        return rtaaalogindomain_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::UserextItems::LogindomainItems::LoginDomainList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(domainauth_items != nullptr)
    {
        _children["domainauth-items"] = domainauth_items;
    }

    if(rtaaalogindomain_items != nullptr)
    {
        _children["rtaaaLoginDomain-items"] = rtaaalogindomain_items;
    }

    return _children;
}

void System::UserextItems::LogindomainItems::LoginDomainList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerKey")
    {
        ownerkey = value;
        ownerkey.value_namespace = name_space;
        ownerkey.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerTag")
    {
        ownertag = value;
        ownertag.value_namespace = name_space;
        ownertag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::UserextItems::LogindomainItems::LoginDomainList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ownerKey")
    {
        ownerkey.yfilter = yfilter;
    }
    if(value_path == "ownerTag")
    {
        ownertag.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::UserextItems::LogindomainItems::LoginDomainList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "domainauth-items" || name == "rtaaaLoginDomain-items" || name == "name" || name == "ownerKey" || name == "ownerTag" || name == "descr")
        return true;
    return false;
}

System::UserextItems::LogindomainItems::LoginDomainList::DomainauthItems::DomainauthItems()
    :
    name{YType::str, "name"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"},
    realm{YType::enumeration, "realm"},
    providergroup{YType::str, "providerGroup"},
    providergroup2{YType::str, "providerGroup2"},
    providergroup3{YType::str, "providerGroup3"},
    providergroup4{YType::str, "providerGroup4"},
    providergroup5{YType::str, "providerGroup5"},
    providergroup6{YType::str, "providerGroup6"},
    providergroup7{YType::str, "providerGroup7"},
    providergroup8{YType::str, "providerGroup8"},
    erren{YType::boolean, "errEn"},
    authprotocol{YType::enumeration, "authProtocol"},
    fallback{YType::enumeration, "fallback"},
    local{YType::enumeration, "local"},
    none{YType::enumeration, "none"}
        ,
    defaultauth_items(std::make_shared<System::UserextItems::LogindomainItems::LoginDomainList::DomainauthItems::DefaultauthItems>())
    , consoleauth_items(std::make_shared<System::UserextItems::LogindomainItems::LoginDomainList::DomainauthItems::ConsoleauthItems>())
{
    defaultauth_items->parent = this;
    consoleauth_items->parent = this;

    yang_name = "domainauth-items"; yang_parent_name = "LoginDomain-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::UserextItems::LogindomainItems::LoginDomainList::DomainauthItems::~DomainauthItems()
{
}

bool System::UserextItems::LogindomainItems::LoginDomainList::DomainauthItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set
	|| realm.is_set
	|| providergroup.is_set
	|| providergroup2.is_set
	|| providergroup3.is_set
	|| providergroup4.is_set
	|| providergroup5.is_set
	|| providergroup6.is_set
	|| providergroup7.is_set
	|| providergroup8.is_set
	|| erren.is_set
	|| authprotocol.is_set
	|| fallback.is_set
	|| local.is_set
	|| none.is_set
	|| (defaultauth_items !=  nullptr && defaultauth_items->has_data())
	|| (consoleauth_items !=  nullptr && consoleauth_items->has_data());
}

bool System::UserextItems::LogindomainItems::LoginDomainList::DomainauthItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(realm.yfilter)
	|| ydk::is_set(providergroup.yfilter)
	|| ydk::is_set(providergroup2.yfilter)
	|| ydk::is_set(providergroup3.yfilter)
	|| ydk::is_set(providergroup4.yfilter)
	|| ydk::is_set(providergroup5.yfilter)
	|| ydk::is_set(providergroup6.yfilter)
	|| ydk::is_set(providergroup7.yfilter)
	|| ydk::is_set(providergroup8.yfilter)
	|| ydk::is_set(erren.yfilter)
	|| ydk::is_set(authprotocol.yfilter)
	|| ydk::is_set(fallback.yfilter)
	|| ydk::is_set(local.yfilter)
	|| ydk::is_set(none.yfilter)
	|| (defaultauth_items !=  nullptr && defaultauth_items->has_operation())
	|| (consoleauth_items !=  nullptr && consoleauth_items->has_operation());
}

std::string System::UserextItems::LogindomainItems::LoginDomainList::DomainauthItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domainauth-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::LogindomainItems::LoginDomainList::DomainauthItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (realm.is_set || is_set(realm.yfilter)) leaf_name_data.push_back(realm.get_name_leafdata());
    if (providergroup.is_set || is_set(providergroup.yfilter)) leaf_name_data.push_back(providergroup.get_name_leafdata());
    if (providergroup2.is_set || is_set(providergroup2.yfilter)) leaf_name_data.push_back(providergroup2.get_name_leafdata());
    if (providergroup3.is_set || is_set(providergroup3.yfilter)) leaf_name_data.push_back(providergroup3.get_name_leafdata());
    if (providergroup4.is_set || is_set(providergroup4.yfilter)) leaf_name_data.push_back(providergroup4.get_name_leafdata());
    if (providergroup5.is_set || is_set(providergroup5.yfilter)) leaf_name_data.push_back(providergroup5.get_name_leafdata());
    if (providergroup6.is_set || is_set(providergroup6.yfilter)) leaf_name_data.push_back(providergroup6.get_name_leafdata());
    if (providergroup7.is_set || is_set(providergroup7.yfilter)) leaf_name_data.push_back(providergroup7.get_name_leafdata());
    if (providergroup8.is_set || is_set(providergroup8.yfilter)) leaf_name_data.push_back(providergroup8.get_name_leafdata());
    if (erren.is_set || is_set(erren.yfilter)) leaf_name_data.push_back(erren.get_name_leafdata());
    if (authprotocol.is_set || is_set(authprotocol.yfilter)) leaf_name_data.push_back(authprotocol.get_name_leafdata());
    if (fallback.is_set || is_set(fallback.yfilter)) leaf_name_data.push_back(fallback.get_name_leafdata());
    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::UserextItems::LogindomainItems::LoginDomainList::DomainauthItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "defaultauth-items")
    {
        if(defaultauth_items == nullptr)
        {
            defaultauth_items = std::make_shared<System::UserextItems::LogindomainItems::LoginDomainList::DomainauthItems::DefaultauthItems>();
        }
        return defaultauth_items;
    }

    if(child_yang_name == "consoleauth-items")
    {
        if(consoleauth_items == nullptr)
        {
            consoleauth_items = std::make_shared<System::UserextItems::LogindomainItems::LoginDomainList::DomainauthItems::ConsoleauthItems>();
        }
        return consoleauth_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::UserextItems::LogindomainItems::LoginDomainList::DomainauthItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(defaultauth_items != nullptr)
    {
        _children["defaultauth-items"] = defaultauth_items;
    }

    if(consoleauth_items != nullptr)
    {
        _children["consoleauth-items"] = consoleauth_items;
    }

    return _children;
}

void System::UserextItems::LogindomainItems::LoginDomainList::DomainauthItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerKey")
    {
        ownerkey = value;
        ownerkey.value_namespace = name_space;
        ownerkey.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerTag")
    {
        ownertag = value;
        ownertag.value_namespace = name_space;
        ownertag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "realm")
    {
        realm = value;
        realm.value_namespace = name_space;
        realm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup")
    {
        providergroup = value;
        providergroup.value_namespace = name_space;
        providergroup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup2")
    {
        providergroup2 = value;
        providergroup2.value_namespace = name_space;
        providergroup2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup3")
    {
        providergroup3 = value;
        providergroup3.value_namespace = name_space;
        providergroup3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup4")
    {
        providergroup4 = value;
        providergroup4.value_namespace = name_space;
        providergroup4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup5")
    {
        providergroup5 = value;
        providergroup5.value_namespace = name_space;
        providergroup5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup6")
    {
        providergroup6 = value;
        providergroup6.value_namespace = name_space;
        providergroup6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup7")
    {
        providergroup7 = value;
        providergroup7.value_namespace = name_space;
        providergroup7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup8")
    {
        providergroup8 = value;
        providergroup8.value_namespace = name_space;
        providergroup8.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errEn")
    {
        erren = value;
        erren.value_namespace = name_space;
        erren.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authProtocol")
    {
        authprotocol = value;
        authprotocol.value_namespace = name_space;
        authprotocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fallback")
    {
        fallback = value;
        fallback.value_namespace = name_space;
        fallback.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
}

void System::UserextItems::LogindomainItems::LoginDomainList::DomainauthItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ownerKey")
    {
        ownerkey.yfilter = yfilter;
    }
    if(value_path == "ownerTag")
    {
        ownertag.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "realm")
    {
        realm.yfilter = yfilter;
    }
    if(value_path == "providerGroup")
    {
        providergroup.yfilter = yfilter;
    }
    if(value_path == "providerGroup2")
    {
        providergroup2.yfilter = yfilter;
    }
    if(value_path == "providerGroup3")
    {
        providergroup3.yfilter = yfilter;
    }
    if(value_path == "providerGroup4")
    {
        providergroup4.yfilter = yfilter;
    }
    if(value_path == "providerGroup5")
    {
        providergroup5.yfilter = yfilter;
    }
    if(value_path == "providerGroup6")
    {
        providergroup6.yfilter = yfilter;
    }
    if(value_path == "providerGroup7")
    {
        providergroup7.yfilter = yfilter;
    }
    if(value_path == "providerGroup8")
    {
        providergroup8.yfilter = yfilter;
    }
    if(value_path == "errEn")
    {
        erren.yfilter = yfilter;
    }
    if(value_path == "authProtocol")
    {
        authprotocol.yfilter = yfilter;
    }
    if(value_path == "fallback")
    {
        fallback.yfilter = yfilter;
    }
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
}

bool System::UserextItems::LogindomainItems::LoginDomainList::DomainauthItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "defaultauth-items" || name == "consoleauth-items" || name == "name" || name == "ownerKey" || name == "ownerTag" || name == "descr" || name == "realm" || name == "providerGroup" || name == "providerGroup2" || name == "providerGroup3" || name == "providerGroup4" || name == "providerGroup5" || name == "providerGroup6" || name == "providerGroup7" || name == "providerGroup8" || name == "errEn" || name == "authProtocol" || name == "fallback" || name == "local" || name == "none")
        return true;
    return false;
}

System::UserextItems::LogindomainItems::LoginDomainList::DomainauthItems::DefaultauthItems::DefaultauthItems()
    :
    name{YType::str, "name"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"},
    realm{YType::enumeration, "realm"},
    providergroup{YType::str, "providerGroup"},
    providergroup2{YType::str, "providerGroup2"},
    providergroup3{YType::str, "providerGroup3"},
    providergroup4{YType::str, "providerGroup4"},
    providergroup5{YType::str, "providerGroup5"},
    providergroup6{YType::str, "providerGroup6"},
    providergroup7{YType::str, "providerGroup7"},
    providergroup8{YType::str, "providerGroup8"},
    erren{YType::boolean, "errEn"},
    authprotocol{YType::enumeration, "authProtocol"},
    fallback{YType::enumeration, "fallback"},
    local{YType::enumeration, "local"},
    none{YType::enumeration, "none"}
{

    yang_name = "defaultauth-items"; yang_parent_name = "domainauth-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::UserextItems::LogindomainItems::LoginDomainList::DomainauthItems::DefaultauthItems::~DefaultauthItems()
{
}

bool System::UserextItems::LogindomainItems::LoginDomainList::DomainauthItems::DefaultauthItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set
	|| realm.is_set
	|| providergroup.is_set
	|| providergroup2.is_set
	|| providergroup3.is_set
	|| providergroup4.is_set
	|| providergroup5.is_set
	|| providergroup6.is_set
	|| providergroup7.is_set
	|| providergroup8.is_set
	|| erren.is_set
	|| authprotocol.is_set
	|| fallback.is_set
	|| local.is_set
	|| none.is_set;
}

bool System::UserextItems::LogindomainItems::LoginDomainList::DomainauthItems::DefaultauthItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(realm.yfilter)
	|| ydk::is_set(providergroup.yfilter)
	|| ydk::is_set(providergroup2.yfilter)
	|| ydk::is_set(providergroup3.yfilter)
	|| ydk::is_set(providergroup4.yfilter)
	|| ydk::is_set(providergroup5.yfilter)
	|| ydk::is_set(providergroup6.yfilter)
	|| ydk::is_set(providergroup7.yfilter)
	|| ydk::is_set(providergroup8.yfilter)
	|| ydk::is_set(erren.yfilter)
	|| ydk::is_set(authprotocol.yfilter)
	|| ydk::is_set(fallback.yfilter)
	|| ydk::is_set(local.yfilter)
	|| ydk::is_set(none.yfilter);
}

std::string System::UserextItems::LogindomainItems::LoginDomainList::DomainauthItems::DefaultauthItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "defaultauth-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::LogindomainItems::LoginDomainList::DomainauthItems::DefaultauthItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (realm.is_set || is_set(realm.yfilter)) leaf_name_data.push_back(realm.get_name_leafdata());
    if (providergroup.is_set || is_set(providergroup.yfilter)) leaf_name_data.push_back(providergroup.get_name_leafdata());
    if (providergroup2.is_set || is_set(providergroup2.yfilter)) leaf_name_data.push_back(providergroup2.get_name_leafdata());
    if (providergroup3.is_set || is_set(providergroup3.yfilter)) leaf_name_data.push_back(providergroup3.get_name_leafdata());
    if (providergroup4.is_set || is_set(providergroup4.yfilter)) leaf_name_data.push_back(providergroup4.get_name_leafdata());
    if (providergroup5.is_set || is_set(providergroup5.yfilter)) leaf_name_data.push_back(providergroup5.get_name_leafdata());
    if (providergroup6.is_set || is_set(providergroup6.yfilter)) leaf_name_data.push_back(providergroup6.get_name_leafdata());
    if (providergroup7.is_set || is_set(providergroup7.yfilter)) leaf_name_data.push_back(providergroup7.get_name_leafdata());
    if (providergroup8.is_set || is_set(providergroup8.yfilter)) leaf_name_data.push_back(providergroup8.get_name_leafdata());
    if (erren.is_set || is_set(erren.yfilter)) leaf_name_data.push_back(erren.get_name_leafdata());
    if (authprotocol.is_set || is_set(authprotocol.yfilter)) leaf_name_data.push_back(authprotocol.get_name_leafdata());
    if (fallback.is_set || is_set(fallback.yfilter)) leaf_name_data.push_back(fallback.get_name_leafdata());
    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::UserextItems::LogindomainItems::LoginDomainList::DomainauthItems::DefaultauthItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::UserextItems::LogindomainItems::LoginDomainList::DomainauthItems::DefaultauthItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::UserextItems::LogindomainItems::LoginDomainList::DomainauthItems::DefaultauthItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerKey")
    {
        ownerkey = value;
        ownerkey.value_namespace = name_space;
        ownerkey.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerTag")
    {
        ownertag = value;
        ownertag.value_namespace = name_space;
        ownertag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "realm")
    {
        realm = value;
        realm.value_namespace = name_space;
        realm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup")
    {
        providergroup = value;
        providergroup.value_namespace = name_space;
        providergroup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup2")
    {
        providergroup2 = value;
        providergroup2.value_namespace = name_space;
        providergroup2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup3")
    {
        providergroup3 = value;
        providergroup3.value_namespace = name_space;
        providergroup3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup4")
    {
        providergroup4 = value;
        providergroup4.value_namespace = name_space;
        providergroup4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup5")
    {
        providergroup5 = value;
        providergroup5.value_namespace = name_space;
        providergroup5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup6")
    {
        providergroup6 = value;
        providergroup6.value_namespace = name_space;
        providergroup6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup7")
    {
        providergroup7 = value;
        providergroup7.value_namespace = name_space;
        providergroup7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup8")
    {
        providergroup8 = value;
        providergroup8.value_namespace = name_space;
        providergroup8.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errEn")
    {
        erren = value;
        erren.value_namespace = name_space;
        erren.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authProtocol")
    {
        authprotocol = value;
        authprotocol.value_namespace = name_space;
        authprotocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fallback")
    {
        fallback = value;
        fallback.value_namespace = name_space;
        fallback.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
}

void System::UserextItems::LogindomainItems::LoginDomainList::DomainauthItems::DefaultauthItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ownerKey")
    {
        ownerkey.yfilter = yfilter;
    }
    if(value_path == "ownerTag")
    {
        ownertag.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "realm")
    {
        realm.yfilter = yfilter;
    }
    if(value_path == "providerGroup")
    {
        providergroup.yfilter = yfilter;
    }
    if(value_path == "providerGroup2")
    {
        providergroup2.yfilter = yfilter;
    }
    if(value_path == "providerGroup3")
    {
        providergroup3.yfilter = yfilter;
    }
    if(value_path == "providerGroup4")
    {
        providergroup4.yfilter = yfilter;
    }
    if(value_path == "providerGroup5")
    {
        providergroup5.yfilter = yfilter;
    }
    if(value_path == "providerGroup6")
    {
        providergroup6.yfilter = yfilter;
    }
    if(value_path == "providerGroup7")
    {
        providergroup7.yfilter = yfilter;
    }
    if(value_path == "providerGroup8")
    {
        providergroup8.yfilter = yfilter;
    }
    if(value_path == "errEn")
    {
        erren.yfilter = yfilter;
    }
    if(value_path == "authProtocol")
    {
        authprotocol.yfilter = yfilter;
    }
    if(value_path == "fallback")
    {
        fallback.yfilter = yfilter;
    }
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
}

bool System::UserextItems::LogindomainItems::LoginDomainList::DomainauthItems::DefaultauthItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "ownerKey" || name == "ownerTag" || name == "descr" || name == "realm" || name == "providerGroup" || name == "providerGroup2" || name == "providerGroup3" || name == "providerGroup4" || name == "providerGroup5" || name == "providerGroup6" || name == "providerGroup7" || name == "providerGroup8" || name == "errEn" || name == "authProtocol" || name == "fallback" || name == "local" || name == "none")
        return true;
    return false;
}

System::UserextItems::LogindomainItems::LoginDomainList::DomainauthItems::ConsoleauthItems::ConsoleauthItems()
    :
    name{YType::str, "name"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"},
    realm{YType::enumeration, "realm"},
    providergroup{YType::str, "providerGroup"},
    providergroup2{YType::str, "providerGroup2"},
    providergroup3{YType::str, "providerGroup3"},
    providergroup4{YType::str, "providerGroup4"},
    providergroup5{YType::str, "providerGroup5"},
    providergroup6{YType::str, "providerGroup6"},
    providergroup7{YType::str, "providerGroup7"},
    providergroup8{YType::str, "providerGroup8"},
    erren{YType::boolean, "errEn"},
    authprotocol{YType::enumeration, "authProtocol"},
    fallback{YType::enumeration, "fallback"},
    local{YType::enumeration, "local"},
    none{YType::enumeration, "none"}
{

    yang_name = "consoleauth-items"; yang_parent_name = "domainauth-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::UserextItems::LogindomainItems::LoginDomainList::DomainauthItems::ConsoleauthItems::~ConsoleauthItems()
{
}

bool System::UserextItems::LogindomainItems::LoginDomainList::DomainauthItems::ConsoleauthItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set
	|| realm.is_set
	|| providergroup.is_set
	|| providergroup2.is_set
	|| providergroup3.is_set
	|| providergroup4.is_set
	|| providergroup5.is_set
	|| providergroup6.is_set
	|| providergroup7.is_set
	|| providergroup8.is_set
	|| erren.is_set
	|| authprotocol.is_set
	|| fallback.is_set
	|| local.is_set
	|| none.is_set;
}

bool System::UserextItems::LogindomainItems::LoginDomainList::DomainauthItems::ConsoleauthItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(realm.yfilter)
	|| ydk::is_set(providergroup.yfilter)
	|| ydk::is_set(providergroup2.yfilter)
	|| ydk::is_set(providergroup3.yfilter)
	|| ydk::is_set(providergroup4.yfilter)
	|| ydk::is_set(providergroup5.yfilter)
	|| ydk::is_set(providergroup6.yfilter)
	|| ydk::is_set(providergroup7.yfilter)
	|| ydk::is_set(providergroup8.yfilter)
	|| ydk::is_set(erren.yfilter)
	|| ydk::is_set(authprotocol.yfilter)
	|| ydk::is_set(fallback.yfilter)
	|| ydk::is_set(local.yfilter)
	|| ydk::is_set(none.yfilter);
}

std::string System::UserextItems::LogindomainItems::LoginDomainList::DomainauthItems::ConsoleauthItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "consoleauth-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::LogindomainItems::LoginDomainList::DomainauthItems::ConsoleauthItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (realm.is_set || is_set(realm.yfilter)) leaf_name_data.push_back(realm.get_name_leafdata());
    if (providergroup.is_set || is_set(providergroup.yfilter)) leaf_name_data.push_back(providergroup.get_name_leafdata());
    if (providergroup2.is_set || is_set(providergroup2.yfilter)) leaf_name_data.push_back(providergroup2.get_name_leafdata());
    if (providergroup3.is_set || is_set(providergroup3.yfilter)) leaf_name_data.push_back(providergroup3.get_name_leafdata());
    if (providergroup4.is_set || is_set(providergroup4.yfilter)) leaf_name_data.push_back(providergroup4.get_name_leafdata());
    if (providergroup5.is_set || is_set(providergroup5.yfilter)) leaf_name_data.push_back(providergroup5.get_name_leafdata());
    if (providergroup6.is_set || is_set(providergroup6.yfilter)) leaf_name_data.push_back(providergroup6.get_name_leafdata());
    if (providergroup7.is_set || is_set(providergroup7.yfilter)) leaf_name_data.push_back(providergroup7.get_name_leafdata());
    if (providergroup8.is_set || is_set(providergroup8.yfilter)) leaf_name_data.push_back(providergroup8.get_name_leafdata());
    if (erren.is_set || is_set(erren.yfilter)) leaf_name_data.push_back(erren.get_name_leafdata());
    if (authprotocol.is_set || is_set(authprotocol.yfilter)) leaf_name_data.push_back(authprotocol.get_name_leafdata());
    if (fallback.is_set || is_set(fallback.yfilter)) leaf_name_data.push_back(fallback.get_name_leafdata());
    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::UserextItems::LogindomainItems::LoginDomainList::DomainauthItems::ConsoleauthItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::UserextItems::LogindomainItems::LoginDomainList::DomainauthItems::ConsoleauthItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::UserextItems::LogindomainItems::LoginDomainList::DomainauthItems::ConsoleauthItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerKey")
    {
        ownerkey = value;
        ownerkey.value_namespace = name_space;
        ownerkey.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerTag")
    {
        ownertag = value;
        ownertag.value_namespace = name_space;
        ownertag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "realm")
    {
        realm = value;
        realm.value_namespace = name_space;
        realm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup")
    {
        providergroup = value;
        providergroup.value_namespace = name_space;
        providergroup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup2")
    {
        providergroup2 = value;
        providergroup2.value_namespace = name_space;
        providergroup2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup3")
    {
        providergroup3 = value;
        providergroup3.value_namespace = name_space;
        providergroup3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup4")
    {
        providergroup4 = value;
        providergroup4.value_namespace = name_space;
        providergroup4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup5")
    {
        providergroup5 = value;
        providergroup5.value_namespace = name_space;
        providergroup5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup6")
    {
        providergroup6 = value;
        providergroup6.value_namespace = name_space;
        providergroup6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup7")
    {
        providergroup7 = value;
        providergroup7.value_namespace = name_space;
        providergroup7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "providerGroup8")
    {
        providergroup8 = value;
        providergroup8.value_namespace = name_space;
        providergroup8.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errEn")
    {
        erren = value;
        erren.value_namespace = name_space;
        erren.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authProtocol")
    {
        authprotocol = value;
        authprotocol.value_namespace = name_space;
        authprotocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fallback")
    {
        fallback = value;
        fallback.value_namespace = name_space;
        fallback.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
}

void System::UserextItems::LogindomainItems::LoginDomainList::DomainauthItems::ConsoleauthItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ownerKey")
    {
        ownerkey.yfilter = yfilter;
    }
    if(value_path == "ownerTag")
    {
        ownertag.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "realm")
    {
        realm.yfilter = yfilter;
    }
    if(value_path == "providerGroup")
    {
        providergroup.yfilter = yfilter;
    }
    if(value_path == "providerGroup2")
    {
        providergroup2.yfilter = yfilter;
    }
    if(value_path == "providerGroup3")
    {
        providergroup3.yfilter = yfilter;
    }
    if(value_path == "providerGroup4")
    {
        providergroup4.yfilter = yfilter;
    }
    if(value_path == "providerGroup5")
    {
        providergroup5.yfilter = yfilter;
    }
    if(value_path == "providerGroup6")
    {
        providergroup6.yfilter = yfilter;
    }
    if(value_path == "providerGroup7")
    {
        providergroup7.yfilter = yfilter;
    }
    if(value_path == "providerGroup8")
    {
        providergroup8.yfilter = yfilter;
    }
    if(value_path == "errEn")
    {
        erren.yfilter = yfilter;
    }
    if(value_path == "authProtocol")
    {
        authprotocol.yfilter = yfilter;
    }
    if(value_path == "fallback")
    {
        fallback.yfilter = yfilter;
    }
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
}

bool System::UserextItems::LogindomainItems::LoginDomainList::DomainauthItems::ConsoleauthItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "ownerKey" || name == "ownerTag" || name == "descr" || name == "realm" || name == "providerGroup" || name == "providerGroup2" || name == "providerGroup3" || name == "providerGroup4" || name == "providerGroup5" || name == "providerGroup6" || name == "providerGroup7" || name == "providerGroup8" || name == "errEn" || name == "authProtocol" || name == "fallback" || name == "local" || name == "none")
        return true;
    return false;
}

System::UserextItems::LogindomainItems::LoginDomainList::RtaaaLoginDomainItems::RtaaaLoginDomainItems()
    :
    rtaaalogindomain_list(this, {"tdn"})
{

    yang_name = "rtaaaLoginDomain-items"; yang_parent_name = "LoginDomain-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::UserextItems::LogindomainItems::LoginDomainList::RtaaaLoginDomainItems::~RtaaaLoginDomainItems()
{
}

bool System::UserextItems::LogindomainItems::LoginDomainList::RtaaaLoginDomainItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtaaalogindomain_list.len(); index++)
    {
        if(rtaaalogindomain_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::UserextItems::LogindomainItems::LoginDomainList::RtaaaLoginDomainItems::has_operation() const
{
    for (std::size_t index=0; index<rtaaalogindomain_list.len(); index++)
    {
        if(rtaaalogindomain_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::UserextItems::LogindomainItems::LoginDomainList::RtaaaLoginDomainItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtaaaLoginDomain-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::LogindomainItems::LoginDomainList::RtaaaLoginDomainItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::UserextItems::LogindomainItems::LoginDomainList::RtaaaLoginDomainItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtAaaLoginDomain-list")
    {
        auto ent_ = std::make_shared<System::UserextItems::LogindomainItems::LoginDomainList::RtaaaLoginDomainItems::RtAaaLoginDomainList>();
        ent_->parent = this;
        rtaaalogindomain_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::UserextItems::LogindomainItems::LoginDomainList::RtaaaLoginDomainItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rtaaalogindomain_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::UserextItems::LogindomainItems::LoginDomainList::RtaaaLoginDomainItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::UserextItems::LogindomainItems::LoginDomainList::RtaaaLoginDomainItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::UserextItems::LogindomainItems::LoginDomainList::RtaaaLoginDomainItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtAaaLoginDomain-list")
        return true;
    return false;
}

System::UserextItems::LogindomainItems::LoginDomainList::RtaaaLoginDomainItems::RtAaaLoginDomainList::RtAaaLoginDomainList()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "RtAaaLoginDomain-list"; yang_parent_name = "rtaaaLoginDomain-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::UserextItems::LogindomainItems::LoginDomainList::RtaaaLoginDomainItems::RtAaaLoginDomainList::~RtAaaLoginDomainList()
{
}

bool System::UserextItems::LogindomainItems::LoginDomainList::RtaaaLoginDomainItems::RtAaaLoginDomainList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::UserextItems::LogindomainItems::LoginDomainList::RtaaaLoginDomainItems::RtAaaLoginDomainList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::UserextItems::LogindomainItems::LoginDomainList::RtaaaLoginDomainItems::RtAaaLoginDomainList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtAaaLoginDomain-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::LogindomainItems::LoginDomainList::RtaaaLoginDomainItems::RtAaaLoginDomainList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::UserextItems::LogindomainItems::LoginDomainList::RtaaaLoginDomainItems::RtAaaLoginDomainList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::UserextItems::LogindomainItems::LoginDomainList::RtaaaLoginDomainItems::RtAaaLoginDomainList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::UserextItems::LogindomainItems::LoginDomainList::RtaaaLoginDomainItems::RtAaaLoginDomainList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::UserextItems::LogindomainItems::LoginDomainList::RtaaaLoginDomainItems::RtAaaLoginDomainList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::UserextItems::LogindomainItems::LoginDomainList::RtaaaLoginDomainItems::RtAaaLoginDomainList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::UserextItems::PostloginbannerItems::PostloginbannerItems()
    :
    name{YType::str, "name"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"},
    message{YType::str, "message"},
    guimessage{YType::str, "guiMessage"},
    delimiter{YType::str, "delimiter"}
{

    yang_name = "postloginbanner-items"; yang_parent_name = "userext-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::PostloginbannerItems::~PostloginbannerItems()
{
}

bool System::UserextItems::PostloginbannerItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set
	|| message.is_set
	|| guimessage.is_set
	|| delimiter.is_set;
}

bool System::UserextItems::PostloginbannerItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(message.yfilter)
	|| ydk::is_set(guimessage.yfilter)
	|| ydk::is_set(delimiter.yfilter);
}

std::string System::UserextItems::PostloginbannerItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/userext-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::PostloginbannerItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "postloginbanner-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::PostloginbannerItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (message.is_set || is_set(message.yfilter)) leaf_name_data.push_back(message.get_name_leafdata());
    if (guimessage.is_set || is_set(guimessage.yfilter)) leaf_name_data.push_back(guimessage.get_name_leafdata());
    if (delimiter.is_set || is_set(delimiter.yfilter)) leaf_name_data.push_back(delimiter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::UserextItems::PostloginbannerItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::UserextItems::PostloginbannerItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::UserextItems::PostloginbannerItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerKey")
    {
        ownerkey = value;
        ownerkey.value_namespace = name_space;
        ownerkey.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerTag")
    {
        ownertag = value;
        ownertag.value_namespace = name_space;
        ownertag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "message")
    {
        message = value;
        message.value_namespace = name_space;
        message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "guiMessage")
    {
        guimessage = value;
        guimessage.value_namespace = name_space;
        guimessage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delimiter")
    {
        delimiter = value;
        delimiter.value_namespace = name_space;
        delimiter.value_namespace_prefix = name_space_prefix;
    }
}

void System::UserextItems::PostloginbannerItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ownerKey")
    {
        ownerkey.yfilter = yfilter;
    }
    if(value_path == "ownerTag")
    {
        ownertag.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "message")
    {
        message.yfilter = yfilter;
    }
    if(value_path == "guiMessage")
    {
        guimessage.yfilter = yfilter;
    }
    if(value_path == "delimiter")
    {
        delimiter.yfilter = yfilter;
    }
}

bool System::UserextItems::PostloginbannerItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "ownerKey" || name == "ownerTag" || name == "descr" || name == "message" || name == "guiMessage" || name == "delimiter")
        return true;
    return false;
}

System::UserextItems::PreloginbannerItems::PreloginbannerItems()
    :
    name{YType::str, "name"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"},
    message{YType::str, "message"},
    guimessage{YType::str, "guiMessage"},
    delimiter{YType::str, "delimiter"}
        ,
    rtpreloginbanner_items(std::make_shared<System::UserextItems::PreloginbannerItems::RtpreLoginBannerItems>())
{
    rtpreloginbanner_items->parent = this;

    yang_name = "preloginbanner-items"; yang_parent_name = "userext-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::PreloginbannerItems::~PreloginbannerItems()
{
}

bool System::UserextItems::PreloginbannerItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set
	|| message.is_set
	|| guimessage.is_set
	|| delimiter.is_set
	|| (rtpreloginbanner_items !=  nullptr && rtpreloginbanner_items->has_data());
}

bool System::UserextItems::PreloginbannerItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(message.yfilter)
	|| ydk::is_set(guimessage.yfilter)
	|| ydk::is_set(delimiter.yfilter)
	|| (rtpreloginbanner_items !=  nullptr && rtpreloginbanner_items->has_operation());
}

std::string System::UserextItems::PreloginbannerItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/userext-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::PreloginbannerItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "preloginbanner-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::PreloginbannerItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (message.is_set || is_set(message.yfilter)) leaf_name_data.push_back(message.get_name_leafdata());
    if (guimessage.is_set || is_set(guimessage.yfilter)) leaf_name_data.push_back(guimessage.get_name_leafdata());
    if (delimiter.is_set || is_set(delimiter.yfilter)) leaf_name_data.push_back(delimiter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::UserextItems::PreloginbannerItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rtpreLoginBanner-items")
    {
        if(rtpreloginbanner_items == nullptr)
        {
            rtpreloginbanner_items = std::make_shared<System::UserextItems::PreloginbannerItems::RtpreLoginBannerItems>();
        }
        return rtpreloginbanner_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::UserextItems::PreloginbannerItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rtpreloginbanner_items != nullptr)
    {
        _children["rtpreLoginBanner-items"] = rtpreloginbanner_items;
    }

    return _children;
}

void System::UserextItems::PreloginbannerItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerKey")
    {
        ownerkey = value;
        ownerkey.value_namespace = name_space;
        ownerkey.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerTag")
    {
        ownertag = value;
        ownertag.value_namespace = name_space;
        ownertag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "message")
    {
        message = value;
        message.value_namespace = name_space;
        message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "guiMessage")
    {
        guimessage = value;
        guimessage.value_namespace = name_space;
        guimessage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delimiter")
    {
        delimiter = value;
        delimiter.value_namespace = name_space;
        delimiter.value_namespace_prefix = name_space_prefix;
    }
}

void System::UserextItems::PreloginbannerItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ownerKey")
    {
        ownerkey.yfilter = yfilter;
    }
    if(value_path == "ownerTag")
    {
        ownertag.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "message")
    {
        message.yfilter = yfilter;
    }
    if(value_path == "guiMessage")
    {
        guimessage.yfilter = yfilter;
    }
    if(value_path == "delimiter")
    {
        delimiter.yfilter = yfilter;
    }
}

bool System::UserextItems::PreloginbannerItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtpreLoginBanner-items" || name == "name" || name == "ownerKey" || name == "ownerTag" || name == "descr" || name == "message" || name == "guiMessage" || name == "delimiter")
        return true;
    return false;
}

System::UserextItems::PreloginbannerItems::RtpreLoginBannerItems::RtpreLoginBannerItems()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "rtpreLoginBanner-items"; yang_parent_name = "preloginbanner-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::PreloginbannerItems::RtpreLoginBannerItems::~RtpreLoginBannerItems()
{
}

bool System::UserextItems::PreloginbannerItems::RtpreLoginBannerItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::UserextItems::PreloginbannerItems::RtpreLoginBannerItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::UserextItems::PreloginbannerItems::RtpreLoginBannerItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/userext-items/preloginbanner-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::PreloginbannerItems::RtpreLoginBannerItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtpreLoginBanner-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::PreloginbannerItems::RtpreLoginBannerItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::UserextItems::PreloginbannerItems::RtpreLoginBannerItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::UserextItems::PreloginbannerItems::RtpreLoginBannerItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::UserextItems::PreloginbannerItems::RtpreLoginBannerItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::UserextItems::PreloginbannerItems::RtpreLoginBannerItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::UserextItems::PreloginbannerItems::RtpreLoginBannerItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::UserextItems::RemoteuserItems::RemoteuserItems()
    :
    remoteuser_list(this, {"name"})
{

    yang_name = "remoteuser-items"; yang_parent_name = "userext-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::RemoteuserItems::~RemoteuserItems()
{
}

bool System::UserextItems::RemoteuserItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<remoteuser_list.len(); index++)
    {
        if(remoteuser_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::UserextItems::RemoteuserItems::has_operation() const
{
    for (std::size_t index=0; index<remoteuser_list.len(); index++)
    {
        if(remoteuser_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::UserextItems::RemoteuserItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/userext-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::RemoteuserItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remoteuser-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::RemoteuserItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::UserextItems::RemoteuserItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RemoteUser-list")
    {
        auto ent_ = std::make_shared<System::UserextItems::RemoteuserItems::RemoteUserList>();
        ent_->parent = this;
        remoteuser_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::UserextItems::RemoteuserItems::get_children() const
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

void System::UserextItems::RemoteuserItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::UserextItems::RemoteuserItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::UserextItems::RemoteuserItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RemoteUser-list")
        return true;
    return false;
}

System::UserextItems::RemoteuserItems::RemoteUserList::RemoteUserList()
    :
    name{YType::str, "name"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"}
        ,
    userdomain_items(std::make_shared<System::UserextItems::RemoteuserItems::RemoteUserList::UserdomainItems>())
{
    userdomain_items->parent = this;

    yang_name = "RemoteUser-list"; yang_parent_name = "remoteuser-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::RemoteuserItems::RemoteUserList::~RemoteUserList()
{
}

bool System::UserextItems::RemoteuserItems::RemoteUserList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set
	|| (userdomain_items !=  nullptr && userdomain_items->has_data());
}

bool System::UserextItems::RemoteuserItems::RemoteUserList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| (userdomain_items !=  nullptr && userdomain_items->has_operation());
}

std::string System::UserextItems::RemoteuserItems::RemoteUserList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/userext-items/remoteuser-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::RemoteuserItems::RemoteUserList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RemoteUser-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::RemoteuserItems::RemoteUserList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::UserextItems::RemoteuserItems::RemoteUserList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "userdomain-items")
    {
        if(userdomain_items == nullptr)
        {
            userdomain_items = std::make_shared<System::UserextItems::RemoteuserItems::RemoteUserList::UserdomainItems>();
        }
        return userdomain_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::UserextItems::RemoteuserItems::RemoteUserList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(userdomain_items != nullptr)
    {
        _children["userdomain-items"] = userdomain_items;
    }

    return _children;
}

void System::UserextItems::RemoteuserItems::RemoteUserList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerKey")
    {
        ownerkey = value;
        ownerkey.value_namespace = name_space;
        ownerkey.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerTag")
    {
        ownertag = value;
        ownertag.value_namespace = name_space;
        ownertag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::UserextItems::RemoteuserItems::RemoteUserList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ownerKey")
    {
        ownerkey.yfilter = yfilter;
    }
    if(value_path == "ownerTag")
    {
        ownertag.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::UserextItems::RemoteuserItems::RemoteUserList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "userdomain-items" || name == "name" || name == "ownerKey" || name == "ownerTag" || name == "descr")
        return true;
    return false;
}

System::UserextItems::RemoteuserItems::RemoteUserList::UserdomainItems::UserdomainItems()
    :
    remoteuserdomain_list(this, {"name"})
{

    yang_name = "userdomain-items"; yang_parent_name = "RemoteUser-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::UserextItems::RemoteuserItems::RemoteUserList::UserdomainItems::~UserdomainItems()
{
}

bool System::UserextItems::RemoteuserItems::RemoteUserList::UserdomainItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<remoteuserdomain_list.len(); index++)
    {
        if(remoteuserdomain_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::UserextItems::RemoteuserItems::RemoteUserList::UserdomainItems::has_operation() const
{
    for (std::size_t index=0; index<remoteuserdomain_list.len(); index++)
    {
        if(remoteuserdomain_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::UserextItems::RemoteuserItems::RemoteUserList::UserdomainItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "userdomain-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::RemoteuserItems::RemoteUserList::UserdomainItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::UserextItems::RemoteuserItems::RemoteUserList::UserdomainItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RemoteUserDomain-list")
    {
        auto ent_ = std::make_shared<System::UserextItems::RemoteuserItems::RemoteUserList::UserdomainItems::RemoteUserDomainList>();
        ent_->parent = this;
        remoteuserdomain_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::UserextItems::RemoteuserItems::RemoteUserList::UserdomainItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : remoteuserdomain_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::UserextItems::RemoteuserItems::RemoteUserList::UserdomainItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::UserextItems::RemoteuserItems::RemoteUserList::UserdomainItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::UserextItems::RemoteuserItems::RemoteUserList::UserdomainItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RemoteUserDomain-list")
        return true;
    return false;
}

System::UserextItems::RemoteuserItems::RemoteUserList::UserdomainItems::RemoteUserDomainList::RemoteUserDomainList()
    :
    name{YType::str, "name"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"}
        ,
    role_items(std::make_shared<System::UserextItems::RemoteuserItems::RemoteUserList::UserdomainItems::RemoteUserDomainList::RoleItems>())
{
    role_items->parent = this;

    yang_name = "RemoteUserDomain-list"; yang_parent_name = "userdomain-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::UserextItems::RemoteuserItems::RemoteUserList::UserdomainItems::RemoteUserDomainList::~RemoteUserDomainList()
{
}

bool System::UserextItems::RemoteuserItems::RemoteUserList::UserdomainItems::RemoteUserDomainList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set
	|| (role_items !=  nullptr && role_items->has_data());
}

bool System::UserextItems::RemoteuserItems::RemoteUserList::UserdomainItems::RemoteUserDomainList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| (role_items !=  nullptr && role_items->has_operation());
}

std::string System::UserextItems::RemoteuserItems::RemoteUserList::UserdomainItems::RemoteUserDomainList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RemoteUserDomain-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::RemoteuserItems::RemoteUserList::UserdomainItems::RemoteUserDomainList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::UserextItems::RemoteuserItems::RemoteUserList::UserdomainItems::RemoteUserDomainList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "role-items")
    {
        if(role_items == nullptr)
        {
            role_items = std::make_shared<System::UserextItems::RemoteuserItems::RemoteUserList::UserdomainItems::RemoteUserDomainList::RoleItems>();
        }
        return role_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::UserextItems::RemoteuserItems::RemoteUserList::UserdomainItems::RemoteUserDomainList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(role_items != nullptr)
    {
        _children["role-items"] = role_items;
    }

    return _children;
}

void System::UserextItems::RemoteuserItems::RemoteUserList::UserdomainItems::RemoteUserDomainList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerKey")
    {
        ownerkey = value;
        ownerkey.value_namespace = name_space;
        ownerkey.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerTag")
    {
        ownertag = value;
        ownertag.value_namespace = name_space;
        ownertag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::UserextItems::RemoteuserItems::RemoteUserList::UserdomainItems::RemoteUserDomainList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ownerKey")
    {
        ownerkey.yfilter = yfilter;
    }
    if(value_path == "ownerTag")
    {
        ownertag.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::UserextItems::RemoteuserItems::RemoteUserList::UserdomainItems::RemoteUserDomainList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "role-items" || name == "name" || name == "ownerKey" || name == "ownerTag" || name == "descr")
        return true;
    return false;
}

System::UserextItems::RemoteuserItems::RemoteUserList::UserdomainItems::RemoteUserDomainList::RoleItems::RoleItems()
    :
    remoteuserrole_list(this, {"name"})
{

    yang_name = "role-items"; yang_parent_name = "RemoteUserDomain-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::UserextItems::RemoteuserItems::RemoteUserList::UserdomainItems::RemoteUserDomainList::RoleItems::~RoleItems()
{
}

bool System::UserextItems::RemoteuserItems::RemoteUserList::UserdomainItems::RemoteUserDomainList::RoleItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<remoteuserrole_list.len(); index++)
    {
        if(remoteuserrole_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::UserextItems::RemoteuserItems::RemoteUserList::UserdomainItems::RemoteUserDomainList::RoleItems::has_operation() const
{
    for (std::size_t index=0; index<remoteuserrole_list.len(); index++)
    {
        if(remoteuserrole_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::UserextItems::RemoteuserItems::RemoteUserList::UserdomainItems::RemoteUserDomainList::RoleItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "role-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::RemoteuserItems::RemoteUserList::UserdomainItems::RemoteUserDomainList::RoleItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::UserextItems::RemoteuserItems::RemoteUserList::UserdomainItems::RemoteUserDomainList::RoleItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RemoteUserRole-list")
    {
        auto ent_ = std::make_shared<System::UserextItems::RemoteuserItems::RemoteUserList::UserdomainItems::RemoteUserDomainList::RoleItems::RemoteUserRoleList>();
        ent_->parent = this;
        remoteuserrole_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::UserextItems::RemoteuserItems::RemoteUserList::UserdomainItems::RemoteUserDomainList::RoleItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : remoteuserrole_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::UserextItems::RemoteuserItems::RemoteUserList::UserdomainItems::RemoteUserDomainList::RoleItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::UserextItems::RemoteuserItems::RemoteUserList::UserdomainItems::RemoteUserDomainList::RoleItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::UserextItems::RemoteuserItems::RemoteUserList::UserdomainItems::RemoteUserDomainList::RoleItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RemoteUserRole-list")
        return true;
    return false;
}

System::UserextItems::RemoteuserItems::RemoteUserList::UserdomainItems::RemoteUserDomainList::RoleItems::RemoteUserRoleList::RemoteUserRoleList()
    :
    name{YType::str, "name"},
    privtype{YType::enumeration, "privType"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"}
{

    yang_name = "RemoteUserRole-list"; yang_parent_name = "role-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::UserextItems::RemoteuserItems::RemoteUserList::UserdomainItems::RemoteUserDomainList::RoleItems::RemoteUserRoleList::~RemoteUserRoleList()
{
}

bool System::UserextItems::RemoteuserItems::RemoteUserList::UserdomainItems::RemoteUserDomainList::RoleItems::RemoteUserRoleList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| privtype.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set;
}

bool System::UserextItems::RemoteuserItems::RemoteUserList::UserdomainItems::RemoteUserDomainList::RoleItems::RemoteUserRoleList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(privtype.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::UserextItems::RemoteuserItems::RemoteUserList::UserdomainItems::RemoteUserDomainList::RoleItems::RemoteUserRoleList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RemoteUserRole-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::RemoteuserItems::RemoteUserList::UserdomainItems::RemoteUserDomainList::RoleItems::RemoteUserRoleList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (privtype.is_set || is_set(privtype.yfilter)) leaf_name_data.push_back(privtype.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::UserextItems::RemoteuserItems::RemoteUserList::UserdomainItems::RemoteUserDomainList::RoleItems::RemoteUserRoleList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::UserextItems::RemoteuserItems::RemoteUserList::UserdomainItems::RemoteUserDomainList::RoleItems::RemoteUserRoleList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::UserextItems::RemoteuserItems::RemoteUserList::UserdomainItems::RemoteUserDomainList::RoleItems::RemoteUserRoleList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "privType")
    {
        privtype = value;
        privtype.value_namespace = name_space;
        privtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerKey")
    {
        ownerkey = value;
        ownerkey.value_namespace = name_space;
        ownerkey.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerTag")
    {
        ownertag = value;
        ownertag.value_namespace = name_space;
        ownertag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::UserextItems::RemoteuserItems::RemoteUserList::UserdomainItems::RemoteUserDomainList::RoleItems::RemoteUserRoleList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "privType")
    {
        privtype.yfilter = yfilter;
    }
    if(value_path == "ownerKey")
    {
        ownerkey.yfilter = yfilter;
    }
    if(value_path == "ownerTag")
    {
        ownertag.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::UserextItems::RemoteuserItems::RemoteUserList::UserdomainItems::RemoteUserDomainList::RoleItems::RemoteUserRoleList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "privType" || name == "ownerKey" || name == "ownerTag" || name == "descr")
        return true;
    return false;
}

System::UserextItems::UserItems::UserItems()
    :
    user_list(this, {"name"})
{

    yang_name = "user-items"; yang_parent_name = "userext-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::UserItems::~UserItems()
{
}

bool System::UserextItems::UserItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<user_list.len(); index++)
    {
        if(user_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::UserextItems::UserItems::has_operation() const
{
    for (std::size_t index=0; index<user_list.len(); index++)
    {
        if(user_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::UserextItems::UserItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/userext-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::UserItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "user-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::UserItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::UserextItems::UserItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "User-list")
    {
        auto ent_ = std::make_shared<System::UserextItems::UserItems::UserList>();
        ent_->parent = this;
        user_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::UserextItems::UserItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : user_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::UserextItems::UserItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::UserextItems::UserItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::UserextItems::UserItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "User-list")
        return true;
    return false;
}

System::UserextItems::UserItems::UserList::UserList()
    :
    name{YType::str, "name"},
    firstname{YType::str, "firstName"},
    lastname{YType::str, "lastName"},
    email{YType::str, "email"},
    phone{YType::str, "phone"},
    expiration{YType::str, "expiration"},
    expires{YType::enumeration, "expires"},
    allowexpired{YType::enumeration, "allowExpired"},
    accountstatus{YType::enumeration, "accountStatus"},
    pwd{YType::str, "pwd"},
    pwdencrypttype{YType::enumeration, "pwdEncryptType"},
    pwdlifetime{YType::uint16, "pwdLifeTime"},
    clearpwdhistory{YType::enumeration, "clearPwdHistory"},
    unixuserid{YType::uint16, "unixUserId"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"}
        ,
    sshcertauth_items(std::make_shared<System::UserextItems::UserItems::UserList::SshcertauthItems>())
    , sshauth_items(std::make_shared<System::UserextItems::UserItems::UserList::SshauthItems>())
    , usercert_items(std::make_shared<System::UserextItems::UserItems::UserList::UsercertItems>())
    , userdomain_items(std::make_shared<System::UserextItems::UserItems::UserList::UserdomainItems>())
    , userdata_items(std::make_shared<System::UserextItems::UserItems::UserList::UserdataItems>())
{
    sshcertauth_items->parent = this;
    sshauth_items->parent = this;
    usercert_items->parent = this;
    userdomain_items->parent = this;
    userdata_items->parent = this;

    yang_name = "User-list"; yang_parent_name = "user-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::UserItems::UserList::~UserList()
{
}

bool System::UserextItems::UserItems::UserList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| firstname.is_set
	|| lastname.is_set
	|| email.is_set
	|| phone.is_set
	|| expiration.is_set
	|| expires.is_set
	|| allowexpired.is_set
	|| accountstatus.is_set
	|| pwd.is_set
	|| pwdencrypttype.is_set
	|| pwdlifetime.is_set
	|| clearpwdhistory.is_set
	|| unixuserid.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set
	|| (sshcertauth_items !=  nullptr && sshcertauth_items->has_data())
	|| (sshauth_items !=  nullptr && sshauth_items->has_data())
	|| (usercert_items !=  nullptr && usercert_items->has_data())
	|| (userdomain_items !=  nullptr && userdomain_items->has_data())
	|| (userdata_items !=  nullptr && userdata_items->has_data());
}

bool System::UserextItems::UserItems::UserList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(firstname.yfilter)
	|| ydk::is_set(lastname.yfilter)
	|| ydk::is_set(email.yfilter)
	|| ydk::is_set(phone.yfilter)
	|| ydk::is_set(expiration.yfilter)
	|| ydk::is_set(expires.yfilter)
	|| ydk::is_set(allowexpired.yfilter)
	|| ydk::is_set(accountstatus.yfilter)
	|| ydk::is_set(pwd.yfilter)
	|| ydk::is_set(pwdencrypttype.yfilter)
	|| ydk::is_set(pwdlifetime.yfilter)
	|| ydk::is_set(clearpwdhistory.yfilter)
	|| ydk::is_set(unixuserid.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| (sshcertauth_items !=  nullptr && sshcertauth_items->has_operation())
	|| (sshauth_items !=  nullptr && sshauth_items->has_operation())
	|| (usercert_items !=  nullptr && usercert_items->has_operation())
	|| (userdomain_items !=  nullptr && userdomain_items->has_operation())
	|| (userdata_items !=  nullptr && userdata_items->has_operation());
}

std::string System::UserextItems::UserItems::UserList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/userext-items/user-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::UserItems::UserList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "User-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::UserItems::UserList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (firstname.is_set || is_set(firstname.yfilter)) leaf_name_data.push_back(firstname.get_name_leafdata());
    if (lastname.is_set || is_set(lastname.yfilter)) leaf_name_data.push_back(lastname.get_name_leafdata());
    if (email.is_set || is_set(email.yfilter)) leaf_name_data.push_back(email.get_name_leafdata());
    if (phone.is_set || is_set(phone.yfilter)) leaf_name_data.push_back(phone.get_name_leafdata());
    if (expiration.is_set || is_set(expiration.yfilter)) leaf_name_data.push_back(expiration.get_name_leafdata());
    if (expires.is_set || is_set(expires.yfilter)) leaf_name_data.push_back(expires.get_name_leafdata());
    if (allowexpired.is_set || is_set(allowexpired.yfilter)) leaf_name_data.push_back(allowexpired.get_name_leafdata());
    if (accountstatus.is_set || is_set(accountstatus.yfilter)) leaf_name_data.push_back(accountstatus.get_name_leafdata());
    if (pwd.is_set || is_set(pwd.yfilter)) leaf_name_data.push_back(pwd.get_name_leafdata());
    if (pwdencrypttype.is_set || is_set(pwdencrypttype.yfilter)) leaf_name_data.push_back(pwdencrypttype.get_name_leafdata());
    if (pwdlifetime.is_set || is_set(pwdlifetime.yfilter)) leaf_name_data.push_back(pwdlifetime.get_name_leafdata());
    if (clearpwdhistory.is_set || is_set(clearpwdhistory.yfilter)) leaf_name_data.push_back(clearpwdhistory.get_name_leafdata());
    if (unixuserid.is_set || is_set(unixuserid.yfilter)) leaf_name_data.push_back(unixuserid.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::UserextItems::UserItems::UserList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sshcertauth-items")
    {
        if(sshcertauth_items == nullptr)
        {
            sshcertauth_items = std::make_shared<System::UserextItems::UserItems::UserList::SshcertauthItems>();
        }
        return sshcertauth_items;
    }

    if(child_yang_name == "sshauth-items")
    {
        if(sshauth_items == nullptr)
        {
            sshauth_items = std::make_shared<System::UserextItems::UserItems::UserList::SshauthItems>();
        }
        return sshauth_items;
    }

    if(child_yang_name == "usercert-items")
    {
        if(usercert_items == nullptr)
        {
            usercert_items = std::make_shared<System::UserextItems::UserItems::UserList::UsercertItems>();
        }
        return usercert_items;
    }

    if(child_yang_name == "userdomain-items")
    {
        if(userdomain_items == nullptr)
        {
            userdomain_items = std::make_shared<System::UserextItems::UserItems::UserList::UserdomainItems>();
        }
        return userdomain_items;
    }

    if(child_yang_name == "userdata-items")
    {
        if(userdata_items == nullptr)
        {
            userdata_items = std::make_shared<System::UserextItems::UserItems::UserList::UserdataItems>();
        }
        return userdata_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::UserextItems::UserItems::UserList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sshcertauth_items != nullptr)
    {
        _children["sshcertauth-items"] = sshcertauth_items;
    }

    if(sshauth_items != nullptr)
    {
        _children["sshauth-items"] = sshauth_items;
    }

    if(usercert_items != nullptr)
    {
        _children["usercert-items"] = usercert_items;
    }

    if(userdomain_items != nullptr)
    {
        _children["userdomain-items"] = userdomain_items;
    }

    if(userdata_items != nullptr)
    {
        _children["userdata-items"] = userdata_items;
    }

    return _children;
}

void System::UserextItems::UserItems::UserList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "firstName")
    {
        firstname = value;
        firstname.value_namespace = name_space;
        firstname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lastName")
    {
        lastname = value;
        lastname.value_namespace = name_space;
        lastname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "email")
    {
        email = value;
        email.value_namespace = name_space;
        email.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "phone")
    {
        phone = value;
        phone.value_namespace = name_space;
        phone.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expiration")
    {
        expiration = value;
        expiration.value_namespace = name_space;
        expiration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expires")
    {
        expires = value;
        expires.value_namespace = name_space;
        expires.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allowExpired")
    {
        allowexpired = value;
        allowexpired.value_namespace = name_space;
        allowexpired.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accountStatus")
    {
        accountstatus = value;
        accountstatus.value_namespace = name_space;
        accountstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pwd")
    {
        pwd = value;
        pwd.value_namespace = name_space;
        pwd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pwdEncryptType")
    {
        pwdencrypttype = value;
        pwdencrypttype.value_namespace = name_space;
        pwdencrypttype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pwdLifeTime")
    {
        pwdlifetime = value;
        pwdlifetime.value_namespace = name_space;
        pwdlifetime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clearPwdHistory")
    {
        clearpwdhistory = value;
        clearpwdhistory.value_namespace = name_space;
        clearpwdhistory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unixUserId")
    {
        unixuserid = value;
        unixuserid.value_namespace = name_space;
        unixuserid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerKey")
    {
        ownerkey = value;
        ownerkey.value_namespace = name_space;
        ownerkey.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerTag")
    {
        ownertag = value;
        ownertag.value_namespace = name_space;
        ownertag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::UserextItems::UserItems::UserList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "firstName")
    {
        firstname.yfilter = yfilter;
    }
    if(value_path == "lastName")
    {
        lastname.yfilter = yfilter;
    }
    if(value_path == "email")
    {
        email.yfilter = yfilter;
    }
    if(value_path == "phone")
    {
        phone.yfilter = yfilter;
    }
    if(value_path == "expiration")
    {
        expiration.yfilter = yfilter;
    }
    if(value_path == "expires")
    {
        expires.yfilter = yfilter;
    }
    if(value_path == "allowExpired")
    {
        allowexpired.yfilter = yfilter;
    }
    if(value_path == "accountStatus")
    {
        accountstatus.yfilter = yfilter;
    }
    if(value_path == "pwd")
    {
        pwd.yfilter = yfilter;
    }
    if(value_path == "pwdEncryptType")
    {
        pwdencrypttype.yfilter = yfilter;
    }
    if(value_path == "pwdLifeTime")
    {
        pwdlifetime.yfilter = yfilter;
    }
    if(value_path == "clearPwdHistory")
    {
        clearpwdhistory.yfilter = yfilter;
    }
    if(value_path == "unixUserId")
    {
        unixuserid.yfilter = yfilter;
    }
    if(value_path == "ownerKey")
    {
        ownerkey.yfilter = yfilter;
    }
    if(value_path == "ownerTag")
    {
        ownertag.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::UserextItems::UserItems::UserList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sshcertauth-items" || name == "sshauth-items" || name == "usercert-items" || name == "userdomain-items" || name == "userdata-items" || name == "name" || name == "firstName" || name == "lastName" || name == "email" || name == "phone" || name == "expiration" || name == "expires" || name == "allowExpired" || name == "accountStatus" || name == "pwd" || name == "pwdEncryptType" || name == "pwdLifeTime" || name == "clearPwdHistory" || name == "unixUserId" || name == "ownerKey" || name == "ownerTag" || name == "descr")
        return true;
    return false;
}

System::UserextItems::UserItems::UserList::SshcertauthItems::SshcertauthItems()
    :
    certdn{YType::str, "certDn"},
    algorithm{YType::str, "algorithm"},
    name{YType::str, "name"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"}
{

    yang_name = "sshcertauth-items"; yang_parent_name = "User-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::UserextItems::UserItems::UserList::SshcertauthItems::~SshcertauthItems()
{
}

bool System::UserextItems::UserItems::UserList::SshcertauthItems::has_data() const
{
    if (is_presence_container) return true;
    return certdn.is_set
	|| algorithm.is_set
	|| name.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set;
}

bool System::UserextItems::UserItems::UserList::SshcertauthItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(certdn.yfilter)
	|| ydk::is_set(algorithm.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::UserextItems::UserItems::UserList::SshcertauthItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sshcertauth-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::UserItems::UserList::SshcertauthItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (certdn.is_set || is_set(certdn.yfilter)) leaf_name_data.push_back(certdn.get_name_leafdata());
    if (algorithm.is_set || is_set(algorithm.yfilter)) leaf_name_data.push_back(algorithm.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::UserextItems::UserItems::UserList::SshcertauthItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::UserextItems::UserItems::UserList::SshcertauthItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::UserextItems::UserItems::UserList::SshcertauthItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "certDn")
    {
        certdn = value;
        certdn.value_namespace = name_space;
        certdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "algorithm")
    {
        algorithm = value;
        algorithm.value_namespace = name_space;
        algorithm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerKey")
    {
        ownerkey = value;
        ownerkey.value_namespace = name_space;
        ownerkey.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerTag")
    {
        ownertag = value;
        ownertag.value_namespace = name_space;
        ownertag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::UserextItems::UserItems::UserList::SshcertauthItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "certDn")
    {
        certdn.yfilter = yfilter;
    }
    if(value_path == "algorithm")
    {
        algorithm.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ownerKey")
    {
        ownerkey.yfilter = yfilter;
    }
    if(value_path == "ownerTag")
    {
        ownertag.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::UserextItems::UserItems::UserList::SshcertauthItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "certDn" || name == "algorithm" || name == "name" || name == "ownerKey" || name == "ownerTag" || name == "descr")
        return true;
    return false;
}

System::UserextItems::UserItems::UserList::SshauthItems::SshauthItems()
    :
    data{YType::str, "data"},
    name{YType::str, "name"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"}
{

    yang_name = "sshauth-items"; yang_parent_name = "User-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::UserextItems::UserItems::UserList::SshauthItems::~SshauthItems()
{
}

bool System::UserextItems::UserItems::UserList::SshauthItems::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| name.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set;
}

bool System::UserextItems::UserItems::UserList::SshauthItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::UserextItems::UserItems::UserList::SshauthItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sshauth-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::UserItems::UserList::SshauthItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::UserextItems::UserItems::UserList::SshauthItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::UserextItems::UserItems::UserList::SshauthItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::UserextItems::UserItems::UserList::SshauthItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerKey")
    {
        ownerkey = value;
        ownerkey.value_namespace = name_space;
        ownerkey.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerTag")
    {
        ownertag = value;
        ownertag.value_namespace = name_space;
        ownertag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::UserextItems::UserItems::UserList::SshauthItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ownerKey")
    {
        ownerkey.yfilter = yfilter;
    }
    if(value_path == "ownerTag")
    {
        ownertag.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::UserextItems::UserItems::UserList::SshauthItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "name" || name == "ownerKey" || name == "ownerTag" || name == "descr")
        return true;
    return false;
}

System::UserextItems::UserItems::UserList::UsercertItems::UsercertItems()
    :
    usercert_list(this, {"name"})
{

    yang_name = "usercert-items"; yang_parent_name = "User-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::UserextItems::UserItems::UserList::UsercertItems::~UsercertItems()
{
}

bool System::UserextItems::UserItems::UserList::UsercertItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<usercert_list.len(); index++)
    {
        if(usercert_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::UserextItems::UserItems::UserList::UsercertItems::has_operation() const
{
    for (std::size_t index=0; index<usercert_list.len(); index++)
    {
        if(usercert_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::UserextItems::UserItems::UserList::UsercertItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "usercert-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::UserItems::UserList::UsercertItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::UserextItems::UserItems::UserList::UsercertItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "UserCert-list")
    {
        auto ent_ = std::make_shared<System::UserextItems::UserItems::UserList::UsercertItems::UserCertList>();
        ent_->parent = this;
        usercert_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::UserextItems::UserItems::UserList::UsercertItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : usercert_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::UserextItems::UserItems::UserList::UsercertItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::UserextItems::UserItems::UserList::UsercertItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::UserextItems::UserItems::UserList::UsercertItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "UserCert-list")
        return true;
    return false;
}

System::UserextItems::UserItems::UserList::UsercertItems::UserCertList::UserCertList()
    :
    name{YType::str, "name"},
    data{YType::str, "data"},
    fingerprint{YType::str, "fingerprint"},
    certificatedecodeinformation{YType::str, "certificateDecodeInformation"},
    publickey{YType::str, "publicKey"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"}
{

    yang_name = "UserCert-list"; yang_parent_name = "usercert-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::UserextItems::UserItems::UserList::UsercertItems::UserCertList::~UserCertList()
{
}

bool System::UserextItems::UserItems::UserList::UsercertItems::UserCertList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| data.is_set
	|| fingerprint.is_set
	|| certificatedecodeinformation.is_set
	|| publickey.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set;
}

bool System::UserextItems::UserItems::UserList::UsercertItems::UserCertList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(fingerprint.yfilter)
	|| ydk::is_set(certificatedecodeinformation.yfilter)
	|| ydk::is_set(publickey.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::UserextItems::UserItems::UserList::UsercertItems::UserCertList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "UserCert-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::UserItems::UserList::UsercertItems::UserCertList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (fingerprint.is_set || is_set(fingerprint.yfilter)) leaf_name_data.push_back(fingerprint.get_name_leafdata());
    if (certificatedecodeinformation.is_set || is_set(certificatedecodeinformation.yfilter)) leaf_name_data.push_back(certificatedecodeinformation.get_name_leafdata());
    if (publickey.is_set || is_set(publickey.yfilter)) leaf_name_data.push_back(publickey.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::UserextItems::UserItems::UserList::UsercertItems::UserCertList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::UserextItems::UserItems::UserList::UsercertItems::UserCertList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::UserextItems::UserItems::UserList::UsercertItems::UserCertList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fingerprint")
    {
        fingerprint = value;
        fingerprint.value_namespace = name_space;
        fingerprint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "certificateDecodeInformation")
    {
        certificatedecodeinformation = value;
        certificatedecodeinformation.value_namespace = name_space;
        certificatedecodeinformation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "publicKey")
    {
        publickey = value;
        publickey.value_namespace = name_space;
        publickey.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerKey")
    {
        ownerkey = value;
        ownerkey.value_namespace = name_space;
        ownerkey.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerTag")
    {
        ownertag = value;
        ownertag.value_namespace = name_space;
        ownertag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::UserextItems::UserItems::UserList::UsercertItems::UserCertList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "fingerprint")
    {
        fingerprint.yfilter = yfilter;
    }
    if(value_path == "certificateDecodeInformation")
    {
        certificatedecodeinformation.yfilter = yfilter;
    }
    if(value_path == "publicKey")
    {
        publickey.yfilter = yfilter;
    }
    if(value_path == "ownerKey")
    {
        ownerkey.yfilter = yfilter;
    }
    if(value_path == "ownerTag")
    {
        ownertag.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::UserextItems::UserItems::UserList::UsercertItems::UserCertList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "data" || name == "fingerprint" || name == "certificateDecodeInformation" || name == "publicKey" || name == "ownerKey" || name == "ownerTag" || name == "descr")
        return true;
    return false;
}

System::UserextItems::UserItems::UserList::UserdomainItems::UserdomainItems()
    :
    userdomain_list(this, {"name"})
{

    yang_name = "userdomain-items"; yang_parent_name = "User-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::UserextItems::UserItems::UserList::UserdomainItems::~UserdomainItems()
{
}

bool System::UserextItems::UserItems::UserList::UserdomainItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<userdomain_list.len(); index++)
    {
        if(userdomain_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::UserextItems::UserItems::UserList::UserdomainItems::has_operation() const
{
    for (std::size_t index=0; index<userdomain_list.len(); index++)
    {
        if(userdomain_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::UserextItems::UserItems::UserList::UserdomainItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "userdomain-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::UserItems::UserList::UserdomainItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::UserextItems::UserItems::UserList::UserdomainItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "UserDomain-list")
    {
        auto ent_ = std::make_shared<System::UserextItems::UserItems::UserList::UserdomainItems::UserDomainList>();
        ent_->parent = this;
        userdomain_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::UserextItems::UserItems::UserList::UserdomainItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : userdomain_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::UserextItems::UserItems::UserList::UserdomainItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::UserextItems::UserItems::UserList::UserdomainItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::UserextItems::UserItems::UserList::UserdomainItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "UserDomain-list")
        return true;
    return false;
}

System::UserextItems::UserItems::UserList::UserdomainItems::UserDomainList::UserDomainList()
    :
    name{YType::str, "name"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"}
        ,
    role_items(std::make_shared<System::UserextItems::UserItems::UserList::UserdomainItems::UserDomainList::RoleItems>())
{
    role_items->parent = this;

    yang_name = "UserDomain-list"; yang_parent_name = "userdomain-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::UserextItems::UserItems::UserList::UserdomainItems::UserDomainList::~UserDomainList()
{
}

bool System::UserextItems::UserItems::UserList::UserdomainItems::UserDomainList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set
	|| (role_items !=  nullptr && role_items->has_data());
}

bool System::UserextItems::UserItems::UserList::UserdomainItems::UserDomainList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| (role_items !=  nullptr && role_items->has_operation());
}

std::string System::UserextItems::UserItems::UserList::UserdomainItems::UserDomainList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "UserDomain-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::UserItems::UserList::UserdomainItems::UserDomainList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::UserextItems::UserItems::UserList::UserdomainItems::UserDomainList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "role-items")
    {
        if(role_items == nullptr)
        {
            role_items = std::make_shared<System::UserextItems::UserItems::UserList::UserdomainItems::UserDomainList::RoleItems>();
        }
        return role_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::UserextItems::UserItems::UserList::UserdomainItems::UserDomainList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(role_items != nullptr)
    {
        _children["role-items"] = role_items;
    }

    return _children;
}

void System::UserextItems::UserItems::UserList::UserdomainItems::UserDomainList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerKey")
    {
        ownerkey = value;
        ownerkey.value_namespace = name_space;
        ownerkey.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerTag")
    {
        ownertag = value;
        ownertag.value_namespace = name_space;
        ownertag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::UserextItems::UserItems::UserList::UserdomainItems::UserDomainList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ownerKey")
    {
        ownerkey.yfilter = yfilter;
    }
    if(value_path == "ownerTag")
    {
        ownertag.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::UserextItems::UserItems::UserList::UserdomainItems::UserDomainList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "role-items" || name == "name" || name == "ownerKey" || name == "ownerTag" || name == "descr")
        return true;
    return false;
}

System::UserextItems::UserItems::UserList::UserdomainItems::UserDomainList::RoleItems::RoleItems()
    :
    userrole_list(this, {"name"})
{

    yang_name = "role-items"; yang_parent_name = "UserDomain-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::UserextItems::UserItems::UserList::UserdomainItems::UserDomainList::RoleItems::~RoleItems()
{
}

bool System::UserextItems::UserItems::UserList::UserdomainItems::UserDomainList::RoleItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<userrole_list.len(); index++)
    {
        if(userrole_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::UserextItems::UserItems::UserList::UserdomainItems::UserDomainList::RoleItems::has_operation() const
{
    for (std::size_t index=0; index<userrole_list.len(); index++)
    {
        if(userrole_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::UserextItems::UserItems::UserList::UserdomainItems::UserDomainList::RoleItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "role-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::UserItems::UserList::UserdomainItems::UserDomainList::RoleItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::UserextItems::UserItems::UserList::UserdomainItems::UserDomainList::RoleItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "UserRole-list")
    {
        auto ent_ = std::make_shared<System::UserextItems::UserItems::UserList::UserdomainItems::UserDomainList::RoleItems::UserRoleList>();
        ent_->parent = this;
        userrole_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::UserextItems::UserItems::UserList::UserdomainItems::UserDomainList::RoleItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : userrole_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::UserextItems::UserItems::UserList::UserdomainItems::UserDomainList::RoleItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::UserextItems::UserItems::UserList::UserdomainItems::UserDomainList::RoleItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::UserextItems::UserItems::UserList::UserdomainItems::UserDomainList::RoleItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "UserRole-list")
        return true;
    return false;
}

System::UserextItems::UserItems::UserList::UserdomainItems::UserDomainList::RoleItems::UserRoleList::UserRoleList()
    :
    name{YType::str, "name"},
    privtype{YType::enumeration, "privType"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"}
{

    yang_name = "UserRole-list"; yang_parent_name = "role-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::UserextItems::UserItems::UserList::UserdomainItems::UserDomainList::RoleItems::UserRoleList::~UserRoleList()
{
}

bool System::UserextItems::UserItems::UserList::UserdomainItems::UserDomainList::RoleItems::UserRoleList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| privtype.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set;
}

bool System::UserextItems::UserItems::UserList::UserdomainItems::UserDomainList::RoleItems::UserRoleList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(privtype.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::UserextItems::UserItems::UserList::UserdomainItems::UserDomainList::RoleItems::UserRoleList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "UserRole-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::UserItems::UserList::UserdomainItems::UserDomainList::RoleItems::UserRoleList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (privtype.is_set || is_set(privtype.yfilter)) leaf_name_data.push_back(privtype.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::UserextItems::UserItems::UserList::UserdomainItems::UserDomainList::RoleItems::UserRoleList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::UserextItems::UserItems::UserList::UserdomainItems::UserDomainList::RoleItems::UserRoleList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::UserextItems::UserItems::UserList::UserdomainItems::UserDomainList::RoleItems::UserRoleList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "privType")
    {
        privtype = value;
        privtype.value_namespace = name_space;
        privtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerKey")
    {
        ownerkey = value;
        ownerkey.value_namespace = name_space;
        ownerkey.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerTag")
    {
        ownertag = value;
        ownertag.value_namespace = name_space;
        ownertag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::UserextItems::UserItems::UserList::UserdomainItems::UserDomainList::RoleItems::UserRoleList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "privType")
    {
        privtype.yfilter = yfilter;
    }
    if(value_path == "ownerKey")
    {
        ownerkey.yfilter = yfilter;
    }
    if(value_path == "ownerTag")
    {
        ownertag.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::UserextItems::UserItems::UserList::UserdomainItems::UserDomainList::RoleItems::UserRoleList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "privType" || name == "ownerKey" || name == "ownerTag" || name == "descr")
        return true;
    return false;
}

System::UserextItems::UserItems::UserList::UserdataItems::UserdataItems()
    :
    pwdchangeddate{YType::str, "pwdChangedDate"},
    pwdhistory{YType::str, "pwdHistory"},
    pwdchangecount{YType::uint8, "pwdChangeCount"},
    pwdchangeintervalbegin{YType::str, "pwdChangeIntervalBegin"},
    name{YType::str, "name"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"}
{

    yang_name = "userdata-items"; yang_parent_name = "User-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::UserextItems::UserItems::UserList::UserdataItems::~UserdataItems()
{
}

bool System::UserextItems::UserItems::UserList::UserdataItems::has_data() const
{
    if (is_presence_container) return true;
    return pwdchangeddate.is_set
	|| pwdhistory.is_set
	|| pwdchangecount.is_set
	|| pwdchangeintervalbegin.is_set
	|| name.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set;
}

bool System::UserextItems::UserItems::UserList::UserdataItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pwdchangeddate.yfilter)
	|| ydk::is_set(pwdhistory.yfilter)
	|| ydk::is_set(pwdchangecount.yfilter)
	|| ydk::is_set(pwdchangeintervalbegin.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::UserextItems::UserItems::UserList::UserdataItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "userdata-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::UserItems::UserList::UserdataItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pwdchangeddate.is_set || is_set(pwdchangeddate.yfilter)) leaf_name_data.push_back(pwdchangeddate.get_name_leafdata());
    if (pwdhistory.is_set || is_set(pwdhistory.yfilter)) leaf_name_data.push_back(pwdhistory.get_name_leafdata());
    if (pwdchangecount.is_set || is_set(pwdchangecount.yfilter)) leaf_name_data.push_back(pwdchangecount.get_name_leafdata());
    if (pwdchangeintervalbegin.is_set || is_set(pwdchangeintervalbegin.yfilter)) leaf_name_data.push_back(pwdchangeintervalbegin.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::UserextItems::UserItems::UserList::UserdataItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::UserextItems::UserItems::UserList::UserdataItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::UserextItems::UserItems::UserList::UserdataItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pwdChangedDate")
    {
        pwdchangeddate = value;
        pwdchangeddate.value_namespace = name_space;
        pwdchangeddate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pwdHistory")
    {
        pwdhistory = value;
        pwdhistory.value_namespace = name_space;
        pwdhistory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pwdChangeCount")
    {
        pwdchangecount = value;
        pwdchangecount.value_namespace = name_space;
        pwdchangecount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pwdChangeIntervalBegin")
    {
        pwdchangeintervalbegin = value;
        pwdchangeintervalbegin.value_namespace = name_space;
        pwdchangeintervalbegin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerKey")
    {
        ownerkey = value;
        ownerkey.value_namespace = name_space;
        ownerkey.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerTag")
    {
        ownertag = value;
        ownertag.value_namespace = name_space;
        ownertag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::UserextItems::UserItems::UserList::UserdataItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pwdChangedDate")
    {
        pwdchangeddate.yfilter = yfilter;
    }
    if(value_path == "pwdHistory")
    {
        pwdhistory.yfilter = yfilter;
    }
    if(value_path == "pwdChangeCount")
    {
        pwdchangecount.yfilter = yfilter;
    }
    if(value_path == "pwdChangeIntervalBegin")
    {
        pwdchangeintervalbegin.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ownerKey")
    {
        ownerkey.yfilter = yfilter;
    }
    if(value_path == "ownerTag")
    {
        ownertag.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::UserextItems::UserItems::UserList::UserdataItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pwdChangedDate" || name == "pwdHistory" || name == "pwdChangeCount" || name == "pwdChangeIntervalBegin" || name == "name" || name == "ownerKey" || name == "ownerTag" || name == "descr")
        return true;
    return false;
}

System::UserextItems::RoleItems::RoleItems()
    :
    role_list(this, {"name"})
{

    yang_name = "role-items"; yang_parent_name = "userext-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::RoleItems::~RoleItems()
{
}

bool System::UserextItems::RoleItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<role_list.len(); index++)
    {
        if(role_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::UserextItems::RoleItems::has_operation() const
{
    for (std::size_t index=0; index<role_list.len(); index++)
    {
        if(role_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::UserextItems::RoleItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/userext-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::RoleItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "role-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::RoleItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::UserextItems::RoleItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Role-list")
    {
        auto ent_ = std::make_shared<System::UserextItems::RoleItems::RoleList>();
        ent_->parent = this;
        role_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::UserextItems::RoleItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : role_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::UserextItems::RoleItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::UserextItems::RoleItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::UserextItems::RoleItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Role-list")
        return true;
    return false;
}

System::UserextItems::RoleItems::RoleList::RoleList()
    :
    name{YType::str, "name"},
    denyvrf{YType::enumeration, "denyVRF"},
    allowedvrf{YType::str, "allowedVRF"},
    denyvlan{YType::enumeration, "denyVLAN"},
    allowedvlan{YType::str, "allowedVLAN"},
    denyintf{YType::enumeration, "denyIntf"},
    priv{YType::str, "priv"},
    roleprivtype{YType::enumeration, "rolePrivType"},
    resettofactory{YType::enumeration, "resetToFactory"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"}
        ,
    rule_items(std::make_shared<System::UserextItems::RoleItems::RoleList::RuleItems>())
    , intf_items(std::make_shared<System::UserextItems::RoleItems::RoleList::IntfItems>())
{
    rule_items->parent = this;
    intf_items->parent = this;

    yang_name = "Role-list"; yang_parent_name = "role-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::RoleItems::RoleList::~RoleList()
{
}

bool System::UserextItems::RoleItems::RoleList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| denyvrf.is_set
	|| allowedvrf.is_set
	|| denyvlan.is_set
	|| allowedvlan.is_set
	|| denyintf.is_set
	|| priv.is_set
	|| roleprivtype.is_set
	|| resettofactory.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set
	|| (rule_items !=  nullptr && rule_items->has_data())
	|| (intf_items !=  nullptr && intf_items->has_data());
}

bool System::UserextItems::RoleItems::RoleList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(denyvrf.yfilter)
	|| ydk::is_set(allowedvrf.yfilter)
	|| ydk::is_set(denyvlan.yfilter)
	|| ydk::is_set(allowedvlan.yfilter)
	|| ydk::is_set(denyintf.yfilter)
	|| ydk::is_set(priv.yfilter)
	|| ydk::is_set(roleprivtype.yfilter)
	|| ydk::is_set(resettofactory.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| (rule_items !=  nullptr && rule_items->has_operation())
	|| (intf_items !=  nullptr && intf_items->has_operation());
}

std::string System::UserextItems::RoleItems::RoleList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/userext-items/role-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::RoleItems::RoleList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Role-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::RoleItems::RoleList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (denyvrf.is_set || is_set(denyvrf.yfilter)) leaf_name_data.push_back(denyvrf.get_name_leafdata());
    if (allowedvrf.is_set || is_set(allowedvrf.yfilter)) leaf_name_data.push_back(allowedvrf.get_name_leafdata());
    if (denyvlan.is_set || is_set(denyvlan.yfilter)) leaf_name_data.push_back(denyvlan.get_name_leafdata());
    if (allowedvlan.is_set || is_set(allowedvlan.yfilter)) leaf_name_data.push_back(allowedvlan.get_name_leafdata());
    if (denyintf.is_set || is_set(denyintf.yfilter)) leaf_name_data.push_back(denyintf.get_name_leafdata());
    if (priv.is_set || is_set(priv.yfilter)) leaf_name_data.push_back(priv.get_name_leafdata());
    if (roleprivtype.is_set || is_set(roleprivtype.yfilter)) leaf_name_data.push_back(roleprivtype.get_name_leafdata());
    if (resettofactory.is_set || is_set(resettofactory.yfilter)) leaf_name_data.push_back(resettofactory.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::UserextItems::RoleItems::RoleList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rule-items")
    {
        if(rule_items == nullptr)
        {
            rule_items = std::make_shared<System::UserextItems::RoleItems::RoleList::RuleItems>();
        }
        return rule_items;
    }

    if(child_yang_name == "intf-items")
    {
        if(intf_items == nullptr)
        {
            intf_items = std::make_shared<System::UserextItems::RoleItems::RoleList::IntfItems>();
        }
        return intf_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::UserextItems::RoleItems::RoleList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rule_items != nullptr)
    {
        _children["rule-items"] = rule_items;
    }

    if(intf_items != nullptr)
    {
        _children["intf-items"] = intf_items;
    }

    return _children;
}

void System::UserextItems::RoleItems::RoleList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "denyVRF")
    {
        denyvrf = value;
        denyvrf.value_namespace = name_space;
        denyvrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allowedVRF")
    {
        allowedvrf = value;
        allowedvrf.value_namespace = name_space;
        allowedvrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "denyVLAN")
    {
        denyvlan = value;
        denyvlan.value_namespace = name_space;
        denyvlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allowedVLAN")
    {
        allowedvlan = value;
        allowedvlan.value_namespace = name_space;
        allowedvlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "denyIntf")
    {
        denyintf = value;
        denyintf.value_namespace = name_space;
        denyintf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priv")
    {
        priv = value;
        priv.value_namespace = name_space;
        priv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rolePrivType")
    {
        roleprivtype = value;
        roleprivtype.value_namespace = name_space;
        roleprivtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resetToFactory")
    {
        resettofactory = value;
        resettofactory.value_namespace = name_space;
        resettofactory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerKey")
    {
        ownerkey = value;
        ownerkey.value_namespace = name_space;
        ownerkey.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerTag")
    {
        ownertag = value;
        ownertag.value_namespace = name_space;
        ownertag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::UserextItems::RoleItems::RoleList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "denyVRF")
    {
        denyvrf.yfilter = yfilter;
    }
    if(value_path == "allowedVRF")
    {
        allowedvrf.yfilter = yfilter;
    }
    if(value_path == "denyVLAN")
    {
        denyvlan.yfilter = yfilter;
    }
    if(value_path == "allowedVLAN")
    {
        allowedvlan.yfilter = yfilter;
    }
    if(value_path == "denyIntf")
    {
        denyintf.yfilter = yfilter;
    }
    if(value_path == "priv")
    {
        priv.yfilter = yfilter;
    }
    if(value_path == "rolePrivType")
    {
        roleprivtype.yfilter = yfilter;
    }
    if(value_path == "resetToFactory")
    {
        resettofactory.yfilter = yfilter;
    }
    if(value_path == "ownerKey")
    {
        ownerkey.yfilter = yfilter;
    }
    if(value_path == "ownerTag")
    {
        ownertag.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::UserextItems::RoleItems::RoleList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rule-items" || name == "intf-items" || name == "name" || name == "denyVRF" || name == "allowedVRF" || name == "denyVLAN" || name == "allowedVLAN" || name == "denyIntf" || name == "priv" || name == "rolePrivType" || name == "resetToFactory" || name == "ownerKey" || name == "ownerTag" || name == "descr")
        return true;
    return false;
}

System::UserextItems::RoleItems::RoleList::RuleItems::RuleItems()
    :
    rolerule_list(this, {"rulenumber"})
{

    yang_name = "rule-items"; yang_parent_name = "Role-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::UserextItems::RoleItems::RoleList::RuleItems::~RuleItems()
{
}

bool System::UserextItems::RoleItems::RoleList::RuleItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rolerule_list.len(); index++)
    {
        if(rolerule_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::UserextItems::RoleItems::RoleList::RuleItems::has_operation() const
{
    for (std::size_t index=0; index<rolerule_list.len(); index++)
    {
        if(rolerule_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::UserextItems::RoleItems::RoleList::RuleItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rule-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::RoleItems::RoleList::RuleItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::UserextItems::RoleItems::RoleList::RuleItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RoleRule-list")
    {
        auto ent_ = std::make_shared<System::UserextItems::RoleItems::RoleList::RuleItems::RoleRuleList>();
        ent_->parent = this;
        rolerule_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::UserextItems::RoleItems::RoleList::RuleItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rolerule_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::UserextItems::RoleItems::RoleList::RuleItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::UserextItems::RoleItems::RoleList::RuleItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::UserextItems::RoleItems::RoleList::RuleItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RoleRule-list")
        return true;
    return false;
}

System::UserextItems::RoleItems::RoleList::RuleItems::RoleRuleList::RoleRuleList()
    :
    rulenumber{YType::uint32, "ruleNumber"},
    permission{YType::enumeration, "permission"},
    ruleaccess{YType::enumeration, "ruleAccess"},
    rulescope{YType::enumeration, "ruleScope"},
    cmdstr{YType::str, "cmdStr"},
    scopeentity{YType::str, "scopeEntity"}
{

    yang_name = "RoleRule-list"; yang_parent_name = "rule-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::UserextItems::RoleItems::RoleList::RuleItems::RoleRuleList::~RoleRuleList()
{
}

bool System::UserextItems::RoleItems::RoleList::RuleItems::RoleRuleList::has_data() const
{
    if (is_presence_container) return true;
    return rulenumber.is_set
	|| permission.is_set
	|| ruleaccess.is_set
	|| rulescope.is_set
	|| cmdstr.is_set
	|| scopeentity.is_set;
}

bool System::UserextItems::RoleItems::RoleList::RuleItems::RoleRuleList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rulenumber.yfilter)
	|| ydk::is_set(permission.yfilter)
	|| ydk::is_set(ruleaccess.yfilter)
	|| ydk::is_set(rulescope.yfilter)
	|| ydk::is_set(cmdstr.yfilter)
	|| ydk::is_set(scopeentity.yfilter);
}

std::string System::UserextItems::RoleItems::RoleList::RuleItems::RoleRuleList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RoleRule-list";
    ADD_KEY_TOKEN(rulenumber, "ruleNumber");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::RoleItems::RoleList::RuleItems::RoleRuleList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rulenumber.is_set || is_set(rulenumber.yfilter)) leaf_name_data.push_back(rulenumber.get_name_leafdata());
    if (permission.is_set || is_set(permission.yfilter)) leaf_name_data.push_back(permission.get_name_leafdata());
    if (ruleaccess.is_set || is_set(ruleaccess.yfilter)) leaf_name_data.push_back(ruleaccess.get_name_leafdata());
    if (rulescope.is_set || is_set(rulescope.yfilter)) leaf_name_data.push_back(rulescope.get_name_leafdata());
    if (cmdstr.is_set || is_set(cmdstr.yfilter)) leaf_name_data.push_back(cmdstr.get_name_leafdata());
    if (scopeentity.is_set || is_set(scopeentity.yfilter)) leaf_name_data.push_back(scopeentity.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::UserextItems::RoleItems::RoleList::RuleItems::RoleRuleList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::UserextItems::RoleItems::RoleList::RuleItems::RoleRuleList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::UserextItems::RoleItems::RoleList::RuleItems::RoleRuleList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ruleNumber")
    {
        rulenumber = value;
        rulenumber.value_namespace = name_space;
        rulenumber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "permission")
    {
        permission = value;
        permission.value_namespace = name_space;
        permission.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ruleAccess")
    {
        ruleaccess = value;
        ruleaccess.value_namespace = name_space;
        ruleaccess.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ruleScope")
    {
        rulescope = value;
        rulescope.value_namespace = name_space;
        rulescope.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmdStr")
    {
        cmdstr = value;
        cmdstr.value_namespace = name_space;
        cmdstr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "scopeEntity")
    {
        scopeentity = value;
        scopeentity.value_namespace = name_space;
        scopeentity.value_namespace_prefix = name_space_prefix;
    }
}

void System::UserextItems::RoleItems::RoleList::RuleItems::RoleRuleList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ruleNumber")
    {
        rulenumber.yfilter = yfilter;
    }
    if(value_path == "permission")
    {
        permission.yfilter = yfilter;
    }
    if(value_path == "ruleAccess")
    {
        ruleaccess.yfilter = yfilter;
    }
    if(value_path == "ruleScope")
    {
        rulescope.yfilter = yfilter;
    }
    if(value_path == "cmdStr")
    {
        cmdstr.yfilter = yfilter;
    }
    if(value_path == "scopeEntity")
    {
        scopeentity.yfilter = yfilter;
    }
}

bool System::UserextItems::RoleItems::RoleList::RuleItems::RoleRuleList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ruleNumber" || name == "permission" || name == "ruleAccess" || name == "ruleScope" || name == "cmdStr" || name == "scopeEntity")
        return true;
    return false;
}

System::UserextItems::RoleItems::RoleList::IntfItems::IntfItems()
    :
    roleintf_list(this, {"intfname"})
{

    yang_name = "intf-items"; yang_parent_name = "Role-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::UserextItems::RoleItems::RoleList::IntfItems::~IntfItems()
{
}

bool System::UserextItems::RoleItems::RoleList::IntfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<roleintf_list.len(); index++)
    {
        if(roleintf_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::UserextItems::RoleItems::RoleList::IntfItems::has_operation() const
{
    for (std::size_t index=0; index<roleintf_list.len(); index++)
    {
        if(roleintf_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::UserextItems::RoleItems::RoleList::IntfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "intf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::RoleItems::RoleList::IntfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::UserextItems::RoleItems::RoleList::IntfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RoleIntf-list")
    {
        auto ent_ = std::make_shared<System::UserextItems::RoleItems::RoleList::IntfItems::RoleIntfList>();
        ent_->parent = this;
        roleintf_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::UserextItems::RoleItems::RoleList::IntfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : roleintf_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::UserextItems::RoleItems::RoleList::IntfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::UserextItems::RoleItems::RoleList::IntfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::UserextItems::RoleItems::RoleList::IntfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RoleIntf-list")
        return true;
    return false;
}

System::UserextItems::RoleItems::RoleList::IntfItems::RoleIntfList::RoleIntfList()
    :
    intfname{YType::str, "intfName"},
    allowinst{YType::str, "allowInst"}
{

    yang_name = "RoleIntf-list"; yang_parent_name = "intf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::UserextItems::RoleItems::RoleList::IntfItems::RoleIntfList::~RoleIntfList()
{
}

bool System::UserextItems::RoleItems::RoleList::IntfItems::RoleIntfList::has_data() const
{
    if (is_presence_container) return true;
    return intfname.is_set
	|| allowinst.is_set;
}

bool System::UserextItems::RoleItems::RoleList::IntfItems::RoleIntfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(intfname.yfilter)
	|| ydk::is_set(allowinst.yfilter);
}

std::string System::UserextItems::RoleItems::RoleList::IntfItems::RoleIntfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RoleIntf-list";
    ADD_KEY_TOKEN(intfname, "intfName");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::RoleItems::RoleList::IntfItems::RoleIntfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (intfname.is_set || is_set(intfname.yfilter)) leaf_name_data.push_back(intfname.get_name_leafdata());
    if (allowinst.is_set || is_set(allowinst.yfilter)) leaf_name_data.push_back(allowinst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::UserextItems::RoleItems::RoleList::IntfItems::RoleIntfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::UserextItems::RoleItems::RoleList::IntfItems::RoleIntfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::UserextItems::RoleItems::RoleList::IntfItems::RoleIntfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "intfName")
    {
        intfname = value;
        intfname.value_namespace = name_space;
        intfname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allowInst")
    {
        allowinst = value;
        allowinst.value_namespace = name_space;
        allowinst.value_namespace_prefix = name_space_prefix;
    }
}

void System::UserextItems::RoleItems::RoleList::IntfItems::RoleIntfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "intfName")
    {
        intfname.yfilter = yfilter;
    }
    if(value_path == "allowInst")
    {
        allowinst.yfilter = yfilter;
    }
}

bool System::UserextItems::RoleItems::RoleList::IntfItems::RoleIntfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "intfName" || name == "allowInst")
        return true;
    return false;
}

System::UserextItems::FactoryroleItems::FactoryroleItems()
    :
    factoryrole_list(this, {"name"})
{

    yang_name = "factoryrole-items"; yang_parent_name = "userext-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::FactoryroleItems::~FactoryroleItems()
{
}

bool System::UserextItems::FactoryroleItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<factoryrole_list.len(); index++)
    {
        if(factoryrole_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::UserextItems::FactoryroleItems::has_operation() const
{
    for (std::size_t index=0; index<factoryrole_list.len(); index++)
    {
        if(factoryrole_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::UserextItems::FactoryroleItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/userext-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::FactoryroleItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "factoryrole-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::FactoryroleItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::UserextItems::FactoryroleItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "FactoryRole-list")
    {
        auto ent_ = std::make_shared<System::UserextItems::FactoryroleItems::FactoryRoleList>();
        ent_->parent = this;
        factoryrole_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::UserextItems::FactoryroleItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : factoryrole_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::UserextItems::FactoryroleItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::UserextItems::FactoryroleItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::UserextItems::FactoryroleItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "FactoryRole-list")
        return true;
    return false;
}

System::UserextItems::FactoryroleItems::FactoryRoleList::FactoryRoleList()
    :
    name{YType::str, "name"},
    priv{YType::str, "priv"},
    resettofactory{YType::enumeration, "resetToFactory"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"}
{

    yang_name = "FactoryRole-list"; yang_parent_name = "factoryrole-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::FactoryroleItems::FactoryRoleList::~FactoryRoleList()
{
}

bool System::UserextItems::FactoryroleItems::FactoryRoleList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| priv.is_set
	|| resettofactory.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set;
}

bool System::UserextItems::FactoryroleItems::FactoryRoleList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(priv.yfilter)
	|| ydk::is_set(resettofactory.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::UserextItems::FactoryroleItems::FactoryRoleList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/userext-items/factoryrole-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::FactoryroleItems::FactoryRoleList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "FactoryRole-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::FactoryroleItems::FactoryRoleList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (priv.is_set || is_set(priv.yfilter)) leaf_name_data.push_back(priv.get_name_leafdata());
    if (resettofactory.is_set || is_set(resettofactory.yfilter)) leaf_name_data.push_back(resettofactory.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::UserextItems::FactoryroleItems::FactoryRoleList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::UserextItems::FactoryroleItems::FactoryRoleList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::UserextItems::FactoryroleItems::FactoryRoleList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priv")
    {
        priv = value;
        priv.value_namespace = name_space;
        priv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resetToFactory")
    {
        resettofactory = value;
        resettofactory.value_namespace = name_space;
        resettofactory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerKey")
    {
        ownerkey = value;
        ownerkey.value_namespace = name_space;
        ownerkey.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerTag")
    {
        ownertag = value;
        ownertag.value_namespace = name_space;
        ownertag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::UserextItems::FactoryroleItems::FactoryRoleList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "priv")
    {
        priv.yfilter = yfilter;
    }
    if(value_path == "resetToFactory")
    {
        resettofactory.yfilter = yfilter;
    }
    if(value_path == "ownerKey")
    {
        ownerkey.yfilter = yfilter;
    }
    if(value_path == "ownerTag")
    {
        ownertag.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::UserextItems::FactoryroleItems::FactoryRoleList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "priv" || name == "resetToFactory" || name == "ownerKey" || name == "ownerTag" || name == "descr")
        return true;
    return false;
}

System::UserextItems::DomainItems::DomainItems()
    :
    domain_list(this, {"name"})
{

    yang_name = "domain-items"; yang_parent_name = "userext-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::DomainItems::~DomainItems()
{
}

bool System::UserextItems::DomainItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<domain_list.len(); index++)
    {
        if(domain_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::UserextItems::DomainItems::has_operation() const
{
    for (std::size_t index=0; index<domain_list.len(); index++)
    {
        if(domain_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::UserextItems::DomainItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/userext-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::DomainItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domain-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::DomainItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::UserextItems::DomainItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Domain-list")
    {
        auto ent_ = std::make_shared<System::UserextItems::DomainItems::DomainList>();
        ent_->parent = this;
        domain_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::UserextItems::DomainItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : domain_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::UserextItems::DomainItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::UserextItems::DomainItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::UserextItems::DomainItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Domain-list")
        return true;
    return false;
}

System::UserextItems::DomainItems::DomainList::DomainList()
    :
    name{YType::str, "name"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"}
{

    yang_name = "Domain-list"; yang_parent_name = "domain-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::DomainItems::DomainList::~DomainList()
{
}

bool System::UserextItems::DomainItems::DomainList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set;
}

bool System::UserextItems::DomainItems::DomainList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::UserextItems::DomainItems::DomainList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/userext-items/domain-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::DomainItems::DomainList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Domain-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::DomainItems::DomainList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::UserextItems::DomainItems::DomainList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::UserextItems::DomainItems::DomainList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::UserextItems::DomainItems::DomainList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerKey")
    {
        ownerkey = value;
        ownerkey.value_namespace = name_space;
        ownerkey.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerTag")
    {
        ownertag = value;
        ownertag.value_namespace = name_space;
        ownertag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::UserextItems::DomainItems::DomainList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ownerKey")
    {
        ownerkey.yfilter = yfilter;
    }
    if(value_path == "ownerTag")
    {
        ownertag.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::UserextItems::DomainItems::DomainList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "ownerKey" || name == "ownerTag" || name == "descr")
        return true;
    return false;
}

System::UserextItems::PwdprofileItems::PwdprofileItems()
    :
    expirationwarntime{YType::uint8, "expirationWarnTime"},
    historycount{YType::uint8, "historyCount"},
    nochangeinterval{YType::uint16, "noChangeInterval"},
    changeinterval{YType::uint16, "changeInterval"},
    changeduringinterval{YType::enumeration, "changeDuringInterval"},
    changecount{YType::uint8, "changeCount"},
    name{YType::str, "name"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"}
{

    yang_name = "pwdprofile-items"; yang_parent_name = "userext-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::PwdprofileItems::~PwdprofileItems()
{
}

bool System::UserextItems::PwdprofileItems::has_data() const
{
    if (is_presence_container) return true;
    return expirationwarntime.is_set
	|| historycount.is_set
	|| nochangeinterval.is_set
	|| changeinterval.is_set
	|| changeduringinterval.is_set
	|| changecount.is_set
	|| name.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set;
}

bool System::UserextItems::PwdprofileItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(expirationwarntime.yfilter)
	|| ydk::is_set(historycount.yfilter)
	|| ydk::is_set(nochangeinterval.yfilter)
	|| ydk::is_set(changeinterval.yfilter)
	|| ydk::is_set(changeduringinterval.yfilter)
	|| ydk::is_set(changecount.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::UserextItems::PwdprofileItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/userext-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::PwdprofileItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pwdprofile-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::PwdprofileItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (expirationwarntime.is_set || is_set(expirationwarntime.yfilter)) leaf_name_data.push_back(expirationwarntime.get_name_leafdata());
    if (historycount.is_set || is_set(historycount.yfilter)) leaf_name_data.push_back(historycount.get_name_leafdata());
    if (nochangeinterval.is_set || is_set(nochangeinterval.yfilter)) leaf_name_data.push_back(nochangeinterval.get_name_leafdata());
    if (changeinterval.is_set || is_set(changeinterval.yfilter)) leaf_name_data.push_back(changeinterval.get_name_leafdata());
    if (changeduringinterval.is_set || is_set(changeduringinterval.yfilter)) leaf_name_data.push_back(changeduringinterval.get_name_leafdata());
    if (changecount.is_set || is_set(changecount.yfilter)) leaf_name_data.push_back(changecount.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::UserextItems::PwdprofileItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::UserextItems::PwdprofileItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::UserextItems::PwdprofileItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "expirationWarnTime")
    {
        expirationwarntime = value;
        expirationwarntime.value_namespace = name_space;
        expirationwarntime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "historyCount")
    {
        historycount = value;
        historycount.value_namespace = name_space;
        historycount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "noChangeInterval")
    {
        nochangeinterval = value;
        nochangeinterval.value_namespace = name_space;
        nochangeinterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "changeInterval")
    {
        changeinterval = value;
        changeinterval.value_namespace = name_space;
        changeinterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "changeDuringInterval")
    {
        changeduringinterval = value;
        changeduringinterval.value_namespace = name_space;
        changeduringinterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "changeCount")
    {
        changecount = value;
        changecount.value_namespace = name_space;
        changecount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerKey")
    {
        ownerkey = value;
        ownerkey.value_namespace = name_space;
        ownerkey.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerTag")
    {
        ownertag = value;
        ownertag.value_namespace = name_space;
        ownertag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::UserextItems::PwdprofileItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "expirationWarnTime")
    {
        expirationwarntime.yfilter = yfilter;
    }
    if(value_path == "historyCount")
    {
        historycount.yfilter = yfilter;
    }
    if(value_path == "noChangeInterval")
    {
        nochangeinterval.yfilter = yfilter;
    }
    if(value_path == "changeInterval")
    {
        changeinterval.yfilter = yfilter;
    }
    if(value_path == "changeDuringInterval")
    {
        changeduringinterval.yfilter = yfilter;
    }
    if(value_path == "changeCount")
    {
        changecount.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ownerKey")
    {
        ownerkey.yfilter = yfilter;
    }
    if(value_path == "ownerTag")
    {
        ownertag.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::UserextItems::PwdprofileItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "expirationWarnTime" || name == "historyCount" || name == "noChangeInterval" || name == "changeInterval" || name == "changeDuringInterval" || name == "changeCount" || name == "name" || name == "ownerKey" || name == "ownerTag" || name == "descr")
        return true;
    return false;
}

System::UserextItems::PkiextItems::PkiextItems()
    :
    name{YType::str, "name"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"}
        ,
    webtokendata_items(std::make_shared<System::UserextItems::PkiextItems::WebtokendataItems>())
    , csyncsharedkey_items(std::make_shared<System::UserextItems::PkiextItems::CsyncsharedkeyItems>())
    , csyncpolicy_items(std::make_shared<System::UserextItems::PkiextItems::CsyncpolicyItems>())
    , dbgplgch_items(std::make_shared<System::UserextItems::PkiextItems::DbgplgchItems>())
    , keyring_items(std::make_shared<System::UserextItems::PkiextItems::KeyringItems>())
    , tp_items(std::make_shared<System::UserextItems::PkiextItems::TpItems>())
    , rtfabricrespkiep_items(std::make_shared<System::UserextItems::PkiextItems::RtfabricResPkiEpItems>())
{
    webtokendata_items->parent = this;
    csyncsharedkey_items->parent = this;
    csyncpolicy_items->parent = this;
    dbgplgch_items->parent = this;
    keyring_items->parent = this;
    tp_items->parent = this;
    rtfabricrespkiep_items->parent = this;

    yang_name = "pkiext-items"; yang_parent_name = "userext-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::PkiextItems::~PkiextItems()
{
}

bool System::UserextItems::PkiextItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set
	|| (webtokendata_items !=  nullptr && webtokendata_items->has_data())
	|| (csyncsharedkey_items !=  nullptr && csyncsharedkey_items->has_data())
	|| (csyncpolicy_items !=  nullptr && csyncpolicy_items->has_data())
	|| (dbgplgch_items !=  nullptr && dbgplgch_items->has_data())
	|| (keyring_items !=  nullptr && keyring_items->has_data())
	|| (tp_items !=  nullptr && tp_items->has_data())
	|| (rtfabricrespkiep_items !=  nullptr && rtfabricrespkiep_items->has_data());
}

bool System::UserextItems::PkiextItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| (webtokendata_items !=  nullptr && webtokendata_items->has_operation())
	|| (csyncsharedkey_items !=  nullptr && csyncsharedkey_items->has_operation())
	|| (csyncpolicy_items !=  nullptr && csyncpolicy_items->has_operation())
	|| (dbgplgch_items !=  nullptr && dbgplgch_items->has_operation())
	|| (keyring_items !=  nullptr && keyring_items->has_operation())
	|| (tp_items !=  nullptr && tp_items->has_operation())
	|| (rtfabricrespkiep_items !=  nullptr && rtfabricrespkiep_items->has_operation());
}

std::string System::UserextItems::PkiextItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/userext-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::PkiextItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pkiext-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::PkiextItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::UserextItems::PkiextItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "webtokendata-items")
    {
        if(webtokendata_items == nullptr)
        {
            webtokendata_items = std::make_shared<System::UserextItems::PkiextItems::WebtokendataItems>();
        }
        return webtokendata_items;
    }

    if(child_yang_name == "csyncsharedkey-items")
    {
        if(csyncsharedkey_items == nullptr)
        {
            csyncsharedkey_items = std::make_shared<System::UserextItems::PkiextItems::CsyncsharedkeyItems>();
        }
        return csyncsharedkey_items;
    }

    if(child_yang_name == "csyncpolicy-items")
    {
        if(csyncpolicy_items == nullptr)
        {
            csyncpolicy_items = std::make_shared<System::UserextItems::PkiextItems::CsyncpolicyItems>();
        }
        return csyncpolicy_items;
    }

    if(child_yang_name == "dbgplgch-items")
    {
        if(dbgplgch_items == nullptr)
        {
            dbgplgch_items = std::make_shared<System::UserextItems::PkiextItems::DbgplgchItems>();
        }
        return dbgplgch_items;
    }

    if(child_yang_name == "keyring-items")
    {
        if(keyring_items == nullptr)
        {
            keyring_items = std::make_shared<System::UserextItems::PkiextItems::KeyringItems>();
        }
        return keyring_items;
    }

    if(child_yang_name == "tp-items")
    {
        if(tp_items == nullptr)
        {
            tp_items = std::make_shared<System::UserextItems::PkiextItems::TpItems>();
        }
        return tp_items;
    }

    if(child_yang_name == "rtfabricResPkiEp-items")
    {
        if(rtfabricrespkiep_items == nullptr)
        {
            rtfabricrespkiep_items = std::make_shared<System::UserextItems::PkiextItems::RtfabricResPkiEpItems>();
        }
        return rtfabricrespkiep_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::UserextItems::PkiextItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(webtokendata_items != nullptr)
    {
        _children["webtokendata-items"] = webtokendata_items;
    }

    if(csyncsharedkey_items != nullptr)
    {
        _children["csyncsharedkey-items"] = csyncsharedkey_items;
    }

    if(csyncpolicy_items != nullptr)
    {
        _children["csyncpolicy-items"] = csyncpolicy_items;
    }

    if(dbgplgch_items != nullptr)
    {
        _children["dbgplgch-items"] = dbgplgch_items;
    }

    if(keyring_items != nullptr)
    {
        _children["keyring-items"] = keyring_items;
    }

    if(tp_items != nullptr)
    {
        _children["tp-items"] = tp_items;
    }

    if(rtfabricrespkiep_items != nullptr)
    {
        _children["rtfabricResPkiEp-items"] = rtfabricrespkiep_items;
    }

    return _children;
}

void System::UserextItems::PkiextItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerKey")
    {
        ownerkey = value;
        ownerkey.value_namespace = name_space;
        ownerkey.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerTag")
    {
        ownertag = value;
        ownertag.value_namespace = name_space;
        ownertag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::UserextItems::PkiextItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ownerKey")
    {
        ownerkey.yfilter = yfilter;
    }
    if(value_path == "ownerTag")
    {
        ownertag.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::UserextItems::PkiextItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "webtokendata-items" || name == "csyncsharedkey-items" || name == "csyncpolicy-items" || name == "dbgplgch-items" || name == "keyring-items" || name == "tp-items" || name == "rtfabricResPkiEp-items" || name == "name" || name == "ownerKey" || name == "ownerTag" || name == "descr")
        return true;
    return false;
}

System::UserextItems::PkiextItems::WebtokendataItems::WebtokendataItems()
    :
    key{YType::str, "key"},
    initializationvector{YType::str, "initializationVector"},
    hashsecret{YType::str, "hashSecret"},
    webtokentimeoutseconds{YType::uint16, "webtokenTimeoutSeconds"},
    maximumvalidityperiod{YType::uint16, "maximumValidityPeriod"},
    uiidletimeoutseconds{YType::uint16, "uiIdleTimeoutSeconds"},
    sessionrecordflags{YType::str, "sessionRecordFlags"},
    sitefingerprint{YType::str, "siteFingerprint"},
    name{YType::str, "name"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"}
{

    yang_name = "webtokendata-items"; yang_parent_name = "pkiext-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::PkiextItems::WebtokendataItems::~WebtokendataItems()
{
}

bool System::UserextItems::PkiextItems::WebtokendataItems::has_data() const
{
    if (is_presence_container) return true;
    return key.is_set
	|| initializationvector.is_set
	|| hashsecret.is_set
	|| webtokentimeoutseconds.is_set
	|| maximumvalidityperiod.is_set
	|| uiidletimeoutseconds.is_set
	|| sessionrecordflags.is_set
	|| sitefingerprint.is_set
	|| name.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set;
}

bool System::UserextItems::PkiextItems::WebtokendataItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(initializationvector.yfilter)
	|| ydk::is_set(hashsecret.yfilter)
	|| ydk::is_set(webtokentimeoutseconds.yfilter)
	|| ydk::is_set(maximumvalidityperiod.yfilter)
	|| ydk::is_set(uiidletimeoutseconds.yfilter)
	|| ydk::is_set(sessionrecordflags.yfilter)
	|| ydk::is_set(sitefingerprint.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::UserextItems::PkiextItems::WebtokendataItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/userext-items/pkiext-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::PkiextItems::WebtokendataItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "webtokendata-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::PkiextItems::WebtokendataItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (initializationvector.is_set || is_set(initializationvector.yfilter)) leaf_name_data.push_back(initializationvector.get_name_leafdata());
    if (hashsecret.is_set || is_set(hashsecret.yfilter)) leaf_name_data.push_back(hashsecret.get_name_leafdata());
    if (webtokentimeoutseconds.is_set || is_set(webtokentimeoutseconds.yfilter)) leaf_name_data.push_back(webtokentimeoutseconds.get_name_leafdata());
    if (maximumvalidityperiod.is_set || is_set(maximumvalidityperiod.yfilter)) leaf_name_data.push_back(maximumvalidityperiod.get_name_leafdata());
    if (uiidletimeoutseconds.is_set || is_set(uiidletimeoutseconds.yfilter)) leaf_name_data.push_back(uiidletimeoutseconds.get_name_leafdata());
    if (sessionrecordflags.is_set || is_set(sessionrecordflags.yfilter)) leaf_name_data.push_back(sessionrecordflags.get_name_leafdata());
    if (sitefingerprint.is_set || is_set(sitefingerprint.yfilter)) leaf_name_data.push_back(sitefingerprint.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::UserextItems::PkiextItems::WebtokendataItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::UserextItems::PkiextItems::WebtokendataItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::UserextItems::PkiextItems::WebtokendataItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "initializationVector")
    {
        initializationvector = value;
        initializationvector.value_namespace = name_space;
        initializationvector.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hashSecret")
    {
        hashsecret = value;
        hashsecret.value_namespace = name_space;
        hashsecret.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "webtokenTimeoutSeconds")
    {
        webtokentimeoutseconds = value;
        webtokentimeoutseconds.value_namespace = name_space;
        webtokentimeoutseconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximumValidityPeriod")
    {
        maximumvalidityperiod = value;
        maximumvalidityperiod.value_namespace = name_space;
        maximumvalidityperiod.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uiIdleTimeoutSeconds")
    {
        uiidletimeoutseconds = value;
        uiidletimeoutseconds.value_namespace = name_space;
        uiidletimeoutseconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sessionRecordFlags")
    {
        sessionrecordflags = value;
        sessionrecordflags.value_namespace = name_space;
        sessionrecordflags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "siteFingerprint")
    {
        sitefingerprint = value;
        sitefingerprint.value_namespace = name_space;
        sitefingerprint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerKey")
    {
        ownerkey = value;
        ownerkey.value_namespace = name_space;
        ownerkey.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerTag")
    {
        ownertag = value;
        ownertag.value_namespace = name_space;
        ownertag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::UserextItems::PkiextItems::WebtokendataItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "initializationVector")
    {
        initializationvector.yfilter = yfilter;
    }
    if(value_path == "hashSecret")
    {
        hashsecret.yfilter = yfilter;
    }
    if(value_path == "webtokenTimeoutSeconds")
    {
        webtokentimeoutseconds.yfilter = yfilter;
    }
    if(value_path == "maximumValidityPeriod")
    {
        maximumvalidityperiod.yfilter = yfilter;
    }
    if(value_path == "uiIdleTimeoutSeconds")
    {
        uiidletimeoutseconds.yfilter = yfilter;
    }
    if(value_path == "sessionRecordFlags")
    {
        sessionrecordflags.yfilter = yfilter;
    }
    if(value_path == "siteFingerprint")
    {
        sitefingerprint.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ownerKey")
    {
        ownerkey.yfilter = yfilter;
    }
    if(value_path == "ownerTag")
    {
        ownertag.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::UserextItems::PkiextItems::WebtokendataItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key" || name == "initializationVector" || name == "hashSecret" || name == "webtokenTimeoutSeconds" || name == "maximumValidityPeriod" || name == "uiIdleTimeoutSeconds" || name == "sessionRecordFlags" || name == "siteFingerprint" || name == "name" || name == "ownerKey" || name == "ownerTag" || name == "descr")
        return true;
    return false;
}

System::UserextItems::PkiextItems::CsyncsharedkeyItems::CsyncsharedkeyItems()
    :
    key{YType::str, "key"},
    name{YType::str, "name"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"}
{

    yang_name = "csyncsharedkey-items"; yang_parent_name = "pkiext-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::PkiextItems::CsyncsharedkeyItems::~CsyncsharedkeyItems()
{
}

bool System::UserextItems::PkiextItems::CsyncsharedkeyItems::has_data() const
{
    if (is_presence_container) return true;
    return key.is_set
	|| name.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set;
}

bool System::UserextItems::PkiextItems::CsyncsharedkeyItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::UserextItems::PkiextItems::CsyncsharedkeyItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/userext-items/pkiext-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::PkiextItems::CsyncsharedkeyItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csyncsharedkey-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::PkiextItems::CsyncsharedkeyItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::UserextItems::PkiextItems::CsyncsharedkeyItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::UserextItems::PkiextItems::CsyncsharedkeyItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::UserextItems::PkiextItems::CsyncsharedkeyItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerKey")
    {
        ownerkey = value;
        ownerkey.value_namespace = name_space;
        ownerkey.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerTag")
    {
        ownertag = value;
        ownertag.value_namespace = name_space;
        ownertag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::UserextItems::PkiextItems::CsyncsharedkeyItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ownerKey")
    {
        ownerkey.yfilter = yfilter;
    }
    if(value_path == "ownerTag")
    {
        ownertag.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::UserextItems::PkiextItems::CsyncsharedkeyItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key" || name == "name" || name == "ownerKey" || name == "ownerTag" || name == "descr")
        return true;
    return false;
}

System::UserextItems::PkiextItems::CsyncpolicyItems::CsyncpolicyItems()
    :
    state{YType::enumeration, "state"},
    interval{YType::uint16, "interval"},
    name{YType::str, "name"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"}
        ,
    csyncelem_items(std::make_shared<System::UserextItems::PkiextItems::CsyncpolicyItems::CsyncelemItems>())
{
    csyncelem_items->parent = this;

    yang_name = "csyncpolicy-items"; yang_parent_name = "pkiext-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::PkiextItems::CsyncpolicyItems::~CsyncpolicyItems()
{
}

bool System::UserextItems::PkiextItems::CsyncpolicyItems::has_data() const
{
    if (is_presence_container) return true;
    return state.is_set
	|| interval.is_set
	|| name.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set
	|| (csyncelem_items !=  nullptr && csyncelem_items->has_data());
}

bool System::UserextItems::PkiextItems::CsyncpolicyItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| (csyncelem_items !=  nullptr && csyncelem_items->has_operation());
}

std::string System::UserextItems::PkiextItems::CsyncpolicyItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/userext-items/pkiext-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::PkiextItems::CsyncpolicyItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csyncpolicy-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::PkiextItems::CsyncpolicyItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::UserextItems::PkiextItems::CsyncpolicyItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csyncelem-items")
    {
        if(csyncelem_items == nullptr)
        {
            csyncelem_items = std::make_shared<System::UserextItems::PkiextItems::CsyncpolicyItems::CsyncelemItems>();
        }
        return csyncelem_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::UserextItems::PkiextItems::CsyncpolicyItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(csyncelem_items != nullptr)
    {
        _children["csyncelem-items"] = csyncelem_items;
    }

    return _children;
}

void System::UserextItems::PkiextItems::CsyncpolicyItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerKey")
    {
        ownerkey = value;
        ownerkey.value_namespace = name_space;
        ownerkey.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerTag")
    {
        ownertag = value;
        ownertag.value_namespace = name_space;
        ownertag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::UserextItems::PkiextItems::CsyncpolicyItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ownerKey")
    {
        ownerkey.yfilter = yfilter;
    }
    if(value_path == "ownerTag")
    {
        ownertag.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::UserextItems::PkiextItems::CsyncpolicyItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csyncelem-items" || name == "state" || name == "interval" || name == "name" || name == "ownerKey" || name == "ownerTag" || name == "descr")
        return true;
    return false;
}

System::UserextItems::PkiextItems::CsyncpolicyItems::CsyncelemItems::CsyncelemItems()
    :
    csyncelement_list(this, {"name"})
{

    yang_name = "csyncelem-items"; yang_parent_name = "csyncpolicy-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::PkiextItems::CsyncpolicyItems::CsyncelemItems::~CsyncelemItems()
{
}

bool System::UserextItems::PkiextItems::CsyncpolicyItems::CsyncelemItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<csyncelement_list.len(); index++)
    {
        if(csyncelement_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::UserextItems::PkiextItems::CsyncpolicyItems::CsyncelemItems::has_operation() const
{
    for (std::size_t index=0; index<csyncelement_list.len(); index++)
    {
        if(csyncelement_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::UserextItems::PkiextItems::CsyncpolicyItems::CsyncelemItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/userext-items/pkiext-items/csyncpolicy-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::PkiextItems::CsyncpolicyItems::CsyncelemItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csyncelem-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::PkiextItems::CsyncpolicyItems::CsyncelemItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::UserextItems::PkiextItems::CsyncpolicyItems::CsyncelemItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "CsyncElement-list")
    {
        auto ent_ = std::make_shared<System::UserextItems::PkiextItems::CsyncpolicyItems::CsyncelemItems::CsyncElementList>();
        ent_->parent = this;
        csyncelement_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::UserextItems::PkiextItems::CsyncpolicyItems::CsyncelemItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : csyncelement_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::UserextItems::PkiextItems::CsyncpolicyItems::CsyncelemItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::UserextItems::PkiextItems::CsyncpolicyItems::CsyncelemItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::UserextItems::PkiextItems::CsyncpolicyItems::CsyncelemItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "CsyncElement-list")
        return true;
    return false;
}

System::UserextItems::PkiextItems::CsyncpolicyItems::CsyncelemItems::CsyncElementList::CsyncElementList()
    :
    name{YType::str, "name"},
    pattern{YType::str, "pattern"},
    type{YType::enumeration, "type"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"}
{

    yang_name = "CsyncElement-list"; yang_parent_name = "csyncelem-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::PkiextItems::CsyncpolicyItems::CsyncelemItems::CsyncElementList::~CsyncElementList()
{
}

bool System::UserextItems::PkiextItems::CsyncpolicyItems::CsyncelemItems::CsyncElementList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| pattern.is_set
	|| type.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set;
}

bool System::UserextItems::PkiextItems::CsyncpolicyItems::CsyncelemItems::CsyncElementList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(pattern.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::UserextItems::PkiextItems::CsyncpolicyItems::CsyncelemItems::CsyncElementList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/userext-items/pkiext-items/csyncpolicy-items/csyncelem-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::PkiextItems::CsyncpolicyItems::CsyncelemItems::CsyncElementList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CsyncElement-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::PkiextItems::CsyncpolicyItems::CsyncelemItems::CsyncElementList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (pattern.is_set || is_set(pattern.yfilter)) leaf_name_data.push_back(pattern.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::UserextItems::PkiextItems::CsyncpolicyItems::CsyncelemItems::CsyncElementList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::UserextItems::PkiextItems::CsyncpolicyItems::CsyncelemItems::CsyncElementList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::UserextItems::PkiextItems::CsyncpolicyItems::CsyncelemItems::CsyncElementList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pattern")
    {
        pattern = value;
        pattern.value_namespace = name_space;
        pattern.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerKey")
    {
        ownerkey = value;
        ownerkey.value_namespace = name_space;
        ownerkey.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerTag")
    {
        ownertag = value;
        ownertag.value_namespace = name_space;
        ownertag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::UserextItems::PkiextItems::CsyncpolicyItems::CsyncelemItems::CsyncElementList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "pattern")
    {
        pattern.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "ownerKey")
    {
        ownerkey.yfilter = yfilter;
    }
    if(value_path == "ownerTag")
    {
        ownertag.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::UserextItems::PkiextItems::CsyncpolicyItems::CsyncelemItems::CsyncElementList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "pattern" || name == "type" || name == "ownerKey" || name == "ownerTag" || name == "descr")
        return true;
    return false;
}

System::UserextItems::PkiextItems::DbgplgchItems::DbgplgchItems()
    :
    name{YType::str, "name"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"}
{

    yang_name = "dbgplgch-items"; yang_parent_name = "pkiext-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::PkiextItems::DbgplgchItems::~DbgplgchItems()
{
}

bool System::UserextItems::PkiextItems::DbgplgchItems::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set;
}

bool System::UserextItems::PkiextItems::DbgplgchItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::UserextItems::PkiextItems::DbgplgchItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/userext-items/pkiext-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::PkiextItems::DbgplgchItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dbgplgch-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::PkiextItems::DbgplgchItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::UserextItems::PkiextItems::DbgplgchItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::UserextItems::PkiextItems::DbgplgchItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::UserextItems::PkiextItems::DbgplgchItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerKey")
    {
        ownerkey = value;
        ownerkey.value_namespace = name_space;
        ownerkey.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerTag")
    {
        ownertag = value;
        ownertag.value_namespace = name_space;
        ownertag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::UserextItems::PkiextItems::DbgplgchItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ownerKey")
    {
        ownerkey.yfilter = yfilter;
    }
    if(value_path == "ownerTag")
    {
        ownertag.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::UserextItems::PkiextItems::DbgplgchItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "ownerKey" || name == "ownerTag" || name == "descr")
        return true;
    return false;
}

System::UserextItems::PkiextItems::KeyringItems::KeyringItems()
    :
    keyring_list(this, {"name"})
{

    yang_name = "keyring-items"; yang_parent_name = "pkiext-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::PkiextItems::KeyringItems::~KeyringItems()
{
}

bool System::UserextItems::PkiextItems::KeyringItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<keyring_list.len(); index++)
    {
        if(keyring_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::UserextItems::PkiextItems::KeyringItems::has_operation() const
{
    for (std::size_t index=0; index<keyring_list.len(); index++)
    {
        if(keyring_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::UserextItems::PkiextItems::KeyringItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/userext-items/pkiext-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::PkiextItems::KeyringItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "keyring-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::PkiextItems::KeyringItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::UserextItems::PkiextItems::KeyringItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "KeyRing-list")
    {
        auto ent_ = std::make_shared<System::UserextItems::PkiextItems::KeyringItems::KeyRingList>();
        ent_->parent = this;
        keyring_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::UserextItems::PkiextItems::KeyringItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : keyring_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::UserextItems::PkiextItems::KeyringItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::UserextItems::PkiextItems::KeyringItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::UserextItems::PkiextItems::KeyringItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "KeyRing-list")
        return true;
    return false;
}

System::UserextItems::PkiextItems::KeyringItems::KeyRingList::KeyRingList()
    :
    name{YType::str, "name"},
    adminstate{YType::enumeration, "adminState"},
    regen{YType::boolean, "regen"},
    key{YType::str, "key"},
    modulus{YType::enumeration, "modulus"},
    cert{YType::str, "cert"},
    certvaliduntil{YType::str, "certValidUntil"},
    certificatedecodeinformation{YType::str, "certificateDecodeInformation"},
    tp{YType::str, "tp"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"}
        ,
    certreq_items(std::make_shared<System::UserextItems::PkiextItems::KeyringItems::KeyRingList::CertreqItems>())
    , rtcommkeyring_items(std::make_shared<System::UserextItems::PkiextItems::KeyringItems::KeyRingList::RtcommKeyRingItems>())
    , rtaaakeyringref_items(std::make_shared<System::UserextItems::PkiextItems::KeyringItems::KeyRingList::RtaaaKeyringRefItems>())
{
    certreq_items->parent = this;
    rtcommkeyring_items->parent = this;
    rtaaakeyringref_items->parent = this;

    yang_name = "KeyRing-list"; yang_parent_name = "keyring-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::PkiextItems::KeyringItems::KeyRingList::~KeyRingList()
{
}

bool System::UserextItems::PkiextItems::KeyringItems::KeyRingList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| adminstate.is_set
	|| regen.is_set
	|| key.is_set
	|| modulus.is_set
	|| cert.is_set
	|| certvaliduntil.is_set
	|| certificatedecodeinformation.is_set
	|| tp.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set
	|| (certreq_items !=  nullptr && certreq_items->has_data())
	|| (rtcommkeyring_items !=  nullptr && rtcommkeyring_items->has_data())
	|| (rtaaakeyringref_items !=  nullptr && rtaaakeyringref_items->has_data());
}

bool System::UserextItems::PkiextItems::KeyringItems::KeyRingList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminstate.yfilter)
	|| ydk::is_set(regen.yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(modulus.yfilter)
	|| ydk::is_set(cert.yfilter)
	|| ydk::is_set(certvaliduntil.yfilter)
	|| ydk::is_set(certificatedecodeinformation.yfilter)
	|| ydk::is_set(tp.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| (certreq_items !=  nullptr && certreq_items->has_operation())
	|| (rtcommkeyring_items !=  nullptr && rtcommkeyring_items->has_operation())
	|| (rtaaakeyringref_items !=  nullptr && rtaaakeyringref_items->has_operation());
}

std::string System::UserextItems::PkiextItems::KeyringItems::KeyRingList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/userext-items/pkiext-items/keyring-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::PkiextItems::KeyringItems::KeyRingList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "KeyRing-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::PkiextItems::KeyringItems::KeyRingList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminstate.is_set || is_set(adminstate.yfilter)) leaf_name_data.push_back(adminstate.get_name_leafdata());
    if (regen.is_set || is_set(regen.yfilter)) leaf_name_data.push_back(regen.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (modulus.is_set || is_set(modulus.yfilter)) leaf_name_data.push_back(modulus.get_name_leafdata());
    if (cert.is_set || is_set(cert.yfilter)) leaf_name_data.push_back(cert.get_name_leafdata());
    if (certvaliduntil.is_set || is_set(certvaliduntil.yfilter)) leaf_name_data.push_back(certvaliduntil.get_name_leafdata());
    if (certificatedecodeinformation.is_set || is_set(certificatedecodeinformation.yfilter)) leaf_name_data.push_back(certificatedecodeinformation.get_name_leafdata());
    if (tp.is_set || is_set(tp.yfilter)) leaf_name_data.push_back(tp.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::UserextItems::PkiextItems::KeyringItems::KeyRingList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "certreq-items")
    {
        if(certreq_items == nullptr)
        {
            certreq_items = std::make_shared<System::UserextItems::PkiextItems::KeyringItems::KeyRingList::CertreqItems>();
        }
        return certreq_items;
    }

    if(child_yang_name == "rtcommKeyRing-items")
    {
        if(rtcommkeyring_items == nullptr)
        {
            rtcommkeyring_items = std::make_shared<System::UserextItems::PkiextItems::KeyringItems::KeyRingList::RtcommKeyRingItems>();
        }
        return rtcommkeyring_items;
    }

    if(child_yang_name == "rtaaaKeyringRef-items")
    {
        if(rtaaakeyringref_items == nullptr)
        {
            rtaaakeyringref_items = std::make_shared<System::UserextItems::PkiextItems::KeyringItems::KeyRingList::RtaaaKeyringRefItems>();
        }
        return rtaaakeyringref_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::UserextItems::PkiextItems::KeyringItems::KeyRingList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(certreq_items != nullptr)
    {
        _children["certreq-items"] = certreq_items;
    }

    if(rtcommkeyring_items != nullptr)
    {
        _children["rtcommKeyRing-items"] = rtcommkeyring_items;
    }

    if(rtaaakeyringref_items != nullptr)
    {
        _children["rtaaaKeyringRef-items"] = rtaaakeyringref_items;
    }

    return _children;
}

void System::UserextItems::PkiextItems::KeyringItems::KeyRingList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminState")
    {
        adminstate = value;
        adminstate.value_namespace = name_space;
        adminstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "regen")
    {
        regen = value;
        regen.value_namespace = name_space;
        regen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "modulus")
    {
        modulus = value;
        modulus.value_namespace = name_space;
        modulus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cert")
    {
        cert = value;
        cert.value_namespace = name_space;
        cert.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "certValidUntil")
    {
        certvaliduntil = value;
        certvaliduntil.value_namespace = name_space;
        certvaliduntil.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "certificateDecodeInformation")
    {
        certificatedecodeinformation = value;
        certificatedecodeinformation.value_namespace = name_space;
        certificatedecodeinformation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tp")
    {
        tp = value;
        tp.value_namespace = name_space;
        tp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerKey")
    {
        ownerkey = value;
        ownerkey.value_namespace = name_space;
        ownerkey.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerTag")
    {
        ownertag = value;
        ownertag.value_namespace = name_space;
        ownertag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::UserextItems::PkiextItems::KeyringItems::KeyRingList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "adminState")
    {
        adminstate.yfilter = yfilter;
    }
    if(value_path == "regen")
    {
        regen.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "modulus")
    {
        modulus.yfilter = yfilter;
    }
    if(value_path == "cert")
    {
        cert.yfilter = yfilter;
    }
    if(value_path == "certValidUntil")
    {
        certvaliduntil.yfilter = yfilter;
    }
    if(value_path == "certificateDecodeInformation")
    {
        certificatedecodeinformation.yfilter = yfilter;
    }
    if(value_path == "tp")
    {
        tp.yfilter = yfilter;
    }
    if(value_path == "ownerKey")
    {
        ownerkey.yfilter = yfilter;
    }
    if(value_path == "ownerTag")
    {
        ownertag.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::UserextItems::PkiextItems::KeyringItems::KeyRingList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "certreq-items" || name == "rtcommKeyRing-items" || name == "rtaaaKeyringRef-items" || name == "name" || name == "adminState" || name == "regen" || name == "key" || name == "modulus" || name == "cert" || name == "certValidUntil" || name == "certificateDecodeInformation" || name == "tp" || name == "ownerKey" || name == "ownerTag" || name == "descr")
        return true;
    return false;
}

System::UserextItems::PkiextItems::KeyringItems::KeyRingList::CertreqItems::CertreqItems()
    :
    pwd{YType::str, "pwd"},
    subjname{YType::str, "subjName"},
    email{YType::str, "email"},
    country{YType::str, "country"},
    state{YType::str, "state"},
    locality{YType::str, "locality"},
    orgunitname{YType::str, "orgUnitName"},
    orgname{YType::str, "orgName"},
    req{YType::str, "req"}
{

    yang_name = "certreq-items"; yang_parent_name = "KeyRing-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::UserextItems::PkiextItems::KeyringItems::KeyRingList::CertreqItems::~CertreqItems()
{
}

bool System::UserextItems::PkiextItems::KeyringItems::KeyRingList::CertreqItems::has_data() const
{
    if (is_presence_container) return true;
    return pwd.is_set
	|| subjname.is_set
	|| email.is_set
	|| country.is_set
	|| state.is_set
	|| locality.is_set
	|| orgunitname.is_set
	|| orgname.is_set
	|| req.is_set;
}

bool System::UserextItems::PkiextItems::KeyringItems::KeyRingList::CertreqItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pwd.yfilter)
	|| ydk::is_set(subjname.yfilter)
	|| ydk::is_set(email.yfilter)
	|| ydk::is_set(country.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(locality.yfilter)
	|| ydk::is_set(orgunitname.yfilter)
	|| ydk::is_set(orgname.yfilter)
	|| ydk::is_set(req.yfilter);
}

std::string System::UserextItems::PkiextItems::KeyringItems::KeyRingList::CertreqItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "certreq-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::PkiextItems::KeyringItems::KeyRingList::CertreqItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pwd.is_set || is_set(pwd.yfilter)) leaf_name_data.push_back(pwd.get_name_leafdata());
    if (subjname.is_set || is_set(subjname.yfilter)) leaf_name_data.push_back(subjname.get_name_leafdata());
    if (email.is_set || is_set(email.yfilter)) leaf_name_data.push_back(email.get_name_leafdata());
    if (country.is_set || is_set(country.yfilter)) leaf_name_data.push_back(country.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (locality.is_set || is_set(locality.yfilter)) leaf_name_data.push_back(locality.get_name_leafdata());
    if (orgunitname.is_set || is_set(orgunitname.yfilter)) leaf_name_data.push_back(orgunitname.get_name_leafdata());
    if (orgname.is_set || is_set(orgname.yfilter)) leaf_name_data.push_back(orgname.get_name_leafdata());
    if (req.is_set || is_set(req.yfilter)) leaf_name_data.push_back(req.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::UserextItems::PkiextItems::KeyringItems::KeyRingList::CertreqItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::UserextItems::PkiextItems::KeyringItems::KeyRingList::CertreqItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::UserextItems::PkiextItems::KeyringItems::KeyRingList::CertreqItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pwd")
    {
        pwd = value;
        pwd.value_namespace = name_space;
        pwd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subjName")
    {
        subjname = value;
        subjname.value_namespace = name_space;
        subjname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "email")
    {
        email = value;
        email.value_namespace = name_space;
        email.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "country")
    {
        country = value;
        country.value_namespace = name_space;
        country.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locality")
    {
        locality = value;
        locality.value_namespace = name_space;
        locality.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "orgUnitName")
    {
        orgunitname = value;
        orgunitname.value_namespace = name_space;
        orgunitname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "orgName")
    {
        orgname = value;
        orgname.value_namespace = name_space;
        orgname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "req")
    {
        req = value;
        req.value_namespace = name_space;
        req.value_namespace_prefix = name_space_prefix;
    }
}

void System::UserextItems::PkiextItems::KeyringItems::KeyRingList::CertreqItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pwd")
    {
        pwd.yfilter = yfilter;
    }
    if(value_path == "subjName")
    {
        subjname.yfilter = yfilter;
    }
    if(value_path == "email")
    {
        email.yfilter = yfilter;
    }
    if(value_path == "country")
    {
        country.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "locality")
    {
        locality.yfilter = yfilter;
    }
    if(value_path == "orgUnitName")
    {
        orgunitname.yfilter = yfilter;
    }
    if(value_path == "orgName")
    {
        orgname.yfilter = yfilter;
    }
    if(value_path == "req")
    {
        req.yfilter = yfilter;
    }
}

bool System::UserextItems::PkiextItems::KeyringItems::KeyRingList::CertreqItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pwd" || name == "subjName" || name == "email" || name == "country" || name == "state" || name == "locality" || name == "orgUnitName" || name == "orgName" || name == "req")
        return true;
    return false;
}

System::UserextItems::PkiextItems::KeyringItems::KeyRingList::RtcommKeyRingItems::RtcommKeyRingItems()
    :
    rtcommkeyring_list(this, {"tdn"})
{

    yang_name = "rtcommKeyRing-items"; yang_parent_name = "KeyRing-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::UserextItems::PkiextItems::KeyringItems::KeyRingList::RtcommKeyRingItems::~RtcommKeyRingItems()
{
}

bool System::UserextItems::PkiextItems::KeyringItems::KeyRingList::RtcommKeyRingItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtcommkeyring_list.len(); index++)
    {
        if(rtcommkeyring_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::UserextItems::PkiextItems::KeyringItems::KeyRingList::RtcommKeyRingItems::has_operation() const
{
    for (std::size_t index=0; index<rtcommkeyring_list.len(); index++)
    {
        if(rtcommkeyring_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::UserextItems::PkiextItems::KeyringItems::KeyRingList::RtcommKeyRingItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtcommKeyRing-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::PkiextItems::KeyringItems::KeyRingList::RtcommKeyRingItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::UserextItems::PkiextItems::KeyringItems::KeyRingList::RtcommKeyRingItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtCommKeyRing-list")
    {
        auto ent_ = std::make_shared<System::UserextItems::PkiextItems::KeyringItems::KeyRingList::RtcommKeyRingItems::RtCommKeyRingList>();
        ent_->parent = this;
        rtcommkeyring_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::UserextItems::PkiextItems::KeyringItems::KeyRingList::RtcommKeyRingItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rtcommkeyring_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::UserextItems::PkiextItems::KeyringItems::KeyRingList::RtcommKeyRingItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::UserextItems::PkiextItems::KeyringItems::KeyRingList::RtcommKeyRingItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::UserextItems::PkiextItems::KeyringItems::KeyRingList::RtcommKeyRingItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtCommKeyRing-list")
        return true;
    return false;
}

System::UserextItems::PkiextItems::KeyringItems::KeyRingList::RtcommKeyRingItems::RtCommKeyRingList::RtCommKeyRingList()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "RtCommKeyRing-list"; yang_parent_name = "rtcommKeyRing-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::UserextItems::PkiextItems::KeyringItems::KeyRingList::RtcommKeyRingItems::RtCommKeyRingList::~RtCommKeyRingList()
{
}

bool System::UserextItems::PkiextItems::KeyringItems::KeyRingList::RtcommKeyRingItems::RtCommKeyRingList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::UserextItems::PkiextItems::KeyringItems::KeyRingList::RtcommKeyRingItems::RtCommKeyRingList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::UserextItems::PkiextItems::KeyringItems::KeyRingList::RtcommKeyRingItems::RtCommKeyRingList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtCommKeyRing-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::PkiextItems::KeyringItems::KeyRingList::RtcommKeyRingItems::RtCommKeyRingList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::UserextItems::PkiextItems::KeyringItems::KeyRingList::RtcommKeyRingItems::RtCommKeyRingList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::UserextItems::PkiextItems::KeyringItems::KeyRingList::RtcommKeyRingItems::RtCommKeyRingList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::UserextItems::PkiextItems::KeyringItems::KeyRingList::RtcommKeyRingItems::RtCommKeyRingList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::UserextItems::PkiextItems::KeyringItems::KeyRingList::RtcommKeyRingItems::RtCommKeyRingList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::UserextItems::PkiextItems::KeyringItems::KeyRingList::RtcommKeyRingItems::RtCommKeyRingList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::UserextItems::PkiextItems::KeyringItems::KeyRingList::RtaaaKeyringRefItems::RtaaaKeyringRefItems()
    :
    rtaaakeyringref_list(this, {"tdn"})
{

    yang_name = "rtaaaKeyringRef-items"; yang_parent_name = "KeyRing-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::UserextItems::PkiextItems::KeyringItems::KeyRingList::RtaaaKeyringRefItems::~RtaaaKeyringRefItems()
{
}

bool System::UserextItems::PkiextItems::KeyringItems::KeyRingList::RtaaaKeyringRefItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtaaakeyringref_list.len(); index++)
    {
        if(rtaaakeyringref_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::UserextItems::PkiextItems::KeyringItems::KeyRingList::RtaaaKeyringRefItems::has_operation() const
{
    for (std::size_t index=0; index<rtaaakeyringref_list.len(); index++)
    {
        if(rtaaakeyringref_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::UserextItems::PkiextItems::KeyringItems::KeyRingList::RtaaaKeyringRefItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtaaaKeyringRef-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::PkiextItems::KeyringItems::KeyRingList::RtaaaKeyringRefItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::UserextItems::PkiextItems::KeyringItems::KeyRingList::RtaaaKeyringRefItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtAaaKeyringRef-list")
    {
        auto ent_ = std::make_shared<System::UserextItems::PkiextItems::KeyringItems::KeyRingList::RtaaaKeyringRefItems::RtAaaKeyringRefList>();
        ent_->parent = this;
        rtaaakeyringref_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::UserextItems::PkiextItems::KeyringItems::KeyRingList::RtaaaKeyringRefItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rtaaakeyringref_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::UserextItems::PkiextItems::KeyringItems::KeyRingList::RtaaaKeyringRefItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::UserextItems::PkiextItems::KeyringItems::KeyRingList::RtaaaKeyringRefItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::UserextItems::PkiextItems::KeyringItems::KeyRingList::RtaaaKeyringRefItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtAaaKeyringRef-list")
        return true;
    return false;
}

System::UserextItems::PkiextItems::KeyringItems::KeyRingList::RtaaaKeyringRefItems::RtAaaKeyringRefList::RtAaaKeyringRefList()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "RtAaaKeyringRef-list"; yang_parent_name = "rtaaaKeyringRef-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::UserextItems::PkiextItems::KeyringItems::KeyRingList::RtaaaKeyringRefItems::RtAaaKeyringRefList::~RtAaaKeyringRefList()
{
}

bool System::UserextItems::PkiextItems::KeyringItems::KeyRingList::RtaaaKeyringRefItems::RtAaaKeyringRefList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::UserextItems::PkiextItems::KeyringItems::KeyRingList::RtaaaKeyringRefItems::RtAaaKeyringRefList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::UserextItems::PkiextItems::KeyringItems::KeyRingList::RtaaaKeyringRefItems::RtAaaKeyringRefList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtAaaKeyringRef-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::PkiextItems::KeyringItems::KeyRingList::RtaaaKeyringRefItems::RtAaaKeyringRefList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::UserextItems::PkiextItems::KeyringItems::KeyRingList::RtaaaKeyringRefItems::RtAaaKeyringRefList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::UserextItems::PkiextItems::KeyringItems::KeyRingList::RtaaaKeyringRefItems::RtAaaKeyringRefList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::UserextItems::PkiextItems::KeyringItems::KeyRingList::RtaaaKeyringRefItems::RtAaaKeyringRefList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::UserextItems::PkiextItems::KeyringItems::KeyRingList::RtaaaKeyringRefItems::RtAaaKeyringRefList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::UserextItems::PkiextItems::KeyringItems::KeyRingList::RtaaaKeyringRefItems::RtAaaKeyringRefList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::UserextItems::PkiextItems::TpItems::TpItems()
    :
    tp_list(this, {"name"})
{

    yang_name = "tp-items"; yang_parent_name = "pkiext-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::PkiextItems::TpItems::~TpItems()
{
}

bool System::UserextItems::PkiextItems::TpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tp_list.len(); index++)
    {
        if(tp_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::UserextItems::PkiextItems::TpItems::has_operation() const
{
    for (std::size_t index=0; index<tp_list.len(); index++)
    {
        if(tp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::UserextItems::PkiextItems::TpItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/userext-items/pkiext-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::PkiextItems::TpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::PkiextItems::TpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::UserextItems::PkiextItems::TpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "TP-list")
    {
        auto ent_ = std::make_shared<System::UserextItems::PkiextItems::TpItems::TPList>();
        ent_->parent = this;
        tp_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::UserextItems::PkiextItems::TpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : tp_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::UserextItems::PkiextItems::TpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::UserextItems::PkiextItems::TpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::UserextItems::PkiextItems::TpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "TP-list")
        return true;
    return false;
}

System::UserextItems::PkiextItems::TpItems::TPList::TPList()
    :
    name{YType::str, "name"},
    certchain{YType::str, "certChain"},
    fp{YType::str, "fp"},
    numcerts{YType::uint32, "numCerts"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"}
{

    yang_name = "TP-list"; yang_parent_name = "tp-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::PkiextItems::TpItems::TPList::~TPList()
{
}

bool System::UserextItems::PkiextItems::TpItems::TPList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| certchain.is_set
	|| fp.is_set
	|| numcerts.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set;
}

bool System::UserextItems::PkiextItems::TpItems::TPList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(certchain.yfilter)
	|| ydk::is_set(fp.yfilter)
	|| ydk::is_set(numcerts.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::UserextItems::PkiextItems::TpItems::TPList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/userext-items/pkiext-items/tp-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::PkiextItems::TpItems::TPList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "TP-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::PkiextItems::TpItems::TPList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (certchain.is_set || is_set(certchain.yfilter)) leaf_name_data.push_back(certchain.get_name_leafdata());
    if (fp.is_set || is_set(fp.yfilter)) leaf_name_data.push_back(fp.get_name_leafdata());
    if (numcerts.is_set || is_set(numcerts.yfilter)) leaf_name_data.push_back(numcerts.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::UserextItems::PkiextItems::TpItems::TPList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::UserextItems::PkiextItems::TpItems::TPList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::UserextItems::PkiextItems::TpItems::TPList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "certChain")
    {
        certchain = value;
        certchain.value_namespace = name_space;
        certchain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fp")
    {
        fp = value;
        fp.value_namespace = name_space;
        fp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numCerts")
    {
        numcerts = value;
        numcerts.value_namespace = name_space;
        numcerts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerKey")
    {
        ownerkey = value;
        ownerkey.value_namespace = name_space;
        ownerkey.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerTag")
    {
        ownertag = value;
        ownertag.value_namespace = name_space;
        ownertag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::UserextItems::PkiextItems::TpItems::TPList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "certChain")
    {
        certchain.yfilter = yfilter;
    }
    if(value_path == "fp")
    {
        fp.yfilter = yfilter;
    }
    if(value_path == "numCerts")
    {
        numcerts.yfilter = yfilter;
    }
    if(value_path == "ownerKey")
    {
        ownerkey.yfilter = yfilter;
    }
    if(value_path == "ownerTag")
    {
        ownertag.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::UserextItems::PkiextItems::TpItems::TPList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "certChain" || name == "fp" || name == "numCerts" || name == "ownerKey" || name == "ownerTag" || name == "descr")
        return true;
    return false;
}

System::UserextItems::PkiextItems::RtfabricResPkiEpItems::RtfabricResPkiEpItems()
    :
    rtfabricrespkiep_list(this, {"tdn"})
{

    yang_name = "rtfabricResPkiEp-items"; yang_parent_name = "pkiext-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::PkiextItems::RtfabricResPkiEpItems::~RtfabricResPkiEpItems()
{
}

bool System::UserextItems::PkiextItems::RtfabricResPkiEpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtfabricrespkiep_list.len(); index++)
    {
        if(rtfabricrespkiep_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::UserextItems::PkiextItems::RtfabricResPkiEpItems::has_operation() const
{
    for (std::size_t index=0; index<rtfabricrespkiep_list.len(); index++)
    {
        if(rtfabricrespkiep_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::UserextItems::PkiextItems::RtfabricResPkiEpItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/userext-items/pkiext-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::PkiextItems::RtfabricResPkiEpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtfabricResPkiEp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::PkiextItems::RtfabricResPkiEpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::UserextItems::PkiextItems::RtfabricResPkiEpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtFabricResPkiEp-list")
    {
        auto ent_ = std::make_shared<System::UserextItems::PkiextItems::RtfabricResPkiEpItems::RtFabricResPkiEpList>();
        ent_->parent = this;
        rtfabricrespkiep_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::UserextItems::PkiextItems::RtfabricResPkiEpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rtfabricrespkiep_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::UserextItems::PkiextItems::RtfabricResPkiEpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::UserextItems::PkiextItems::RtfabricResPkiEpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::UserextItems::PkiextItems::RtfabricResPkiEpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtFabricResPkiEp-list")
        return true;
    return false;
}

System::UserextItems::PkiextItems::RtfabricResPkiEpItems::RtFabricResPkiEpList::RtFabricResPkiEpList()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "RtFabricResPkiEp-list"; yang_parent_name = "rtfabricResPkiEp-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::PkiextItems::RtfabricResPkiEpItems::RtFabricResPkiEpList::~RtFabricResPkiEpList()
{
}

bool System::UserextItems::PkiextItems::RtfabricResPkiEpItems::RtFabricResPkiEpList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::UserextItems::PkiextItems::RtfabricResPkiEpItems::RtFabricResPkiEpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::UserextItems::PkiextItems::RtfabricResPkiEpItems::RtFabricResPkiEpList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/userext-items/pkiext-items/rtfabricResPkiEp-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::PkiextItems::RtfabricResPkiEpItems::RtFabricResPkiEpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtFabricResPkiEp-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::PkiextItems::RtfabricResPkiEpItems::RtFabricResPkiEpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::UserextItems::PkiextItems::RtfabricResPkiEpItems::RtFabricResPkiEpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::UserextItems::PkiextItems::RtfabricResPkiEpItems::RtFabricResPkiEpList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::UserextItems::PkiextItems::RtfabricResPkiEpItems::RtFabricResPkiEpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::UserextItems::PkiextItems::RtfabricResPkiEpItems::RtFabricResPkiEpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::UserextItems::PkiextItems::RtfabricResPkiEpItems::RtFabricResPkiEpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::UserextItems::RtfabricResUserEpItems::RtfabricResUserEpItems()
    :
    rtfabricresuserep_list(this, {"tdn"})
{

    yang_name = "rtfabricResUserEp-items"; yang_parent_name = "userext-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::RtfabricResUserEpItems::~RtfabricResUserEpItems()
{
}

bool System::UserextItems::RtfabricResUserEpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtfabricresuserep_list.len(); index++)
    {
        if(rtfabricresuserep_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::UserextItems::RtfabricResUserEpItems::has_operation() const
{
    for (std::size_t index=0; index<rtfabricresuserep_list.len(); index++)
    {
        if(rtfabricresuserep_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::UserextItems::RtfabricResUserEpItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/userext-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::RtfabricResUserEpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtfabricResUserEp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::RtfabricResUserEpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::UserextItems::RtfabricResUserEpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtFabricResUserEp-list")
    {
        auto ent_ = std::make_shared<System::UserextItems::RtfabricResUserEpItems::RtFabricResUserEpList>();
        ent_->parent = this;
        rtfabricresuserep_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::UserextItems::RtfabricResUserEpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rtfabricresuserep_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::UserextItems::RtfabricResUserEpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::UserextItems::RtfabricResUserEpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::UserextItems::RtfabricResUserEpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtFabricResUserEp-list")
        return true;
    return false;
}

System::UserextItems::RtfabricResUserEpItems::RtFabricResUserEpList::RtFabricResUserEpList()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "RtFabricResUserEp-list"; yang_parent_name = "rtfabricResUserEp-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::RtfabricResUserEpItems::RtFabricResUserEpList::~RtFabricResUserEpList()
{
}

bool System::UserextItems::RtfabricResUserEpItems::RtFabricResUserEpList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::UserextItems::RtfabricResUserEpItems::RtFabricResUserEpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::UserextItems::RtfabricResUserEpItems::RtFabricResUserEpList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/userext-items/rtfabricResUserEp-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::RtfabricResUserEpItems::RtFabricResUserEpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtFabricResUserEp-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::RtfabricResUserEpItems::RtFabricResUserEpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::UserextItems::RtfabricResUserEpItems::RtFabricResUserEpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::UserextItems::RtfabricResUserEpItems::RtFabricResUserEpList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::UserextItems::RtfabricResUserEpItems::RtFabricResUserEpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::UserextItems::RtfabricResUserEpItems::RtFabricResUserEpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::UserextItems::RtfabricResUserEpItems::RtFabricResUserEpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::UserextItems::RtaaaUserEpItems::RtaaaUserEpItems()
    :
    rtaaauserep_list(this, {"tdn"})
{

    yang_name = "rtaaaUserEp-items"; yang_parent_name = "userext-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::RtaaaUserEpItems::~RtaaaUserEpItems()
{
}

bool System::UserextItems::RtaaaUserEpItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtaaauserep_list.len(); index++)
    {
        if(rtaaauserep_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::UserextItems::RtaaaUserEpItems::has_operation() const
{
    for (std::size_t index=0; index<rtaaauserep_list.len(); index++)
    {
        if(rtaaauserep_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::UserextItems::RtaaaUserEpItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/userext-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::RtaaaUserEpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtaaaUserEp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::RtaaaUserEpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::UserextItems::RtaaaUserEpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtAaaUserEp-list")
    {
        auto ent_ = std::make_shared<System::UserextItems::RtaaaUserEpItems::RtAaaUserEpList>();
        ent_->parent = this;
        rtaaauserep_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::UserextItems::RtaaaUserEpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rtaaauserep_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::UserextItems::RtaaaUserEpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::UserextItems::RtaaaUserEpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::UserextItems::RtaaaUserEpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtAaaUserEp-list")
        return true;
    return false;
}

System::UserextItems::RtaaaUserEpItems::RtAaaUserEpList::RtAaaUserEpList()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "RtAaaUserEp-list"; yang_parent_name = "rtaaaUserEp-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::UserextItems::RtaaaUserEpItems::RtAaaUserEpList::~RtAaaUserEpList()
{
}

bool System::UserextItems::RtaaaUserEpItems::RtAaaUserEpList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::UserextItems::RtaaaUserEpItems::RtAaaUserEpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::UserextItems::RtaaaUserEpItems::RtAaaUserEpList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/userext-items/rtaaaUserEp-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::UserextItems::RtaaaUserEpItems::RtAaaUserEpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtAaaUserEp-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::UserextItems::RtaaaUserEpItems::RtAaaUserEpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::UserextItems::RtaaaUserEpItems::RtAaaUserEpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::UserextItems::RtaaaUserEpItems::RtAaaUserEpList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::UserextItems::RtaaaUserEpItems::RtAaaUserEpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::UserextItems::RtaaaUserEpItems::RtAaaUserEpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::UserextItems::RtaaaUserEpItems::RtAaaUserEpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::SecurityItems::SecurityItems()
    :
    commoncriteria{YType::enumeration, "commonCriteria"},
    enfipsmode{YType::enumeration, "enFipsMode"},
    logginglevel{YType::enumeration, "loggingLevel"},
    name{YType::str, "name"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"}
{

    yang_name = "security-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::SecurityItems::~SecurityItems()
{
}

bool System::SecurityItems::has_data() const
{
    if (is_presence_container) return true;
    return commoncriteria.is_set
	|| enfipsmode.is_set
	|| logginglevel.is_set
	|| name.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set;
}

bool System::SecurityItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(commoncriteria.yfilter)
	|| ydk::is_set(enfipsmode.yfilter)
	|| ydk::is_set(logginglevel.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::SecurityItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::SecurityItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "security-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::SecurityItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (commoncriteria.is_set || is_set(commoncriteria.yfilter)) leaf_name_data.push_back(commoncriteria.get_name_leafdata());
    if (enfipsmode.is_set || is_set(enfipsmode.yfilter)) leaf_name_data.push_back(enfipsmode.get_name_leafdata());
    if (logginglevel.is_set || is_set(logginglevel.yfilter)) leaf_name_data.push_back(logginglevel.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::SecurityItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::SecurityItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::SecurityItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "commonCriteria")
    {
        commoncriteria = value;
        commoncriteria.value_namespace = name_space;
        commoncriteria.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enFipsMode")
    {
        enfipsmode = value;
        enfipsmode.value_namespace = name_space;
        enfipsmode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loggingLevel")
    {
        logginglevel = value;
        logginglevel.value_namespace = name_space;
        logginglevel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerKey")
    {
        ownerkey = value;
        ownerkey.value_namespace = name_space;
        ownerkey.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerTag")
    {
        ownertag = value;
        ownertag.value_namespace = name_space;
        ownertag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::SecurityItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "commonCriteria")
    {
        commoncriteria.yfilter = yfilter;
    }
    if(value_path == "enFipsMode")
    {
        enfipsmode.yfilter = yfilter;
    }
    if(value_path == "loggingLevel")
    {
        logginglevel.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ownerKey")
    {
        ownerkey.yfilter = yfilter;
    }
    if(value_path == "ownerTag")
    {
        ownertag.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::SecurityItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "commonCriteria" || name == "enFipsMode" || name == "loggingLevel" || name == "name" || name == "ownerKey" || name == "ownerTag" || name == "descr")
        return true;
    return false;
}

System::MockrootItems::MockrootItems()
    :
    disable{YType::boolean, "disable"},
    name{YType::str, "name"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"}
        ,
    session_items(std::make_shared<System::MockrootItems::SessionItems>())
{
    session_items->parent = this;

    yang_name = "mockroot-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::MockrootItems::~MockrootItems()
{
}

bool System::MockrootItems::has_data() const
{
    if (is_presence_container) return true;
    return disable.is_set
	|| name.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set
	|| (session_items !=  nullptr && session_items->has_data());
}

bool System::MockrootItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| (session_items !=  nullptr && session_items->has_operation());
}

std::string System::MockrootItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::MockrootItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mockroot-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MockrootItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MockrootItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "session-items")
    {
        if(session_items == nullptr)
        {
            session_items = std::make_shared<System::MockrootItems::SessionItems>();
        }
        return session_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MockrootItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(session_items != nullptr)
    {
        _children["session-items"] = session_items;
    }

    return _children;
}

void System::MockrootItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerKey")
    {
        ownerkey = value;
        ownerkey.value_namespace = name_space;
        ownerkey.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerTag")
    {
        ownertag = value;
        ownertag.value_namespace = name_space;
        ownertag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::MockrootItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ownerKey")
    {
        ownerkey.yfilter = yfilter;
    }
    if(value_path == "ownerTag")
    {
        ownertag.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::MockrootItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-items" || name == "disable" || name == "name" || name == "ownerKey" || name == "ownerTag" || name == "descr")
        return true;
    return false;
}

System::MockrootItems::SessionItems::SessionItems()
    :
    mocksession_list(this, {"name"})
{

    yang_name = "session-items"; yang_parent_name = "mockroot-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::MockrootItems::SessionItems::~SessionItems()
{
}

bool System::MockrootItems::SessionItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mocksession_list.len(); index++)
    {
        if(mocksession_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::MockrootItems::SessionItems::has_operation() const
{
    for (std::size_t index=0; index<mocksession_list.len(); index++)
    {
        if(mocksession_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::MockrootItems::SessionItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/mockroot-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::MockrootItems::SessionItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MockrootItems::SessionItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MockrootItems::SessionItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "MockSession-list")
    {
        auto ent_ = std::make_shared<System::MockrootItems::SessionItems::MockSessionList>();
        ent_->parent = this;
        mocksession_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MockrootItems::SessionItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : mocksession_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::MockrootItems::SessionItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MockrootItems::SessionItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MockrootItems::SessionItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "MockSession-list")
        return true;
    return false;
}

System::MockrootItems::SessionItems::MockSessionList::MockSessionList()
    :
    name{YType::str, "name"},
    observable{YType::str, "observable"},
    duration{YType::uint32, "duration"},
    mode{YType::enumeration, "mode"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"}
        ,
    stat_items(std::make_shared<System::MockrootItems::SessionItems::MockSessionList::StatItems>())
{
    stat_items->parent = this;

    yang_name = "MockSession-list"; yang_parent_name = "session-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::MockrootItems::SessionItems::MockSessionList::~MockSessionList()
{
}

bool System::MockrootItems::SessionItems::MockSessionList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| observable.is_set
	|| duration.is_set
	|| mode.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set
	|| (stat_items !=  nullptr && stat_items->has_data());
}

bool System::MockrootItems::SessionItems::MockSessionList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(observable.yfilter)
	|| ydk::is_set(duration.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| (stat_items !=  nullptr && stat_items->has_operation());
}

std::string System::MockrootItems::SessionItems::MockSessionList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/mockroot-items/session-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::MockrootItems::SessionItems::MockSessionList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MockSession-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MockrootItems::SessionItems::MockSessionList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (observable.is_set || is_set(observable.yfilter)) leaf_name_data.push_back(observable.get_name_leafdata());
    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MockrootItems::SessionItems::MockSessionList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stat-items")
    {
        if(stat_items == nullptr)
        {
            stat_items = std::make_shared<System::MockrootItems::SessionItems::MockSessionList::StatItems>();
        }
        return stat_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MockrootItems::SessionItems::MockSessionList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(stat_items != nullptr)
    {
        _children["stat-items"] = stat_items;
    }

    return _children;
}

void System::MockrootItems::SessionItems::MockSessionList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "observable")
    {
        observable = value;
        observable.value_namespace = name_space;
        observable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerKey")
    {
        ownerkey = value;
        ownerkey.value_namespace = name_space;
        ownerkey.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerTag")
    {
        ownertag = value;
        ownertag.value_namespace = name_space;
        ownertag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::MockrootItems::SessionItems::MockSessionList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "observable")
    {
        observable.yfilter = yfilter;
    }
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "ownerKey")
    {
        ownerkey.yfilter = yfilter;
    }
    if(value_path == "ownerTag")
    {
        ownertag.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::MockrootItems::SessionItems::MockSessionList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stat-items" || name == "name" || name == "observable" || name == "duration" || name == "mode" || name == "ownerKey" || name == "ownerTag" || name == "descr")
        return true;
    return false;
}

System::MockrootItems::SessionItems::MockSessionList::StatItems::StatItems()
    :
    stats_list(this, {"namespace_", "statname"})
{

    yang_name = "stat-items"; yang_parent_name = "MockSession-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MockrootItems::SessionItems::MockSessionList::StatItems::~StatItems()
{
}

bool System::MockrootItems::SessionItems::MockSessionList::StatItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<stats_list.len(); index++)
    {
        if(stats_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::MockrootItems::SessionItems::MockSessionList::StatItems::has_operation() const
{
    for (std::size_t index=0; index<stats_list.len(); index++)
    {
        if(stats_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::MockrootItems::SessionItems::MockSessionList::StatItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stat-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MockrootItems::SessionItems::MockSessionList::StatItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MockrootItems::SessionItems::MockSessionList::StatItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Stats-list")
    {
        auto ent_ = std::make_shared<System::MockrootItems::SessionItems::MockSessionList::StatItems::StatsList>();
        ent_->parent = this;
        stats_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MockrootItems::SessionItems::MockSessionList::StatItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : stats_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::MockrootItems::SessionItems::MockSessionList::StatItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MockrootItems::SessionItems::MockSessionList::StatItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MockrootItems::SessionItems::MockSessionList::StatItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Stats-list")
        return true;
    return false;
}

System::MockrootItems::SessionItems::MockSessionList::StatItems::StatsList::StatsList()
    :
    namespace_{YType::str, "nameSpace"},
    statname{YType::str, "statName"},
    name{YType::str, "name"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"}
        ,
    counter_items(std::make_shared<System::MockrootItems::SessionItems::MockSessionList::StatItems::StatsList::CounterItems>())
{
    counter_items->parent = this;

    yang_name = "Stats-list"; yang_parent_name = "stat-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MockrootItems::SessionItems::MockSessionList::StatItems::StatsList::~StatsList()
{
}

bool System::MockrootItems::SessionItems::MockSessionList::StatItems::StatsList::has_data() const
{
    if (is_presence_container) return true;
    return namespace_.is_set
	|| statname.is_set
	|| name.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set
	|| (counter_items !=  nullptr && counter_items->has_data());
}

bool System::MockrootItems::SessionItems::MockSessionList::StatItems::StatsList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(namespace_.yfilter)
	|| ydk::is_set(statname.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| (counter_items !=  nullptr && counter_items->has_operation());
}

std::string System::MockrootItems::SessionItems::MockSessionList::StatItems::StatsList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Stats-list";
    ADD_KEY_TOKEN(namespace_, "nameSpace");
    ADD_KEY_TOKEN(statname, "statName");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MockrootItems::SessionItems::MockSessionList::StatItems::StatsList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (namespace_.is_set || is_set(namespace_.yfilter)) leaf_name_data.push_back(namespace_.get_name_leafdata());
    if (statname.is_set || is_set(statname.yfilter)) leaf_name_data.push_back(statname.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MockrootItems::SessionItems::MockSessionList::StatItems::StatsList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "counter-items")
    {
        if(counter_items == nullptr)
        {
            counter_items = std::make_shared<System::MockrootItems::SessionItems::MockSessionList::StatItems::StatsList::CounterItems>();
        }
        return counter_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MockrootItems::SessionItems::MockSessionList::StatItems::StatsList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(counter_items != nullptr)
    {
        _children["counter-items"] = counter_items;
    }

    return _children;
}

void System::MockrootItems::SessionItems::MockSessionList::StatItems::StatsList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nameSpace")
    {
        namespace_ = value;
        namespace_.value_namespace = name_space;
        namespace_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "statName")
    {
        statname = value;
        statname.value_namespace = name_space;
        statname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerKey")
    {
        ownerkey = value;
        ownerkey.value_namespace = name_space;
        ownerkey.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerTag")
    {
        ownertag = value;
        ownertag.value_namespace = name_space;
        ownertag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::MockrootItems::SessionItems::MockSessionList::StatItems::StatsList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nameSpace")
    {
        namespace_.yfilter = yfilter;
    }
    if(value_path == "statName")
    {
        statname.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ownerKey")
    {
        ownerkey.yfilter = yfilter;
    }
    if(value_path == "ownerTag")
    {
        ownertag.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::MockrootItems::SessionItems::MockSessionList::StatItems::StatsList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counter-items" || name == "nameSpace" || name == "statName" || name == "name" || name == "ownerKey" || name == "ownerTag" || name == "descr")
        return true;
    return false;
}

System::MockrootItems::SessionItems::MockSessionList::StatItems::StatsList::CounterItems::CounterItems()
    :
    counter_list(this, {"name"})
{

    yang_name = "counter-items"; yang_parent_name = "Stats-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MockrootItems::SessionItems::MockSessionList::StatItems::StatsList::CounterItems::~CounterItems()
{
}

bool System::MockrootItems::SessionItems::MockSessionList::StatItems::StatsList::CounterItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<counter_list.len(); index++)
    {
        if(counter_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::MockrootItems::SessionItems::MockSessionList::StatItems::StatsList::CounterItems::has_operation() const
{
    for (std::size_t index=0; index<counter_list.len(); index++)
    {
        if(counter_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::MockrootItems::SessionItems::MockSessionList::StatItems::StatsList::CounterItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counter-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MockrootItems::SessionItems::MockSessionList::StatItems::StatsList::CounterItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MockrootItems::SessionItems::MockSessionList::StatItems::StatsList::CounterItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Counter-list")
    {
        auto ent_ = std::make_shared<System::MockrootItems::SessionItems::MockSessionList::StatItems::StatsList::CounterItems::CounterList>();
        ent_->parent = this;
        counter_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MockrootItems::SessionItems::MockSessionList::StatItems::StatsList::CounterItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : counter_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::MockrootItems::SessionItems::MockSessionList::StatItems::StatsList::CounterItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::MockrootItems::SessionItems::MockSessionList::StatItems::StatsList::CounterItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::MockrootItems::SessionItems::MockSessionList::StatItems::StatsList::CounterItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Counter-list")
        return true;
    return false;
}

System::MockrootItems::SessionItems::MockSessionList::StatItems::StatsList::CounterItems::CounterList::CounterList()
    :
    name{YType::str, "name"},
    start{YType::uint64, "start"},
    end{YType::uint64, "end"},
    ownerkey{YType::str, "ownerKey"},
    ownertag{YType::str, "ownerTag"},
    descr{YType::str, "descr"}
{

    yang_name = "Counter-list"; yang_parent_name = "counter-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::MockrootItems::SessionItems::MockSessionList::StatItems::StatsList::CounterItems::CounterList::~CounterList()
{
}

bool System::MockrootItems::SessionItems::MockSessionList::StatItems::StatsList::CounterItems::CounterList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| start.is_set
	|| end.is_set
	|| ownerkey.is_set
	|| ownertag.is_set
	|| descr.is_set;
}

bool System::MockrootItems::SessionItems::MockSessionList::StatItems::StatsList::CounterItems::CounterList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(start.yfilter)
	|| ydk::is_set(end.yfilter)
	|| ydk::is_set(ownerkey.yfilter)
	|| ydk::is_set(ownertag.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::MockrootItems::SessionItems::MockSessionList::StatItems::StatsList::CounterItems::CounterList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Counter-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::MockrootItems::SessionItems::MockSessionList::StatItems::StatsList::CounterItems::CounterList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (start.is_set || is_set(start.yfilter)) leaf_name_data.push_back(start.get_name_leafdata());
    if (end.is_set || is_set(end.yfilter)) leaf_name_data.push_back(end.get_name_leafdata());
    if (ownerkey.is_set || is_set(ownerkey.yfilter)) leaf_name_data.push_back(ownerkey.get_name_leafdata());
    if (ownertag.is_set || is_set(ownertag.yfilter)) leaf_name_data.push_back(ownertag.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::MockrootItems::SessionItems::MockSessionList::StatItems::StatsList::CounterItems::CounterList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::MockrootItems::SessionItems::MockSessionList::StatItems::StatsList::CounterItems::CounterList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::MockrootItems::SessionItems::MockSessionList::StatItems::StatsList::CounterItems::CounterList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start")
    {
        start = value;
        start.value_namespace = name_space;
        start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end")
    {
        end = value;
        end.value_namespace = name_space;
        end.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerKey")
    {
        ownerkey = value;
        ownerkey.value_namespace = name_space;
        ownerkey.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ownerTag")
    {
        ownertag = value;
        ownertag.value_namespace = name_space;
        ownertag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::MockrootItems::SessionItems::MockSessionList::StatItems::StatsList::CounterItems::CounterList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "start")
    {
        start.yfilter = yfilter;
    }
    if(value_path == "end")
    {
        end.yfilter = yfilter;
    }
    if(value_path == "ownerKey")
    {
        ownerkey.yfilter = yfilter;
    }
    if(value_path == "ownerTag")
    {
        ownertag.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::MockrootItems::SessionItems::MockSessionList::StatItems::StatsList::CounterItems::CounterList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "start" || name == "end" || name == "ownerKey" || name == "ownerTag" || name == "descr")
        return true;
    return false;
}

System::StpItems::StpItems()
    :
    adminst{YType::enumeration, "adminSt"},
    operst{YType::enumeration, "operSt"}
        ,
    inst_items(std::make_shared<System::StpItems::InstItems>())
{
    inst_items->parent = this;

    yang_name = "stp-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::StpItems::~StpItems()
{
}

bool System::StpItems::has_data() const
{
    if (is_presence_container) return true;
    return adminst.is_set
	|| operst.is_set
	|| (inst_items !=  nullptr && inst_items->has_data());
}

bool System::StpItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| (inst_items !=  nullptr && inst_items->has_operation());
}

std::string System::StpItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::StpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::StpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::StpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inst-items")
    {
        if(inst_items == nullptr)
        {
            inst_items = std::make_shared<System::StpItems::InstItems>();
        }
        return inst_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::StpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(inst_items != nullptr)
    {
        _children["inst-items"] = inst_items;
    }

    return _children;
}

void System::StpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void System::StpItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::StpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inst-items" || name == "adminSt" || name == "operSt")
        return true;
    return false;
}

System::StpItems::InstItems::InstItems()
    :
    mode{YType::enumeration, "mode"},
    lcissu{YType::enumeration, "lcIssu"},
    pathcostop{YType::enumeration, "pathcostOp"},
    fcoe{YType::enumeration, "fcoe"},
    bridge{YType::enumeration, "bridge"},
    loopguard{YType::enumeration, "loopguard"},
    l2gstpdomid{YType::uint32, "l2GStpDomId"},
    name{YType::str, "name"},
    adminst{YType::enumeration, "adminSt"},
    ctrl{YType::str, "ctrl"},
    opererr{YType::str, "operErr"}
        ,
    if_items(std::make_shared<System::StpItems::InstItems::IfItems>())
    , mstent_items(std::make_shared<System::StpItems::InstItems::MstentItems>())
    , vlan_items(std::make_shared<System::StpItems::InstItems::VlanItems>())
{
    if_items->parent = this;
    mstent_items->parent = this;
    vlan_items->parent = this;

    yang_name = "inst-items"; yang_parent_name = "stp-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::StpItems::InstItems::~InstItems()
{
}

bool System::StpItems::InstItems::has_data() const
{
    if (is_presence_container) return true;
    return mode.is_set
	|| lcissu.is_set
	|| pathcostop.is_set
	|| fcoe.is_set
	|| bridge.is_set
	|| loopguard.is_set
	|| l2gstpdomid.is_set
	|| name.is_set
	|| adminst.is_set
	|| ctrl.is_set
	|| opererr.is_set
	|| (if_items !=  nullptr && if_items->has_data())
	|| (mstent_items !=  nullptr && mstent_items->has_data())
	|| (vlan_items !=  nullptr && vlan_items->has_data());
}

bool System::StpItems::InstItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(lcissu.yfilter)
	|| ydk::is_set(pathcostop.yfilter)
	|| ydk::is_set(fcoe.yfilter)
	|| ydk::is_set(bridge.yfilter)
	|| ydk::is_set(loopguard.yfilter)
	|| ydk::is_set(l2gstpdomid.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(opererr.yfilter)
	|| (if_items !=  nullptr && if_items->has_operation())
	|| (mstent_items !=  nullptr && mstent_items->has_operation())
	|| (vlan_items !=  nullptr && vlan_items->has_operation());
}

std::string System::StpItems::InstItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/stp-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::StpItems::InstItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inst-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::StpItems::InstItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (lcissu.is_set || is_set(lcissu.yfilter)) leaf_name_data.push_back(lcissu.get_name_leafdata());
    if (pathcostop.is_set || is_set(pathcostop.yfilter)) leaf_name_data.push_back(pathcostop.get_name_leafdata());
    if (fcoe.is_set || is_set(fcoe.yfilter)) leaf_name_data.push_back(fcoe.get_name_leafdata());
    if (bridge.is_set || is_set(bridge.yfilter)) leaf_name_data.push_back(bridge.get_name_leafdata());
    if (loopguard.is_set || is_set(loopguard.yfilter)) leaf_name_data.push_back(loopguard.get_name_leafdata());
    if (l2gstpdomid.is_set || is_set(l2gstpdomid.yfilter)) leaf_name_data.push_back(l2gstpdomid.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (opererr.is_set || is_set(opererr.yfilter)) leaf_name_data.push_back(opererr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::StpItems::InstItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "if-items")
    {
        if(if_items == nullptr)
        {
            if_items = std::make_shared<System::StpItems::InstItems::IfItems>();
        }
        return if_items;
    }

    if(child_yang_name == "mstent-items")
    {
        if(mstent_items == nullptr)
        {
            mstent_items = std::make_shared<System::StpItems::InstItems::MstentItems>();
        }
        return mstent_items;
    }

    if(child_yang_name == "vlan-items")
    {
        if(vlan_items == nullptr)
        {
            vlan_items = std::make_shared<System::StpItems::InstItems::VlanItems>();
        }
        return vlan_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::StpItems::InstItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(if_items != nullptr)
    {
        _children["if-items"] = if_items;
    }

    if(mstent_items != nullptr)
    {
        _children["mstent-items"] = mstent_items;
    }

    if(vlan_items != nullptr)
    {
        _children["vlan-items"] = vlan_items;
    }

    return _children;
}

void System::StpItems::InstItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lcIssu")
    {
        lcissu = value;
        lcissu.value_namespace = name_space;
        lcissu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pathcostOp")
    {
        pathcostop = value;
        pathcostop.value_namespace = name_space;
        pathcostop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fcoe")
    {
        fcoe = value;
        fcoe.value_namespace = name_space;
        fcoe.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bridge")
    {
        bridge = value;
        bridge.value_namespace = name_space;
        bridge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loopguard")
    {
        loopguard = value;
        loopguard.value_namespace = name_space;
        loopguard.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2GStpDomId")
    {
        l2gstpdomid = value;
        l2gstpdomid.value_namespace = name_space;
        l2gstpdomid.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "ctrl")
    {
        ctrl = value;
        ctrl.value_namespace = name_space;
        ctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operErr")
    {
        opererr = value;
        opererr.value_namespace = name_space;
        opererr.value_namespace_prefix = name_space_prefix;
    }
}

void System::StpItems::InstItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "lcIssu")
    {
        lcissu.yfilter = yfilter;
    }
    if(value_path == "pathcostOp")
    {
        pathcostop.yfilter = yfilter;
    }
    if(value_path == "fcoe")
    {
        fcoe.yfilter = yfilter;
    }
    if(value_path == "bridge")
    {
        bridge.yfilter = yfilter;
    }
    if(value_path == "loopguard")
    {
        loopguard.yfilter = yfilter;
    }
    if(value_path == "l2GStpDomId")
    {
        l2gstpdomid.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "ctrl")
    {
        ctrl.yfilter = yfilter;
    }
    if(value_path == "operErr")
    {
        opererr.yfilter = yfilter;
    }
}

bool System::StpItems::InstItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "if-items" || name == "mstent-items" || name == "vlan-items" || name == "mode" || name == "lcIssu" || name == "pathcostOp" || name == "fcoe" || name == "bridge" || name == "loopguard" || name == "l2GStpDomId" || name == "name" || name == "adminSt" || name == "ctrl" || name == "operErr")
        return true;
    return false;
}

System::StpItems::InstItems::IfItems::IfItems()
    :
    if_list(this, {"id"})
{

    yang_name = "if-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::StpItems::InstItems::IfItems::~IfItems()
{
}

bool System::StpItems::InstItems::IfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<if_list.len(); index++)
    {
        if(if_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::StpItems::InstItems::IfItems::has_operation() const
{
    for (std::size_t index=0; index<if_list.len(); index++)
    {
        if(if_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::StpItems::InstItems::IfItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/stp-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::StpItems::InstItems::IfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::StpItems::InstItems::IfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::StpItems::InstItems::IfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "If-list")
    {
        auto ent_ = std::make_shared<System::StpItems::InstItems::IfItems::IfList>();
        ent_->parent = this;
        if_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::StpItems::InstItems::IfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : if_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::StpItems::InstItems::IfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::StpItems::InstItems::IfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::StpItems::InstItems::IfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "If-list")
        return true;
    return false;
}

System::StpItems::InstItems::IfItems::IfList::IfList()
    :
    id{YType::str, "id"},
    mode{YType::enumeration, "mode"},
    ctrl{YType::str, "ctrl"},
    guard{YType::enumeration, "guard"},
    bpdufilter{YType::enumeration, "bpdufilter"},
    bpduguard{YType::enumeration, "bpduguard"},
    linktype{YType::enumeration, "linkType"},
    priority{YType::uint8, "priority"},
    cost{YType::uint32, "cost"},
    simulatepvst{YType::enumeration, "simulatePvst"},
    lcissu{YType::enumeration, "lcIssu"},
    prestdcfg{YType::enumeration, "prestdCfg"},
    name{YType::str, "name"},
    descr{YType::str, "descr"},
    adminst{YType::enumeration, "adminSt"}
        ,
    vlan_items(std::make_shared<System::StpItems::InstItems::IfItems::IfList::VlanItems>())
    , mst_items(std::make_shared<System::StpItems::InstItems::IfItems::IfList::MstItems>())
    , rtvrfmbr_items(std::make_shared<System::StpItems::InstItems::IfItems::IfList::RtvrfMbrItems>())
    , rtnwpathtoif_items(std::make_shared<System::StpItems::InstItems::IfItems::IfList::RtnwPathToIfItems>())
{
    vlan_items->parent = this;
    mst_items->parent = this;
    rtvrfmbr_items->parent = this;
    rtnwpathtoif_items->parent = this;

    yang_name = "If-list"; yang_parent_name = "if-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::StpItems::InstItems::IfItems::IfList::~IfList()
{
}

bool System::StpItems::InstItems::IfItems::IfList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| mode.is_set
	|| ctrl.is_set
	|| guard.is_set
	|| bpdufilter.is_set
	|| bpduguard.is_set
	|| linktype.is_set
	|| priority.is_set
	|| cost.is_set
	|| simulatepvst.is_set
	|| lcissu.is_set
	|| prestdcfg.is_set
	|| name.is_set
	|| descr.is_set
	|| adminst.is_set
	|| (vlan_items !=  nullptr && vlan_items->has_data())
	|| (mst_items !=  nullptr && mst_items->has_data())
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_data())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_data());
}

bool System::StpItems::InstItems::IfItems::IfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(ctrl.yfilter)
	|| ydk::is_set(guard.yfilter)
	|| ydk::is_set(bpdufilter.yfilter)
	|| ydk::is_set(bpduguard.yfilter)
	|| ydk::is_set(linktype.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(simulatepvst.yfilter)
	|| ydk::is_set(lcissu.yfilter)
	|| ydk::is_set(prestdcfg.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| (vlan_items !=  nullptr && vlan_items->has_operation())
	|| (mst_items !=  nullptr && mst_items->has_operation())
	|| (rtvrfmbr_items !=  nullptr && rtvrfmbr_items->has_operation())
	|| (rtnwpathtoif_items !=  nullptr && rtnwpathtoif_items->has_operation());
}

std::string System::StpItems::InstItems::IfItems::IfList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/stp-items/inst-items/if-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::StpItems::InstItems::IfItems::IfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "If-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::StpItems::InstItems::IfItems::IfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (ctrl.is_set || is_set(ctrl.yfilter)) leaf_name_data.push_back(ctrl.get_name_leafdata());
    if (guard.is_set || is_set(guard.yfilter)) leaf_name_data.push_back(guard.get_name_leafdata());
    if (bpdufilter.is_set || is_set(bpdufilter.yfilter)) leaf_name_data.push_back(bpdufilter.get_name_leafdata());
    if (bpduguard.is_set || is_set(bpduguard.yfilter)) leaf_name_data.push_back(bpduguard.get_name_leafdata());
    if (linktype.is_set || is_set(linktype.yfilter)) leaf_name_data.push_back(linktype.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (simulatepvst.is_set || is_set(simulatepvst.yfilter)) leaf_name_data.push_back(simulatepvst.get_name_leafdata());
    if (lcissu.is_set || is_set(lcissu.yfilter)) leaf_name_data.push_back(lcissu.get_name_leafdata());
    if (prestdcfg.is_set || is_set(prestdcfg.yfilter)) leaf_name_data.push_back(prestdcfg.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::StpItems::InstItems::IfItems::IfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan-items")
    {
        if(vlan_items == nullptr)
        {
            vlan_items = std::make_shared<System::StpItems::InstItems::IfItems::IfList::VlanItems>();
        }
        return vlan_items;
    }

    if(child_yang_name == "mst-items")
    {
        if(mst_items == nullptr)
        {
            mst_items = std::make_shared<System::StpItems::InstItems::IfItems::IfList::MstItems>();
        }
        return mst_items;
    }

    if(child_yang_name == "rtvrfMbr-items")
    {
        if(rtvrfmbr_items == nullptr)
        {
            rtvrfmbr_items = std::make_shared<System::StpItems::InstItems::IfItems::IfList::RtvrfMbrItems>();
        }
        return rtvrfmbr_items;
    }

    if(child_yang_name == "rtnwPathToIf-items")
    {
        if(rtnwpathtoif_items == nullptr)
        {
            rtnwpathtoif_items = std::make_shared<System::StpItems::InstItems::IfItems::IfList::RtnwPathToIfItems>();
        }
        return rtnwpathtoif_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::StpItems::InstItems::IfItems::IfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vlan_items != nullptr)
    {
        _children["vlan-items"] = vlan_items;
    }

    if(mst_items != nullptr)
    {
        _children["mst-items"] = mst_items;
    }

    if(rtvrfmbr_items != nullptr)
    {
        _children["rtvrfMbr-items"] = rtvrfmbr_items;
    }

    if(rtnwpathtoif_items != nullptr)
    {
        _children["rtnwPathToIf-items"] = rtnwpathtoif_items;
    }

    return _children;
}

void System::StpItems::InstItems::IfItems::IfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ctrl")
    {
        ctrl = value;
        ctrl.value_namespace = name_space;
        ctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "guard")
    {
        guard = value;
        guard.value_namespace = name_space;
        guard.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bpdufilter")
    {
        bpdufilter = value;
        bpdufilter.value_namespace = name_space;
        bpdufilter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bpduguard")
    {
        bpduguard = value;
        bpduguard.value_namespace = name_space;
        bpduguard.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "linkType")
    {
        linktype = value;
        linktype.value_namespace = name_space;
        linktype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "simulatePvst")
    {
        simulatepvst = value;
        simulatepvst.value_namespace = name_space;
        simulatepvst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lcIssu")
    {
        lcissu = value;
        lcissu.value_namespace = name_space;
        lcissu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prestdCfg")
    {
        prestdcfg = value;
        prestdcfg.value_namespace = name_space;
        prestdcfg.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
}

void System::StpItems::InstItems::IfItems::IfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "ctrl")
    {
        ctrl.yfilter = yfilter;
    }
    if(value_path == "guard")
    {
        guard.yfilter = yfilter;
    }
    if(value_path == "bpdufilter")
    {
        bpdufilter.yfilter = yfilter;
    }
    if(value_path == "bpduguard")
    {
        bpduguard.yfilter = yfilter;
    }
    if(value_path == "linkType")
    {
        linktype.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "simulatePvst")
    {
        simulatepvst.yfilter = yfilter;
    }
    if(value_path == "lcIssu")
    {
        lcissu.yfilter = yfilter;
    }
    if(value_path == "prestdCfg")
    {
        prestdcfg.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
}

bool System::StpItems::InstItems::IfItems::IfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-items" || name == "mst-items" || name == "rtvrfMbr-items" || name == "rtnwPathToIf-items" || name == "id" || name == "mode" || name == "ctrl" || name == "guard" || name == "bpdufilter" || name == "bpduguard" || name == "linkType" || name == "priority" || name == "cost" || name == "simulatePvst" || name == "lcIssu" || name == "prestdCfg" || name == "name" || name == "descr" || name == "adminSt")
        return true;
    return false;
}

System::StpItems::InstItems::IfItems::IfList::VlanItems::VlanItems()
    :
    vlancfg_list(this, {"vlanid"})
{

    yang_name = "vlan-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::StpItems::InstItems::IfItems::IfList::VlanItems::~VlanItems()
{
}

bool System::StpItems::InstItems::IfItems::IfList::VlanItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vlancfg_list.len(); index++)
    {
        if(vlancfg_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::StpItems::InstItems::IfItems::IfList::VlanItems::has_operation() const
{
    for (std::size_t index=0; index<vlancfg_list.len(); index++)
    {
        if(vlancfg_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::StpItems::InstItems::IfItems::IfList::VlanItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::StpItems::InstItems::IfItems::IfList::VlanItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::StpItems::InstItems::IfItems::IfList::VlanItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "VlanCfg-list")
    {
        auto ent_ = std::make_shared<System::StpItems::InstItems::IfItems::IfList::VlanItems::VlanCfgList>();
        ent_->parent = this;
        vlancfg_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::StpItems::InstItems::IfItems::IfList::VlanItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vlancfg_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::StpItems::InstItems::IfItems::IfList::VlanItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::StpItems::InstItems::IfItems::IfList::VlanItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::StpItems::InstItems::IfItems::IfList::VlanItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "VlanCfg-list")
        return true;
    return false;
}

System::StpItems::InstItems::IfItems::IfList::VlanItems::VlanCfgList::VlanCfgList()
    :
    vlanid{YType::uint16, "vlanId"},
    priority{YType::uint8, "priority"},
    cost{YType::uint32, "cost"}
{

    yang_name = "VlanCfg-list"; yang_parent_name = "vlan-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::StpItems::InstItems::IfItems::IfList::VlanItems::VlanCfgList::~VlanCfgList()
{
}

bool System::StpItems::InstItems::IfItems::IfList::VlanItems::VlanCfgList::has_data() const
{
    if (is_presence_container) return true;
    return vlanid.is_set
	|| priority.is_set
	|| cost.is_set;
}

bool System::StpItems::InstItems::IfItems::IfList::VlanItems::VlanCfgList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlanid.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(cost.yfilter);
}

std::string System::StpItems::InstItems::IfItems::IfList::VlanItems::VlanCfgList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "VlanCfg-list";
    ADD_KEY_TOKEN(vlanid, "vlanId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::StpItems::InstItems::IfItems::IfList::VlanItems::VlanCfgList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlanid.is_set || is_set(vlanid.yfilter)) leaf_name_data.push_back(vlanid.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::StpItems::InstItems::IfItems::IfList::VlanItems::VlanCfgList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::StpItems::InstItems::IfItems::IfList::VlanItems::VlanCfgList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::StpItems::InstItems::IfItems::IfList::VlanItems::VlanCfgList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlanId")
    {
        vlanid = value;
        vlanid.value_namespace = name_space;
        vlanid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
}

void System::StpItems::InstItems::IfItems::IfList::VlanItems::VlanCfgList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlanId")
    {
        vlanid.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
}

bool System::StpItems::InstItems::IfItems::IfList::VlanItems::VlanCfgList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlanId" || name == "priority" || name == "cost")
        return true;
    return false;
}

System::StpItems::InstItems::IfItems::IfList::MstItems::MstItems()
    :
    mstcfg_list(this, {"mstid"})
{

    yang_name = "mst-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::StpItems::InstItems::IfItems::IfList::MstItems::~MstItems()
{
}

bool System::StpItems::InstItems::IfItems::IfList::MstItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mstcfg_list.len(); index++)
    {
        if(mstcfg_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::StpItems::InstItems::IfItems::IfList::MstItems::has_operation() const
{
    for (std::size_t index=0; index<mstcfg_list.len(); index++)
    {
        if(mstcfg_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::StpItems::InstItems::IfItems::IfList::MstItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mst-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::StpItems::InstItems::IfItems::IfList::MstItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::StpItems::InstItems::IfItems::IfList::MstItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "MstCfg-list")
    {
        auto ent_ = std::make_shared<System::StpItems::InstItems::IfItems::IfList::MstItems::MstCfgList>();
        ent_->parent = this;
        mstcfg_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::StpItems::InstItems::IfItems::IfList::MstItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : mstcfg_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::StpItems::InstItems::IfItems::IfList::MstItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::StpItems::InstItems::IfItems::IfList::MstItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::StpItems::InstItems::IfItems::IfList::MstItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "MstCfg-list")
        return true;
    return false;
}

System::StpItems::InstItems::IfItems::IfList::MstItems::MstCfgList::MstCfgList()
    :
    mstid{YType::uint16, "mstId"},
    priority{YType::uint8, "priority"},
    cost{YType::uint32, "cost"}
{

    yang_name = "MstCfg-list"; yang_parent_name = "mst-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::StpItems::InstItems::IfItems::IfList::MstItems::MstCfgList::~MstCfgList()
{
}

bool System::StpItems::InstItems::IfItems::IfList::MstItems::MstCfgList::has_data() const
{
    if (is_presence_container) return true;
    return mstid.is_set
	|| priority.is_set
	|| cost.is_set;
}

bool System::StpItems::InstItems::IfItems::IfList::MstItems::MstCfgList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mstid.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(cost.yfilter);
}

std::string System::StpItems::InstItems::IfItems::IfList::MstItems::MstCfgList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MstCfg-list";
    ADD_KEY_TOKEN(mstid, "mstId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::StpItems::InstItems::IfItems::IfList::MstItems::MstCfgList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mstid.is_set || is_set(mstid.yfilter)) leaf_name_data.push_back(mstid.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::StpItems::InstItems::IfItems::IfList::MstItems::MstCfgList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::StpItems::InstItems::IfItems::IfList::MstItems::MstCfgList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::StpItems::InstItems::IfItems::IfList::MstItems::MstCfgList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mstId")
    {
        mstid = value;
        mstid.value_namespace = name_space;
        mstid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
}

void System::StpItems::InstItems::IfItems::IfList::MstItems::MstCfgList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mstId")
    {
        mstid.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
}

bool System::StpItems::InstItems::IfItems::IfList::MstItems::MstCfgList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mstId" || name == "priority" || name == "cost")
        return true;
    return false;
}

System::StpItems::InstItems::IfItems::IfList::RtvrfMbrItems::RtvrfMbrItems()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "rtvrfMbr-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::StpItems::InstItems::IfItems::IfList::RtvrfMbrItems::~RtvrfMbrItems()
{
}

bool System::StpItems::InstItems::IfItems::IfList::RtvrfMbrItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::StpItems::InstItems::IfItems::IfList::RtvrfMbrItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::StpItems::InstItems::IfItems::IfList::RtvrfMbrItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtvrfMbr-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::StpItems::InstItems::IfItems::IfList::RtvrfMbrItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::StpItems::InstItems::IfItems::IfList::RtvrfMbrItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::StpItems::InstItems::IfItems::IfList::RtvrfMbrItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::StpItems::InstItems::IfItems::IfList::RtvrfMbrItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::StpItems::InstItems::IfItems::IfList::RtvrfMbrItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::StpItems::InstItems::IfItems::IfList::RtvrfMbrItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::StpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtnwPathToIfItems()
    :
    rtnwpathtoif_list(this, {"tdn"})
{

    yang_name = "rtnwPathToIf-items"; yang_parent_name = "If-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::StpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::~RtnwPathToIfItems()
{
}

bool System::StpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::StpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::has_operation() const
{
    for (std::size_t index=0; index<rtnwpathtoif_list.len(); index++)
    {
        if(rtnwpathtoif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::StpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtnwPathToIf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::StpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::StpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RtNwPathToIf-list")
    {
        auto ent_ = std::make_shared<System::StpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList>();
        ent_->parent = this;
        rtnwpathtoif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::StpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rtnwpathtoif_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::StpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::StpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::StpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RtNwPathToIf-list")
        return true;
    return false;
}

System::StpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::RtNwPathToIfList()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "RtNwPathToIf-list"; yang_parent_name = "rtnwPathToIf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::StpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::~RtNwPathToIfList()
{
}

bool System::StpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::StpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::StpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RtNwPathToIf-list";
    ADD_KEY_TOKEN(tdn, "tDn");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::StpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::StpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::StpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::StpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::StpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::StpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::StpItems::InstItems::MstentItems::MstentItems()
    :
    maxhops{YType::uint8, "maxHops"},
    simulate{YType::enumeration, "simulate"},
    opererr{YType::str, "operErr"},
    regname{YType::str, "regName"},
    rev{YType::uint16, "rev"},
    adminst{YType::enumeration, "adminSt"},
    fwdtime{YType::uint8, "fwdTime"},
    hellotime{YType::uint8, "helloTime"},
    maxage{YType::uint8, "maxAge"}
        ,
    mst_items(std::make_shared<System::StpItems::InstItems::MstentItems::MstItems>())
{
    mst_items->parent = this;

    yang_name = "mstent-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::StpItems::InstItems::MstentItems::~MstentItems()
{
}

bool System::StpItems::InstItems::MstentItems::has_data() const
{
    if (is_presence_container) return true;
    return maxhops.is_set
	|| simulate.is_set
	|| opererr.is_set
	|| regname.is_set
	|| rev.is_set
	|| adminst.is_set
	|| fwdtime.is_set
	|| hellotime.is_set
	|| maxage.is_set
	|| (mst_items !=  nullptr && mst_items->has_data());
}

bool System::StpItems::InstItems::MstentItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maxhops.yfilter)
	|| ydk::is_set(simulate.yfilter)
	|| ydk::is_set(opererr.yfilter)
	|| ydk::is_set(regname.yfilter)
	|| ydk::is_set(rev.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(fwdtime.yfilter)
	|| ydk::is_set(hellotime.yfilter)
	|| ydk::is_set(maxage.yfilter)
	|| (mst_items !=  nullptr && mst_items->has_operation());
}

std::string System::StpItems::InstItems::MstentItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/stp-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::StpItems::InstItems::MstentItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mstent-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::StpItems::InstItems::MstentItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maxhops.is_set || is_set(maxhops.yfilter)) leaf_name_data.push_back(maxhops.get_name_leafdata());
    if (simulate.is_set || is_set(simulate.yfilter)) leaf_name_data.push_back(simulate.get_name_leafdata());
    if (opererr.is_set || is_set(opererr.yfilter)) leaf_name_data.push_back(opererr.get_name_leafdata());
    if (regname.is_set || is_set(regname.yfilter)) leaf_name_data.push_back(regname.get_name_leafdata());
    if (rev.is_set || is_set(rev.yfilter)) leaf_name_data.push_back(rev.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (fwdtime.is_set || is_set(fwdtime.yfilter)) leaf_name_data.push_back(fwdtime.get_name_leafdata());
    if (hellotime.is_set || is_set(hellotime.yfilter)) leaf_name_data.push_back(hellotime.get_name_leafdata());
    if (maxage.is_set || is_set(maxage.yfilter)) leaf_name_data.push_back(maxage.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::StpItems::InstItems::MstentItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mst-items")
    {
        if(mst_items == nullptr)
        {
            mst_items = std::make_shared<System::StpItems::InstItems::MstentItems::MstItems>();
        }
        return mst_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::StpItems::InstItems::MstentItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mst_items != nullptr)
    {
        _children["mst-items"] = mst_items;
    }

    return _children;
}

void System::StpItems::InstItems::MstentItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maxHops")
    {
        maxhops = value;
        maxhops.value_namespace = name_space;
        maxhops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "simulate")
    {
        simulate = value;
        simulate.value_namespace = name_space;
        simulate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operErr")
    {
        opererr = value;
        opererr.value_namespace = name_space;
        opererr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "regName")
    {
        regname = value;
        regname.value_namespace = name_space;
        regname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rev")
    {
        rev = value;
        rev.value_namespace = name_space;
        rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fwdTime")
    {
        fwdtime = value;
        fwdtime.value_namespace = name_space;
        fwdtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "helloTime")
    {
        hellotime = value;
        hellotime.value_namespace = name_space;
        hellotime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxAge")
    {
        maxage = value;
        maxage.value_namespace = name_space;
        maxage.value_namespace_prefix = name_space_prefix;
    }
}

void System::StpItems::InstItems::MstentItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maxHops")
    {
        maxhops.yfilter = yfilter;
    }
    if(value_path == "simulate")
    {
        simulate.yfilter = yfilter;
    }
    if(value_path == "operErr")
    {
        opererr.yfilter = yfilter;
    }
    if(value_path == "regName")
    {
        regname.yfilter = yfilter;
    }
    if(value_path == "rev")
    {
        rev.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "fwdTime")
    {
        fwdtime.yfilter = yfilter;
    }
    if(value_path == "helloTime")
    {
        hellotime.yfilter = yfilter;
    }
    if(value_path == "maxAge")
    {
        maxage.yfilter = yfilter;
    }
}

bool System::StpItems::InstItems::MstentItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mst-items" || name == "maxHops" || name == "simulate" || name == "operErr" || name == "regName" || name == "rev" || name == "adminSt" || name == "fwdTime" || name == "helloTime" || name == "maxAge")
        return true;
    return false;
}

System::StpItems::InstItems::MstentItems::MstItems::MstItems()
    :
    mstdom_list(this, {"id"})
{

    yang_name = "mst-items"; yang_parent_name = "mstent-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::StpItems::InstItems::MstentItems::MstItems::~MstItems()
{
}

bool System::StpItems::InstItems::MstentItems::MstItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mstdom_list.len(); index++)
    {
        if(mstdom_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::StpItems::InstItems::MstentItems::MstItems::has_operation() const
{
    for (std::size_t index=0; index<mstdom_list.len(); index++)
    {
        if(mstdom_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::StpItems::InstItems::MstentItems::MstItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/stp-items/inst-items/mstent-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::StpItems::InstItems::MstentItems::MstItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mst-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::StpItems::InstItems::MstentItems::MstItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::StpItems::InstItems::MstentItems::MstItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "MstDom-list")
    {
        auto ent_ = std::make_shared<System::StpItems::InstItems::MstentItems::MstItems::MstDomList>();
        ent_->parent = this;
        mstdom_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::StpItems::InstItems::MstentItems::MstItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : mstdom_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::StpItems::InstItems::MstentItems::MstItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::StpItems::InstItems::MstentItems::MstItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::StpItems::InstItems::MstentItems::MstItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "MstDom-list")
        return true;
    return false;
}

System::StpItems::InstItems::MstentItems::MstItems::MstDomList::MstDomList()
    :
    id{YType::uint16, "id"},
    cfgst{YType::enumeration, "cfgSt"},
    root{YType::enumeration, "root"},
    diameter{YType::uint8, "diameter"},
    priority{YType::uint16, "priority"},
    vlanrange{YType::str, "vlanRange"},
    roottype{YType::enumeration, "rootType"},
    rootmode{YType::enumeration, "rootMode"},
    bridgepriority{YType::uint16, "bridgePriority"},
    bridgeaddress{YType::str, "bridgeAddress"},
    rootpriority{YType::uint16, "rootPriority"},
    rootaddress{YType::str, "rootAddress"},
    rootportpriority{YType::uint16, "rootPortPriority"},
    rootportnumber{YType::uint16, "rootPortNumber"},
    rootport{YType::str, "rootPort"},
    rootpathcost{YType::uint32, "rootPathCost"}
        ,
    vlan_items(std::make_shared<System::StpItems::InstItems::MstentItems::MstItems::MstDomList::VlanItems>())
    , if_items(std::make_shared<System::StpItems::InstItems::MstentItems::MstItems::MstDomList::IfItems>())
{
    vlan_items->parent = this;
    if_items->parent = this;

    yang_name = "MstDom-list"; yang_parent_name = "mst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::StpItems::InstItems::MstentItems::MstItems::MstDomList::~MstDomList()
{
}

bool System::StpItems::InstItems::MstentItems::MstItems::MstDomList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| cfgst.is_set
	|| root.is_set
	|| diameter.is_set
	|| priority.is_set
	|| vlanrange.is_set
	|| roottype.is_set
	|| rootmode.is_set
	|| bridgepriority.is_set
	|| bridgeaddress.is_set
	|| rootpriority.is_set
	|| rootaddress.is_set
	|| rootportpriority.is_set
	|| rootportnumber.is_set
	|| rootport.is_set
	|| rootpathcost.is_set
	|| (vlan_items !=  nullptr && vlan_items->has_data())
	|| (if_items !=  nullptr && if_items->has_data());
}

bool System::StpItems::InstItems::MstentItems::MstItems::MstDomList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(cfgst.yfilter)
	|| ydk::is_set(root.yfilter)
	|| ydk::is_set(diameter.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(vlanrange.yfilter)
	|| ydk::is_set(roottype.yfilter)
	|| ydk::is_set(rootmode.yfilter)
	|| ydk::is_set(bridgepriority.yfilter)
	|| ydk::is_set(bridgeaddress.yfilter)
	|| ydk::is_set(rootpriority.yfilter)
	|| ydk::is_set(rootaddress.yfilter)
	|| ydk::is_set(rootportpriority.yfilter)
	|| ydk::is_set(rootportnumber.yfilter)
	|| ydk::is_set(rootport.yfilter)
	|| ydk::is_set(rootpathcost.yfilter)
	|| (vlan_items !=  nullptr && vlan_items->has_operation())
	|| (if_items !=  nullptr && if_items->has_operation());
}

std::string System::StpItems::InstItems::MstentItems::MstItems::MstDomList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/stp-items/inst-items/mstent-items/mst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::StpItems::InstItems::MstentItems::MstItems::MstDomList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MstDom-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::StpItems::InstItems::MstentItems::MstItems::MstDomList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (cfgst.is_set || is_set(cfgst.yfilter)) leaf_name_data.push_back(cfgst.get_name_leafdata());
    if (root.is_set || is_set(root.yfilter)) leaf_name_data.push_back(root.get_name_leafdata());
    if (diameter.is_set || is_set(diameter.yfilter)) leaf_name_data.push_back(diameter.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (vlanrange.is_set || is_set(vlanrange.yfilter)) leaf_name_data.push_back(vlanrange.get_name_leafdata());
    if (roottype.is_set || is_set(roottype.yfilter)) leaf_name_data.push_back(roottype.get_name_leafdata());
    if (rootmode.is_set || is_set(rootmode.yfilter)) leaf_name_data.push_back(rootmode.get_name_leafdata());
    if (bridgepriority.is_set || is_set(bridgepriority.yfilter)) leaf_name_data.push_back(bridgepriority.get_name_leafdata());
    if (bridgeaddress.is_set || is_set(bridgeaddress.yfilter)) leaf_name_data.push_back(bridgeaddress.get_name_leafdata());
    if (rootpriority.is_set || is_set(rootpriority.yfilter)) leaf_name_data.push_back(rootpriority.get_name_leafdata());
    if (rootaddress.is_set || is_set(rootaddress.yfilter)) leaf_name_data.push_back(rootaddress.get_name_leafdata());
    if (rootportpriority.is_set || is_set(rootportpriority.yfilter)) leaf_name_data.push_back(rootportpriority.get_name_leafdata());
    if (rootportnumber.is_set || is_set(rootportnumber.yfilter)) leaf_name_data.push_back(rootportnumber.get_name_leafdata());
    if (rootport.is_set || is_set(rootport.yfilter)) leaf_name_data.push_back(rootport.get_name_leafdata());
    if (rootpathcost.is_set || is_set(rootpathcost.yfilter)) leaf_name_data.push_back(rootpathcost.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::StpItems::InstItems::MstentItems::MstItems::MstDomList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan-items")
    {
        if(vlan_items == nullptr)
        {
            vlan_items = std::make_shared<System::StpItems::InstItems::MstentItems::MstItems::MstDomList::VlanItems>();
        }
        return vlan_items;
    }

    if(child_yang_name == "if-items")
    {
        if(if_items == nullptr)
        {
            if_items = std::make_shared<System::StpItems::InstItems::MstentItems::MstItems::MstDomList::IfItems>();
        }
        return if_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::StpItems::InstItems::MstentItems::MstItems::MstDomList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vlan_items != nullptr)
    {
        _children["vlan-items"] = vlan_items;
    }

    if(if_items != nullptr)
    {
        _children["if-items"] = if_items;
    }

    return _children;
}

void System::StpItems::InstItems::MstentItems::MstItems::MstDomList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cfgSt")
    {
        cfgst = value;
        cfgst.value_namespace = name_space;
        cfgst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "root")
    {
        root = value;
        root.value_namespace = name_space;
        root.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diameter")
    {
        diameter = value;
        diameter.value_namespace = name_space;
        diameter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlanRange")
    {
        vlanrange = value;
        vlanrange.value_namespace = name_space;
        vlanrange.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rootType")
    {
        roottype = value;
        roottype.value_namespace = name_space;
        roottype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rootMode")
    {
        rootmode = value;
        rootmode.value_namespace = name_space;
        rootmode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bridgePriority")
    {
        bridgepriority = value;
        bridgepriority.value_namespace = name_space;
        bridgepriority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bridgeAddress")
    {
        bridgeaddress = value;
        bridgeaddress.value_namespace = name_space;
        bridgeaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rootPriority")
    {
        rootpriority = value;
        rootpriority.value_namespace = name_space;
        rootpriority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rootAddress")
    {
        rootaddress = value;
        rootaddress.value_namespace = name_space;
        rootaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rootPortPriority")
    {
        rootportpriority = value;
        rootportpriority.value_namespace = name_space;
        rootportpriority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rootPortNumber")
    {
        rootportnumber = value;
        rootportnumber.value_namespace = name_space;
        rootportnumber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rootPort")
    {
        rootport = value;
        rootport.value_namespace = name_space;
        rootport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rootPathCost")
    {
        rootpathcost = value;
        rootpathcost.value_namespace = name_space;
        rootpathcost.value_namespace_prefix = name_space_prefix;
    }
}

void System::StpItems::InstItems::MstentItems::MstItems::MstDomList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "cfgSt")
    {
        cfgst.yfilter = yfilter;
    }
    if(value_path == "root")
    {
        root.yfilter = yfilter;
    }
    if(value_path == "diameter")
    {
        diameter.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "vlanRange")
    {
        vlanrange.yfilter = yfilter;
    }
    if(value_path == "rootType")
    {
        roottype.yfilter = yfilter;
    }
    if(value_path == "rootMode")
    {
        rootmode.yfilter = yfilter;
    }
    if(value_path == "bridgePriority")
    {
        bridgepriority.yfilter = yfilter;
    }
    if(value_path == "bridgeAddress")
    {
        bridgeaddress.yfilter = yfilter;
    }
    if(value_path == "rootPriority")
    {
        rootpriority.yfilter = yfilter;
    }
    if(value_path == "rootAddress")
    {
        rootaddress.yfilter = yfilter;
    }
    if(value_path == "rootPortPriority")
    {
        rootportpriority.yfilter = yfilter;
    }
    if(value_path == "rootPortNumber")
    {
        rootportnumber.yfilter = yfilter;
    }
    if(value_path == "rootPort")
    {
        rootport.yfilter = yfilter;
    }
    if(value_path == "rootPathCost")
    {
        rootpathcost.yfilter = yfilter;
    }
}

bool System::StpItems::InstItems::MstentItems::MstItems::MstDomList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-items" || name == "if-items" || name == "id" || name == "cfgSt" || name == "root" || name == "diameter" || name == "priority" || name == "vlanRange" || name == "rootType" || name == "rootMode" || name == "bridgePriority" || name == "bridgeAddress" || name == "rootPriority" || name == "rootAddress" || name == "rootPortPriority" || name == "rootPortNumber" || name == "rootPort" || name == "rootPathCost")
        return true;
    return false;
}

System::StpItems::InstItems::MstentItems::MstItems::MstDomList::VlanItems::VlanItems()
    :
    vlanrange_list(this, {"start", "end"})
{

    yang_name = "vlan-items"; yang_parent_name = "MstDom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::StpItems::InstItems::MstentItems::MstItems::MstDomList::VlanItems::~VlanItems()
{
}

bool System::StpItems::InstItems::MstentItems::MstItems::MstDomList::VlanItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vlanrange_list.len(); index++)
    {
        if(vlanrange_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::StpItems::InstItems::MstentItems::MstItems::MstDomList::VlanItems::has_operation() const
{
    for (std::size_t index=0; index<vlanrange_list.len(); index++)
    {
        if(vlanrange_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::StpItems::InstItems::MstentItems::MstItems::MstDomList::VlanItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::StpItems::InstItems::MstentItems::MstItems::MstDomList::VlanItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::StpItems::InstItems::MstentItems::MstItems::MstDomList::VlanItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "VlanRange-list")
    {
        auto ent_ = std::make_shared<System::StpItems::InstItems::MstentItems::MstItems::MstDomList::VlanItems::VlanRangeList>();
        ent_->parent = this;
        vlanrange_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::StpItems::InstItems::MstentItems::MstItems::MstDomList::VlanItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vlanrange_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::StpItems::InstItems::MstentItems::MstItems::MstDomList::VlanItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::StpItems::InstItems::MstentItems::MstItems::MstDomList::VlanItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::StpItems::InstItems::MstentItems::MstItems::MstDomList::VlanItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "VlanRange-list")
        return true;
    return false;
}

System::StpItems::InstItems::MstentItems::MstItems::MstDomList::VlanItems::VlanRangeList::VlanRangeList()
    :
    start{YType::uint16, "start"},
    end{YType::uint16, "end"}
{

    yang_name = "VlanRange-list"; yang_parent_name = "vlan-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::StpItems::InstItems::MstentItems::MstItems::MstDomList::VlanItems::VlanRangeList::~VlanRangeList()
{
}

bool System::StpItems::InstItems::MstentItems::MstItems::MstDomList::VlanItems::VlanRangeList::has_data() const
{
    if (is_presence_container) return true;
    return start.is_set
	|| end.is_set;
}

bool System::StpItems::InstItems::MstentItems::MstItems::MstDomList::VlanItems::VlanRangeList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start.yfilter)
	|| ydk::is_set(end.yfilter);
}

std::string System::StpItems::InstItems::MstentItems::MstItems::MstDomList::VlanItems::VlanRangeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "VlanRange-list";
    ADD_KEY_TOKEN(start, "start");
    ADD_KEY_TOKEN(end, "end");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::StpItems::InstItems::MstentItems::MstItems::MstDomList::VlanItems::VlanRangeList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start.is_set || is_set(start.yfilter)) leaf_name_data.push_back(start.get_name_leafdata());
    if (end.is_set || is_set(end.yfilter)) leaf_name_data.push_back(end.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::StpItems::InstItems::MstentItems::MstItems::MstDomList::VlanItems::VlanRangeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::StpItems::InstItems::MstentItems::MstItems::MstDomList::VlanItems::VlanRangeList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::StpItems::InstItems::MstentItems::MstItems::MstDomList::VlanItems::VlanRangeList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start")
    {
        start = value;
        start.value_namespace = name_space;
        start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end")
    {
        end = value;
        end.value_namespace = name_space;
        end.value_namespace_prefix = name_space_prefix;
    }
}

void System::StpItems::InstItems::MstentItems::MstItems::MstDomList::VlanItems::VlanRangeList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start")
    {
        start.yfilter = yfilter;
    }
    if(value_path == "end")
    {
        end.yfilter = yfilter;
    }
}

bool System::StpItems::InstItems::MstentItems::MstItems::MstDomList::VlanItems::VlanRangeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start" || name == "end")
        return true;
    return false;
}

System::StpItems::InstItems::MstentItems::MstItems::MstDomList::IfItems::IfItems()
    :
    mstif_list(this, {"id"})
{

    yang_name = "if-items"; yang_parent_name = "MstDom-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::StpItems::InstItems::MstentItems::MstItems::MstDomList::IfItems::~IfItems()
{
}

bool System::StpItems::InstItems::MstentItems::MstItems::MstDomList::IfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mstif_list.len(); index++)
    {
        if(mstif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::StpItems::InstItems::MstentItems::MstItems::MstDomList::IfItems::has_operation() const
{
    for (std::size_t index=0; index<mstif_list.len(); index++)
    {
        if(mstif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::StpItems::InstItems::MstentItems::MstItems::MstDomList::IfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::StpItems::InstItems::MstentItems::MstItems::MstDomList::IfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::StpItems::InstItems::MstentItems::MstItems::MstDomList::IfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "MstIf-list")
    {
        auto ent_ = std::make_shared<System::StpItems::InstItems::MstentItems::MstItems::MstDomList::IfItems::MstIfList>();
        ent_->parent = this;
        mstif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::StpItems::InstItems::MstentItems::MstItems::MstDomList::IfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : mstif_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::StpItems::InstItems::MstentItems::MstItems::MstDomList::IfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::StpItems::InstItems::MstentItems::MstItems::MstDomList::IfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::StpItems::InstItems::MstentItems::MstItems::MstDomList::IfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "MstIf-list")
        return true;
    return false;
}

System::StpItems::InstItems::MstentItems::MstItems::MstDomList::IfItems::MstIfList::MstIfList()
    :
    id{YType::str, "id"},
    designatedrootpriority{YType::uint16, "designatedRootPriority"},
    designatedrootaddress{YType::str, "designatedRootAddress"},
    designatedrootcost{YType::uint32, "designatedRootCost"},
    designatedbridgepriority{YType::uint16, "designatedBridgePriority"},
    designatedbridgeaddress{YType::str, "designatedBridgeAddress"},
    designatedportpriority{YType::uint16, "designatedPortPriority"},
    designatedportnumber{YType::uint16, "designatedPortNumber"},
    portpriority{YType::uint16, "portPriority"},
    portnumber{YType::uint16, "portNumber"},
    portpathcost{YType::uint32, "portPathCost"},
    portrole{YType::enumeration, "portRole"},
    portstate{YType::enumeration, "portState"},
    p2p{YType::boolean, "p2p"},
    operbpduguard{YType::boolean, "operBpduguard"},
    operbpdufilter{YType::boolean, "operBpdufilter"},
    operportfast{YType::boolean, "operPortfast"},
    operloopguard{YType::boolean, "operLoopguard"},
    vpcstate{YType::enumeration, "vpcState"},
    mode{YType::enumeration, "mode"},
    dispute{YType::boolean, "dispute"},
    peer{YType::boolean, "peer"},
    bound{YType::boolean, "bound"},
    inconsistent{YType::boolean, "inconsistent"},
    prestd{YType::boolean, "prestd"}
{

    yang_name = "MstIf-list"; yang_parent_name = "if-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::StpItems::InstItems::MstentItems::MstItems::MstDomList::IfItems::MstIfList::~MstIfList()
{
}

bool System::StpItems::InstItems::MstentItems::MstItems::MstDomList::IfItems::MstIfList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| designatedrootpriority.is_set
	|| designatedrootaddress.is_set
	|| designatedrootcost.is_set
	|| designatedbridgepriority.is_set
	|| designatedbridgeaddress.is_set
	|| designatedportpriority.is_set
	|| designatedportnumber.is_set
	|| portpriority.is_set
	|| portnumber.is_set
	|| portpathcost.is_set
	|| portrole.is_set
	|| portstate.is_set
	|| p2p.is_set
	|| operbpduguard.is_set
	|| operbpdufilter.is_set
	|| operportfast.is_set
	|| operloopguard.is_set
	|| vpcstate.is_set
	|| mode.is_set
	|| dispute.is_set
	|| peer.is_set
	|| bound.is_set
	|| inconsistent.is_set
	|| prestd.is_set;
}

bool System::StpItems::InstItems::MstentItems::MstItems::MstDomList::IfItems::MstIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(designatedrootpriority.yfilter)
	|| ydk::is_set(designatedrootaddress.yfilter)
	|| ydk::is_set(designatedrootcost.yfilter)
	|| ydk::is_set(designatedbridgepriority.yfilter)
	|| ydk::is_set(designatedbridgeaddress.yfilter)
	|| ydk::is_set(designatedportpriority.yfilter)
	|| ydk::is_set(designatedportnumber.yfilter)
	|| ydk::is_set(portpriority.yfilter)
	|| ydk::is_set(portnumber.yfilter)
	|| ydk::is_set(portpathcost.yfilter)
	|| ydk::is_set(portrole.yfilter)
	|| ydk::is_set(portstate.yfilter)
	|| ydk::is_set(p2p.yfilter)
	|| ydk::is_set(operbpduguard.yfilter)
	|| ydk::is_set(operbpdufilter.yfilter)
	|| ydk::is_set(operportfast.yfilter)
	|| ydk::is_set(operloopguard.yfilter)
	|| ydk::is_set(vpcstate.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(dispute.yfilter)
	|| ydk::is_set(peer.yfilter)
	|| ydk::is_set(bound.yfilter)
	|| ydk::is_set(inconsistent.yfilter)
	|| ydk::is_set(prestd.yfilter);
}

std::string System::StpItems::InstItems::MstentItems::MstItems::MstDomList::IfItems::MstIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MstIf-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::StpItems::InstItems::MstentItems::MstItems::MstDomList::IfItems::MstIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (designatedrootpriority.is_set || is_set(designatedrootpriority.yfilter)) leaf_name_data.push_back(designatedrootpriority.get_name_leafdata());
    if (designatedrootaddress.is_set || is_set(designatedrootaddress.yfilter)) leaf_name_data.push_back(designatedrootaddress.get_name_leafdata());
    if (designatedrootcost.is_set || is_set(designatedrootcost.yfilter)) leaf_name_data.push_back(designatedrootcost.get_name_leafdata());
    if (designatedbridgepriority.is_set || is_set(designatedbridgepriority.yfilter)) leaf_name_data.push_back(designatedbridgepriority.get_name_leafdata());
    if (designatedbridgeaddress.is_set || is_set(designatedbridgeaddress.yfilter)) leaf_name_data.push_back(designatedbridgeaddress.get_name_leafdata());
    if (designatedportpriority.is_set || is_set(designatedportpriority.yfilter)) leaf_name_data.push_back(designatedportpriority.get_name_leafdata());
    if (designatedportnumber.is_set || is_set(designatedportnumber.yfilter)) leaf_name_data.push_back(designatedportnumber.get_name_leafdata());
    if (portpriority.is_set || is_set(portpriority.yfilter)) leaf_name_data.push_back(portpriority.get_name_leafdata());
    if (portnumber.is_set || is_set(portnumber.yfilter)) leaf_name_data.push_back(portnumber.get_name_leafdata());
    if (portpathcost.is_set || is_set(portpathcost.yfilter)) leaf_name_data.push_back(portpathcost.get_name_leafdata());
    if (portrole.is_set || is_set(portrole.yfilter)) leaf_name_data.push_back(portrole.get_name_leafdata());
    if (portstate.is_set || is_set(portstate.yfilter)) leaf_name_data.push_back(portstate.get_name_leafdata());
    if (p2p.is_set || is_set(p2p.yfilter)) leaf_name_data.push_back(p2p.get_name_leafdata());
    if (operbpduguard.is_set || is_set(operbpduguard.yfilter)) leaf_name_data.push_back(operbpduguard.get_name_leafdata());
    if (operbpdufilter.is_set || is_set(operbpdufilter.yfilter)) leaf_name_data.push_back(operbpdufilter.get_name_leafdata());
    if (operportfast.is_set || is_set(operportfast.yfilter)) leaf_name_data.push_back(operportfast.get_name_leafdata());
    if (operloopguard.is_set || is_set(operloopguard.yfilter)) leaf_name_data.push_back(operloopguard.get_name_leafdata());
    if (vpcstate.is_set || is_set(vpcstate.yfilter)) leaf_name_data.push_back(vpcstate.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (dispute.is_set || is_set(dispute.yfilter)) leaf_name_data.push_back(dispute.get_name_leafdata());
    if (peer.is_set || is_set(peer.yfilter)) leaf_name_data.push_back(peer.get_name_leafdata());
    if (bound.is_set || is_set(bound.yfilter)) leaf_name_data.push_back(bound.get_name_leafdata());
    if (inconsistent.is_set || is_set(inconsistent.yfilter)) leaf_name_data.push_back(inconsistent.get_name_leafdata());
    if (prestd.is_set || is_set(prestd.yfilter)) leaf_name_data.push_back(prestd.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::StpItems::InstItems::MstentItems::MstItems::MstDomList::IfItems::MstIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::StpItems::InstItems::MstentItems::MstItems::MstDomList::IfItems::MstIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::StpItems::InstItems::MstentItems::MstItems::MstDomList::IfItems::MstIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "designatedRootPriority")
    {
        designatedrootpriority = value;
        designatedrootpriority.value_namespace = name_space;
        designatedrootpriority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "designatedRootAddress")
    {
        designatedrootaddress = value;
        designatedrootaddress.value_namespace = name_space;
        designatedrootaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "designatedRootCost")
    {
        designatedrootcost = value;
        designatedrootcost.value_namespace = name_space;
        designatedrootcost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "designatedBridgePriority")
    {
        designatedbridgepriority = value;
        designatedbridgepriority.value_namespace = name_space;
        designatedbridgepriority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "designatedBridgeAddress")
    {
        designatedbridgeaddress = value;
        designatedbridgeaddress.value_namespace = name_space;
        designatedbridgeaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "designatedPortPriority")
    {
        designatedportpriority = value;
        designatedportpriority.value_namespace = name_space;
        designatedportpriority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "designatedPortNumber")
    {
        designatedportnumber = value;
        designatedportnumber.value_namespace = name_space;
        designatedportnumber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "portPriority")
    {
        portpriority = value;
        portpriority.value_namespace = name_space;
        portpriority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "portNumber")
    {
        portnumber = value;
        portnumber.value_namespace = name_space;
        portnumber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "portPathCost")
    {
        portpathcost = value;
        portpathcost.value_namespace = name_space;
        portpathcost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "portRole")
    {
        portrole = value;
        portrole.value_namespace = name_space;
        portrole.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "portState")
    {
        portstate = value;
        portstate.value_namespace = name_space;
        portstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2p")
    {
        p2p = value;
        p2p.value_namespace = name_space;
        p2p.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operBpduguard")
    {
        operbpduguard = value;
        operbpduguard.value_namespace = name_space;
        operbpduguard.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operBpdufilter")
    {
        operbpdufilter = value;
        operbpdufilter.value_namespace = name_space;
        operbpdufilter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operPortfast")
    {
        operportfast = value;
        operportfast.value_namespace = name_space;
        operportfast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operLoopguard")
    {
        operloopguard = value;
        operloopguard.value_namespace = name_space;
        operloopguard.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpcState")
    {
        vpcstate = value;
        vpcstate.value_namespace = name_space;
        vpcstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dispute")
    {
        dispute = value;
        dispute.value_namespace = name_space;
        dispute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer")
    {
        peer = value;
        peer.value_namespace = name_space;
        peer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bound")
    {
        bound = value;
        bound.value_namespace = name_space;
        bound.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inconsistent")
    {
        inconsistent = value;
        inconsistent.value_namespace = name_space;
        inconsistent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prestd")
    {
        prestd = value;
        prestd.value_namespace = name_space;
        prestd.value_namespace_prefix = name_space_prefix;
    }
}

void System::StpItems::InstItems::MstentItems::MstItems::MstDomList::IfItems::MstIfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "designatedRootPriority")
    {
        designatedrootpriority.yfilter = yfilter;
    }
    if(value_path == "designatedRootAddress")
    {
        designatedrootaddress.yfilter = yfilter;
    }
    if(value_path == "designatedRootCost")
    {
        designatedrootcost.yfilter = yfilter;
    }
    if(value_path == "designatedBridgePriority")
    {
        designatedbridgepriority.yfilter = yfilter;
    }
    if(value_path == "designatedBridgeAddress")
    {
        designatedbridgeaddress.yfilter = yfilter;
    }
    if(value_path == "designatedPortPriority")
    {
        designatedportpriority.yfilter = yfilter;
    }
    if(value_path == "designatedPortNumber")
    {
        designatedportnumber.yfilter = yfilter;
    }
    if(value_path == "portPriority")
    {
        portpriority.yfilter = yfilter;
    }
    if(value_path == "portNumber")
    {
        portnumber.yfilter = yfilter;
    }
    if(value_path == "portPathCost")
    {
        portpathcost.yfilter = yfilter;
    }
    if(value_path == "portRole")
    {
        portrole.yfilter = yfilter;
    }
    if(value_path == "portState")
    {
        portstate.yfilter = yfilter;
    }
    if(value_path == "p2p")
    {
        p2p.yfilter = yfilter;
    }
    if(value_path == "operBpduguard")
    {
        operbpduguard.yfilter = yfilter;
    }
    if(value_path == "operBpdufilter")
    {
        operbpdufilter.yfilter = yfilter;
    }
    if(value_path == "operPortfast")
    {
        operportfast.yfilter = yfilter;
    }
    if(value_path == "operLoopguard")
    {
        operloopguard.yfilter = yfilter;
    }
    if(value_path == "vpcState")
    {
        vpcstate.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "dispute")
    {
        dispute.yfilter = yfilter;
    }
    if(value_path == "peer")
    {
        peer.yfilter = yfilter;
    }
    if(value_path == "bound")
    {
        bound.yfilter = yfilter;
    }
    if(value_path == "inconsistent")
    {
        inconsistent.yfilter = yfilter;
    }
    if(value_path == "prestd")
    {
        prestd.yfilter = yfilter;
    }
}

bool System::StpItems::InstItems::MstentItems::MstItems::MstDomList::IfItems::MstIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "designatedRootPriority" || name == "designatedRootAddress" || name == "designatedRootCost" || name == "designatedBridgePriority" || name == "designatedBridgeAddress" || name == "designatedPortPriority" || name == "designatedPortNumber" || name == "portPriority" || name == "portNumber" || name == "portPathCost" || name == "portRole" || name == "portState" || name == "p2p" || name == "operBpduguard" || name == "operBpdufilter" || name == "operPortfast" || name == "operLoopguard" || name == "vpcState" || name == "mode" || name == "dispute" || name == "peer" || name == "bound" || name == "inconsistent" || name == "prestd")
        return true;
    return false;
}

System::StpItems::InstItems::VlanItems::VlanItems()
    :
    vlan_list(this, {"id"})
{

    yang_name = "vlan-items"; yang_parent_name = "inst-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::StpItems::InstItems::VlanItems::~VlanItems()
{
}

bool System::StpItems::InstItems::VlanItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vlan_list.len(); index++)
    {
        if(vlan_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::StpItems::InstItems::VlanItems::has_operation() const
{
    for (std::size_t index=0; index<vlan_list.len(); index++)
    {
        if(vlan_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::StpItems::InstItems::VlanItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/stp-items/inst-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::StpItems::InstItems::VlanItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::StpItems::InstItems::VlanItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::StpItems::InstItems::VlanItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Vlan-list")
    {
        auto ent_ = std::make_shared<System::StpItems::InstItems::VlanItems::VlanList>();
        ent_->parent = this;
        vlan_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::StpItems::InstItems::VlanItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vlan_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::StpItems::InstItems::VlanItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::StpItems::InstItems::VlanItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::StpItems::InstItems::VlanItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Vlan-list")
        return true;
    return false;
}

System::StpItems::InstItems::VlanItems::VlanList::VlanList()
    :
    id{YType::uint16, "id"},
    priority{YType::enumeration, "priority"},
    diameter{YType::uint8, "diameter"},
    protocol{YType::enumeration, "protocol"},
    roottype{YType::enumeration, "rootType"},
    rootmode{YType::enumeration, "rootMode"},
    bridgepriority{YType::uint16, "bridgePriority"},
    bridgeaddress{YType::str, "bridgeAddress"},
    rootpriority{YType::uint16, "rootPriority"},
    rootaddress{YType::str, "rootAddress"},
    rootportpriority{YType::uint16, "rootPortPriority"},
    rootportnumber{YType::uint16, "rootPortNumber"},
    rootport{YType::str, "rootPort"},
    rootpathcost{YType::uint32, "rootPathCost"},
    adminst{YType::enumeration, "adminSt"},
    fwdtime{YType::uint8, "fwdTime"},
    hellotime{YType::uint8, "helloTime"},
    maxage{YType::uint8, "maxAge"}
        ,
    if_items(std::make_shared<System::StpItems::InstItems::VlanItems::VlanList::IfItems>())
{
    if_items->parent = this;

    yang_name = "Vlan-list"; yang_parent_name = "vlan-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::StpItems::InstItems::VlanItems::VlanList::~VlanList()
{
}

bool System::StpItems::InstItems::VlanItems::VlanList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| priority.is_set
	|| diameter.is_set
	|| protocol.is_set
	|| roottype.is_set
	|| rootmode.is_set
	|| bridgepriority.is_set
	|| bridgeaddress.is_set
	|| rootpriority.is_set
	|| rootaddress.is_set
	|| rootportpriority.is_set
	|| rootportnumber.is_set
	|| rootport.is_set
	|| rootpathcost.is_set
	|| adminst.is_set
	|| fwdtime.is_set
	|| hellotime.is_set
	|| maxage.is_set
	|| (if_items !=  nullptr && if_items->has_data());
}

bool System::StpItems::InstItems::VlanItems::VlanList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(diameter.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(roottype.yfilter)
	|| ydk::is_set(rootmode.yfilter)
	|| ydk::is_set(bridgepriority.yfilter)
	|| ydk::is_set(bridgeaddress.yfilter)
	|| ydk::is_set(rootpriority.yfilter)
	|| ydk::is_set(rootaddress.yfilter)
	|| ydk::is_set(rootportpriority.yfilter)
	|| ydk::is_set(rootportnumber.yfilter)
	|| ydk::is_set(rootport.yfilter)
	|| ydk::is_set(rootpathcost.yfilter)
	|| ydk::is_set(adminst.yfilter)
	|| ydk::is_set(fwdtime.yfilter)
	|| ydk::is_set(hellotime.yfilter)
	|| ydk::is_set(maxage.yfilter)
	|| (if_items !=  nullptr && if_items->has_operation());
}

std::string System::StpItems::InstItems::VlanItems::VlanList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/stp-items/inst-items/vlan-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::StpItems::InstItems::VlanItems::VlanList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Vlan-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::StpItems::InstItems::VlanItems::VlanList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (diameter.is_set || is_set(diameter.yfilter)) leaf_name_data.push_back(diameter.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (roottype.is_set || is_set(roottype.yfilter)) leaf_name_data.push_back(roottype.get_name_leafdata());
    if (rootmode.is_set || is_set(rootmode.yfilter)) leaf_name_data.push_back(rootmode.get_name_leafdata());
    if (bridgepriority.is_set || is_set(bridgepriority.yfilter)) leaf_name_data.push_back(bridgepriority.get_name_leafdata());
    if (bridgeaddress.is_set || is_set(bridgeaddress.yfilter)) leaf_name_data.push_back(bridgeaddress.get_name_leafdata());
    if (rootpriority.is_set || is_set(rootpriority.yfilter)) leaf_name_data.push_back(rootpriority.get_name_leafdata());
    if (rootaddress.is_set || is_set(rootaddress.yfilter)) leaf_name_data.push_back(rootaddress.get_name_leafdata());
    if (rootportpriority.is_set || is_set(rootportpriority.yfilter)) leaf_name_data.push_back(rootportpriority.get_name_leafdata());
    if (rootportnumber.is_set || is_set(rootportnumber.yfilter)) leaf_name_data.push_back(rootportnumber.get_name_leafdata());
    if (rootport.is_set || is_set(rootport.yfilter)) leaf_name_data.push_back(rootport.get_name_leafdata());
    if (rootpathcost.is_set || is_set(rootpathcost.yfilter)) leaf_name_data.push_back(rootpathcost.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());
    if (fwdtime.is_set || is_set(fwdtime.yfilter)) leaf_name_data.push_back(fwdtime.get_name_leafdata());
    if (hellotime.is_set || is_set(hellotime.yfilter)) leaf_name_data.push_back(hellotime.get_name_leafdata());
    if (maxage.is_set || is_set(maxage.yfilter)) leaf_name_data.push_back(maxage.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::StpItems::InstItems::VlanItems::VlanList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "if-items")
    {
        if(if_items == nullptr)
        {
            if_items = std::make_shared<System::StpItems::InstItems::VlanItems::VlanList::IfItems>();
        }
        return if_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::StpItems::InstItems::VlanItems::VlanList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(if_items != nullptr)
    {
        _children["if-items"] = if_items;
    }

    return _children;
}

void System::StpItems::InstItems::VlanItems::VlanList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diameter")
    {
        diameter = value;
        diameter.value_namespace = name_space;
        diameter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rootType")
    {
        roottype = value;
        roottype.value_namespace = name_space;
        roottype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rootMode")
    {
        rootmode = value;
        rootmode.value_namespace = name_space;
        rootmode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bridgePriority")
    {
        bridgepriority = value;
        bridgepriority.value_namespace = name_space;
        bridgepriority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bridgeAddress")
    {
        bridgeaddress = value;
        bridgeaddress.value_namespace = name_space;
        bridgeaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rootPriority")
    {
        rootpriority = value;
        rootpriority.value_namespace = name_space;
        rootpriority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rootAddress")
    {
        rootaddress = value;
        rootaddress.value_namespace = name_space;
        rootaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rootPortPriority")
    {
        rootportpriority = value;
        rootportpriority.value_namespace = name_space;
        rootportpriority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rootPortNumber")
    {
        rootportnumber = value;
        rootportnumber.value_namespace = name_space;
        rootportnumber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rootPort")
    {
        rootport = value;
        rootport.value_namespace = name_space;
        rootport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rootPathCost")
    {
        rootpathcost = value;
        rootpathcost.value_namespace = name_space;
        rootpathcost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fwdTime")
    {
        fwdtime = value;
        fwdtime.value_namespace = name_space;
        fwdtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "helloTime")
    {
        hellotime = value;
        hellotime.value_namespace = name_space;
        hellotime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxAge")
    {
        maxage = value;
        maxage.value_namespace = name_space;
        maxage.value_namespace_prefix = name_space_prefix;
    }
}

void System::StpItems::InstItems::VlanItems::VlanList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "diameter")
    {
        diameter.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "rootType")
    {
        roottype.yfilter = yfilter;
    }
    if(value_path == "rootMode")
    {
        rootmode.yfilter = yfilter;
    }
    if(value_path == "bridgePriority")
    {
        bridgepriority.yfilter = yfilter;
    }
    if(value_path == "bridgeAddress")
    {
        bridgeaddress.yfilter = yfilter;
    }
    if(value_path == "rootPriority")
    {
        rootpriority.yfilter = yfilter;
    }
    if(value_path == "rootAddress")
    {
        rootaddress.yfilter = yfilter;
    }
    if(value_path == "rootPortPriority")
    {
        rootportpriority.yfilter = yfilter;
    }
    if(value_path == "rootPortNumber")
    {
        rootportnumber.yfilter = yfilter;
    }
    if(value_path == "rootPort")
    {
        rootport.yfilter = yfilter;
    }
    if(value_path == "rootPathCost")
    {
        rootpathcost.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
    if(value_path == "fwdTime")
    {
        fwdtime.yfilter = yfilter;
    }
    if(value_path == "helloTime")
    {
        hellotime.yfilter = yfilter;
    }
    if(value_path == "maxAge")
    {
        maxage.yfilter = yfilter;
    }
}

bool System::StpItems::InstItems::VlanItems::VlanList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "if-items" || name == "id" || name == "priority" || name == "diameter" || name == "protocol" || name == "rootType" || name == "rootMode" || name == "bridgePriority" || name == "bridgeAddress" || name == "rootPriority" || name == "rootAddress" || name == "rootPortPriority" || name == "rootPortNumber" || name == "rootPort" || name == "rootPathCost" || name == "adminSt" || name == "fwdTime" || name == "helloTime" || name == "maxAge")
        return true;
    return false;
}

System::StpItems::InstItems::VlanItems::VlanList::IfItems::IfItems()
    :
    vlanif_list(this, {"id"})
{

    yang_name = "if-items"; yang_parent_name = "Vlan-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::StpItems::InstItems::VlanItems::VlanList::IfItems::~IfItems()
{
}

bool System::StpItems::InstItems::VlanItems::VlanList::IfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vlanif_list.len(); index++)
    {
        if(vlanif_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::StpItems::InstItems::VlanItems::VlanList::IfItems::has_operation() const
{
    for (std::size_t index=0; index<vlanif_list.len(); index++)
    {
        if(vlanif_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::StpItems::InstItems::VlanItems::VlanList::IfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::StpItems::InstItems::VlanItems::VlanList::IfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::StpItems::InstItems::VlanItems::VlanList::IfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "VlanIf-list")
    {
        auto ent_ = std::make_shared<System::StpItems::InstItems::VlanItems::VlanList::IfItems::VlanIfList>();
        ent_->parent = this;
        vlanif_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::StpItems::InstItems::VlanItems::VlanList::IfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vlanif_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::StpItems::InstItems::VlanItems::VlanList::IfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::StpItems::InstItems::VlanItems::VlanList::IfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::StpItems::InstItems::VlanItems::VlanList::IfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "VlanIf-list")
        return true;
    return false;
}

System::StpItems::InstItems::VlanItems::VlanList::IfItems::VlanIfList::VlanIfList()
    :
    id{YType::str, "id"},
    designatedrootpriority{YType::uint16, "designatedRootPriority"},
    designatedrootaddress{YType::str, "designatedRootAddress"},
    designatedrootcost{YType::uint32, "designatedRootCost"},
    designatedbridgepriority{YType::uint16, "designatedBridgePriority"},
    designatedbridgeaddress{YType::str, "designatedBridgeAddress"},
    designatedportpriority{YType::uint16, "designatedPortPriority"},
    designatedportnumber{YType::uint16, "designatedPortNumber"},
    portpriority{YType::uint16, "portPriority"},
    portnumber{YType::uint16, "portNumber"},
    portpathcost{YType::uint32, "portPathCost"},
    portrole{YType::enumeration, "portRole"},
    portstate{YType::enumeration, "portState"},
    p2p{YType::boolean, "p2p"},
    operbpduguard{YType::boolean, "operBpduguard"},
    operbpdufilter{YType::boolean, "operBpdufilter"},
    operportfast{YType::boolean, "operPortfast"},
    operloopguard{YType::boolean, "operLoopguard"},
    vpcstate{YType::enumeration, "vpcState"},
    mode{YType::enumeration, "mode"},
    dispute{YType::boolean, "dispute"},
    peer{YType::boolean, "peer"},
    bound{YType::boolean, "bound"},
    inconsistent{YType::boolean, "inconsistent"},
    prestd{YType::boolean, "prestd"}
{

    yang_name = "VlanIf-list"; yang_parent_name = "if-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::StpItems::InstItems::VlanItems::VlanList::IfItems::VlanIfList::~VlanIfList()
{
}

bool System::StpItems::InstItems::VlanItems::VlanList::IfItems::VlanIfList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| designatedrootpriority.is_set
	|| designatedrootaddress.is_set
	|| designatedrootcost.is_set
	|| designatedbridgepriority.is_set
	|| designatedbridgeaddress.is_set
	|| designatedportpriority.is_set
	|| designatedportnumber.is_set
	|| portpriority.is_set
	|| portnumber.is_set
	|| portpathcost.is_set
	|| portrole.is_set
	|| portstate.is_set
	|| p2p.is_set
	|| operbpduguard.is_set
	|| operbpdufilter.is_set
	|| operportfast.is_set
	|| operloopguard.is_set
	|| vpcstate.is_set
	|| mode.is_set
	|| dispute.is_set
	|| peer.is_set
	|| bound.is_set
	|| inconsistent.is_set
	|| prestd.is_set;
}

bool System::StpItems::InstItems::VlanItems::VlanList::IfItems::VlanIfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(designatedrootpriority.yfilter)
	|| ydk::is_set(designatedrootaddress.yfilter)
	|| ydk::is_set(designatedrootcost.yfilter)
	|| ydk::is_set(designatedbridgepriority.yfilter)
	|| ydk::is_set(designatedbridgeaddress.yfilter)
	|| ydk::is_set(designatedportpriority.yfilter)
	|| ydk::is_set(designatedportnumber.yfilter)
	|| ydk::is_set(portpriority.yfilter)
	|| ydk::is_set(portnumber.yfilter)
	|| ydk::is_set(portpathcost.yfilter)
	|| ydk::is_set(portrole.yfilter)
	|| ydk::is_set(portstate.yfilter)
	|| ydk::is_set(p2p.yfilter)
	|| ydk::is_set(operbpduguard.yfilter)
	|| ydk::is_set(operbpdufilter.yfilter)
	|| ydk::is_set(operportfast.yfilter)
	|| ydk::is_set(operloopguard.yfilter)
	|| ydk::is_set(vpcstate.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(dispute.yfilter)
	|| ydk::is_set(peer.yfilter)
	|| ydk::is_set(bound.yfilter)
	|| ydk::is_set(inconsistent.yfilter)
	|| ydk::is_set(prestd.yfilter);
}

std::string System::StpItems::InstItems::VlanItems::VlanList::IfItems::VlanIfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "VlanIf-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::StpItems::InstItems::VlanItems::VlanList::IfItems::VlanIfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (designatedrootpriority.is_set || is_set(designatedrootpriority.yfilter)) leaf_name_data.push_back(designatedrootpriority.get_name_leafdata());
    if (designatedrootaddress.is_set || is_set(designatedrootaddress.yfilter)) leaf_name_data.push_back(designatedrootaddress.get_name_leafdata());
    if (designatedrootcost.is_set || is_set(designatedrootcost.yfilter)) leaf_name_data.push_back(designatedrootcost.get_name_leafdata());
    if (designatedbridgepriority.is_set || is_set(designatedbridgepriority.yfilter)) leaf_name_data.push_back(designatedbridgepriority.get_name_leafdata());
    if (designatedbridgeaddress.is_set || is_set(designatedbridgeaddress.yfilter)) leaf_name_data.push_back(designatedbridgeaddress.get_name_leafdata());
    if (designatedportpriority.is_set || is_set(designatedportpriority.yfilter)) leaf_name_data.push_back(designatedportpriority.get_name_leafdata());
    if (designatedportnumber.is_set || is_set(designatedportnumber.yfilter)) leaf_name_data.push_back(designatedportnumber.get_name_leafdata());
    if (portpriority.is_set || is_set(portpriority.yfilter)) leaf_name_data.push_back(portpriority.get_name_leafdata());
    if (portnumber.is_set || is_set(portnumber.yfilter)) leaf_name_data.push_back(portnumber.get_name_leafdata());
    if (portpathcost.is_set || is_set(portpathcost.yfilter)) leaf_name_data.push_back(portpathcost.get_name_leafdata());
    if (portrole.is_set || is_set(portrole.yfilter)) leaf_name_data.push_back(portrole.get_name_leafdata());
    if (portstate.is_set || is_set(portstate.yfilter)) leaf_name_data.push_back(portstate.get_name_leafdata());
    if (p2p.is_set || is_set(p2p.yfilter)) leaf_name_data.push_back(p2p.get_name_leafdata());
    if (operbpduguard.is_set || is_set(operbpduguard.yfilter)) leaf_name_data.push_back(operbpduguard.get_name_leafdata());
    if (operbpdufilter.is_set || is_set(operbpdufilter.yfilter)) leaf_name_data.push_back(operbpdufilter.get_name_leafdata());
    if (operportfast.is_set || is_set(operportfast.yfilter)) leaf_name_data.push_back(operportfast.get_name_leafdata());
    if (operloopguard.is_set || is_set(operloopguard.yfilter)) leaf_name_data.push_back(operloopguard.get_name_leafdata());
    if (vpcstate.is_set || is_set(vpcstate.yfilter)) leaf_name_data.push_back(vpcstate.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (dispute.is_set || is_set(dispute.yfilter)) leaf_name_data.push_back(dispute.get_name_leafdata());
    if (peer.is_set || is_set(peer.yfilter)) leaf_name_data.push_back(peer.get_name_leafdata());
    if (bound.is_set || is_set(bound.yfilter)) leaf_name_data.push_back(bound.get_name_leafdata());
    if (inconsistent.is_set || is_set(inconsistent.yfilter)) leaf_name_data.push_back(inconsistent.get_name_leafdata());
    if (prestd.is_set || is_set(prestd.yfilter)) leaf_name_data.push_back(prestd.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::StpItems::InstItems::VlanItems::VlanList::IfItems::VlanIfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::StpItems::InstItems::VlanItems::VlanList::IfItems::VlanIfList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::StpItems::InstItems::VlanItems::VlanList::IfItems::VlanIfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "designatedRootPriority")
    {
        designatedrootpriority = value;
        designatedrootpriority.value_namespace = name_space;
        designatedrootpriority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "designatedRootAddress")
    {
        designatedrootaddress = value;
        designatedrootaddress.value_namespace = name_space;
        designatedrootaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "designatedRootCost")
    {
        designatedrootcost = value;
        designatedrootcost.value_namespace = name_space;
        designatedrootcost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "designatedBridgePriority")
    {
        designatedbridgepriority = value;
        designatedbridgepriority.value_namespace = name_space;
        designatedbridgepriority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "designatedBridgeAddress")
    {
        designatedbridgeaddress = value;
        designatedbridgeaddress.value_namespace = name_space;
        designatedbridgeaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "designatedPortPriority")
    {
        designatedportpriority = value;
        designatedportpriority.value_namespace = name_space;
        designatedportpriority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "designatedPortNumber")
    {
        designatedportnumber = value;
        designatedportnumber.value_namespace = name_space;
        designatedportnumber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "portPriority")
    {
        portpriority = value;
        portpriority.value_namespace = name_space;
        portpriority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "portNumber")
    {
        portnumber = value;
        portnumber.value_namespace = name_space;
        portnumber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "portPathCost")
    {
        portpathcost = value;
        portpathcost.value_namespace = name_space;
        portpathcost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "portRole")
    {
        portrole = value;
        portrole.value_namespace = name_space;
        portrole.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "portState")
    {
        portstate = value;
        portstate.value_namespace = name_space;
        portstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2p")
    {
        p2p = value;
        p2p.value_namespace = name_space;
        p2p.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operBpduguard")
    {
        operbpduguard = value;
        operbpduguard.value_namespace = name_space;
        operbpduguard.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operBpdufilter")
    {
        operbpdufilter = value;
        operbpdufilter.value_namespace = name_space;
        operbpdufilter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operPortfast")
    {
        operportfast = value;
        operportfast.value_namespace = name_space;
        operportfast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operLoopguard")
    {
        operloopguard = value;
        operloopguard.value_namespace = name_space;
        operloopguard.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpcState")
    {
        vpcstate = value;
        vpcstate.value_namespace = name_space;
        vpcstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dispute")
    {
        dispute = value;
        dispute.value_namespace = name_space;
        dispute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer")
    {
        peer = value;
        peer.value_namespace = name_space;
        peer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bound")
    {
        bound = value;
        bound.value_namespace = name_space;
        bound.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inconsistent")
    {
        inconsistent = value;
        inconsistent.value_namespace = name_space;
        inconsistent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prestd")
    {
        prestd = value;
        prestd.value_namespace = name_space;
        prestd.value_namespace_prefix = name_space_prefix;
    }
}

void System::StpItems::InstItems::VlanItems::VlanList::IfItems::VlanIfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "designatedRootPriority")
    {
        designatedrootpriority.yfilter = yfilter;
    }
    if(value_path == "designatedRootAddress")
    {
        designatedrootaddress.yfilter = yfilter;
    }
    if(value_path == "designatedRootCost")
    {
        designatedrootcost.yfilter = yfilter;
    }
    if(value_path == "designatedBridgePriority")
    {
        designatedbridgepriority.yfilter = yfilter;
    }
    if(value_path == "designatedBridgeAddress")
    {
        designatedbridgeaddress.yfilter = yfilter;
    }
    if(value_path == "designatedPortPriority")
    {
        designatedportpriority.yfilter = yfilter;
    }
    if(value_path == "designatedPortNumber")
    {
        designatedportnumber.yfilter = yfilter;
    }
    if(value_path == "portPriority")
    {
        portpriority.yfilter = yfilter;
    }
    if(value_path == "portNumber")
    {
        portnumber.yfilter = yfilter;
    }
    if(value_path == "portPathCost")
    {
        portpathcost.yfilter = yfilter;
    }
    if(value_path == "portRole")
    {
        portrole.yfilter = yfilter;
    }
    if(value_path == "portState")
    {
        portstate.yfilter = yfilter;
    }
    if(value_path == "p2p")
    {
        p2p.yfilter = yfilter;
    }
    if(value_path == "operBpduguard")
    {
        operbpduguard.yfilter = yfilter;
    }
    if(value_path == "operBpdufilter")
    {
        operbpdufilter.yfilter = yfilter;
    }
    if(value_path == "operPortfast")
    {
        operportfast.yfilter = yfilter;
    }
    if(value_path == "operLoopguard")
    {
        operloopguard.yfilter = yfilter;
    }
    if(value_path == "vpcState")
    {
        vpcstate.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "dispute")
    {
        dispute.yfilter = yfilter;
    }
    if(value_path == "peer")
    {
        peer.yfilter = yfilter;
    }
    if(value_path == "bound")
    {
        bound.yfilter = yfilter;
    }
    if(value_path == "inconsistent")
    {
        inconsistent.yfilter = yfilter;
    }
    if(value_path == "prestd")
    {
        prestd.yfilter = yfilter;
    }
}

bool System::StpItems::InstItems::VlanItems::VlanList::IfItems::VlanIfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "designatedRootPriority" || name == "designatedRootAddress" || name == "designatedRootCost" || name == "designatedBridgePriority" || name == "designatedBridgeAddress" || name == "designatedPortPriority" || name == "designatedPortNumber" || name == "portPriority" || name == "portNumber" || name == "portPathCost" || name == "portRole" || name == "portState" || name == "p2p" || name == "operBpduguard" || name == "operBpdufilter" || name == "operPortfast" || name == "operLoopguard" || name == "vpcState" || name == "mode" || name == "dispute" || name == "peer" || name == "bound" || name == "inconsistent" || name == "prestd")
        return true;
    return false;
}

System::BdTableItems::BdTableItems()
    :
    vlan_items(std::make_shared<System::BdTableItems::VlanItems>())
{
    vlan_items->parent = this;

    yang_name = "bdTable-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::BdTableItems::~BdTableItems()
{
}

bool System::BdTableItems::has_data() const
{
    if (is_presence_container) return true;
    return (vlan_items !=  nullptr && vlan_items->has_data());
}

bool System::BdTableItems::has_operation() const
{
    return is_set(yfilter)
	|| (vlan_items !=  nullptr && vlan_items->has_operation());
}

std::string System::BdTableItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::BdTableItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bdTable-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdTableItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdTableItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan-items")
    {
        if(vlan_items == nullptr)
        {
            vlan_items = std::make_shared<System::BdTableItems::VlanItems>();
        }
        return vlan_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdTableItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vlan_items != nullptr)
    {
        _children["vlan-items"] = vlan_items;
    }

    return _children;
}

void System::BdTableItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdTableItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdTableItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-items")
        return true;
    return false;
}

System::BdTableItems::VlanItems::VlanItems()
    :
    bdentry_list(this, {"vlan"})
{

    yang_name = "vlan-items"; yang_parent_name = "bdTable-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::BdTableItems::VlanItems::~VlanItems()
{
}

bool System::BdTableItems::VlanItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bdentry_list.len(); index++)
    {
        if(bdentry_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdTableItems::VlanItems::has_operation() const
{
    for (std::size_t index=0; index<bdentry_list.len(); index++)
    {
        if(bdentry_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdTableItems::VlanItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/bdTable-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::BdTableItems::VlanItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdTableItems::VlanItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdTableItems::VlanItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "BdEntry-list")
    {
        auto ent_ = std::make_shared<System::BdTableItems::VlanItems::BdEntryList>();
        ent_->parent = this;
        bdentry_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdTableItems::VlanItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : bdentry_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BdTableItems::VlanItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdTableItems::VlanItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdTableItems::VlanItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "BdEntry-list")
        return true;
    return false;
}

System::BdTableItems::VlanItems::BdEntryList::BdEntryList()
    :
    vlan{YType::str, "vlan"},
    bd{YType::uint32, "bd"},
    vnid{YType::str, "vnid"},
    replicationmode{YType::enumeration, "replicationMode"},
    ingressrepprotocol{YType::enumeration, "ingressRepProtocol"},
    gipo{YType::str, "gipo"},
    suppressarp{YType::enumeration, "suppressArp"},
    resourcestatus{YType::enumeration, "resourceStatus"},
    isl3{YType::enumeration, "isL3"},
    description{YType::str, "description"}
        ,
    floodlist_items(std::make_shared<System::BdTableItems::VlanItems::BdEntryList::FloodListItems>())
    , af_items(std::make_shared<System::BdTableItems::VlanItems::BdEntryList::AfItems>())
    , rtaggregatevlanmemberatt_items(std::make_shared<System::BdTableItems::VlanItems::BdEntryList::RtaggregateVlanMemberAttItems>())
{
    floodlist_items->parent = this;
    af_items->parent = this;
    rtaggregatevlanmemberatt_items->parent = this;

    yang_name = "BdEntry-list"; yang_parent_name = "vlan-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::BdTableItems::VlanItems::BdEntryList::~BdEntryList()
{
}

bool System::BdTableItems::VlanItems::BdEntryList::has_data() const
{
    if (is_presence_container) return true;
    return vlan.is_set
	|| bd.is_set
	|| vnid.is_set
	|| replicationmode.is_set
	|| ingressrepprotocol.is_set
	|| gipo.is_set
	|| suppressarp.is_set
	|| resourcestatus.is_set
	|| isl3.is_set
	|| description.is_set
	|| (floodlist_items !=  nullptr && floodlist_items->has_data())
	|| (af_items !=  nullptr && af_items->has_data())
	|| (rtaggregatevlanmemberatt_items !=  nullptr && rtaggregatevlanmemberatt_items->has_data());
}

bool System::BdTableItems::VlanItems::BdEntryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| ydk::is_set(bd.yfilter)
	|| ydk::is_set(vnid.yfilter)
	|| ydk::is_set(replicationmode.yfilter)
	|| ydk::is_set(ingressrepprotocol.yfilter)
	|| ydk::is_set(gipo.yfilter)
	|| ydk::is_set(suppressarp.yfilter)
	|| ydk::is_set(resourcestatus.yfilter)
	|| ydk::is_set(isl3.yfilter)
	|| ydk::is_set(description.yfilter)
	|| (floodlist_items !=  nullptr && floodlist_items->has_operation())
	|| (af_items !=  nullptr && af_items->has_operation())
	|| (rtaggregatevlanmemberatt_items !=  nullptr && rtaggregatevlanmemberatt_items->has_operation());
}

std::string System::BdTableItems::VlanItems::BdEntryList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/bdTable-items/vlan-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::BdTableItems::VlanItems::BdEntryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "BdEntry-list";
    ADD_KEY_TOKEN(vlan, "vlan");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdTableItems::VlanItems::BdEntryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());
    if (bd.is_set || is_set(bd.yfilter)) leaf_name_data.push_back(bd.get_name_leafdata());
    if (vnid.is_set || is_set(vnid.yfilter)) leaf_name_data.push_back(vnid.get_name_leafdata());
    if (replicationmode.is_set || is_set(replicationmode.yfilter)) leaf_name_data.push_back(replicationmode.get_name_leafdata());
    if (ingressrepprotocol.is_set || is_set(ingressrepprotocol.yfilter)) leaf_name_data.push_back(ingressrepprotocol.get_name_leafdata());
    if (gipo.is_set || is_set(gipo.yfilter)) leaf_name_data.push_back(gipo.get_name_leafdata());
    if (suppressarp.is_set || is_set(suppressarp.yfilter)) leaf_name_data.push_back(suppressarp.get_name_leafdata());
    if (resourcestatus.is_set || is_set(resourcestatus.yfilter)) leaf_name_data.push_back(resourcestatus.get_name_leafdata());
    if (isl3.is_set || is_set(isl3.yfilter)) leaf_name_data.push_back(isl3.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdTableItems::VlanItems::BdEntryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "floodList-items")
    {
        if(floodlist_items == nullptr)
        {
            floodlist_items = std::make_shared<System::BdTableItems::VlanItems::BdEntryList::FloodListItems>();
        }
        return floodlist_items;
    }

    if(child_yang_name == "af-items")
    {
        if(af_items == nullptr)
        {
            af_items = std::make_shared<System::BdTableItems::VlanItems::BdEntryList::AfItems>();
        }
        return af_items;
    }

    if(child_yang_name == "rtaggregateVlanMemberAtt-items")
    {
        if(rtaggregatevlanmemberatt_items == nullptr)
        {
            rtaggregatevlanmemberatt_items = std::make_shared<System::BdTableItems::VlanItems::BdEntryList::RtaggregateVlanMemberAttItems>();
        }
        return rtaggregatevlanmemberatt_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdTableItems::VlanItems::BdEntryList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(floodlist_items != nullptr)
    {
        _children["floodList-items"] = floodlist_items;
    }

    if(af_items != nullptr)
    {
        _children["af-items"] = af_items;
    }

    if(rtaggregatevlanmemberatt_items != nullptr)
    {
        _children["rtaggregateVlanMemberAtt-items"] = rtaggregatevlanmemberatt_items;
    }

    return _children;
}

void System::BdTableItems::VlanItems::BdEntryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bd")
    {
        bd = value;
        bd.value_namespace = name_space;
        bd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vnid")
    {
        vnid = value;
        vnid.value_namespace = name_space;
        vnid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "replicationMode")
    {
        replicationmode = value;
        replicationmode.value_namespace = name_space;
        replicationmode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ingressRepProtocol")
    {
        ingressrepprotocol = value;
        ingressrepprotocol.value_namespace = name_space;
        ingressrepprotocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gipo")
    {
        gipo = value;
        gipo.value_namespace = name_space;
        gipo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppressArp")
    {
        suppressarp = value;
        suppressarp.value_namespace = name_space;
        suppressarp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resourceStatus")
    {
        resourcestatus = value;
        resourcestatus.value_namespace = name_space;
        resourcestatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isL3")
    {
        isl3 = value;
        isl3.value_namespace = name_space;
        isl3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdTableItems::VlanItems::BdEntryList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
    if(value_path == "bd")
    {
        bd.yfilter = yfilter;
    }
    if(value_path == "vnid")
    {
        vnid.yfilter = yfilter;
    }
    if(value_path == "replicationMode")
    {
        replicationmode.yfilter = yfilter;
    }
    if(value_path == "ingressRepProtocol")
    {
        ingressrepprotocol.yfilter = yfilter;
    }
    if(value_path == "gipo")
    {
        gipo.yfilter = yfilter;
    }
    if(value_path == "suppressArp")
    {
        suppressarp.yfilter = yfilter;
    }
    if(value_path == "resourceStatus")
    {
        resourcestatus.yfilter = yfilter;
    }
    if(value_path == "isL3")
    {
        isl3.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool System::BdTableItems::VlanItems::BdEntryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "floodList-items" || name == "af-items" || name == "rtaggregateVlanMemberAtt-items" || name == "vlan" || name == "bd" || name == "vnid" || name == "replicationMode" || name == "ingressRepProtocol" || name == "gipo" || name == "suppressArp" || name == "resourceStatus" || name == "isL3" || name == "description")
        return true;
    return false;
}

System::BdTableItems::VlanItems::BdEntryList::FloodListItems::FloodListItems()
    :
    localfloodlist_items(std::make_shared<System::BdTableItems::VlanItems::BdEntryList::FloodListItems::LocalFloodListItems>())
    , remotefloodlist_items(std::make_shared<System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems>())
{
    localfloodlist_items->parent = this;
    remotefloodlist_items->parent = this;

    yang_name = "floodList-items"; yang_parent_name = "BdEntry-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdTableItems::VlanItems::BdEntryList::FloodListItems::~FloodListItems()
{
}

bool System::BdTableItems::VlanItems::BdEntryList::FloodListItems::has_data() const
{
    if (is_presence_container) return true;
    return (localfloodlist_items !=  nullptr && localfloodlist_items->has_data())
	|| (remotefloodlist_items !=  nullptr && remotefloodlist_items->has_data());
}

bool System::BdTableItems::VlanItems::BdEntryList::FloodListItems::has_operation() const
{
    return is_set(yfilter)
	|| (localfloodlist_items !=  nullptr && localfloodlist_items->has_operation())
	|| (remotefloodlist_items !=  nullptr && remotefloodlist_items->has_operation());
}

std::string System::BdTableItems::VlanItems::BdEntryList::FloodListItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "floodList-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdTableItems::VlanItems::BdEntryList::FloodListItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdTableItems::VlanItems::BdEntryList::FloodListItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "localFloodList-items")
    {
        if(localfloodlist_items == nullptr)
        {
            localfloodlist_items = std::make_shared<System::BdTableItems::VlanItems::BdEntryList::FloodListItems::LocalFloodListItems>();
        }
        return localfloodlist_items;
    }

    if(child_yang_name == "remoteFloodList-items")
    {
        if(remotefloodlist_items == nullptr)
        {
            remotefloodlist_items = std::make_shared<System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems>();
        }
        return remotefloodlist_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdTableItems::VlanItems::BdEntryList::FloodListItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(localfloodlist_items != nullptr)
    {
        _children["localFloodList-items"] = localfloodlist_items;
    }

    if(remotefloodlist_items != nullptr)
    {
        _children["remoteFloodList-items"] = remotefloodlist_items;
    }

    return _children;
}

void System::BdTableItems::VlanItems::BdEntryList::FloodListItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdTableItems::VlanItems::BdEntryList::FloodListItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdTableItems::VlanItems::BdEntryList::FloodListItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "localFloodList-items" || name == "remoteFloodList-items")
        return true;
    return false;
}

System::BdTableItems::VlanItems::BdEntryList::FloodListItems::LocalFloodListItems::LocalFloodListItems()
    :
    intf_items(std::make_shared<System::BdTableItems::VlanItems::BdEntryList::FloodListItems::LocalFloodListItems::IntfItems>())
{
    intf_items->parent = this;

    yang_name = "localFloodList-items"; yang_parent_name = "floodList-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdTableItems::VlanItems::BdEntryList::FloodListItems::LocalFloodListItems::~LocalFloodListItems()
{
}

bool System::BdTableItems::VlanItems::BdEntryList::FloodListItems::LocalFloodListItems::has_data() const
{
    if (is_presence_container) return true;
    return (intf_items !=  nullptr && intf_items->has_data());
}

bool System::BdTableItems::VlanItems::BdEntryList::FloodListItems::LocalFloodListItems::has_operation() const
{
    return is_set(yfilter)
	|| (intf_items !=  nullptr && intf_items->has_operation());
}

std::string System::BdTableItems::VlanItems::BdEntryList::FloodListItems::LocalFloodListItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "localFloodList-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdTableItems::VlanItems::BdEntryList::FloodListItems::LocalFloodListItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdTableItems::VlanItems::BdEntryList::FloodListItems::LocalFloodListItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "intf-items")
    {
        if(intf_items == nullptr)
        {
            intf_items = std::make_shared<System::BdTableItems::VlanItems::BdEntryList::FloodListItems::LocalFloodListItems::IntfItems>();
        }
        return intf_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdTableItems::VlanItems::BdEntryList::FloodListItems::LocalFloodListItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(intf_items != nullptr)
    {
        _children["intf-items"] = intf_items;
    }

    return _children;
}

void System::BdTableItems::VlanItems::BdEntryList::FloodListItems::LocalFloodListItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdTableItems::VlanItems::BdEntryList::FloodListItems::LocalFloodListItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdTableItems::VlanItems::BdEntryList::FloodListItems::LocalFloodListItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "intf-items")
        return true;
    return false;
}

System::BdTableItems::VlanItems::BdEntryList::FloodListItems::LocalFloodListItems::IntfItems::IntfItems()
    :
    localfloodlistentry_list(this, {"intf"})
{

    yang_name = "intf-items"; yang_parent_name = "localFloodList-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdTableItems::VlanItems::BdEntryList::FloodListItems::LocalFloodListItems::IntfItems::~IntfItems()
{
}

bool System::BdTableItems::VlanItems::BdEntryList::FloodListItems::LocalFloodListItems::IntfItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<localfloodlistentry_list.len(); index++)
    {
        if(localfloodlistentry_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdTableItems::VlanItems::BdEntryList::FloodListItems::LocalFloodListItems::IntfItems::has_operation() const
{
    for (std::size_t index=0; index<localfloodlistentry_list.len(); index++)
    {
        if(localfloodlistentry_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdTableItems::VlanItems::BdEntryList::FloodListItems::LocalFloodListItems::IntfItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "intf-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdTableItems::VlanItems::BdEntryList::FloodListItems::LocalFloodListItems::IntfItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdTableItems::VlanItems::BdEntryList::FloodListItems::LocalFloodListItems::IntfItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "LocalFloodListEntry-list")
    {
        auto ent_ = std::make_shared<System::BdTableItems::VlanItems::BdEntryList::FloodListItems::LocalFloodListItems::IntfItems::LocalFloodListEntryList>();
        ent_->parent = this;
        localfloodlistentry_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdTableItems::VlanItems::BdEntryList::FloodListItems::LocalFloodListItems::IntfItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : localfloodlistentry_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BdTableItems::VlanItems::BdEntryList::FloodListItems::LocalFloodListItems::IntfItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdTableItems::VlanItems::BdEntryList::FloodListItems::LocalFloodListItems::IntfItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdTableItems::VlanItems::BdEntryList::FloodListItems::LocalFloodListItems::IntfItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LocalFloodListEntry-list")
        return true;
    return false;
}

System::BdTableItems::VlanItems::BdEntryList::FloodListItems::LocalFloodListItems::IntfItems::LocalFloodListEntryList::LocalFloodListEntryList()
    :
    intf{YType::str, "intf"}
{

    yang_name = "LocalFloodListEntry-list"; yang_parent_name = "intf-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdTableItems::VlanItems::BdEntryList::FloodListItems::LocalFloodListItems::IntfItems::LocalFloodListEntryList::~LocalFloodListEntryList()
{
}

bool System::BdTableItems::VlanItems::BdEntryList::FloodListItems::LocalFloodListItems::IntfItems::LocalFloodListEntryList::has_data() const
{
    if (is_presence_container) return true;
    return intf.is_set;
}

bool System::BdTableItems::VlanItems::BdEntryList::FloodListItems::LocalFloodListItems::IntfItems::LocalFloodListEntryList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(intf.yfilter);
}

std::string System::BdTableItems::VlanItems::BdEntryList::FloodListItems::LocalFloodListItems::IntfItems::LocalFloodListEntryList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LocalFloodListEntry-list";
    ADD_KEY_TOKEN(intf, "intf");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdTableItems::VlanItems::BdEntryList::FloodListItems::LocalFloodListItems::IntfItems::LocalFloodListEntryList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (intf.is_set || is_set(intf.yfilter)) leaf_name_data.push_back(intf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdTableItems::VlanItems::BdEntryList::FloodListItems::LocalFloodListItems::IntfItems::LocalFloodListEntryList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdTableItems::VlanItems::BdEntryList::FloodListItems::LocalFloodListItems::IntfItems::LocalFloodListEntryList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::BdTableItems::VlanItems::BdEntryList::FloodListItems::LocalFloodListItems::IntfItems::LocalFloodListEntryList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "intf")
    {
        intf = value;
        intf.value_namespace = name_space;
        intf.value_namespace_prefix = name_space_prefix;
    }
}

void System::BdTableItems::VlanItems::BdEntryList::FloodListItems::LocalFloodListItems::IntfItems::LocalFloodListEntryList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "intf")
    {
        intf.yfilter = yfilter;
    }
}

bool System::BdTableItems::VlanItems::BdEntryList::FloodListItems::LocalFloodListItems::IntfItems::LocalFloodListEntryList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "intf")
        return true;
    return false;
}

System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::RemoteFloodListItems()
    :
    vtep_items(std::make_shared<System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::VtepItems>())
{
    vtep_items->parent = this;

    yang_name = "remoteFloodList-items"; yang_parent_name = "floodList-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::~RemoteFloodListItems()
{
}

bool System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::has_data() const
{
    if (is_presence_container) return true;
    return (vtep_items !=  nullptr && vtep_items->has_data());
}

bool System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::has_operation() const
{
    return is_set(yfilter)
	|| (vtep_items !=  nullptr && vtep_items->has_operation());
}

std::string System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remoteFloodList-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vtep-items")
    {
        if(vtep_items == nullptr)
        {
            vtep_items = std::make_shared<System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::VtepItems>();
        }
        return vtep_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vtep_items != nullptr)
    {
        _children["vtep-items"] = vtep_items;
    }

    return _children;
}

void System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vtep-items")
        return true;
    return false;
}

System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::VtepItems::VtepItems()
    :
    remotefloodlistentry_list(this, {"vtep"})
{

    yang_name = "vtep-items"; yang_parent_name = "remoteFloodList-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::VtepItems::~VtepItems()
{
}

bool System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::VtepItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<remotefloodlistentry_list.len(); index++)
    {
        if(remotefloodlistentry_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::VtepItems::has_operation() const
{
    for (std::size_t index=0; index<remotefloodlistentry_list.len(); index++)
    {
        if(remotefloodlistentry_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::VtepItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vtep-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::VtepItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::VtepItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RemoteFloodListEntry-list")
    {
        auto ent_ = std::make_shared<System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::VtepItems::RemoteFloodListEntryList>();
        ent_->parent = this;
        remotefloodlistentry_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::VtepItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : remotefloodlistentry_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::VtepItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::VtepItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::VtepItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RemoteFloodListEntry-list")
        return true;
    return false;
}


}
}

