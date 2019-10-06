#ifndef _CISCO_NX_OS_DEVICE_23_
#define _CISCO_NX_OS_DEVICE_23_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_NX_OS_device_0.hpp"
#include "Cisco_NX_OS_device_22.hpp"

namespace cisco_nx_os {
namespace Cisco_NX_OS_device {


class System::CommItems::SshItems::KeyItems::SshKeyList : public ydk::Entity
{
    public:
        SshKeyList();
        ~SshKeyList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf type; //type: CommSshKeyType
        ydk::YLeaf keylen; //type: uint32

}; // System::CommItems::SshItems::KeyItems::SshKeyList


class System::CommItems::SshItems::RekeyItems : public ydk::Entity
{
    public:
        RekeyItems();
        ~RekeyItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf maxdata; //type: string
        ydk::YLeaf maxtime; //type: string

}; // System::CommItems::SshItems::RekeyItems


class System::CommItems::SshItems::SshsessionItems : public ydk::Entity
{
    public:
        SshsessionItems();
        ~SshsessionItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf idletimeout; //type: uint32
        ydk::YLeaf keepalivecount; //type: uint32
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf port; //type: uint32
        ydk::YLeaf adminst; //type: CommAdminState
        ydk::YLeaf proto; //type: CommProtocol

}; // System::CommItems::SshItems::SshsessionItems


class System::UserextItems : public ydk::Entity
{
    public:
        UserextItems();
        ~UserextItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf pwdstrengthcheck; //type: AaaBoolean
        ydk::YLeaf pwdsecuremode; //type: AaaBoolean
        ydk::YLeaf pwdminlength; //type: uint16
        ydk::YLeaf pwdmaxlength; //type: uint16
        ydk::YLeaf svcpwdrecovery; //type: AaaBoolean
        ydk::YLeaf maxlogins; //type: uint32
        ydk::YLeaf name; //type: string
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string
        class RadiusextItems; //type: System::UserextItems::RadiusextItems
        class LdapextItems; //type: System::UserextItems::LdapextItems
        class TacacsextItems; //type: System::UserextItems::TacacsextItems
        class AuthrealmItems; //type: System::UserextItems::AuthrealmItems
        class LogindomainItems; //type: System::UserextItems::LogindomainItems
        class PostloginbannerItems; //type: System::UserextItems::PostloginbannerItems
        class PreloginbannerItems; //type: System::UserextItems::PreloginbannerItems
        class RemoteuserItems; //type: System::UserextItems::RemoteuserItems
        class UserItems; //type: System::UserextItems::UserItems
        class RoleItems; //type: System::UserextItems::RoleItems
        class FactoryroleItems; //type: System::UserextItems::FactoryroleItems
        class DomainItems; //type: System::UserextItems::DomainItems
        class PwdprofileItems; //type: System::UserextItems::PwdprofileItems
        class PkiextItems; //type: System::UserextItems::PkiextItems
        class RtfabricResUserEpItems; //type: System::UserextItems::RtfabricResUserEpItems
        class RtaaaUserEpItems; //type: System::UserextItems::RtaaaUserEpItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::RadiusextItems> radiusext_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::LdapextItems> ldapext_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::TacacsextItems> tacacsext_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::AuthrealmItems> authrealm_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::LogindomainItems> logindomain_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::PostloginbannerItems> postloginbanner_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::PreloginbannerItems> preloginbanner_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::RemoteuserItems> remoteuser_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::UserItems> user_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::RoleItems> role_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::FactoryroleItems> factoryrole_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::DomainItems> domain_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::PwdprofileItems> pwdprofile_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::PkiextItems> pkiext_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::RtfabricResUserEpItems> rtfabricresuserep_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::RtaaaUserEpItems> rtaaauserep_items;
        
}; // System::UserextItems


class System::UserextItems::RadiusextItems : public ydk::Entity
{
    public:
        RadiusextItems();
        ~RadiusextItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf deadtime; //type: uint32
        ydk::YLeaf key; //type: string
        ydk::YLeaf keyenc; //type: AaaKeyEnc
        ydk::YLeaf logginglevel; //type: AaaLoggingLevel
        ydk::YLeaf name; //type: string
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf timeout; //type: uint32
        ydk::YLeaf retries; //type: uint32
        ydk::YLeaf srcif; //type: string
        class RadiusproviderItems; //type: System::UserextItems::RadiusextItems::RadiusproviderItems
        class RadiusprovidergroupItems; //type: System::UserextItems::RadiusextItems::RadiusprovidergroupItems
        class RadiusservermonitorItems; //type: System::UserextItems::RadiusextItems::RadiusservermonitorItems
        class RtfabricResRadiusEpItems; //type: System::UserextItems::RadiusextItems::RtfabricResRadiusEpItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::RadiusextItems::RadiusproviderItems> radiusprovider_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::RadiusextItems::RadiusprovidergroupItems> radiusprovidergroup_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::RadiusextItems::RadiusservermonitorItems> radiusservermonitor_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::RadiusextItems::RtfabricResRadiusEpItems> rtfabricresradiusep_items;
        
}; // System::UserextItems::RadiusextItems


class System::UserextItems::RadiusextItems::RadiusproviderItems : public ydk::Entity
{
    public:
        RadiusproviderItems();
        ~RadiusproviderItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class RadiusProviderList; //type: System::UserextItems::RadiusextItems::RadiusproviderItems::RadiusProviderList

        ydk::YList radiusprovider_list;
        
}; // System::UserextItems::RadiusextItems::RadiusproviderItems


class System::UserextItems::RadiusextItems::RadiusproviderItems::RadiusProviderList : public ydk::Entity
{
    public:
        RadiusProviderList();
        ~RadiusProviderList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf usetype; //type: AaaRadSrvUseType
        ydk::YLeaf authport; //type: uint32
        ydk::YLeaf acctport; //type: uint32
        ydk::YLeaf authprotocol; //type: AaaAuthenticationProtocol
        ydk::YLeaf monitoringidletime; //type: uint16
        ydk::YLeaf monitoringpasswordtype; //type: AaaLdapPwdEnc
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf key; //type: string
        ydk::YLeaf keyenc; //type: AaaKeyEncRadiusProviderKeyEnc
        ydk::YLeaf timeout; //type: uint32
        ydk::YLeaf retries; //type: uint32
        ydk::YLeaf monitoringuser; //type: string
        ydk::YLeaf monitoringpassword; //type: string
        ydk::YLeaf epgdn; //type: string
        ydk::YLeaf snmpindex; //type: uint32

}; // System::UserextItems::RadiusextItems::RadiusproviderItems::RadiusProviderList


class System::UserextItems::RadiusextItems::RadiusprovidergroupItems : public ydk::Entity
{
    public:
        RadiusprovidergroupItems();
        ~RadiusprovidergroupItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class RadiusProviderGroupList; //type: System::UserextItems::RadiusextItems::RadiusprovidergroupItems::RadiusProviderGroupList

        ydk::YList radiusprovidergroup_list;
        
}; // System::UserextItems::RadiusextItems::RadiusprovidergroupItems


class System::UserextItems::RadiusextItems::RadiusprovidergroupItems::RadiusProviderGroupList : public ydk::Entity
{
    public:
        RadiusProviderGroupList();
        ~RadiusProviderGroupList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf deadtime; //type: uint32
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf snmpindex; //type: uint32
        ydk::YLeaf srcif; //type: string
        ydk::YLeaf vrf; //type: string
        class ProviderrefItems; //type: System::UserextItems::RadiusextItems::RadiusprovidergroupItems::RadiusProviderGroupList::ProviderrefItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::RadiusextItems::RadiusprovidergroupItems::RadiusProviderGroupList::ProviderrefItems> providerref_items;
        
}; // System::UserextItems::RadiusextItems::RadiusprovidergroupItems::RadiusProviderGroupList


class System::UserextItems::RadiusextItems::RadiusprovidergroupItems::RadiusProviderGroupList::ProviderrefItems : public ydk::Entity
{
    public:
        ProviderrefItems();
        ~ProviderrefItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ProviderRefList; //type: System::UserextItems::RadiusextItems::RadiusprovidergroupItems::RadiusProviderGroupList::ProviderrefItems::ProviderRefList

        ydk::YList providerref_list;
        
}; // System::UserextItems::RadiusextItems::RadiusprovidergroupItems::RadiusProviderGroupList::ProviderrefItems


class System::UserextItems::RadiusextItems::RadiusprovidergroupItems::RadiusProviderGroupList::ProviderrefItems::ProviderRefList : public ydk::Entity
{
    public:
        ProviderRefList();
        ~ProviderRefList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf order; //type: uint16
        ydk::YLeaf snmpindex; //type: uint32
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string

}; // System::UserextItems::RadiusextItems::RadiusprovidergroupItems::RadiusProviderGroupList::ProviderrefItems::ProviderRefList


class System::UserextItems::RadiusextItems::RadiusservermonitorItems : public ydk::Entity
{
    public:
        RadiusservermonitorItems();
        ~RadiusservermonitorItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf pwd; //type: string
        ydk::YLeaf passwordtype; //type: AaaLdapPwdEnc
        ydk::YLeaf idletime; //type: uint16
        ydk::YLeaf name; //type: string
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string

}; // System::UserextItems::RadiusextItems::RadiusservermonitorItems


class System::UserextItems::RadiusextItems::RtfabricResRadiusEpItems : public ydk::Entity
{
    public:
        RtfabricResRadiusEpItems();
        ~RtfabricResRadiusEpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class RtFabricResRadiusEpList; //type: System::UserextItems::RadiusextItems::RtfabricResRadiusEpItems::RtFabricResRadiusEpList

        ydk::YList rtfabricresradiusep_list;
        
}; // System::UserextItems::RadiusextItems::RtfabricResRadiusEpItems


class System::UserextItems::RadiusextItems::RtfabricResRadiusEpItems::RtFabricResRadiusEpList : public ydk::Entity
{
    public:
        RtFabricResRadiusEpList();
        ~RtFabricResRadiusEpList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf tdn; //type: string

}; // System::UserextItems::RadiusextItems::RtfabricResRadiusEpItems::RtFabricResRadiusEpList


class System::UserextItems::LdapextItems : public ydk::Entity
{
    public:
        LdapextItems();
        ~LdapextItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf deadtime; //type: uint32
        ydk::YLeaf port; //type: uint32
        ydk::YLeaf attribute; //type: string
        ydk::YLeaf basedn; //type: string
        ydk::YLeaf filter; //type: string
        ydk::YLeaf logginglevel; //type: AaaLdapLogLevel
        ydk::YLeaf name; //type: string
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf timeout; //type: uint32
        ydk::YLeaf retries; //type: uint32
        ydk::YLeaf srcif; //type: string
        class LdapprovidergroupItems; //type: System::UserextItems::LdapextItems::LdapprovidergroupItems
        class LdapproviderItems; //type: System::UserextItems::LdapextItems::LdapproviderItems
        class SearchmapItems; //type: System::UserextItems::LdapextItems::SearchmapItems
        class RtfabricResLdapEpItems; //type: System::UserextItems::LdapextItems::RtfabricResLdapEpItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::LdapextItems::LdapprovidergroupItems> ldapprovidergroup_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::LdapextItems::LdapproviderItems> ldapprovider_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::LdapextItems::SearchmapItems> searchmap_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::LdapextItems::RtfabricResLdapEpItems> rtfabricresldapep_items;
        
}; // System::UserextItems::LdapextItems


class System::UserextItems::LdapextItems::LdapprovidergroupItems : public ydk::Entity
{
    public:
        LdapprovidergroupItems();
        ~LdapprovidergroupItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class LdapProviderGroupList; //type: System::UserextItems::LdapextItems::LdapprovidergroupItems::LdapProviderGroupList

        ydk::YList ldapprovidergroup_list;
        
}; // System::UserextItems::LdapextItems::LdapprovidergroupItems


class System::UserextItems::LdapextItems::LdapprovidergroupItems::LdapProviderGroupList : public ydk::Entity
{
    public:
        LdapProviderGroupList();
        ~LdapProviderGroupList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf deadtime; //type: uint32
        ydk::YLeaf enauthcompare; //type: boolean
        ydk::YLeaf encertdnmatch; //type: boolean
        ydk::YLeaf enuserservergroup; //type: boolean
        ydk::YLeaf enauthbindfirst; //type: boolean
        ydk::YLeaf authbasednappendstr; //type: string
        ydk::YLeaf authcomparepasswdattribute; //type: string
        ydk::YLeaf authmechanism; //type: AaaAuthMechanism
        ydk::YLeaf searchmap; //type: string
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf snmpindex; //type: uint32
        ydk::YLeaf srcif; //type: string
        ydk::YLeaf vrf; //type: string
        class ProviderrefItems; //type: System::UserextItems::LdapextItems::LdapprovidergroupItems::LdapProviderGroupList::ProviderrefItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::LdapextItems::LdapprovidergroupItems::LdapProviderGroupList::ProviderrefItems> providerref_items;
        
}; // System::UserextItems::LdapextItems::LdapprovidergroupItems::LdapProviderGroupList


class System::UserextItems::LdapextItems::LdapprovidergroupItems::LdapProviderGroupList::ProviderrefItems : public ydk::Entity
{
    public:
        ProviderrefItems();
        ~ProviderrefItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ProviderRefList; //type: System::UserextItems::LdapextItems::LdapprovidergroupItems::LdapProviderGroupList::ProviderrefItems::ProviderRefList

        ydk::YList providerref_list;
        
}; // System::UserextItems::LdapextItems::LdapprovidergroupItems::LdapProviderGroupList::ProviderrefItems


class System::UserextItems::LdapextItems::LdapprovidergroupItems::LdapProviderGroupList::ProviderrefItems::ProviderRefList : public ydk::Entity
{
    public:
        ProviderRefList();
        ~ProviderRefList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf order; //type: uint16
        ydk::YLeaf snmpindex; //type: uint32
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string

}; // System::UserextItems::LdapextItems::LdapprovidergroupItems::LdapProviderGroupList::ProviderrefItems::ProviderRefList


class System::UserextItems::LdapextItems::LdapproviderItems : public ydk::Entity
{
    public:
        LdapproviderItems();
        ~LdapproviderItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class LdapProviderList; //type: System::UserextItems::LdapextItems::LdapproviderItems::LdapProviderList

        ydk::YList ldapprovider_list;
        
}; // System::UserextItems::LdapextItems::LdapproviderItems


class System::UserextItems::LdapextItems::LdapproviderItems::LdapProviderList : public ydk::Entity
{
    public:
        LdapProviderList();
        ~LdapProviderList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf rootdn; //type: string
        ydk::YLeaf rootdnpwd; //type: string
        ydk::YLeaf pwdencrypttype; //type: AaaLdapPwdEnc
        ydk::YLeaf port; //type: uint32
        ydk::YLeaf enablessl; //type: boolean
        ydk::YLeaf sslvalidationlevel; //type: AaaLdapSSLStrictnessLevel
        ydk::YLeaf attribute; //type: string
        ydk::YLeaf basedn; //type: string
        ydk::YLeaf filter; //type: string
        ydk::YLeaf monitoringpasswordtype; //type: AaaLdapPwdEnc
        ydk::YLeaf monitoringidletime; //type: uint16
        ydk::YLeaf monitoringrootdn; //type: string
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf key; //type: string
        ydk::YLeaf keyset; //type: boolean
        ydk::YLeaf keyenc; //type: AaaKeyEncLdapProviderKeyEnc
        ydk::YLeaf timeout; //type: uint32
        ydk::YLeaf retries; //type: uint32
        ydk::YLeaf operstate; //type: AaaProviderState
        ydk::YLeaf monitoringuser; //type: string
        ydk::YLeaf monitoringpassword; //type: string
        ydk::YLeaf epgdn; //type: string
        ydk::YLeaf vrfname; //type: string
        ydk::YLeaf snmpindex; //type: uint32

}; // System::UserextItems::LdapextItems::LdapproviderItems::LdapProviderList


class System::UserextItems::LdapextItems::SearchmapItems : public ydk::Entity
{
    public:
        SearchmapItems();
        ~SearchmapItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class LdapSearchMapList; //type: System::UserextItems::LdapextItems::SearchmapItems::LdapSearchMapList

        ydk::YList ldapsearchmap_list;
        
}; // System::UserextItems::LdapextItems::SearchmapItems


class System::UserextItems::LdapextItems::SearchmapItems::LdapSearchMapList : public ydk::Entity
{
    public:
        LdapSearchMapList();
        ~LdapSearchMapList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string
        class EntryItems; //type: System::UserextItems::LdapextItems::SearchmapItems::LdapSearchMapList::EntryItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::LdapextItems::SearchmapItems::LdapSearchMapList::EntryItems> entry_items;
        
}; // System::UserextItems::LdapextItems::SearchmapItems::LdapSearchMapList


class System::UserextItems::LdapextItems::SearchmapItems::LdapSearchMapList::EntryItems : public ydk::Entity
{
    public:
        EntryItems();
        ~EntryItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LdapSearchMapEntryList; //type: System::UserextItems::LdapextItems::SearchmapItems::LdapSearchMapList::EntryItems::LdapSearchMapEntryList

        ydk::YList ldapsearchmapentry_list;
        
}; // System::UserextItems::LdapextItems::SearchmapItems::LdapSearchMapList::EntryItems


class System::UserextItems::LdapextItems::SearchmapItems::LdapSearchMapList::EntryItems::LdapSearchMapEntryList : public ydk::Entity
{
    public:
        LdapSearchMapEntryList();
        ~LdapSearchMapEntryList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: AaaSearchMapEntryType
        ydk::YLeaf basedn; //type: string
        ydk::YLeaf attribute; //type: string
        ydk::YLeaf searchfilter; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string

}; // System::UserextItems::LdapextItems::SearchmapItems::LdapSearchMapList::EntryItems::LdapSearchMapEntryList


class System::UserextItems::LdapextItems::RtfabricResLdapEpItems : public ydk::Entity
{
    public:
        RtfabricResLdapEpItems();
        ~RtfabricResLdapEpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class RtFabricResLdapEpList; //type: System::UserextItems::LdapextItems::RtfabricResLdapEpItems::RtFabricResLdapEpList

        ydk::YList rtfabricresldapep_list;
        
}; // System::UserextItems::LdapextItems::RtfabricResLdapEpItems


class System::UserextItems::LdapextItems::RtfabricResLdapEpItems::RtFabricResLdapEpList : public ydk::Entity
{
    public:
        RtFabricResLdapEpList();
        ~RtFabricResLdapEpList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf tdn; //type: string

}; // System::UserextItems::LdapextItems::RtfabricResLdapEpItems::RtFabricResLdapEpList


class System::UserextItems::TacacsextItems : public ydk::Entity
{
    public:
        TacacsextItems();
        ~TacacsextItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf deadtime; //type: uint32
        ydk::YLeaf key; //type: string
        ydk::YLeaf keyenc; //type: AaaKeyEnc
        ydk::YLeaf logginglevel; //type: AaaLoggingLevel
        ydk::YLeaf name; //type: string
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf timeout; //type: uint32
        ydk::YLeaf retries; //type: uint32
        ydk::YLeaf srcif; //type: string
        class TacacsplusproviderItems; //type: System::UserextItems::TacacsextItems::TacacsplusproviderItems
        class TacacsplusprovidergroupItems; //type: System::UserextItems::TacacsextItems::TacacsplusprovidergroupItems
        class TacacsservermonitorItems; //type: System::UserextItems::TacacsextItems::TacacsservermonitorItems
        class RtfabricResTacacsPlusEpItems; //type: System::UserextItems::TacacsextItems::RtfabricResTacacsPlusEpItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::TacacsextItems::TacacsplusproviderItems> tacacsplusprovider_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::TacacsextItems::TacacsplusprovidergroupItems> tacacsplusprovidergroup_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::TacacsextItems::TacacsservermonitorItems> tacacsservermonitor_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::TacacsextItems::RtfabricResTacacsPlusEpItems> rtfabricrestacacsplusep_items;
        
}; // System::UserextItems::TacacsextItems


class System::UserextItems::TacacsextItems::TacacsplusproviderItems : public ydk::Entity
{
    public:
        TacacsplusproviderItems();
        ~TacacsplusproviderItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class TacacsPlusProviderList; //type: System::UserextItems::TacacsextItems::TacacsplusproviderItems::TacacsPlusProviderList

        ydk::YList tacacsplusprovider_list;
        
}; // System::UserextItems::TacacsextItems::TacacsplusproviderItems


class System::UserextItems::TacacsextItems::TacacsplusproviderItems::TacacsPlusProviderList : public ydk::Entity
{
    public:
        TacacsPlusProviderList();
        ~TacacsPlusProviderList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf port; //type: uint32
        ydk::YLeaf authprotocol; //type: AaaAuthenticationProtocol
        ydk::YLeaf singleconnection; //type: AaaBoolean
        ydk::YLeaf monitoringidletime; //type: uint16
        ydk::YLeaf monitoringpasswordtype; //type: AaaLdapPwdEnc
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf key; //type: string
        ydk::YLeaf keyenc; //type: AaaKeyEncTacacsPlusProviderKeyEnc
        ydk::YLeaf timeout; //type: uint32
        ydk::YLeaf retries; //type: uint32
        ydk::YLeaf monitoringuser; //type: string
        ydk::YLeaf monitoringpassword; //type: string
        ydk::YLeaf epgdn; //type: string
        ydk::YLeaf snmpindex; //type: uint32

}; // System::UserextItems::TacacsextItems::TacacsplusproviderItems::TacacsPlusProviderList


class System::UserextItems::TacacsextItems::TacacsplusprovidergroupItems : public ydk::Entity
{
    public:
        TacacsplusprovidergroupItems();
        ~TacacsplusprovidergroupItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class TacacsPlusProviderGroupList; //type: System::UserextItems::TacacsextItems::TacacsplusprovidergroupItems::TacacsPlusProviderGroupList

        ydk::YList tacacsplusprovidergroup_list;
        
}; // System::UserextItems::TacacsextItems::TacacsplusprovidergroupItems


class System::UserextItems::TacacsextItems::TacacsplusprovidergroupItems::TacacsPlusProviderGroupList : public ydk::Entity
{
    public:
        TacacsPlusProviderGroupList();
        ~TacacsPlusProviderGroupList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf deadtime; //type: uint32
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf snmpindex; //type: uint32
        ydk::YLeaf srcif; //type: string
        ydk::YLeaf vrf; //type: string
        class ProviderrefItems; //type: System::UserextItems::TacacsextItems::TacacsplusprovidergroupItems::TacacsPlusProviderGroupList::ProviderrefItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::TacacsextItems::TacacsplusprovidergroupItems::TacacsPlusProviderGroupList::ProviderrefItems> providerref_items;
        
}; // System::UserextItems::TacacsextItems::TacacsplusprovidergroupItems::TacacsPlusProviderGroupList


class System::UserextItems::TacacsextItems::TacacsplusprovidergroupItems::TacacsPlusProviderGroupList::ProviderrefItems : public ydk::Entity
{
    public:
        ProviderrefItems();
        ~ProviderrefItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ProviderRefList; //type: System::UserextItems::TacacsextItems::TacacsplusprovidergroupItems::TacacsPlusProviderGroupList::ProviderrefItems::ProviderRefList

        ydk::YList providerref_list;
        
}; // System::UserextItems::TacacsextItems::TacacsplusprovidergroupItems::TacacsPlusProviderGroupList::ProviderrefItems


class System::UserextItems::TacacsextItems::TacacsplusprovidergroupItems::TacacsPlusProviderGroupList::ProviderrefItems::ProviderRefList : public ydk::Entity
{
    public:
        ProviderRefList();
        ~ProviderRefList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf order; //type: uint16
        ydk::YLeaf snmpindex; //type: uint32
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string

}; // System::UserextItems::TacacsextItems::TacacsplusprovidergroupItems::TacacsPlusProviderGroupList::ProviderrefItems::ProviderRefList


class System::UserextItems::TacacsextItems::TacacsservermonitorItems : public ydk::Entity
{
    public:
        TacacsservermonitorItems();
        ~TacacsservermonitorItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf pwd; //type: string
        ydk::YLeaf passwordtype; //type: AaaLdapPwdEnc
        ydk::YLeaf idletime; //type: uint16
        ydk::YLeaf name; //type: string
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string

}; // System::UserextItems::TacacsextItems::TacacsservermonitorItems


class System::UserextItems::TacacsextItems::RtfabricResTacacsPlusEpItems : public ydk::Entity
{
    public:
        RtfabricResTacacsPlusEpItems();
        ~RtfabricResTacacsPlusEpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class RtFabricResTacacsPlusEpList; //type: System::UserextItems::TacacsextItems::RtfabricResTacacsPlusEpItems::RtFabricResTacacsPlusEpList

        ydk::YList rtfabricrestacacsplusep_list;
        
}; // System::UserextItems::TacacsextItems::RtfabricResTacacsPlusEpItems


class System::UserextItems::TacacsextItems::RtfabricResTacacsPlusEpItems::RtFabricResTacacsPlusEpList : public ydk::Entity
{
    public:
        RtFabricResTacacsPlusEpList();
        ~RtFabricResTacacsPlusEpList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf tdn; //type: string

}; // System::UserextItems::TacacsextItems::RtfabricResTacacsPlusEpItems::RtFabricResTacacsPlusEpList


class System::UserextItems::AuthrealmItems : public ydk::Entity
{
    public:
        AuthrealmItems();
        ~AuthrealmItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf defrolepolicy; //type: AaaNoRolePolicy
        ydk::YLeaf raddirectedreq; //type: AaaBoolean
        ydk::YLeaf tacdirectedreq; //type: AaaBoolean
        ydk::YLeaf logginglevel; //type: AaaLoggingLevel
        ydk::YLeaf name; //type: string
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string
        class AaagroupItems; //type: System::UserextItems::AuthrealmItems::AaagroupItems
        class DefaultauthItems; //type: System::UserextItems::AuthrealmItems::DefaultauthItems
        class DefaultauthorItems; //type: System::UserextItems::AuthrealmItems::DefaultauthorItems
        class ConsoleauthorItems; //type: System::UserextItems::AuthrealmItems::ConsoleauthorItems
        class DefaultaccItems; //type: System::UserextItems::AuthrealmItems::DefaultaccItems
        class PkisshcertItems; //type: System::UserextItems::AuthrealmItems::PkisshcertItems
        class PkisshpubkeyItems; //type: System::UserextItems::AuthrealmItems::PkisshpubkeyItems
        class ConsoleauthItems; //type: System::UserextItems::AuthrealmItems::ConsoleauthItems
        class RtfabricResAuthRealmItems; //type: System::UserextItems::AuthrealmItems::RtfabricResAuthRealmItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::AuthrealmItems::AaagroupItems> aaagroup_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::AuthrealmItems::DefaultauthItems> defaultauth_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::AuthrealmItems::DefaultauthorItems> defaultauthor_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::AuthrealmItems::ConsoleauthorItems> consoleauthor_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::AuthrealmItems::DefaultaccItems> defaultacc_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::AuthrealmItems::PkisshcertItems> pkisshcert_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::AuthrealmItems::PkisshpubkeyItems> pkisshpubkey_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::AuthrealmItems::ConsoleauthItems> consoleauth_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::AuthrealmItems::RtfabricResAuthRealmItems> rtfabricresauthrealm_items;
        
}; // System::UserextItems::AuthrealmItems


class System::UserextItems::AuthrealmItems::AaagroupItems : public ydk::Entity
{
    public:
        AaagroupItems();
        ~AaagroupItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class AaaServerGroupList; //type: System::UserextItems::AuthrealmItems::AaagroupItems::AaaServerGroupList

        ydk::YList aaaservergroup_list;
        
}; // System::UserextItems::AuthrealmItems::AaagroupItems


class System::UserextItems::AuthrealmItems::AaagroupItems::AaaServerGroupList : public ydk::Entity
{
    public:
        AaaServerGroupList();
        ~AaaServerGroupList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf protocol; //type: AaaProviderGroupProtocol

}; // System::UserextItems::AuthrealmItems::AaagroupItems::AaaServerGroupList


class System::UserextItems::AuthrealmItems::DefaultauthItems : public ydk::Entity
{
    public:
        DefaultauthItems();
        ~DefaultauthItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf realm; //type: AaaRealm
        ydk::YLeaf providergroup; //type: string
        ydk::YLeaf providergroup2; //type: string
        ydk::YLeaf providergroup3; //type: string
        ydk::YLeaf providergroup4; //type: string
        ydk::YLeaf providergroup5; //type: string
        ydk::YLeaf providergroup6; //type: string
        ydk::YLeaf providergroup7; //type: string
        ydk::YLeaf providergroup8; //type: string
        ydk::YLeaf erren; //type: boolean
        ydk::YLeaf authprotocol; //type: AaaAuthenticationProtocol
        ydk::YLeaf fallback; //type: AaaBoolean
        ydk::YLeaf local; //type: AaaBoolean
        ydk::YLeaf none; //type: AaaBoolean

}; // System::UserextItems::AuthrealmItems::DefaultauthItems


class System::UserextItems::AuthrealmItems::DefaultauthorItems : public ydk::Entity
{
    public:
        DefaultauthorItems();
        ~DefaultauthorItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class DefaultAuthorList; //type: System::UserextItems::AuthrealmItems::DefaultauthorItems::DefaultAuthorList

        ydk::YList defaultauthor_list;
        
}; // System::UserextItems::AuthrealmItems::DefaultauthorItems


class System::UserextItems::AuthrealmItems::DefaultauthorItems::DefaultAuthorList : public ydk::Entity
{
    public:
        DefaultAuthorList();
        ~DefaultAuthorList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf cmdtype; //type: AaaCmdType
        ydk::YLeaf name; //type: string
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf realm; //type: AaaRealm
        ydk::YLeaf providergroup; //type: string
        ydk::YLeaf providergroup2; //type: string
        ydk::YLeaf providergroup3; //type: string
        ydk::YLeaf providergroup4; //type: string
        ydk::YLeaf providergroup5; //type: string
        ydk::YLeaf providergroup6; //type: string
        ydk::YLeaf providergroup7; //type: string
        ydk::YLeaf providergroup8; //type: string
        ydk::YLeaf authormethodnone; //type: boolean
        ydk::YLeaf localrbac; //type: boolean

}; // System::UserextItems::AuthrealmItems::DefaultauthorItems::DefaultAuthorList


class System::UserextItems::AuthrealmItems::ConsoleauthorItems : public ydk::Entity
{
    public:
        ConsoleauthorItems();
        ~ConsoleauthorItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ConsoleAuthorList; //type: System::UserextItems::AuthrealmItems::ConsoleauthorItems::ConsoleAuthorList

        ydk::YList consoleauthor_list;
        
}; // System::UserextItems::AuthrealmItems::ConsoleauthorItems


class System::UserextItems::AuthrealmItems::ConsoleauthorItems::ConsoleAuthorList : public ydk::Entity
{
    public:
        ConsoleAuthorList();
        ~ConsoleAuthorList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf cmdtype; //type: AaaCmdType
        ydk::YLeaf name; //type: string
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf realm; //type: AaaRealm
        ydk::YLeaf providergroup; //type: string
        ydk::YLeaf providergroup2; //type: string
        ydk::YLeaf providergroup3; //type: string
        ydk::YLeaf providergroup4; //type: string
        ydk::YLeaf providergroup5; //type: string
        ydk::YLeaf providergroup6; //type: string
        ydk::YLeaf providergroup7; //type: string
        ydk::YLeaf providergroup8; //type: string
        ydk::YLeaf authormethodnone; //type: boolean
        ydk::YLeaf localrbac; //type: boolean

}; // System::UserextItems::AuthrealmItems::ConsoleauthorItems::ConsoleAuthorList


class System::UserextItems::AuthrealmItems::DefaultaccItems : public ydk::Entity
{
    public:
        DefaultaccItems();
        ~DefaultaccItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf realm; //type: AaaRealm
        ydk::YLeaf providergroup; //type: string
        ydk::YLeaf providergroup2; //type: string
        ydk::YLeaf providergroup3; //type: string
        ydk::YLeaf providergroup4; //type: string
        ydk::YLeaf providergroup5; //type: string
        ydk::YLeaf providergroup6; //type: string
        ydk::YLeaf providergroup7; //type: string
        ydk::YLeaf providergroup8; //type: string
        ydk::YLeaf accmethodnone; //type: boolean
        ydk::YLeaf localrbac; //type: boolean

}; // System::UserextItems::AuthrealmItems::DefaultaccItems


class System::UserextItems::AuthrealmItems::PkisshcertItems : public ydk::Entity
{
    public:
        PkisshcertItems();
        ~PkisshcertItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf local; //type: boolean
        ydk::YLeaf name; //type: string
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf realm; //type: AaaRealm
        ydk::YLeaf providergroup; //type: string
        ydk::YLeaf providergroup2; //type: string
        ydk::YLeaf providergroup3; //type: string
        ydk::YLeaf providergroup4; //type: string
        ydk::YLeaf providergroup5; //type: string
        ydk::YLeaf providergroup6; //type: string
        ydk::YLeaf providergroup7; //type: string
        ydk::YLeaf providergroup8; //type: string

}; // System::UserextItems::AuthrealmItems::PkisshcertItems


class System::UserextItems::AuthrealmItems::PkisshpubkeyItems : public ydk::Entity
{
    public:
        PkisshpubkeyItems();
        ~PkisshpubkeyItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf local; //type: boolean
        ydk::YLeaf name; //type: string
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf realm; //type: AaaRealm
        ydk::YLeaf providergroup; //type: string
        ydk::YLeaf providergroup2; //type: string
        ydk::YLeaf providergroup3; //type: string
        ydk::YLeaf providergroup4; //type: string
        ydk::YLeaf providergroup5; //type: string
        ydk::YLeaf providergroup6; //type: string
        ydk::YLeaf providergroup7; //type: string
        ydk::YLeaf providergroup8; //type: string

}; // System::UserextItems::AuthrealmItems::PkisshpubkeyItems


class System::UserextItems::AuthrealmItems::ConsoleauthItems : public ydk::Entity
{
    public:
        ConsoleauthItems();
        ~ConsoleauthItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf realm; //type: AaaRealm
        ydk::YLeaf providergroup; //type: string
        ydk::YLeaf providergroup2; //type: string
        ydk::YLeaf providergroup3; //type: string
        ydk::YLeaf providergroup4; //type: string
        ydk::YLeaf providergroup5; //type: string
        ydk::YLeaf providergroup6; //type: string
        ydk::YLeaf providergroup7; //type: string
        ydk::YLeaf providergroup8; //type: string
        ydk::YLeaf erren; //type: boolean
        ydk::YLeaf authprotocol; //type: AaaAuthenticationProtocol
        ydk::YLeaf fallback; //type: AaaBoolean
        ydk::YLeaf local; //type: AaaBoolean
        ydk::YLeaf none; //type: AaaBoolean

}; // System::UserextItems::AuthrealmItems::ConsoleauthItems


class System::UserextItems::AuthrealmItems::RtfabricResAuthRealmItems : public ydk::Entity
{
    public:
        RtfabricResAuthRealmItems();
        ~RtfabricResAuthRealmItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class RtFabricResAuthRealmList; //type: System::UserextItems::AuthrealmItems::RtfabricResAuthRealmItems::RtFabricResAuthRealmList

        ydk::YList rtfabricresauthrealm_list;
        
}; // System::UserextItems::AuthrealmItems::RtfabricResAuthRealmItems


class System::UserextItems::AuthrealmItems::RtfabricResAuthRealmItems::RtFabricResAuthRealmList : public ydk::Entity
{
    public:
        RtFabricResAuthRealmList();
        ~RtFabricResAuthRealmList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf tdn; //type: string

}; // System::UserextItems::AuthrealmItems::RtfabricResAuthRealmItems::RtFabricResAuthRealmList


class System::UserextItems::LogindomainItems : public ydk::Entity
{
    public:
        LogindomainItems();
        ~LogindomainItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class LoginDomainList; //type: System::UserextItems::LogindomainItems::LoginDomainList

        ydk::YList logindomain_list;
        
}; // System::UserextItems::LogindomainItems


class System::UserextItems::LogindomainItems::LoginDomainList : public ydk::Entity
{
    public:
        LoginDomainList();
        ~LoginDomainList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string
        class DomainauthItems; //type: System::UserextItems::LogindomainItems::LoginDomainList::DomainauthItems
        class RtaaaLoginDomainItems; //type: System::UserextItems::LogindomainItems::LoginDomainList::RtaaaLoginDomainItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::LogindomainItems::LoginDomainList::DomainauthItems> domainauth_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::LogindomainItems::LoginDomainList::RtaaaLoginDomainItems> rtaaalogindomain_items;
        
}; // System::UserextItems::LogindomainItems::LoginDomainList


class System::UserextItems::LogindomainItems::LoginDomainList::DomainauthItems : public ydk::Entity
{
    public:
        DomainauthItems();
        ~DomainauthItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf realm; //type: AaaRealmDomainAuthRealm
        ydk::YLeaf providergroup; //type: string
        ydk::YLeaf providergroup2; //type: string
        ydk::YLeaf providergroup3; //type: string
        ydk::YLeaf providergroup4; //type: string
        ydk::YLeaf providergroup5; //type: string
        ydk::YLeaf providergroup6; //type: string
        ydk::YLeaf providergroup7; //type: string
        ydk::YLeaf providergroup8; //type: string
        ydk::YLeaf erren; //type: boolean
        ydk::YLeaf authprotocol; //type: AaaAuthenticationProtocol
        ydk::YLeaf fallback; //type: AaaBoolean
        ydk::YLeaf local; //type: AaaBoolean
        ydk::YLeaf none; //type: AaaBoolean
        class DefaultauthItems; //type: System::UserextItems::LogindomainItems::LoginDomainList::DomainauthItems::DefaultauthItems
        class ConsoleauthItems; //type: System::UserextItems::LogindomainItems::LoginDomainList::DomainauthItems::ConsoleauthItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::LogindomainItems::LoginDomainList::DomainauthItems::DefaultauthItems> defaultauth_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::LogindomainItems::LoginDomainList::DomainauthItems::ConsoleauthItems> consoleauth_items;
        
}; // System::UserextItems::LogindomainItems::LoginDomainList::DomainauthItems


class System::UserextItems::LogindomainItems::LoginDomainList::DomainauthItems::DefaultauthItems : public ydk::Entity
{
    public:
        DefaultauthItems();
        ~DefaultauthItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf realm; //type: AaaRealm
        ydk::YLeaf providergroup; //type: string
        ydk::YLeaf providergroup2; //type: string
        ydk::YLeaf providergroup3; //type: string
        ydk::YLeaf providergroup4; //type: string
        ydk::YLeaf providergroup5; //type: string
        ydk::YLeaf providergroup6; //type: string
        ydk::YLeaf providergroup7; //type: string
        ydk::YLeaf providergroup8; //type: string
        ydk::YLeaf erren; //type: boolean
        ydk::YLeaf authprotocol; //type: AaaAuthenticationProtocol
        ydk::YLeaf fallback; //type: AaaBoolean
        ydk::YLeaf local; //type: AaaBoolean
        ydk::YLeaf none; //type: AaaBoolean

}; // System::UserextItems::LogindomainItems::LoginDomainList::DomainauthItems::DefaultauthItems


class System::UserextItems::LogindomainItems::LoginDomainList::DomainauthItems::ConsoleauthItems : public ydk::Entity
{
    public:
        ConsoleauthItems();
        ~ConsoleauthItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf realm; //type: AaaRealm
        ydk::YLeaf providergroup; //type: string
        ydk::YLeaf providergroup2; //type: string
        ydk::YLeaf providergroup3; //type: string
        ydk::YLeaf providergroup4; //type: string
        ydk::YLeaf providergroup5; //type: string
        ydk::YLeaf providergroup6; //type: string
        ydk::YLeaf providergroup7; //type: string
        ydk::YLeaf providergroup8; //type: string
        ydk::YLeaf erren; //type: boolean
        ydk::YLeaf authprotocol; //type: AaaAuthenticationProtocol
        ydk::YLeaf fallback; //type: AaaBoolean
        ydk::YLeaf local; //type: AaaBoolean
        ydk::YLeaf none; //type: AaaBoolean

}; // System::UserextItems::LogindomainItems::LoginDomainList::DomainauthItems::ConsoleauthItems


class System::UserextItems::LogindomainItems::LoginDomainList::RtaaaLoginDomainItems : public ydk::Entity
{
    public:
        RtaaaLoginDomainItems();
        ~RtaaaLoginDomainItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RtAaaLoginDomainList; //type: System::UserextItems::LogindomainItems::LoginDomainList::RtaaaLoginDomainItems::RtAaaLoginDomainList

        ydk::YList rtaaalogindomain_list;
        
}; // System::UserextItems::LogindomainItems::LoginDomainList::RtaaaLoginDomainItems


class System::UserextItems::LogindomainItems::LoginDomainList::RtaaaLoginDomainItems::RtAaaLoginDomainList : public ydk::Entity
{
    public:
        RtAaaLoginDomainList();
        ~RtAaaLoginDomainList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string

}; // System::UserextItems::LogindomainItems::LoginDomainList::RtaaaLoginDomainItems::RtAaaLoginDomainList


class System::UserextItems::PostloginbannerItems : public ydk::Entity
{
    public:
        PostloginbannerItems();
        ~PostloginbannerItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf message; //type: string
        ydk::YLeaf guimessage; //type: string
        ydk::YLeaf delimiter; //type: string

}; // System::UserextItems::PostloginbannerItems


class System::UserextItems::PreloginbannerItems : public ydk::Entity
{
    public:
        PreloginbannerItems();
        ~PreloginbannerItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf message; //type: string
        ydk::YLeaf guimessage; //type: string
        ydk::YLeaf delimiter; //type: string
        class RtpreLoginBannerItems; //type: System::UserextItems::PreloginbannerItems::RtpreLoginBannerItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::PreloginbannerItems::RtpreLoginBannerItems> rtpreloginbanner_items;
        
}; // System::UserextItems::PreloginbannerItems


class System::UserextItems::PreloginbannerItems::RtpreLoginBannerItems : public ydk::Entity
{
    public:
        RtpreLoginBannerItems();
        ~RtpreLoginBannerItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf tdn; //type: string

}; // System::UserextItems::PreloginbannerItems::RtpreLoginBannerItems


class System::UserextItems::RemoteuserItems : public ydk::Entity
{
    public:
        RemoteuserItems();
        ~RemoteuserItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class RemoteUserList; //type: System::UserextItems::RemoteuserItems::RemoteUserList

        ydk::YList remoteuser_list;
        
}; // System::UserextItems::RemoteuserItems


class System::UserextItems::RemoteuserItems::RemoteUserList : public ydk::Entity
{
    public:
        RemoteUserList();
        ~RemoteUserList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string
        class UserdomainItems; //type: System::UserextItems::RemoteuserItems::RemoteUserList::UserdomainItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::RemoteuserItems::RemoteUserList::UserdomainItems> userdomain_items;
        
}; // System::UserextItems::RemoteuserItems::RemoteUserList


class System::UserextItems::RemoteuserItems::RemoteUserList::UserdomainItems : public ydk::Entity
{
    public:
        UserdomainItems();
        ~UserdomainItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RemoteUserDomainList; //type: System::UserextItems::RemoteuserItems::RemoteUserList::UserdomainItems::RemoteUserDomainList

        ydk::YList remoteuserdomain_list;
        
}; // System::UserextItems::RemoteuserItems::RemoteUserList::UserdomainItems


class System::UserextItems::RemoteuserItems::RemoteUserList::UserdomainItems::RemoteUserDomainList : public ydk::Entity
{
    public:
        RemoteUserDomainList();
        ~RemoteUserDomainList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string
        class RoleItems; //type: System::UserextItems::RemoteuserItems::RemoteUserList::UserdomainItems::RemoteUserDomainList::RoleItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::RemoteuserItems::RemoteUserList::UserdomainItems::RemoteUserDomainList::RoleItems> role_items;
        
}; // System::UserextItems::RemoteuserItems::RemoteUserList::UserdomainItems::RemoteUserDomainList


class System::UserextItems::RemoteuserItems::RemoteUserList::UserdomainItems::RemoteUserDomainList::RoleItems : public ydk::Entity
{
    public:
        RoleItems();
        ~RoleItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RemoteUserRoleList; //type: System::UserextItems::RemoteuserItems::RemoteUserList::UserdomainItems::RemoteUserDomainList::RoleItems::RemoteUserRoleList

        ydk::YList remoteuserrole_list;
        
}; // System::UserextItems::RemoteuserItems::RemoteUserList::UserdomainItems::RemoteUserDomainList::RoleItems


class System::UserextItems::RemoteuserItems::RemoteUserList::UserdomainItems::RemoteUserDomainList::RoleItems::RemoteUserRoleList : public ydk::Entity
{
    public:
        RemoteUserRoleList();
        ~RemoteUserRoleList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf privtype; //type: AaaUserRolePrivType
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string

}; // System::UserextItems::RemoteuserItems::RemoteUserList::UserdomainItems::RemoteUserDomainList::RoleItems::RemoteUserRoleList


class System::UserextItems::UserItems : public ydk::Entity
{
    public:
        UserItems();
        ~UserItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class UserList; //type: System::UserextItems::UserItems::UserList

        ydk::YList user_list;
        
}; // System::UserextItems::UserItems


class System::UserextItems::UserItems::UserList : public ydk::Entity
{
    public:
        UserList();
        ~UserList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf firstname; //type: string
        ydk::YLeaf lastname; //type: string
        ydk::YLeaf email; //type: string
        ydk::YLeaf phone; //type: string
        ydk::YLeaf expiration; //type: one of uint64, string
        ydk::YLeaf expires; //type: AaaBoolean
        ydk::YLeaf allowexpired; //type: AaaBoolean
        ydk::YLeaf accountstatus; //type: AaaAccountStatus
        ydk::YLeaf pwd; //type: string
        ydk::YLeaf pwdencrypttype; //type: AaaKeyEncUserPass
        ydk::YLeaf pwdlifetime; //type: uint16
        ydk::YLeaf clearpwdhistory; //type: AaaClear
        ydk::YLeaf unixuserid; //type: uint16
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string
        class SshcertauthItems; //type: System::UserextItems::UserItems::UserList::SshcertauthItems
        class SshauthItems; //type: System::UserextItems::UserItems::UserList::SshauthItems
        class UsercertItems; //type: System::UserextItems::UserItems::UserList::UsercertItems
        class UserdomainItems; //type: System::UserextItems::UserItems::UserList::UserdomainItems
        class UserdataItems; //type: System::UserextItems::UserItems::UserList::UserdataItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::UserItems::UserList::SshcertauthItems> sshcertauth_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::UserItems::UserList::SshauthItems> sshauth_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::UserItems::UserList::UsercertItems> usercert_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::UserItems::UserList::UserdomainItems> userdomain_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::UserItems::UserList::UserdataItems> userdata_items;
        
}; // System::UserextItems::UserItems::UserList


class System::UserextItems::UserItems::UserList::SshcertauthItems : public ydk::Entity
{
    public:
        SshcertauthItems();
        ~SshcertauthItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf certdn; //type: string
        ydk::YLeaf algorithm; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string

}; // System::UserextItems::UserItems::UserList::SshcertauthItems


class System::UserextItems::UserItems::UserList::SshauthItems : public ydk::Entity
{
    public:
        SshauthItems();
        ~SshauthItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string

}; // System::UserextItems::UserItems::UserList::SshauthItems


class System::UserextItems::UserItems::UserList::UsercertItems : public ydk::Entity
{
    public:
        UsercertItems();
        ~UsercertItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UserCertList; //type: System::UserextItems::UserItems::UserList::UsercertItems::UserCertList

        ydk::YList usercert_list;
        
}; // System::UserextItems::UserItems::UserList::UsercertItems


class System::UserextItems::UserItems::UserList::UsercertItems::UserCertList : public ydk::Entity
{
    public:
        UserCertList();
        ~UserCertList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf data; //type: string
        ydk::YLeaf fingerprint; //type: string
        ydk::YLeaf certificatedecodeinformation; //type: string
        ydk::YLeaf publickey; //type: string
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string

}; // System::UserextItems::UserItems::UserList::UsercertItems::UserCertList


class System::UserextItems::UserItems::UserList::UserdomainItems : public ydk::Entity
{
    public:
        UserdomainItems();
        ~UserdomainItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UserDomainList; //type: System::UserextItems::UserItems::UserList::UserdomainItems::UserDomainList

        ydk::YList userdomain_list;
        
}; // System::UserextItems::UserItems::UserList::UserdomainItems


class System::UserextItems::UserItems::UserList::UserdomainItems::UserDomainList : public ydk::Entity
{
    public:
        UserDomainList();
        ~UserDomainList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string
        class RoleItems; //type: System::UserextItems::UserItems::UserList::UserdomainItems::UserDomainList::RoleItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::UserItems::UserList::UserdomainItems::UserDomainList::RoleItems> role_items;
        
}; // System::UserextItems::UserItems::UserList::UserdomainItems::UserDomainList


class System::UserextItems::UserItems::UserList::UserdomainItems::UserDomainList::RoleItems : public ydk::Entity
{
    public:
        RoleItems();
        ~RoleItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UserRoleList; //type: System::UserextItems::UserItems::UserList::UserdomainItems::UserDomainList::RoleItems::UserRoleList

        ydk::YList userrole_list;
        
}; // System::UserextItems::UserItems::UserList::UserdomainItems::UserDomainList::RoleItems


class System::UserextItems::UserItems::UserList::UserdomainItems::UserDomainList::RoleItems::UserRoleList : public ydk::Entity
{
    public:
        UserRoleList();
        ~UserRoleList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf privtype; //type: AaaUserRolePrivType
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string

}; // System::UserextItems::UserItems::UserList::UserdomainItems::UserDomainList::RoleItems::UserRoleList


class System::UserextItems::UserItems::UserList::UserdataItems : public ydk::Entity
{
    public:
        UserdataItems();
        ~UserdataItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pwdchangeddate; //type: one of uint64, string
        ydk::YLeaf pwdhistory; //type: string
        ydk::YLeaf pwdchangecount; //type: uint8
        ydk::YLeaf pwdchangeintervalbegin; //type: one of uint64, string
        ydk::YLeaf name; //type: string
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string

}; // System::UserextItems::UserItems::UserList::UserdataItems


class System::UserextItems::RoleItems : public ydk::Entity
{
    public:
        RoleItems();
        ~RoleItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class RoleList; //type: System::UserextItems::RoleItems::RoleList

        ydk::YList role_list;
        
}; // System::UserextItems::RoleItems


class System::UserextItems::RoleItems::RoleList : public ydk::Entity
{
    public:
        RoleList();
        ~RoleList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf denyvrf; //type: AaaBoolean
        ydk::YLeaf allowedvrf; //type: string
        ydk::YLeaf denyvlan; //type: AaaBoolean
        ydk::YLeaf allowedvlan; //type: string
        ydk::YLeaf denyintf; //type: AaaBoolean
        ydk::YLeaf priv; //type: string
        ydk::YLeaf roleprivtype; //type: AaaUserRolePrivType
        ydk::YLeaf resettofactory; //type: AaaBoolean
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string
        class RuleItems; //type: System::UserextItems::RoleItems::RoleList::RuleItems
        class IntfItems; //type: System::UserextItems::RoleItems::RoleList::IntfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::RoleItems::RoleList::RuleItems> rule_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::RoleItems::RoleList::IntfItems> intf_items;
        
}; // System::UserextItems::RoleItems::RoleList


class System::UserextItems::RoleItems::RoleList::RuleItems : public ydk::Entity
{
    public:
        RuleItems();
        ~RuleItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RoleRuleList; //type: System::UserextItems::RoleItems::RoleList::RuleItems::RoleRuleList

        ydk::YList rolerule_list;
        
}; // System::UserextItems::RoleItems::RoleList::RuleItems


class System::UserextItems::RoleItems::RoleList::RuleItems::RoleRuleList : public ydk::Entity
{
    public:
        RoleRuleList();
        ~RoleRuleList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rulenumber; //type: uint32
        ydk::YLeaf permission; //type: AaaRulePermissionType
        ydk::YLeaf ruleaccess; //type: AaaRuleAccessType
        ydk::YLeaf rulescope; //type: AaaRuleScopeType
        ydk::YLeaf cmdstr; //type: string
        ydk::YLeaf scopeentity; //type: string

}; // System::UserextItems::RoleItems::RoleList::RuleItems::RoleRuleList


class System::UserextItems::RoleItems::RoleList::IntfItems : public ydk::Entity
{
    public:
        IntfItems();
        ~IntfItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RoleIntfList; //type: System::UserextItems::RoleItems::RoleList::IntfItems::RoleIntfList

        ydk::YList roleintf_list;
        
}; // System::UserextItems::RoleItems::RoleList::IntfItems


class System::UserextItems::RoleItems::RoleList::IntfItems::RoleIntfList : public ydk::Entity
{
    public:
        RoleIntfList();
        ~RoleIntfList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf intfname; //type: string
        ydk::YLeaf allowinst; //type: string

}; // System::UserextItems::RoleItems::RoleList::IntfItems::RoleIntfList


class System::UserextItems::FactoryroleItems : public ydk::Entity
{
    public:
        FactoryroleItems();
        ~FactoryroleItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class FactoryRoleList; //type: System::UserextItems::FactoryroleItems::FactoryRoleList

        ydk::YList factoryrole_list;
        
}; // System::UserextItems::FactoryroleItems


class System::UserextItems::FactoryroleItems::FactoryRoleList : public ydk::Entity
{
    public:
        FactoryRoleList();
        ~FactoryRoleList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf priv; //type: string
        ydk::YLeaf resettofactory; //type: AaaBoolean
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string

}; // System::UserextItems::FactoryroleItems::FactoryRoleList


class System::UserextItems::DomainItems : public ydk::Entity
{
    public:
        DomainItems();
        ~DomainItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class DomainList; //type: System::UserextItems::DomainItems::DomainList

        ydk::YList domain_list;
        
}; // System::UserextItems::DomainItems


class System::UserextItems::DomainItems::DomainList : public ydk::Entity
{
    public:
        DomainList();
        ~DomainList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string

}; // System::UserextItems::DomainItems::DomainList


class System::UserextItems::PwdprofileItems : public ydk::Entity
{
    public:
        PwdprofileItems();
        ~PwdprofileItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf expirationwarntime; //type: uint8
        ydk::YLeaf historycount; //type: uint8
        ydk::YLeaf nochangeinterval; //type: uint16
        ydk::YLeaf changeinterval; //type: uint16
        ydk::YLeaf changeduringinterval; //type: AaaPwdPolicy
        ydk::YLeaf changecount; //type: uint8
        ydk::YLeaf name; //type: string
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string

}; // System::UserextItems::PwdprofileItems


class System::UserextItems::PkiextItems : public ydk::Entity
{
    public:
        PkiextItems();
        ~PkiextItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string
        class WebtokendataItems; //type: System::UserextItems::PkiextItems::WebtokendataItems
        class CsyncsharedkeyItems; //type: System::UserextItems::PkiextItems::CsyncsharedkeyItems
        class CsyncpolicyItems; //type: System::UserextItems::PkiextItems::CsyncpolicyItems
        class DbgplgchItems; //type: System::UserextItems::PkiextItems::DbgplgchItems
        class KeyringItems; //type: System::UserextItems::PkiextItems::KeyringItems
        class TpItems; //type: System::UserextItems::PkiextItems::TpItems
        class RtfabricResPkiEpItems; //type: System::UserextItems::PkiextItems::RtfabricResPkiEpItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::PkiextItems::WebtokendataItems> webtokendata_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::PkiextItems::CsyncsharedkeyItems> csyncsharedkey_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::PkiextItems::CsyncpolicyItems> csyncpolicy_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::PkiextItems::DbgplgchItems> dbgplgch_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::PkiextItems::KeyringItems> keyring_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::PkiextItems::TpItems> tp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::PkiextItems::RtfabricResPkiEpItems> rtfabricrespkiep_items;
        
}; // System::UserextItems::PkiextItems


class System::UserextItems::PkiextItems::WebtokendataItems : public ydk::Entity
{
    public:
        WebtokendataItems();
        ~WebtokendataItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf key; //type: string
        ydk::YLeaf initializationvector; //type: string
        ydk::YLeaf hashsecret; //type: string
        ydk::YLeaf webtokentimeoutseconds; //type: uint16
        ydk::YLeaf maximumvalidityperiod; //type: uint16
        ydk::YLeaf uiidletimeoutseconds; //type: uint16
        ydk::YLeaf sessionrecordflags; //type: string
        ydk::YLeaf sitefingerprint; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string

}; // System::UserextItems::PkiextItems::WebtokendataItems


class System::UserextItems::PkiextItems::CsyncsharedkeyItems : public ydk::Entity
{
    public:
        CsyncsharedkeyItems();
        ~CsyncsharedkeyItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf key; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string

}; // System::UserextItems::PkiextItems::CsyncsharedkeyItems


class System::UserextItems::PkiextItems::CsyncpolicyItems : public ydk::Entity
{
    public:
        CsyncpolicyItems();
        ~CsyncpolicyItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf state; //type: PkiCsyncActivationStateType
        ydk::YLeaf interval; //type: uint16
        ydk::YLeaf name; //type: string
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string
        class CsyncelemItems; //type: System::UserextItems::PkiextItems::CsyncpolicyItems::CsyncelemItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::PkiextItems::CsyncpolicyItems::CsyncelemItems> csyncelem_items;
        
}; // System::UserextItems::PkiextItems::CsyncpolicyItems


class System::UserextItems::PkiextItems::CsyncpolicyItems::CsyncelemItems : public ydk::Entity
{
    public:
        CsyncelemItems();
        ~CsyncelemItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class CsyncElementList; //type: System::UserextItems::PkiextItems::CsyncpolicyItems::CsyncelemItems::CsyncElementList

        ydk::YList csyncelement_list;
        
}; // System::UserextItems::PkiextItems::CsyncpolicyItems::CsyncelemItems


class System::UserextItems::PkiextItems::CsyncpolicyItems::CsyncelemItems::CsyncElementList : public ydk::Entity
{
    public:
        CsyncElementList();
        ~CsyncElementList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf pattern; //type: string
        ydk::YLeaf type; //type: PkiCsyncElementType
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string

}; // System::UserextItems::PkiextItems::CsyncpolicyItems::CsyncelemItems::CsyncElementList


class System::UserextItems::PkiextItems::DbgplgchItems : public ydk::Entity
{
    public:
        DbgplgchItems();
        ~DbgplgchItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string

}; // System::UserextItems::PkiextItems::DbgplgchItems


class System::UserextItems::PkiextItems::KeyringItems : public ydk::Entity
{
    public:
        KeyringItems();
        ~KeyringItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class KeyRingList; //type: System::UserextItems::PkiextItems::KeyringItems::KeyRingList

        ydk::YList keyring_list;
        
}; // System::UserextItems::PkiextItems::KeyringItems


class System::UserextItems::PkiextItems::KeyringItems::KeyRingList : public ydk::Entity
{
    public:
        KeyRingList();
        ~KeyRingList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf adminstate; //type: PkiKeyringState
        ydk::YLeaf regen; //type: boolean
        ydk::YLeaf key; //type: string
        ydk::YLeaf modulus; //type: PkiModulus
        ydk::YLeaf cert; //type: string
        ydk::YLeaf certvaliduntil; //type: string
        ydk::YLeaf certificatedecodeinformation; //type: string
        ydk::YLeaf tp; //type: string
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string
        class CertreqItems; //type: System::UserextItems::PkiextItems::KeyringItems::KeyRingList::CertreqItems
        class RtcommKeyRingItems; //type: System::UserextItems::PkiextItems::KeyringItems::KeyRingList::RtcommKeyRingItems
        class RtaaaKeyringRefItems; //type: System::UserextItems::PkiextItems::KeyringItems::KeyRingList::RtaaaKeyringRefItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::PkiextItems::KeyringItems::KeyRingList::CertreqItems> certreq_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::PkiextItems::KeyringItems::KeyRingList::RtcommKeyRingItems> rtcommkeyring_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UserextItems::PkiextItems::KeyringItems::KeyRingList::RtaaaKeyringRefItems> rtaaakeyringref_items;
        
}; // System::UserextItems::PkiextItems::KeyringItems::KeyRingList


class System::UserextItems::PkiextItems::KeyringItems::KeyRingList::CertreqItems : public ydk::Entity
{
    public:
        CertreqItems();
        ~CertreqItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pwd; //type: string
        ydk::YLeaf subjname; //type: string
        ydk::YLeaf email; //type: string
        ydk::YLeaf country; //type: string
        ydk::YLeaf state; //type: string
        ydk::YLeaf locality; //type: string
        ydk::YLeaf orgunitname; //type: string
        ydk::YLeaf orgname; //type: string
        ydk::YLeaf req; //type: string

}; // System::UserextItems::PkiextItems::KeyringItems::KeyRingList::CertreqItems


class System::UserextItems::PkiextItems::KeyringItems::KeyRingList::RtcommKeyRingItems : public ydk::Entity
{
    public:
        RtcommKeyRingItems();
        ~RtcommKeyRingItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RtCommKeyRingList; //type: System::UserextItems::PkiextItems::KeyringItems::KeyRingList::RtcommKeyRingItems::RtCommKeyRingList

        ydk::YList rtcommkeyring_list;
        
}; // System::UserextItems::PkiextItems::KeyringItems::KeyRingList::RtcommKeyRingItems


class System::UserextItems::PkiextItems::KeyringItems::KeyRingList::RtcommKeyRingItems::RtCommKeyRingList : public ydk::Entity
{
    public:
        RtCommKeyRingList();
        ~RtCommKeyRingList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string

}; // System::UserextItems::PkiextItems::KeyringItems::KeyRingList::RtcommKeyRingItems::RtCommKeyRingList


class System::UserextItems::PkiextItems::KeyringItems::KeyRingList::RtaaaKeyringRefItems : public ydk::Entity
{
    public:
        RtaaaKeyringRefItems();
        ~RtaaaKeyringRefItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RtAaaKeyringRefList; //type: System::UserextItems::PkiextItems::KeyringItems::KeyRingList::RtaaaKeyringRefItems::RtAaaKeyringRefList

        ydk::YList rtaaakeyringref_list;
        
}; // System::UserextItems::PkiextItems::KeyringItems::KeyRingList::RtaaaKeyringRefItems


class System::UserextItems::PkiextItems::KeyringItems::KeyRingList::RtaaaKeyringRefItems::RtAaaKeyringRefList : public ydk::Entity
{
    public:
        RtAaaKeyringRefList();
        ~RtAaaKeyringRefList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string

}; // System::UserextItems::PkiextItems::KeyringItems::KeyRingList::RtaaaKeyringRefItems::RtAaaKeyringRefList


class System::UserextItems::PkiextItems::TpItems : public ydk::Entity
{
    public:
        TpItems();
        ~TpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class TPList; //type: System::UserextItems::PkiextItems::TpItems::TPList

        ydk::YList tp_list;
        
}; // System::UserextItems::PkiextItems::TpItems


class System::UserextItems::PkiextItems::TpItems::TPList : public ydk::Entity
{
    public:
        TPList();
        ~TPList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf certchain; //type: string
        ydk::YLeaf fp; //type: string
        ydk::YLeaf numcerts; //type: uint32
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string

}; // System::UserextItems::PkiextItems::TpItems::TPList


class System::UserextItems::PkiextItems::RtfabricResPkiEpItems : public ydk::Entity
{
    public:
        RtfabricResPkiEpItems();
        ~RtfabricResPkiEpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class RtFabricResPkiEpList; //type: System::UserextItems::PkiextItems::RtfabricResPkiEpItems::RtFabricResPkiEpList

        ydk::YList rtfabricrespkiep_list;
        
}; // System::UserextItems::PkiextItems::RtfabricResPkiEpItems


class System::UserextItems::PkiextItems::RtfabricResPkiEpItems::RtFabricResPkiEpList : public ydk::Entity
{
    public:
        RtFabricResPkiEpList();
        ~RtFabricResPkiEpList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf tdn; //type: string

}; // System::UserextItems::PkiextItems::RtfabricResPkiEpItems::RtFabricResPkiEpList


class System::UserextItems::RtfabricResUserEpItems : public ydk::Entity
{
    public:
        RtfabricResUserEpItems();
        ~RtfabricResUserEpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class RtFabricResUserEpList; //type: System::UserextItems::RtfabricResUserEpItems::RtFabricResUserEpList

        ydk::YList rtfabricresuserep_list;
        
}; // System::UserextItems::RtfabricResUserEpItems


class System::UserextItems::RtfabricResUserEpItems::RtFabricResUserEpList : public ydk::Entity
{
    public:
        RtFabricResUserEpList();
        ~RtFabricResUserEpList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf tdn; //type: string

}; // System::UserextItems::RtfabricResUserEpItems::RtFabricResUserEpList


class System::UserextItems::RtaaaUserEpItems : public ydk::Entity
{
    public:
        RtaaaUserEpItems();
        ~RtaaaUserEpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class RtAaaUserEpList; //type: System::UserextItems::RtaaaUserEpItems::RtAaaUserEpList

        ydk::YList rtaaauserep_list;
        
}; // System::UserextItems::RtaaaUserEpItems


class System::UserextItems::RtaaaUserEpItems::RtAaaUserEpList : public ydk::Entity
{
    public:
        RtAaaUserEpList();
        ~RtAaaUserEpList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf tdn; //type: string

}; // System::UserextItems::RtaaaUserEpItems::RtAaaUserEpList


class System::SecurityItems : public ydk::Entity
{
    public:
        SecurityItems();
        ~SecurityItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf commoncriteria; //type: AaaBoolean
        ydk::YLeaf enfipsmode; //type: AaaBoolean
        ydk::YLeaf logginglevel; //type: ArpLoggingLevel
        ydk::YLeaf name; //type: string
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string

}; // System::SecurityItems


class System::MockrootItems : public ydk::Entity
{
    public:
        MockrootItems();
        ~MockrootItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf disable; //type: boolean
        ydk::YLeaf name; //type: string
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string
        class SessionItems; //type: System::MockrootItems::SessionItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::MockrootItems::SessionItems> session_items;
        
}; // System::MockrootItems


class System::MockrootItems::SessionItems : public ydk::Entity
{
    public:
        SessionItems();
        ~SessionItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class MockSessionList; //type: System::MockrootItems::SessionItems::MockSessionList

        ydk::YList mocksession_list;
        
}; // System::MockrootItems::SessionItems


class System::MockrootItems::SessionItems::MockSessionList : public ydk::Entity
{
    public:
        MockSessionList();
        ~MockSessionList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf observable; //type: string
        ydk::YLeaf duration; //type: uint32
        ydk::YLeaf mode; //type: MockMode
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string
        class StatItems; //type: System::MockrootItems::SessionItems::MockSessionList::StatItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::MockrootItems::SessionItems::MockSessionList::StatItems> stat_items;
        
}; // System::MockrootItems::SessionItems::MockSessionList


class System::MockrootItems::SessionItems::MockSessionList::StatItems : public ydk::Entity
{
    public:
        StatItems();
        ~StatItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class StatsList; //type: System::MockrootItems::SessionItems::MockSessionList::StatItems::StatsList

        ydk::YList stats_list;
        
}; // System::MockrootItems::SessionItems::MockSessionList::StatItems


class System::MockrootItems::SessionItems::MockSessionList::StatItems::StatsList : public ydk::Entity
{
    public:
        StatsList();
        ~StatsList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf namespace_; //type: string
        ydk::YLeaf statname; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string
        class CounterItems; //type: System::MockrootItems::SessionItems::MockSessionList::StatItems::StatsList::CounterItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::MockrootItems::SessionItems::MockSessionList::StatItems::StatsList::CounterItems> counter_items;
        
}; // System::MockrootItems::SessionItems::MockSessionList::StatItems::StatsList


class System::MockrootItems::SessionItems::MockSessionList::StatItems::StatsList::CounterItems : public ydk::Entity
{
    public:
        CounterItems();
        ~CounterItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CounterList; //type: System::MockrootItems::SessionItems::MockSessionList::StatItems::StatsList::CounterItems::CounterList

        ydk::YList counter_list;
        
}; // System::MockrootItems::SessionItems::MockSessionList::StatItems::StatsList::CounterItems


class System::MockrootItems::SessionItems::MockSessionList::StatItems::StatsList::CounterItems::CounterList : public ydk::Entity
{
    public:
        CounterList();
        ~CounterList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf start; //type: uint64
        ydk::YLeaf end; //type: uint64
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string

}; // System::MockrootItems::SessionItems::MockSessionList::StatItems::StatsList::CounterItems::CounterList


class System::StpItems : public ydk::Entity
{
    public:
        StpItems();
        ~StpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf adminst; //type: NwAdminSt___
        ydk::YLeaf operst; //type: NwEntOperSt
        class InstItems; //type: System::StpItems::InstItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::StpItems::InstItems> inst_items;
        
}; // System::StpItems


class System::StpItems::InstItems : public ydk::Entity
{
    public:
        InstItems();
        ~InstItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf mode; //type: StpMode
        ydk::YLeaf lcissu; //type: StpLcIssu
        ydk::YLeaf pathcostop; //type: StpPathcostOp
        ydk::YLeaf fcoe; //type: StpAdminSt
        ydk::YLeaf bridge; //type: StpAdminSt
        ydk::YLeaf loopguard; //type: StpAdminSt
        ydk::YLeaf l2gstpdomid; //type: uint32
        ydk::YLeaf name; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt___
        ydk::YLeaf ctrl; //type: string
        ydk::YLeaf opererr; //type: string
        class IfItems; //type: System::StpItems::InstItems::IfItems
        class MstentItems; //type: System::StpItems::InstItems::MstentItems
        class VlanItems; //type: System::StpItems::InstItems::VlanItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::StpItems::InstItems::IfItems> if_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::StpItems::InstItems::MstentItems> mstent_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::StpItems::InstItems::VlanItems> vlan_items;
        
}; // System::StpItems::InstItems


class System::StpItems::InstItems::IfItems : public ydk::Entity
{
    public:
        IfItems();
        ~IfItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class IfList; //type: System::StpItems::InstItems::IfItems::IfList

        ydk::YList if_list;
        
}; // System::StpItems::InstItems::IfItems


class System::StpItems::InstItems::IfItems::IfList : public ydk::Entity
{
    public:
        IfList();
        ~IfList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf id; //type: string
        ydk::YLeaf mode; //type: StpIfMode
        ydk::YLeaf ctrl; //type: string
        ydk::YLeaf guard; //type: StpGuard
        ydk::YLeaf bpdufilter; //type: StpBpdufilter
        ydk::YLeaf bpduguard; //type: StpBPDUGuard
        ydk::YLeaf linktype; //type: StpLinkType
        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf cost; //type: uint32
        ydk::YLeaf simulatepvst; //type: StpSimulateIf
        ydk::YLeaf lcissu; //type: StpLcIssu
        ydk::YLeaf prestdcfg; //type: StpAdminSt
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt___
        class VlanItems; //type: System::StpItems::InstItems::IfItems::IfList::VlanItems
        class MstItems; //type: System::StpItems::InstItems::IfItems::IfList::MstItems
        class RtvrfMbrItems; //type: System::StpItems::InstItems::IfItems::IfList::RtvrfMbrItems
        class RtnwPathToIfItems; //type: System::StpItems::InstItems::IfItems::IfList::RtnwPathToIfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::StpItems::InstItems::IfItems::IfList::VlanItems> vlan_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::StpItems::InstItems::IfItems::IfList::MstItems> mst_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::StpItems::InstItems::IfItems::IfList::RtvrfMbrItems> rtvrfmbr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::StpItems::InstItems::IfItems::IfList::RtnwPathToIfItems> rtnwpathtoif_items;
        
}; // System::StpItems::InstItems::IfItems::IfList


class System::StpItems::InstItems::IfItems::IfList::VlanItems : public ydk::Entity
{
    public:
        VlanItems();
        ~VlanItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class VlanCfgList; //type: System::StpItems::InstItems::IfItems::IfList::VlanItems::VlanCfgList

        ydk::YList vlancfg_list;
        
}; // System::StpItems::InstItems::IfItems::IfList::VlanItems


class System::StpItems::InstItems::IfItems::IfList::VlanItems::VlanCfgList : public ydk::Entity
{
    public:
        VlanCfgList();
        ~VlanCfgList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vlanid; //type: uint16
        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf cost; //type: uint32

}; // System::StpItems::InstItems::IfItems::IfList::VlanItems::VlanCfgList


class System::StpItems::InstItems::IfItems::IfList::MstItems : public ydk::Entity
{
    public:
        MstItems();
        ~MstItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MstCfgList; //type: System::StpItems::InstItems::IfItems::IfList::MstItems::MstCfgList

        ydk::YList mstcfg_list;
        
}; // System::StpItems::InstItems::IfItems::IfList::MstItems


class System::StpItems::InstItems::IfItems::IfList::MstItems::MstCfgList : public ydk::Entity
{
    public:
        MstCfgList();
        ~MstCfgList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mstid; //type: uint16
        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf cost; //type: uint32

}; // System::StpItems::InstItems::IfItems::IfList::MstItems::MstCfgList


class System::StpItems::InstItems::IfItems::IfList::RtvrfMbrItems : public ydk::Entity
{
    public:
        RtvrfMbrItems();
        ~RtvrfMbrItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string

}; // System::StpItems::InstItems::IfItems::IfList::RtvrfMbrItems


class System::StpItems::InstItems::IfItems::IfList::RtnwPathToIfItems : public ydk::Entity
{
    public:
        RtnwPathToIfItems();
        ~RtnwPathToIfItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RtNwPathToIfList; //type: System::StpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList

        ydk::YList rtnwpathtoif_list;
        
}; // System::StpItems::InstItems::IfItems::IfList::RtnwPathToIfItems


class System::StpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList : public ydk::Entity
{
    public:
        RtNwPathToIfList();
        ~RtNwPathToIfList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string

}; // System::StpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList


class System::StpItems::InstItems::MstentItems : public ydk::Entity
{
    public:
        MstentItems();
        ~MstentItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf maxhops; //type: uint8
        ydk::YLeaf simulate; //type: StpSimulate
        ydk::YLeaf opererr; //type: string
        ydk::YLeaf regname; //type: string
        ydk::YLeaf rev; //type: uint16
        ydk::YLeaf adminst; //type: NwAdminSt___
        ydk::YLeaf fwdtime; //type: uint8
        ydk::YLeaf hellotime; //type: uint8
        ydk::YLeaf maxage; //type: uint8
        class MstItems; //type: System::StpItems::InstItems::MstentItems::MstItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::StpItems::InstItems::MstentItems::MstItems> mst_items;
        
}; // System::StpItems::InstItems::MstentItems


class System::StpItems::InstItems::MstentItems::MstItems : public ydk::Entity
{
    public:
        MstItems();
        ~MstItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class MstDomList; //type: System::StpItems::InstItems::MstentItems::MstItems::MstDomList

        ydk::YList mstdom_list;
        
}; // System::StpItems::InstItems::MstentItems::MstItems


class System::StpItems::InstItems::MstentItems::MstItems::MstDomList : public ydk::Entity
{
    public:
        MstDomList();
        ~MstDomList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf id; //type: uint16
        ydk::YLeaf cfgst; //type: StpAdminSt
        ydk::YLeaf root; //type: StpRoot
        ydk::YLeaf diameter; //type: uint8
        ydk::YLeaf priority; //type: uint16
        ydk::YLeaf vlanrange; //type: string
        ydk::YLeaf roottype; //type: StpRootType
        ydk::YLeaf rootmode; //type: StpRootMode
        ydk::YLeaf bridgepriority; //type: uint16
        ydk::YLeaf bridgeaddress; //type: string
        ydk::YLeaf rootpriority; //type: uint16
        ydk::YLeaf rootaddress; //type: string
        ydk::YLeaf rootportpriority; //type: uint16
        ydk::YLeaf rootportnumber; //type: uint16
        ydk::YLeaf rootport; //type: string
        ydk::YLeaf rootpathcost; //type: uint32
        class VlanItems; //type: System::StpItems::InstItems::MstentItems::MstItems::MstDomList::VlanItems
        class IfItems; //type: System::StpItems::InstItems::MstentItems::MstItems::MstDomList::IfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::StpItems::InstItems::MstentItems::MstItems::MstDomList::VlanItems> vlan_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::StpItems::InstItems::MstentItems::MstItems::MstDomList::IfItems> if_items;
        
}; // System::StpItems::InstItems::MstentItems::MstItems::MstDomList


class System::StpItems::InstItems::MstentItems::MstItems::MstDomList::VlanItems : public ydk::Entity
{
    public:
        VlanItems();
        ~VlanItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class VlanRangeList; //type: System::StpItems::InstItems::MstentItems::MstItems::MstDomList::VlanItems::VlanRangeList

        ydk::YList vlanrange_list;
        
}; // System::StpItems::InstItems::MstentItems::MstItems::MstDomList::VlanItems


class System::StpItems::InstItems::MstentItems::MstItems::MstDomList::VlanItems::VlanRangeList : public ydk::Entity
{
    public:
        VlanRangeList();
        ~VlanRangeList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start; //type: uint16
        ydk::YLeaf end; //type: uint16

}; // System::StpItems::InstItems::MstentItems::MstItems::MstDomList::VlanItems::VlanRangeList


class System::StpItems::InstItems::MstentItems::MstItems::MstDomList::IfItems : public ydk::Entity
{
    public:
        IfItems();
        ~IfItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MstIfList; //type: System::StpItems::InstItems::MstentItems::MstItems::MstDomList::IfItems::MstIfList

        ydk::YList mstif_list;
        
}; // System::StpItems::InstItems::MstentItems::MstItems::MstDomList::IfItems


class System::StpItems::InstItems::MstentItems::MstItems::MstDomList::IfItems::MstIfList : public ydk::Entity
{
    public:
        MstIfList();
        ~MstIfList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: string
        ydk::YLeaf designatedrootpriority; //type: uint16
        ydk::YLeaf designatedrootaddress; //type: string
        ydk::YLeaf designatedrootcost; //type: uint32
        ydk::YLeaf designatedbridgepriority; //type: uint16
        ydk::YLeaf designatedbridgeaddress; //type: string
        ydk::YLeaf designatedportpriority; //type: uint16
        ydk::YLeaf designatedportnumber; //type: uint16
        ydk::YLeaf portpriority; //type: uint16
        ydk::YLeaf portnumber; //type: uint16
        ydk::YLeaf portpathcost; //type: uint32
        ydk::YLeaf portrole; //type: StpPortRole
        ydk::YLeaf portstate; //type: StpPortState
        ydk::YLeaf p2p; //type: boolean
        ydk::YLeaf operbpduguard; //type: boolean
        ydk::YLeaf operbpdufilter; //type: boolean
        ydk::YLeaf operportfast; //type: boolean
        ydk::YLeaf operloopguard; //type: boolean
        ydk::YLeaf vpcstate; //type: StpVpcState
        ydk::YLeaf mode; //type: StpModeType
        ydk::YLeaf dispute; //type: boolean
        ydk::YLeaf peer; //type: boolean
        ydk::YLeaf bound; //type: boolean
        ydk::YLeaf inconsistent; //type: boolean
        ydk::YLeaf prestd; //type: boolean

}; // System::StpItems::InstItems::MstentItems::MstItems::MstDomList::IfItems::MstIfList


class System::StpItems::InstItems::VlanItems : public ydk::Entity
{
    public:
        VlanItems();
        ~VlanItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class VlanList; //type: System::StpItems::InstItems::VlanItems::VlanList

        ydk::YList vlan_list;
        
}; // System::StpItems::InstItems::VlanItems


class System::StpItems::InstItems::VlanItems::VlanList : public ydk::Entity
{
    public:
        VlanList();
        ~VlanList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf id; //type: uint16
        ydk::YLeaf priority; //type: StpPriority
        ydk::YLeaf diameter; //type: uint8
        ydk::YLeaf protocol; //type: StpProtocol
        ydk::YLeaf roottype; //type: StpRootType
        ydk::YLeaf rootmode; //type: StpRootMode
        ydk::YLeaf bridgepriority; //type: uint16
        ydk::YLeaf bridgeaddress; //type: string
        ydk::YLeaf rootpriority; //type: uint16
        ydk::YLeaf rootaddress; //type: string
        ydk::YLeaf rootportpriority; //type: uint16
        ydk::YLeaf rootportnumber; //type: uint16
        ydk::YLeaf rootport; //type: string
        ydk::YLeaf rootpathcost; //type: uint32
        ydk::YLeaf adminst; //type: NwAdminSt___
        ydk::YLeaf fwdtime; //type: uint8
        ydk::YLeaf hellotime; //type: uint8
        ydk::YLeaf maxage; //type: uint8
        class IfItems; //type: System::StpItems::InstItems::VlanItems::VlanList::IfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::StpItems::InstItems::VlanItems::VlanList::IfItems> if_items;
        
}; // System::StpItems::InstItems::VlanItems::VlanList


class System::StpItems::InstItems::VlanItems::VlanList::IfItems : public ydk::Entity
{
    public:
        IfItems();
        ~IfItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class VlanIfList; //type: System::StpItems::InstItems::VlanItems::VlanList::IfItems::VlanIfList

        ydk::YList vlanif_list;
        
}; // System::StpItems::InstItems::VlanItems::VlanList::IfItems


class System::StpItems::InstItems::VlanItems::VlanList::IfItems::VlanIfList : public ydk::Entity
{
    public:
        VlanIfList();
        ~VlanIfList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: string
        ydk::YLeaf designatedrootpriority; //type: uint16
        ydk::YLeaf designatedrootaddress; //type: string
        ydk::YLeaf designatedrootcost; //type: uint32
        ydk::YLeaf designatedbridgepriority; //type: uint16
        ydk::YLeaf designatedbridgeaddress; //type: string
        ydk::YLeaf designatedportpriority; //type: uint16
        ydk::YLeaf designatedportnumber; //type: uint16
        ydk::YLeaf portpriority; //type: uint16
        ydk::YLeaf portnumber; //type: uint16
        ydk::YLeaf portpathcost; //type: uint32
        ydk::YLeaf portrole; //type: StpPortRole
        ydk::YLeaf portstate; //type: StpPortState
        ydk::YLeaf p2p; //type: boolean
        ydk::YLeaf operbpduguard; //type: boolean
        ydk::YLeaf operbpdufilter; //type: boolean
        ydk::YLeaf operportfast; //type: boolean
        ydk::YLeaf operloopguard; //type: boolean
        ydk::YLeaf vpcstate; //type: StpVpcState
        ydk::YLeaf mode; //type: StpModeType
        ydk::YLeaf dispute; //type: boolean
        ydk::YLeaf peer; //type: boolean
        ydk::YLeaf bound; //type: boolean
        ydk::YLeaf inconsistent; //type: boolean
        ydk::YLeaf prestd; //type: boolean

}; // System::StpItems::InstItems::VlanItems::VlanList::IfItems::VlanIfList


class System::BdTableItems : public ydk::Entity
{
    public:
        BdTableItems();
        ~BdTableItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class VlanItems; //type: System::BdTableItems::VlanItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdTableItems::VlanItems> vlan_items;
        
}; // System::BdTableItems


class System::BdTableItems::VlanItems : public ydk::Entity
{
    public:
        VlanItems();
        ~VlanItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class BdEntryList; //type: System::BdTableItems::VlanItems::BdEntryList

        ydk::YList bdentry_list;
        
}; // System::BdTableItems::VlanItems


class System::BdTableItems::VlanItems::BdEntryList : public ydk::Entity
{
    public:
        BdEntryList();
        ~BdEntryList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf vlan; //type: string
        ydk::YLeaf bd; //type: uint32
        ydk::YLeaf vnid; //type: string
        ydk::YLeaf replicationmode; //type: AggregateReplicationModeType
        ydk::YLeaf ingressrepprotocol; //type: AggregateIngressRepProtocolType
        ydk::YLeaf gipo; //type: string
        ydk::YLeaf suppressarp; //type: AggregateBooleanFlag
        ydk::YLeaf resourcestatus; //type: AggregateResourceStatus
        ydk::YLeaf isl3; //type: AggregateBooleanFlag
        ydk::YLeaf description; //type: string
        class FloodListItems; //type: System::BdTableItems::VlanItems::BdEntryList::FloodListItems
        class AfItems; //type: System::BdTableItems::VlanItems::BdEntryList::AfItems
        class RtaggregateVlanMemberAttItems; //type: System::BdTableItems::VlanItems::BdEntryList::RtaggregateVlanMemberAttItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdTableItems::VlanItems::BdEntryList::FloodListItems> floodlist_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdTableItems::VlanItems::BdEntryList::AfItems> af_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdTableItems::VlanItems::BdEntryList::RtaggregateVlanMemberAttItems> rtaggregatevlanmemberatt_items;
        
}; // System::BdTableItems::VlanItems::BdEntryList


class System::BdTableItems::VlanItems::BdEntryList::FloodListItems : public ydk::Entity
{
    public:
        FloodListItems();
        ~FloodListItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LocalFloodListItems; //type: System::BdTableItems::VlanItems::BdEntryList::FloodListItems::LocalFloodListItems
        class RemoteFloodListItems; //type: System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdTableItems::VlanItems::BdEntryList::FloodListItems::LocalFloodListItems> localfloodlist_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems> remotefloodlist_items;
        
}; // System::BdTableItems::VlanItems::BdEntryList::FloodListItems


class System::BdTableItems::VlanItems::BdEntryList::FloodListItems::LocalFloodListItems : public ydk::Entity
{
    public:
        LocalFloodListItems();
        ~LocalFloodListItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IntfItems; //type: System::BdTableItems::VlanItems::BdEntryList::FloodListItems::LocalFloodListItems::IntfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdTableItems::VlanItems::BdEntryList::FloodListItems::LocalFloodListItems::IntfItems> intf_items;
        
}; // System::BdTableItems::VlanItems::BdEntryList::FloodListItems::LocalFloodListItems


class System::BdTableItems::VlanItems::BdEntryList::FloodListItems::LocalFloodListItems::IntfItems : public ydk::Entity
{
    public:
        IntfItems();
        ~IntfItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LocalFloodListEntryList; //type: System::BdTableItems::VlanItems::BdEntryList::FloodListItems::LocalFloodListItems::IntfItems::LocalFloodListEntryList

        ydk::YList localfloodlistentry_list;
        
}; // System::BdTableItems::VlanItems::BdEntryList::FloodListItems::LocalFloodListItems::IntfItems


class System::BdTableItems::VlanItems::BdEntryList::FloodListItems::LocalFloodListItems::IntfItems::LocalFloodListEntryList : public ydk::Entity
{
    public:
        LocalFloodListEntryList();
        ~LocalFloodListEntryList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf intf; //type: string

}; // System::BdTableItems::VlanItems::BdEntryList::FloodListItems::LocalFloodListItems::IntfItems::LocalFloodListEntryList


class System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems : public ydk::Entity
{
    public:
        RemoteFloodListItems();
        ~RemoteFloodListItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class VtepItems; //type: System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::VtepItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::VtepItems> vtep_items;
        
}; // System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems


class System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::VtepItems : public ydk::Entity
{
    public:
        VtepItems();
        ~VtepItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RemoteFloodListEntryList; //type: System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::VtepItems::RemoteFloodListEntryList

        ydk::YList remotefloodlistentry_list;
        
}; // System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::VtepItems


}
}

#endif /* _CISCO_NX_OS_DEVICE_23_ */

