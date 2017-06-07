#ifndef _CISCO_IOS_XE_NATIVE_121_
#define _CISCO_IOS_XE_NATIVE_121_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_102.hpp"
#include "Cisco_IOS_XE_native_119.hpp"
#include "Cisco_IOS_XE_native_120.hpp"
#include "Cisco_IOS_XE_native_84.hpp"

namespace ydk {
namespace Cisco_IOS_XE_native {


class Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Rip::MapCacheContainer : public Entity
{
    public:
        MapCacheContainer();
        ~MapCacheContainer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf route_map; //type: string

}; // Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Rip::MapCacheContainer


class Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Static_ : public Entity
{
    public:
        Static_();
        ~Static_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class MapCacheContainer; //type: Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Static_::MapCacheContainer

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Static_::MapCacheContainer> map_cache_container; // presence node
        
}; // Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Static_


class Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Static_::MapCacheContainer : public Entity
{
    public:
        MapCacheContainer();
        ~MapCacheContainer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf route_map; //type: string

}; // Native::Router::Lisp::EidTable::InstanceList::Ipv6::RouteImport::MapCache::Static_::MapCacheContainer


class Native::Router::Lisp::EidTable::InstanceList::Ipv6::SiteRegistration : public Entity
{
    public:
        SiteRegistration();
        ~SiteRegistration();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf limit; //type: uint32
        YLeaf warning_threshold; //type: uint8

}; // Native::Router::Lisp::EidTable::InstanceList::Ipv6::SiteRegistration


class Native::Router::Lisp::EidTable::InstanceList::Ipv6::SolicitMapRequest : public Entity
{
    public:
        SolicitMapRequest();
        ~SolicitMapRequest();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ignore; //type: empty
        YLeaf max_per_entry; //type: uint8
        YLeaf suppression_time; //type: uint16

}; // Native::Router::Lisp::EidTable::InstanceList::Ipv6::SolicitMapRequest


class Native::Router::Lisp::EidTable::InstanceList::Ipv6::UsePetr : public Entity
{
    public:
        UsePetr();
        ~UsePetr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf locator_address; //type: string
        YLeaf priority; //type: uint8
        YLeaf weight; //type: uint8

}; // Native::Router::Lisp::EidTable::InstanceList::Ipv6::UsePetr


class Native::Router::Lisp::EidTable::InstanceList::LocReachAlgorithm : public Entity
{
    public:
        LocReachAlgorithm();
        ~LocReachAlgorithm();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf rloc_probing; //type: empty
        class LsbReports; //type: Native::Router::Lisp::EidTable::InstanceList::LocReachAlgorithm::LsbReports

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::LocReachAlgorithm::LsbReports> lsb_reports;
        
}; // Native::Router::Lisp::EidTable::InstanceList::LocReachAlgorithm


class Native::Router::Lisp::EidTable::InstanceList::LocReachAlgorithm::LsbReports : public Entity
{
    public:
        LsbReports();
        ~LsbReports();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf do_not_transmit; //type: empty
        YLeaf ignore; //type: empty

}; // Native::Router::Lisp::EidTable::InstanceList::LocReachAlgorithm::LsbReports


class Native::Router::Lisp::EidTable::InstanceList::LocatorDown : public Entity
{
    public:
        LocatorDown();
        ~LocatorDown();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string
        YLeaf ipv4_interface; //type: string
        YLeaf ipv6_interface; //type: string

}; // Native::Router::Lisp::EidTable::InstanceList::LocatorDown


class Native::Router::Lisp::EidTable::InstanceList::LocatorTable : public Entity
{
    public:
        LocatorTable();
        ~LocatorTable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vrf_name; //type: string
        YLeaf default_; //type: empty
        YLeaf vrf; //type: string

}; // Native::Router::Lisp::EidTable::InstanceList::LocatorTable


class Native::Router::Lisp::EidTable::InstanceList::MapRequest : public Entity
{
    public:
        MapRequest();
        ~MapRequest();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf itr_rlocs; //type: string

}; // Native::Router::Lisp::EidTable::InstanceList::MapRequest


class Native::Router::Lisp::EidTable::InstanceList::MapServer : public Entity
{
    public:
        MapServer();
        ~MapServer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Rloc; //type: Native::Router::Lisp::EidTable::InstanceList::MapServer::Rloc
        class SiteRegistration; //type: Native::Router::Lisp::EidTable::InstanceList::MapServer::SiteRegistration

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::MapServer::Rloc> rloc;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::MapServer::SiteRegistration> site_registration;
        
}; // Native::Router::Lisp::EidTable::InstanceList::MapServer


class Native::Router::Lisp::EidTable::InstanceList::MapServer::Rloc : public Entity
{
    public:
        Rloc();
        ~Rloc();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Members; //type: Native::Router::Lisp::EidTable::InstanceList::MapServer::Rloc::Members

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::MapServer::Rloc::Members> members;
        
}; // Native::Router::Lisp::EidTable::InstanceList::MapServer::Rloc


class Native::Router::Lisp::EidTable::InstanceList::MapServer::Rloc::Members : public Entity
{
    public:
        Members();
        ~Members();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf distribute; //type: empty
        class ModifyDiscovered; //type: Native::Router::Lisp::EidTable::InstanceList::MapServer::Rloc::Members::ModifyDiscovered

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::MapServer::Rloc::Members::ModifyDiscovered> modify_discovered;
        
}; // Native::Router::Lisp::EidTable::InstanceList::MapServer::Rloc::Members


class Native::Router::Lisp::EidTable::InstanceList::MapServer::Rloc::Members::ModifyDiscovered : public Entity
{
    public:
        ModifyDiscovered();
        ~ModifyDiscovered();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf operator_; //type: OperatorEnum
        YLeaf locator_set; //type: string
        class OperatorEnum;

}; // Native::Router::Lisp::EidTable::InstanceList::MapServer::Rloc::Members::ModifyDiscovered


class Native::Router::Lisp::EidTable::InstanceList::MapServer::SiteRegistration : public Entity
{
    public:
        SiteRegistration();
        ~SiteRegistration();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf limit; //type: uint32
        YLeaf warning_threshold; //type: uint8

}; // Native::Router::Lisp::EidTable::InstanceList::MapServer::SiteRegistration


class Native::Router::Lisp::EidTable::InstanceList::OtherXtrProbe : public Entity
{
    public:
        OtherXtrProbe();
        ~OtherXtrProbe();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf period; //type: uint16

}; // Native::Router::Lisp::EidTable::InstanceList::OtherXtrProbe


class Native::Router::Lisp::EidTable::InstanceList::RemoteRlocProbe : public Entity
{
    public:
        RemoteRlocProbe();
        ~RemoteRlocProbe();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf on_membership_change; //type: empty
        YLeaf on_route_change; //type: empty

}; // Native::Router::Lisp::EidTable::InstanceList::RemoteRlocProbe


class Native::Router::Lisp::EidTable::InstanceList::MapCache : public Entity
{
    public:
        MapCache();
        ~MapCache();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf eid_prefix; //type: string
        YLeaf drop; //type: empty
        YLeaf map_request; //type: empty
        YLeaf native_forward; //type: empty
        class EtrInterfaceIp; //type: Native::Router::Lisp::EidTable::InstanceList::MapCache::EtrInterfaceIp

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::EidTable::InstanceList::MapCache::EtrInterfaceIp> etr_interface_ip;
        
}; // Native::Router::Lisp::EidTable::InstanceList::MapCache


class Native::Router::Lisp::EidTable::InstanceList::MapCache::EtrInterfaceIp : public Entity
{
    public:
        EtrInterfaceIp();
        ~EtrInterfaceIp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf etr_interface_ip_address; //type: string
        YLeaf priority; //type: uint8
        YLeaf weight; //type: uint8

}; // Native::Router::Lisp::EidTable::InstanceList::MapCache::EtrInterfaceIp


class Native::Router::Lisp::Security : public Entity
{
    public:
        Security();
        ~Security();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf strong; //type: empty

}; // Native::Router::Lisp::Security


class Native::Router::Lisp::Site : public Entity
{
    public:
        Site();
        ~Site();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sname; //type: string
        YLeaf description; //type: string
        YLeaf site_id; //type: uint32
        class Default_; //type: Native::Router::Lisp::Site::Default_
        class AuthenticationKey; //type: Native::Router::Lisp::Site::AuthenticationKey
        class AllowedLocator; //type: Native::Router::Lisp::Site::AllowedLocator
        class EidPrefix; //type: Native::Router::Lisp::Site::EidPrefix
        class EidRecord; //type: Native::Router::Lisp::Site::EidRecord

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Site::AllowedLocator> allowed_locator;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Site::AuthenticationKey> authentication_key;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Site::Default_> default_;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Site::EidPrefix> eid_prefix;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Site::EidRecord> eid_record;
        
}; // Native::Router::Lisp::Site


class Native::Router::Lisp::Site::Default_ : public Entity
{
    public:
        Default_();
        ~Default_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf description; //type: string
        YLeaf site_id; //type: uint32
        class AuthenticationKey; //type: Native::Router::Lisp::Site::Default_::AuthenticationKey
        class AllowedLocator; //type: Native::Router::Lisp::Site::Default_::AllowedLocator
        class EidPrefix; //type: Native::Router::Lisp::Site::Default_::EidPrefix
        class EidRecord; //type: Native::Router::Lisp::Site::Default_::EidRecord

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Site::Default_::AllowedLocator> allowed_locator;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Site::Default_::AuthenticationKey> authentication_key;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Site::Default_::EidPrefix> eid_prefix;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Site::Default_::EidRecord> eid_record;
        
}; // Native::Router::Lisp::Site::Default_


class Native::Router::Lisp::Site::Default_::AuthenticationKey : public Entity
{
    public:
        AuthenticationKey();
        ~AuthenticationKey();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf unc_pwd; //type: string
        YLeaf key_0; //type: string
        YLeaf key_6; //type: string
        YLeaf key_7; //type: string

}; // Native::Router::Lisp::Site::Default_::AuthenticationKey


class Native::Router::Lisp::Site::Default_::AllowedLocator : public Entity
{
    public:
        AllowedLocator();
        ~AllowedLocator();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ls_ipv4; //type: string
        YLeaf ls_ipv6; //type: string
        class List; //type: Native::Router::Lisp::Site::Default_::AllowedLocator::List

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Site::Default_::AllowedLocator::List> list;
        
}; // Native::Router::Lisp::Site::Default_::AllowedLocator


class Native::Router::Lisp::Site::Default_::AllowedLocator::List : public Entity
{
    public:
        List();
        ~List();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string

}; // Native::Router::Lisp::Site::Default_::AllowedLocator::List


class Native::Router::Lisp::Site::Default_::EidPrefix : public Entity
{
    public:
        EidPrefix();
        ~EidPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf any_mac; //type: empty
        class Prefixes; //type: Native::Router::Lisp::Site::Default_::EidPrefix::Prefixes
        class InstanceId; //type: Native::Router::Lisp::Site::Default_::EidPrefix::InstanceId

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Site::Default_::EidPrefix::InstanceId> > instance_id;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Site::Default_::EidPrefix::Prefixes> > prefixes;
        
}; // Native::Router::Lisp::Site::Default_::EidPrefix


class Native::Router::Lisp::Site::Default_::EidPrefix::Prefixes : public Entity
{
    public:
        Prefixes();
        ~Prefixes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf prefix; //type: string
        YLeaf accept_more_specifics; //type: empty
        YLeaf route_tag; //type: uint32

}; // Native::Router::Lisp::Site::Default_::EidPrefix::Prefixes


class Native::Router::Lisp::Site::Default_::EidPrefix::InstanceId : public Entity
{
    public:
        InstanceId();
        ~InstanceId();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: uint32
        YLeaf any_mac; //type: empty
        class Prefixes; //type: Native::Router::Lisp::Site::Default_::EidPrefix::InstanceId::Prefixes

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Site::Default_::EidPrefix::InstanceId::Prefixes> > prefixes;
        
}; // Native::Router::Lisp::Site::Default_::EidPrefix::InstanceId


class Native::Router::Lisp::Site::Default_::EidPrefix::InstanceId::Prefixes : public Entity
{
    public:
        Prefixes();
        ~Prefixes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf prefix; //type: string
        YLeaf accept_more_specifics; //type: empty
        YLeaf route_tag; //type: uint32

}; // Native::Router::Lisp::Site::Default_::EidPrefix::InstanceId::Prefixes


class Native::Router::Lisp::Site::Default_::EidRecord : public Entity
{
    public:
        EidRecord();
        ~EidRecord();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf any_mac; //type: empty
        class Prefixes; //type: Native::Router::Lisp::Site::Default_::EidRecord::Prefixes
        class InstanceId; //type: Native::Router::Lisp::Site::Default_::EidRecord::InstanceId

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Site::Default_::EidRecord::InstanceId> > instance_id;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Site::Default_::EidRecord::Prefixes> > prefixes;
        
}; // Native::Router::Lisp::Site::Default_::EidRecord


class Native::Router::Lisp::Site::Default_::EidRecord::Prefixes : public Entity
{
    public:
        Prefixes();
        ~Prefixes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf prefix; //type: string
        YLeaf accept_more_specifics; //type: empty
        YLeaf route_tag; //type: uint32

}; // Native::Router::Lisp::Site::Default_::EidRecord::Prefixes


class Native::Router::Lisp::Site::Default_::EidRecord::InstanceId : public Entity
{
    public:
        InstanceId();
        ~InstanceId();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: uint32
        YLeaf any_mac; //type: empty
        class Prefixes; //type: Native::Router::Lisp::Site::Default_::EidRecord::InstanceId::Prefixes

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Site::Default_::EidRecord::InstanceId::Prefixes> > prefixes;
        
}; // Native::Router::Lisp::Site::Default_::EidRecord::InstanceId


class Native::Router::Lisp::Site::Default_::EidRecord::InstanceId::Prefixes : public Entity
{
    public:
        Prefixes();
        ~Prefixes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf prefix; //type: string
        YLeaf accept_more_specifics; //type: empty
        YLeaf route_tag; //type: uint32

}; // Native::Router::Lisp::Site::Default_::EidRecord::InstanceId::Prefixes


class Native::Router::Lisp::Site::AuthenticationKey : public Entity
{
    public:
        AuthenticationKey();
        ~AuthenticationKey();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf unc_pwd; //type: string
        YLeaf key_0; //type: string
        YLeaf key_6; //type: string
        YLeaf key_7; //type: string

}; // Native::Router::Lisp::Site::AuthenticationKey


class Native::Router::Lisp::Site::AllowedLocator : public Entity
{
    public:
        AllowedLocator();
        ~AllowedLocator();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ls_ipv4; //type: string
        YLeaf ls_ipv6; //type: string
        class List; //type: Native::Router::Lisp::Site::AllowedLocator::List

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Site::AllowedLocator::List> list;
        
}; // Native::Router::Lisp::Site::AllowedLocator


class Native::Router::Lisp::Site::AllowedLocator::List : public Entity
{
    public:
        List();
        ~List();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string

}; // Native::Router::Lisp::Site::AllowedLocator::List


class Native::Router::Lisp::Site::EidPrefix : public Entity
{
    public:
        EidPrefix();
        ~EidPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf any_mac; //type: empty
        class Prefixes; //type: Native::Router::Lisp::Site::EidPrefix::Prefixes
        class InstanceId; //type: Native::Router::Lisp::Site::EidPrefix::InstanceId

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Site::EidPrefix::InstanceId> > instance_id;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Site::EidPrefix::Prefixes> > prefixes;
        
}; // Native::Router::Lisp::Site::EidPrefix


class Native::Router::Lisp::Site::EidPrefix::Prefixes : public Entity
{
    public:
        Prefixes();
        ~Prefixes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf prefix; //type: string
        YLeaf accept_more_specifics; //type: empty
        YLeaf route_tag; //type: uint32

}; // Native::Router::Lisp::Site::EidPrefix::Prefixes


class Native::Router::Lisp::Site::EidPrefix::InstanceId : public Entity
{
    public:
        InstanceId();
        ~InstanceId();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: uint32
        YLeaf any_mac; //type: empty
        class Prefixes; //type: Native::Router::Lisp::Site::EidPrefix::InstanceId::Prefixes

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Site::EidPrefix::InstanceId::Prefixes> > prefixes;
        
}; // Native::Router::Lisp::Site::EidPrefix::InstanceId


class Native::Router::Lisp::Site::EidPrefix::InstanceId::Prefixes : public Entity
{
    public:
        Prefixes();
        ~Prefixes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf prefix; //type: string
        YLeaf accept_more_specifics; //type: empty
        YLeaf route_tag; //type: uint32

}; // Native::Router::Lisp::Site::EidPrefix::InstanceId::Prefixes


class Native::Router::Lisp::Site::EidRecord : public Entity
{
    public:
        EidRecord();
        ~EidRecord();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf any_mac; //type: empty
        class Prefixes; //type: Native::Router::Lisp::Site::EidRecord::Prefixes
        class InstanceId; //type: Native::Router::Lisp::Site::EidRecord::InstanceId

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Site::EidRecord::InstanceId> > instance_id;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Site::EidRecord::Prefixes> > prefixes;
        
}; // Native::Router::Lisp::Site::EidRecord


class Native::Router::Lisp::Site::EidRecord::Prefixes : public Entity
{
    public:
        Prefixes();
        ~Prefixes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf prefix; //type: string
        YLeaf accept_more_specifics; //type: empty
        YLeaf route_tag; //type: uint32

}; // Native::Router::Lisp::Site::EidRecord::Prefixes


class Native::Router::Lisp::Site::EidRecord::InstanceId : public Entity
{
    public:
        InstanceId();
        ~InstanceId();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: uint32
        YLeaf any_mac; //type: empty
        class Prefixes; //type: Native::Router::Lisp::Site::EidRecord::InstanceId::Prefixes

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Site::EidRecord::InstanceId::Prefixes> > prefixes;
        
}; // Native::Router::Lisp::Site::EidRecord::InstanceId


class Native::Router::Lisp::Site::EidRecord::InstanceId::Prefixes : public Entity
{
    public:
        Prefixes();
        ~Prefixes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf prefix; //type: string
        YLeaf accept_more_specifics; //type: empty
        YLeaf route_tag; //type: uint32

}; // Native::Router::Lisp::Site::EidRecord::InstanceId::Prefixes


class Native::Router::Lisp::Syslog : public Entity
{
    public:
        Syslog();
        ~Syslog();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf verbose; //type: empty
        class Session; //type: Native::Router::Lisp::Syslog::Session

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Lisp::Syslog::Session> session;
        
}; // Native::Router::Lisp::Syslog


class Native::Router::Lisp::Syslog::Session : public Entity
{
    public:
        Session();
        ~Session();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf changes; //type: empty

}; // Native::Router::Lisp::Syslog::Session


class Native::Router::LispList : public Entity
{
    public:
        LispList();
        ~LispList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lisp; //type: uint16
        YLeaf disable_ttl_propagate; //type: empty
        YLeaf site_id; //type: uint32
        class Default_; //type: Native::Router::LispList::Default_
        class Service; //type: Native::Router::LispList::Service
        class Encapsulation; //type: Native::Router::LispList::Encapsulation
        class LocatorSet; //type: Native::Router::LispList::LocatorSet
        class LocatorScope; //type: Native::Router::LispList::LocatorScope
        class InstanceContainer; //type: Native::Router::LispList::InstanceContainer
        class Alt; //type: Native::Router::LispList::Alt
        class ControlPacket; //type: Native::Router::LispList::ControlPacket
        class Ddt; //type: Native::Router::LispList::Ddt
        class Decapsulation; //type: Native::Router::LispList::Decapsulation
        class Etr; //type: Native::Router::LispList::Etr
        class Ipv4; //type: Native::Router::LispList::Ipv4
        class Ipv6; //type: Native::Router::LispList::Ipv6
        class LocReachAlgorithm; //type: Native::Router::LispList::LocReachAlgorithm
        class LocatorDown; //type: Native::Router::LispList::LocatorDown
        class LocatorTable; //type: Native::Router::LispList::LocatorTable
        class MapRequest; //type: Native::Router::LispList::MapRequest
        class MapServer; //type: Native::Router::LispList::MapServer
        class OtherXtrProbe; //type: Native::Router::LispList::OtherXtrProbe
        class RemoteRlocProbe; //type: Native::Router::LispList::RemoteRlocProbe
        class EidTable; //type: Native::Router::LispList::EidTable
        class Security; //type: Native::Router::LispList::Security
        class Site; //type: Native::Router::LispList::Site
        class Syslog; //type: Native::Router::LispList::Syslog

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Alt> alt;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::ControlPacket> control_packet;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Ddt> ddt; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Decapsulation> decapsulation;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_> default_;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::EidTable> eid_table;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Encapsulation> encapsulation;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Etr> etr;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::InstanceContainer> instance_container;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Ipv4> ipv4;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Ipv6> ipv6;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::LocReachAlgorithm> loc_reach_algorithm;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::LocatorDown> locator_down;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::LocatorScope> > locator_scope;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::LocatorSet> > locator_set;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::LocatorTable> locator_table;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::MapRequest> map_request;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::MapServer> map_server;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::OtherXtrProbe> other_xtr_probe;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::RemoteRlocProbe> remote_rloc_probe;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Security> security; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Service> service; // presence node
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Site> > site;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Syslog> syslog;
        
}; // Native::Router::LispList


class Native::Router::LispList::Default_ : public Entity
{
    public:
        Default_();
        ~Default_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf disable_ttl_propagate; //type: empty
        YLeaf site_id; //type: uint32
        class Service; //type: Native::Router::LispList::Default_::Service
        class Encapsulation; //type: Native::Router::LispList::Default_::Encapsulation
        class LocatorSet; //type: Native::Router::LispList::Default_::LocatorSet
        class LocatorScope; //type: Native::Router::LispList::Default_::LocatorScope
        class InstanceContainer; //type: Native::Router::LispList::Default_::InstanceContainer
        class Alt; //type: Native::Router::LispList::Default_::Alt
        class ControlPacket; //type: Native::Router::LispList::Default_::ControlPacket
        class Ddt; //type: Native::Router::LispList::Default_::Ddt
        class Decapsulation; //type: Native::Router::LispList::Default_::Decapsulation
        class Etr; //type: Native::Router::LispList::Default_::Etr
        class Ipv4; //type: Native::Router::LispList::Default_::Ipv4
        class Ipv6; //type: Native::Router::LispList::Default_::Ipv6
        class LocReachAlgorithm; //type: Native::Router::LispList::Default_::LocReachAlgorithm
        class LocatorDown; //type: Native::Router::LispList::Default_::LocatorDown
        class LocatorTable; //type: Native::Router::LispList::Default_::LocatorTable
        class MapRequest; //type: Native::Router::LispList::Default_::MapRequest
        class MapServer; //type: Native::Router::LispList::Default_::MapServer
        class OtherXtrProbe; //type: Native::Router::LispList::Default_::OtherXtrProbe
        class RemoteRlocProbe; //type: Native::Router::LispList::Default_::RemoteRlocProbe
        class EidTable; //type: Native::Router::LispList::Default_::EidTable
        class Security; //type: Native::Router::LispList::Default_::Security
        class Site; //type: Native::Router::LispList::Default_::Site
        class Syslog; //type: Native::Router::LispList::Default_::Syslog

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Alt> alt;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::ControlPacket> control_packet;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Ddt> ddt; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Decapsulation> decapsulation;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::EidTable> eid_table;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Encapsulation> encapsulation;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Etr> etr;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::InstanceContainer> instance_container;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Ipv4> ipv4;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Ipv6> ipv6;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::LocReachAlgorithm> loc_reach_algorithm;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::LocatorDown> locator_down;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::LocatorScope> > locator_scope;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::LocatorSet> > locator_set;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::LocatorTable> locator_table;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::MapRequest> map_request;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::MapServer> map_server;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::OtherXtrProbe> other_xtr_probe;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::RemoteRlocProbe> remote_rloc_probe;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Security> security; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service> service; // presence node
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Site> > site;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Syslog> syslog;
        
}; // Native::Router::LispList::Default_


class Native::Router::LispList::Default_::Service : public Entity
{
    public:
        Service();
        ~Service();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ipv4; //type: Native::Router::LispList::Default_::Service::Ipv4
        class Ipv6; //type: Native::Router::LispList::Default_::Service::Ipv6
        class Ethernet; //type: Native::Router::LispList::Default_::Service::Ethernet

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ethernet> ethernet; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4> ipv4; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6> ipv6; // presence node
        
}; // Native::Router::LispList::Default_::Service


class Native::Router::LispList::Default_::Service::Ipv4 : public Entity
{
    public:
        Ipv4();
        ~Ipv4();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf encapsulation; //type: EncapsulationEnum
        YLeaf proxy_etr; //type: empty
        YLeaf sgt; //type: empty
        YLeaf map_request_source; //type: string
        class Default__; //type: Native::Router::LispList::Default_::Service::Ipv4::Default__
        class DatabaseMapping; //type: Native::Router::LispList::Default_::Service::Ipv4::DatabaseMapping
        class Itr; //type: Native::Router::LispList::Default_::Service::Ipv4::Itr
        class ItrEnable; //type: Native::Router::LispList::Default_::Service::Ipv4::ItrEnable
        class EtrEnable; //type: Native::Router::LispList::Default_::Service::Ipv4::EtrEnable
        class Etr; //type: Native::Router::LispList::Default_::Service::Ipv4::Etr
        class MapCacheLimit; //type: Native::Router::LispList::Default_::Service::Ipv4::MapCacheLimit
        class MapResolver; //type: Native::Router::LispList::Default_::Service::Ipv4::MapResolver
        class MapServer; //type: Native::Router::LispList::Default_::Service::Ipv4::MapServer
        class SiteRegistration; //type: Native::Router::LispList::Default_::Service::Ipv4::SiteRegistration
        class SolicitMapRequest; //type: Native::Router::LispList::Default_::Service::Ipv4::SolicitMapRequest
        class Distance; //type: Native::Router::LispList::Default_::Service::Ipv4::Distance
        class MapCache; //type: Native::Router::LispList::Default_::Service::Ipv4::MapCache
        class MapCachePersistent; //type: Native::Router::LispList::Default_::Service::Ipv4::MapCachePersistent
        class ProxyItr; //type: Native::Router::LispList::Default_::Service::Ipv4::ProxyItr
        class RouteExport; //type: Native::Router::LispList::Default_::Service::Ipv4::RouteExport
        class UsePetr; //type: Native::Router::LispList::Default_::Service::Ipv4::UsePetr

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::DatabaseMapping> database_mapping;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::Default__> default_;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::Distance> distance;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::Etr> etr;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::EtrEnable> etr_enable;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::Itr> itr;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::ItrEnable> itr_enable;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::MapCache> map_cache;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::MapCacheLimit> map_cache_limit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::MapCachePersistent> map_cache_persistent;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::MapResolver> map_resolver; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::MapServer> map_server; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::ProxyItr> proxy_itr;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::RouteExport> route_export;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::SiteRegistration> site_registration;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::SolicitMapRequest> solicit_map_request;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::UsePetr> > use_petr;
                class EncapsulationEnum;

}; // Native::Router::LispList::Default_::Service::Ipv4


class Native::Router::LispList::Default_::Service::Ipv4::Default__ : public Entity
{
    public:
        Default__();
        ~Default__();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf encapsulation; //type: EncapsulationEnum
        YLeaf proxy_etr; //type: empty
        YLeaf sgt; //type: empty
        YLeaf map_request_source; //type: string
        class DatabaseMapping; //type: Native::Router::LispList::Default_::Service::Ipv4::Default__::DatabaseMapping
        class Itr; //type: Native::Router::LispList::Default_::Service::Ipv4::Default__::Itr
        class ItrEnable; //type: Native::Router::LispList::Default_::Service::Ipv4::Default__::ItrEnable
        class EtrEnable; //type: Native::Router::LispList::Default_::Service::Ipv4::Default__::EtrEnable
        class Etr; //type: Native::Router::LispList::Default_::Service::Ipv4::Default__::Etr
        class MapCacheLimit; //type: Native::Router::LispList::Default_::Service::Ipv4::Default__::MapCacheLimit
        class MapResolver; //type: Native::Router::LispList::Default_::Service::Ipv4::Default__::MapResolver
        class MapServer; //type: Native::Router::LispList::Default_::Service::Ipv4::Default__::MapServer
        class SiteRegistration; //type: Native::Router::LispList::Default_::Service::Ipv4::Default__::SiteRegistration
        class SolicitMapRequest; //type: Native::Router::LispList::Default_::Service::Ipv4::Default__::SolicitMapRequest
        class Distance; //type: Native::Router::LispList::Default_::Service::Ipv4::Default__::Distance
        class MapCache; //type: Native::Router::LispList::Default_::Service::Ipv4::Default__::MapCache
        class MapCachePersistent; //type: Native::Router::LispList::Default_::Service::Ipv4::Default__::MapCachePersistent
        class ProxyItr; //type: Native::Router::LispList::Default_::Service::Ipv4::Default__::ProxyItr
        class RouteExport; //type: Native::Router::LispList::Default_::Service::Ipv4::Default__::RouteExport
        class UsePetr; //type: Native::Router::LispList::Default_::Service::Ipv4::Default__::UsePetr

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::Default__::DatabaseMapping> database_mapping;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::Default__::Distance> distance;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::Default__::Etr> etr;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::Default__::EtrEnable> etr_enable;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::Default__::Itr> itr;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::Default__::ItrEnable> itr_enable;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::Default__::MapCache> map_cache;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::Default__::MapCacheLimit> map_cache_limit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::Default__::MapCachePersistent> map_cache_persistent;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::Default__::MapResolver> map_resolver; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::Default__::MapServer> map_server; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::Default__::ProxyItr> proxy_itr;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::Default__::RouteExport> route_export;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::Default__::SiteRegistration> site_registration;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::Default__::SolicitMapRequest> solicit_map_request;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::Default__::UsePetr> > use_petr;
                class EncapsulationEnum;

}; // Native::Router::LispList::Default_::Service::Ipv4::Default__


class Native::Router::LispList::Default_::Service::Ipv4::Default__::DatabaseMapping : public Entity
{
    public:
        DatabaseMapping();
        ~DatabaseMapping();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Limit; //type: Native::Router::LispList::Default_::Service::Ipv4::Default__::DatabaseMapping::Limit

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::Default__::DatabaseMapping::Limit> limit;
        
}; // Native::Router::LispList::Default_::Service::Ipv4::Default__::DatabaseMapping


class Native::Router::LispList::Default_::Service::Ipv4::Default__::DatabaseMapping::Limit : public Entity
{
    public:
        Limit();
        ~Limit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dynamic; //type: uint32
        YLeaf warning_threshold; //type: uint8

}; // Native::Router::LispList::Default_::Service::Ipv4::Default__::DatabaseMapping::Limit


class Native::Router::LispList::Default_::Service::Ipv4::Default__::Itr : public Entity
{
    public:
        Itr();
        ~Itr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class MapResolver; //type: Native::Router::LispList::Default_::Service::Ipv4::Default__::Itr::MapResolver

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::Default__::Itr::MapResolver> > map_resolver;
        
}; // Native::Router::LispList::Default_::Service::Ipv4::Default__::Itr


class Native::Router::LispList::Default_::Service::Ipv4::Default__::Itr::MapResolver : public Entity
{
    public:
        MapResolver();
        ~MapResolver();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ip_addr; //type: string

}; // Native::Router::LispList::Default_::Service::Ipv4::Default__::Itr::MapResolver


class Native::Router::LispList::Default_::Service::Ipv4::Default__::ItrEnable : public Entity
{
    public:
        ItrEnable();
        ~ItrEnable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf itr; //type: empty

}; // Native::Router::LispList::Default_::Service::Ipv4::Default__::ItrEnable


class Native::Router::LispList::Default_::Service::Ipv4::Default__::EtrEnable : public Entity
{
    public:
        EtrEnable();
        ~EtrEnable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf etr; //type: empty

}; // Native::Router::LispList::Default_::Service::Ipv4::Default__::EtrEnable


class Native::Router::LispList::Default_::Service::Ipv4::Default__::Etr : public Entity
{
    public:
        Etr();
        ~Etr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf map_cache_ttl; //type: uint16
        class MapServer; //type: Native::Router::LispList::Default_::Service::Ipv4::Default__::Etr::MapServer
        class AcceptMapRequestMapping; //type: Native::Router::LispList::Default_::Service::Ipv4::Default__::Etr::AcceptMapRequestMapping

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::Default__::Etr::AcceptMapRequestMapping> accept_map_request_mapping;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::Default__::Etr::MapServer> > map_server;
        
}; // Native::Router::LispList::Default_::Service::Ipv4::Default__::Etr


class Native::Router::LispList::Default_::Service::Ipv4::Default__::Etr::MapServer : public Entity
{
    public:
        MapServer();
        ~MapServer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ip_addr; //type: string
        YLeaf proxy_reply; //type: empty
        class Key; //type: Native::Router::LispList::Default_::Service::Ipv4::Default__::Etr::MapServer::Key

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::Default__::Etr::MapServer::Key> key;
        
}; // Native::Router::LispList::Default_::Service::Ipv4::Default__::Etr::MapServer


class Native::Router::LispList::Default_::Service::Ipv4::Default__::Etr::MapServer::Key : public Entity
{
    public:
        Key();
        ~Key();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class KeyPwd; //type: Native::Router::LispList::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::KeyPwd
        class Key0; //type: Native::Router::LispList::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::Key0
        class Key6; //type: Native::Router::LispList::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::Key6
        class Key7; //type: Native::Router::LispList::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::Key7

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::Key0> key_0;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::Key6> key_6;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::Key7> key_7;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::KeyPwd> key_pwd;
        
}; // Native::Router::LispList::Default_::Service::Ipv4::Default__::Etr::MapServer::Key


class Native::Router::LispList::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::KeyPwd : public Entity
{
    public:
        KeyPwd();
        ~KeyPwd();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf unc_pwd; //type: string
        YLeaf hash_function; //type: HashFunctionEnum
        class HashFunctionEnum;

}; // Native::Router::LispList::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::KeyPwd


class Native::Router::LispList::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::Key0 : public Entity
{
    public:
        Key0();
        ~Key0();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ak_0; //type: string
        YLeaf hash_function; //type: HashFunctionEnum
        class HashFunctionEnum;

}; // Native::Router::LispList::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::Key0


class Native::Router::LispList::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::Key6 : public Entity
{
    public:
        Key6();
        ~Key6();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ak_6; //type: string
        YLeaf hash_function; //type: HashFunctionEnum
        class HashFunctionEnum;

}; // Native::Router::LispList::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::Key6


class Native::Router::LispList::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::Key7 : public Entity
{
    public:
        Key7();
        ~Key7();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ak_7; //type: string
        YLeaf hash_function; //type: HashFunctionEnum
        class HashFunctionEnum;

}; // Native::Router::LispList::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::Key7


class Native::Router::LispList::Default_::Service::Ipv4::Default__::Etr::AcceptMapRequestMapping : public Entity
{
    public:
        AcceptMapRequestMapping();
        ~AcceptMapRequestMapping();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf accept_mappping; //type: empty
        YLeaf verify; //type: empty

}; // Native::Router::LispList::Default_::Service::Ipv4::Default__::Etr::AcceptMapRequestMapping


class Native::Router::LispList::Default_::Service::Ipv4::Default__::MapCacheLimit : public Entity
{
    public:
        MapCacheLimit();
        ~MapCacheLimit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf max_map_cache_entries; //type: uint32
        YLeaf reserve_list; //type: string
        YLeaf warning_threshold; //type: uint8

}; // Native::Router::LispList::Default_::Service::Ipv4::Default__::MapCacheLimit


class Native::Router::LispList::Default_::Service::Ipv4::Default__::MapResolver : public Entity
{
    public:
        MapResolver();
        ~MapResolver();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class MapRequest; //type: Native::Router::LispList::Default_::Service::Ipv4::Default__::MapResolver::MapRequest

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::Default__::MapResolver::MapRequest> map_request;
        
}; // Native::Router::LispList::Default_::Service::Ipv4::Default__::MapResolver


class Native::Router::LispList::Default_::Service::Ipv4::Default__::MapResolver::MapRequest : public Entity
{
    public:
        MapRequest();
        ~MapRequest();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Validate; //type: Native::Router::LispList::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::Validate

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::Validate> validate;
        
}; // Native::Router::LispList::Default_::Service::Ipv4::Default__::MapResolver::MapRequest


class Native::Router::LispList::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::Validate : public Entity
{
    public:
        Validate();
        ~Validate();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Source; //type: Native::Router::LispList::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::Validate::Source

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::Validate::Source> source;
        
}; // Native::Router::LispList::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::Validate


class Native::Router::LispList::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::Validate::Source : public Entity
{
    public:
        Source();
        ~Source();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class List; //type: Native::Router::LispList::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::Validate::Source::List
        class Registered; //type: Native::Router::LispList::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::Validate::Source::Registered

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::Validate::Source::List> list;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::Validate::Source::Registered> registered;
        
}; // Native::Router::LispList::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::Validate::Source


class Native::Router::LispList::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::Validate::Source::List : public Entity
{
    public:
        List();
        ~List();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string

}; // Native::Router::LispList::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::Validate::Source::List


class Native::Router::LispList::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::Validate::Source::Registered : public Entity
{
    public:
        Registered();
        ~Registered();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class List; //type: Native::Router::LispList::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::Validate::Source::Registered::List

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::Validate::Source::Registered::List> list;
        
}; // Native::Router::LispList::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::Validate::Source::Registered


class Native::Router::LispList::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::Validate::Source::Registered::List : public Entity
{
    public:
        List();
        ~List();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string

}; // Native::Router::LispList::Default_::Service::Ipv4::Default__::MapResolver::MapRequest::Validate::Source::Registered::List


class Native::Router::LispList::Default_::Service::Ipv4::Default__::MapServer : public Entity
{
    public:
        MapServer();
        ~MapServer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class MapRegister; //type: Native::Router::LispList::Default_::Service::Ipv4::Default__::MapServer::MapRegister

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::Default__::MapServer::MapRegister> map_register;
        
}; // Native::Router::LispList::Default_::Service::Ipv4::Default__::MapServer


class Native::Router::LispList::Default_::Service::Ipv4::Default__::MapServer::MapRegister : public Entity
{
    public:
        MapRegister();
        ~MapRegister();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Validate; //type: Native::Router::LispList::Default_::Service::Ipv4::Default__::MapServer::MapRegister::Validate

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::Default__::MapServer::MapRegister::Validate> validate;
        
}; // Native::Router::LispList::Default_::Service::Ipv4::Default__::MapServer::MapRegister


class Native::Router::LispList::Default_::Service::Ipv4::Default__::MapServer::MapRegister::Validate : public Entity
{
    public:
        Validate();
        ~Validate();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Source; //type: Native::Router::LispList::Default_::Service::Ipv4::Default__::MapServer::MapRegister::Validate::Source

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::Default__::MapServer::MapRegister::Validate::Source> source;
        
}; // Native::Router::LispList::Default_::Service::Ipv4::Default__::MapServer::MapRegister::Validate


class Native::Router::LispList::Default_::Service::Ipv4::Default__::MapServer::MapRegister::Validate::Source : public Entity
{
    public:
        Source();
        ~Source();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf allowed_locator; //type: empty

}; // Native::Router::LispList::Default_::Service::Ipv4::Default__::MapServer::MapRegister::Validate::Source


class Native::Router::LispList::Default_::Service::Ipv4::Default__::SiteRegistration : public Entity
{
    public:
        SiteRegistration();
        ~SiteRegistration();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf limit; //type: uint32
        YLeaf warning_threshold; //type: uint8

}; // Native::Router::LispList::Default_::Service::Ipv4::Default__::SiteRegistration


class Native::Router::LispList::Default_::Service::Ipv4::Default__::SolicitMapRequest : public Entity
{
    public:
        SolicitMapRequest();
        ~SolicitMapRequest();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ignore; //type: empty
        YLeaf max_per_entry; //type: uint8
        YLeaf suppression_time; //type: uint16

}; // Native::Router::LispList::Default_::Service::Ipv4::Default__::SolicitMapRequest


class Native::Router::LispList::Default_::Service::Ipv4::Default__::Distance : public Entity
{
    public:
        Distance();
        ~Distance();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf alt; //type: uint8
        YLeaf away; //type: uint8
        YLeaf dyn_eid; //type: uint8
        YLeaf site_registrations; //type: uint8

}; // Native::Router::LispList::Default_::Service::Ipv4::Default__::Distance


class Native::Router::LispList::Default_::Service::Ipv4::Default__::MapCache : public Entity
{
    public:
        MapCache();
        ~MapCache();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf site_registration; //type: empty
        class AwayEids; //type: Native::Router::LispList::Default_::Service::Ipv4::Default__::MapCache::AwayEids

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::Default__::MapCache::AwayEids> away_eids;
        
}; // Native::Router::LispList::Default_::Service::Ipv4::Default__::MapCache


class Native::Router::LispList::Default_::Service::Ipv4::Default__::MapCache::AwayEids : public Entity
{
    public:
        AwayEids();
        ~AwayEids();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf send_map_request; //type: empty

}; // Native::Router::LispList::Default_::Service::Ipv4::Default__::MapCache::AwayEids


class Native::Router::LispList::Default_::Service::Ipv4::Default__::MapCachePersistent : public Entity
{
    public:
        MapCachePersistent();
        ~MapCachePersistent();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interval; //type: uint16

}; // Native::Router::LispList::Default_::Service::Ipv4::Default__::MapCachePersistent


class Native::Router::LispList::Default_::Service::Ipv4::Default__::ProxyItr : public Entity
{
    public:
        ProxyItr();
        ~ProxyItr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv4_addr; //type: string
        YLeaf ipv6_addr; //type: string

}; // Native::Router::LispList::Default_::Service::Ipv4::Default__::ProxyItr


class Native::Router::LispList::Default_::Service::Ipv4::Default__::RouteExport : public Entity
{
    public:
        RouteExport();
        ~RouteExport();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf site_registrations; //type: empty
        YLeaf away_eids; //type: empty

}; // Native::Router::LispList::Default_::Service::Ipv4::Default__::RouteExport


class Native::Router::LispList::Default_::Service::Ipv4::Default__::UsePetr : public Entity
{
    public:
        UsePetr();
        ~UsePetr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf locator_address; //type: string
        class Priority; //type: Native::Router::LispList::Default_::Service::Ipv4::Default__::UsePetr::Priority

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::Default__::UsePetr::Priority> priority;
        
}; // Native::Router::LispList::Default_::Service::Ipv4::Default__::UsePetr


class Native::Router::LispList::Default_::Service::Ipv4::Default__::UsePetr::Priority : public Entity
{
    public:
        Priority();
        ~Priority();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf priority_value; //type: uint8
        YLeaf weight; //type: uint8

}; // Native::Router::LispList::Default_::Service::Ipv4::Default__::UsePetr::Priority


class Native::Router::LispList::Default_::Service::Ipv4::DatabaseMapping : public Entity
{
    public:
        DatabaseMapping();
        ~DatabaseMapping();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Limit; //type: Native::Router::LispList::Default_::Service::Ipv4::DatabaseMapping::Limit

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::DatabaseMapping::Limit> limit;
        
}; // Native::Router::LispList::Default_::Service::Ipv4::DatabaseMapping


class Native::Router::LispList::Default_::Service::Ipv4::DatabaseMapping::Limit : public Entity
{
    public:
        Limit();
        ~Limit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dynamic; //type: uint32
        YLeaf warning_threshold; //type: uint8

}; // Native::Router::LispList::Default_::Service::Ipv4::DatabaseMapping::Limit


class Native::Router::LispList::Default_::Service::Ipv4::Itr : public Entity
{
    public:
        Itr();
        ~Itr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class MapResolver; //type: Native::Router::LispList::Default_::Service::Ipv4::Itr::MapResolver

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::Itr::MapResolver> > map_resolver;
        
}; // Native::Router::LispList::Default_::Service::Ipv4::Itr


class Native::Router::LispList::Default_::Service::Ipv4::Itr::MapResolver : public Entity
{
    public:
        MapResolver();
        ~MapResolver();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ip_addr; //type: string

}; // Native::Router::LispList::Default_::Service::Ipv4::Itr::MapResolver


class Native::Router::LispList::Default_::Service::Ipv4::ItrEnable : public Entity
{
    public:
        ItrEnable();
        ~ItrEnable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf itr; //type: empty

}; // Native::Router::LispList::Default_::Service::Ipv4::ItrEnable


class Native::Router::LispList::Default_::Service::Ipv4::EtrEnable : public Entity
{
    public:
        EtrEnable();
        ~EtrEnable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf etr; //type: empty

}; // Native::Router::LispList::Default_::Service::Ipv4::EtrEnable


class Native::Router::LispList::Default_::Service::Ipv4::Etr : public Entity
{
    public:
        Etr();
        ~Etr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf map_cache_ttl; //type: uint16
        class MapServer; //type: Native::Router::LispList::Default_::Service::Ipv4::Etr::MapServer
        class AcceptMapRequestMapping; //type: Native::Router::LispList::Default_::Service::Ipv4::Etr::AcceptMapRequestMapping

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::Etr::AcceptMapRequestMapping> accept_map_request_mapping;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::Etr::MapServer> > map_server;
        
}; // Native::Router::LispList::Default_::Service::Ipv4::Etr


class Native::Router::LispList::Default_::Service::Ipv4::Etr::MapServer : public Entity
{
    public:
        MapServer();
        ~MapServer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ip_addr; //type: string
        YLeaf proxy_reply; //type: empty
        class Key; //type: Native::Router::LispList::Default_::Service::Ipv4::Etr::MapServer::Key

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::Etr::MapServer::Key> key;
        
}; // Native::Router::LispList::Default_::Service::Ipv4::Etr::MapServer


class Native::Router::LispList::Default_::Service::Ipv4::Etr::MapServer::Key : public Entity
{
    public:
        Key();
        ~Key();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class KeyPwd; //type: Native::Router::LispList::Default_::Service::Ipv4::Etr::MapServer::Key::KeyPwd
        class Key0; //type: Native::Router::LispList::Default_::Service::Ipv4::Etr::MapServer::Key::Key0
        class Key6; //type: Native::Router::LispList::Default_::Service::Ipv4::Etr::MapServer::Key::Key6
        class Key7; //type: Native::Router::LispList::Default_::Service::Ipv4::Etr::MapServer::Key::Key7

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::Etr::MapServer::Key::Key0> key_0;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::Etr::MapServer::Key::Key6> key_6;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::Etr::MapServer::Key::Key7> key_7;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::Etr::MapServer::Key::KeyPwd> key_pwd;
        
}; // Native::Router::LispList::Default_::Service::Ipv4::Etr::MapServer::Key


class Native::Router::LispList::Default_::Service::Ipv4::Etr::MapServer::Key::KeyPwd : public Entity
{
    public:
        KeyPwd();
        ~KeyPwd();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf unc_pwd; //type: string
        YLeaf hash_function; //type: HashFunctionEnum
        class HashFunctionEnum;

}; // Native::Router::LispList::Default_::Service::Ipv4::Etr::MapServer::Key::KeyPwd


class Native::Router::LispList::Default_::Service::Ipv4::Etr::MapServer::Key::Key0 : public Entity
{
    public:
        Key0();
        ~Key0();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ak_0; //type: string
        YLeaf hash_function; //type: HashFunctionEnum
        class HashFunctionEnum;

}; // Native::Router::LispList::Default_::Service::Ipv4::Etr::MapServer::Key::Key0


class Native::Router::LispList::Default_::Service::Ipv4::Etr::MapServer::Key::Key6 : public Entity
{
    public:
        Key6();
        ~Key6();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ak_6; //type: string
        YLeaf hash_function; //type: HashFunctionEnum
        class HashFunctionEnum;

}; // Native::Router::LispList::Default_::Service::Ipv4::Etr::MapServer::Key::Key6


class Native::Router::LispList::Default_::Service::Ipv4::Etr::MapServer::Key::Key7 : public Entity
{
    public:
        Key7();
        ~Key7();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ak_7; //type: string
        YLeaf hash_function; //type: HashFunctionEnum
        class HashFunctionEnum;

}; // Native::Router::LispList::Default_::Service::Ipv4::Etr::MapServer::Key::Key7


class Native::Router::LispList::Default_::Service::Ipv4::Etr::AcceptMapRequestMapping : public Entity
{
    public:
        AcceptMapRequestMapping();
        ~AcceptMapRequestMapping();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf accept_mappping; //type: empty
        YLeaf verify; //type: empty

}; // Native::Router::LispList::Default_::Service::Ipv4::Etr::AcceptMapRequestMapping


class Native::Router::LispList::Default_::Service::Ipv4::MapCacheLimit : public Entity
{
    public:
        MapCacheLimit();
        ~MapCacheLimit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf max_map_cache_entries; //type: uint32
        YLeaf reserve_list; //type: string
        YLeaf warning_threshold; //type: uint8

}; // Native::Router::LispList::Default_::Service::Ipv4::MapCacheLimit


class Native::Router::LispList::Default_::Service::Ipv4::MapResolver : public Entity
{
    public:
        MapResolver();
        ~MapResolver();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class MapRequest; //type: Native::Router::LispList::Default_::Service::Ipv4::MapResolver::MapRequest

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::MapResolver::MapRequest> map_request;
        
}; // Native::Router::LispList::Default_::Service::Ipv4::MapResolver


class Native::Router::LispList::Default_::Service::Ipv4::MapResolver::MapRequest : public Entity
{
    public:
        MapRequest();
        ~MapRequest();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Validate; //type: Native::Router::LispList::Default_::Service::Ipv4::MapResolver::MapRequest::Validate

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::MapResolver::MapRequest::Validate> validate;
        
}; // Native::Router::LispList::Default_::Service::Ipv4::MapResolver::MapRequest


class Native::Router::LispList::Default_::Service::Ipv4::MapResolver::MapRequest::Validate : public Entity
{
    public:
        Validate();
        ~Validate();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Source; //type: Native::Router::LispList::Default_::Service::Ipv4::MapResolver::MapRequest::Validate::Source

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::MapResolver::MapRequest::Validate::Source> source;
        
}; // Native::Router::LispList::Default_::Service::Ipv4::MapResolver::MapRequest::Validate


class Native::Router::LispList::Default_::Service::Ipv4::MapResolver::MapRequest::Validate::Source : public Entity
{
    public:
        Source();
        ~Source();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class List; //type: Native::Router::LispList::Default_::Service::Ipv4::MapResolver::MapRequest::Validate::Source::List
        class Registered; //type: Native::Router::LispList::Default_::Service::Ipv4::MapResolver::MapRequest::Validate::Source::Registered

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::MapResolver::MapRequest::Validate::Source::List> list;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::MapResolver::MapRequest::Validate::Source::Registered> registered;
        
}; // Native::Router::LispList::Default_::Service::Ipv4::MapResolver::MapRequest::Validate::Source


class Native::Router::LispList::Default_::Service::Ipv4::MapResolver::MapRequest::Validate::Source::List : public Entity
{
    public:
        List();
        ~List();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string

}; // Native::Router::LispList::Default_::Service::Ipv4::MapResolver::MapRequest::Validate::Source::List


class Native::Router::LispList::Default_::Service::Ipv4::MapResolver::MapRequest::Validate::Source::Registered : public Entity
{
    public:
        Registered();
        ~Registered();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class List; //type: Native::Router::LispList::Default_::Service::Ipv4::MapResolver::MapRequest::Validate::Source::Registered::List

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::MapResolver::MapRequest::Validate::Source::Registered::List> list;
        
}; // Native::Router::LispList::Default_::Service::Ipv4::MapResolver::MapRequest::Validate::Source::Registered


class Native::Router::LispList::Default_::Service::Ipv4::MapResolver::MapRequest::Validate::Source::Registered::List : public Entity
{
    public:
        List();
        ~List();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string

}; // Native::Router::LispList::Default_::Service::Ipv4::MapResolver::MapRequest::Validate::Source::Registered::List


class Native::Router::LispList::Default_::Service::Ipv4::MapServer : public Entity
{
    public:
        MapServer();
        ~MapServer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class MapRegister; //type: Native::Router::LispList::Default_::Service::Ipv4::MapServer::MapRegister

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::MapServer::MapRegister> map_register;
        
}; // Native::Router::LispList::Default_::Service::Ipv4::MapServer


class Native::Router::LispList::Default_::Service::Ipv4::MapServer::MapRegister : public Entity
{
    public:
        MapRegister();
        ~MapRegister();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Validate; //type: Native::Router::LispList::Default_::Service::Ipv4::MapServer::MapRegister::Validate

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::MapServer::MapRegister::Validate> validate;
        
}; // Native::Router::LispList::Default_::Service::Ipv4::MapServer::MapRegister


class Native::Router::LispList::Default_::Service::Ipv4::MapServer::MapRegister::Validate : public Entity
{
    public:
        Validate();
        ~Validate();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Source; //type: Native::Router::LispList::Default_::Service::Ipv4::MapServer::MapRegister::Validate::Source

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::MapServer::MapRegister::Validate::Source> source;
        
}; // Native::Router::LispList::Default_::Service::Ipv4::MapServer::MapRegister::Validate


class Native::Router::LispList::Default_::Service::Ipv4::MapServer::MapRegister::Validate::Source : public Entity
{
    public:
        Source();
        ~Source();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf allowed_locator; //type: empty

}; // Native::Router::LispList::Default_::Service::Ipv4::MapServer::MapRegister::Validate::Source


class Native::Router::LispList::Default_::Service::Ipv4::SiteRegistration : public Entity
{
    public:
        SiteRegistration();
        ~SiteRegistration();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf limit; //type: uint32
        YLeaf warning_threshold; //type: uint8

}; // Native::Router::LispList::Default_::Service::Ipv4::SiteRegistration


class Native::Router::LispList::Default_::Service::Ipv4::SolicitMapRequest : public Entity
{
    public:
        SolicitMapRequest();
        ~SolicitMapRequest();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ignore; //type: empty
        YLeaf max_per_entry; //type: uint8
        YLeaf suppression_time; //type: uint16

}; // Native::Router::LispList::Default_::Service::Ipv4::SolicitMapRequest


class Native::Router::LispList::Default_::Service::Ipv4::Distance : public Entity
{
    public:
        Distance();
        ~Distance();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf alt; //type: uint8
        YLeaf away; //type: uint8
        YLeaf dyn_eid; //type: uint8
        YLeaf site_registrations; //type: uint8

}; // Native::Router::LispList::Default_::Service::Ipv4::Distance


class Native::Router::LispList::Default_::Service::Ipv4::MapCache : public Entity
{
    public:
        MapCache();
        ~MapCache();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf site_registration; //type: empty
        class AwayEids; //type: Native::Router::LispList::Default_::Service::Ipv4::MapCache::AwayEids

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::MapCache::AwayEids> away_eids;
        
}; // Native::Router::LispList::Default_::Service::Ipv4::MapCache


class Native::Router::LispList::Default_::Service::Ipv4::MapCache::AwayEids : public Entity
{
    public:
        AwayEids();
        ~AwayEids();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf send_map_request; //type: empty

}; // Native::Router::LispList::Default_::Service::Ipv4::MapCache::AwayEids


class Native::Router::LispList::Default_::Service::Ipv4::MapCachePersistent : public Entity
{
    public:
        MapCachePersistent();
        ~MapCachePersistent();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interval; //type: uint16

}; // Native::Router::LispList::Default_::Service::Ipv4::MapCachePersistent


class Native::Router::LispList::Default_::Service::Ipv4::ProxyItr : public Entity
{
    public:
        ProxyItr();
        ~ProxyItr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv4_addr; //type: string
        YLeaf ipv6_addr; //type: string

}; // Native::Router::LispList::Default_::Service::Ipv4::ProxyItr


class Native::Router::LispList::Default_::Service::Ipv4::RouteExport : public Entity
{
    public:
        RouteExport();
        ~RouteExport();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf site_registrations; //type: empty
        YLeaf away_eids; //type: empty

}; // Native::Router::LispList::Default_::Service::Ipv4::RouteExport


class Native::Router::LispList::Default_::Service::Ipv4::UsePetr : public Entity
{
    public:
        UsePetr();
        ~UsePetr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf locator_address; //type: string
        class Priority; //type: Native::Router::LispList::Default_::Service::Ipv4::UsePetr::Priority

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv4::UsePetr::Priority> priority;
        
}; // Native::Router::LispList::Default_::Service::Ipv4::UsePetr


class Native::Router::LispList::Default_::Service::Ipv4::UsePetr::Priority : public Entity
{
    public:
        Priority();
        ~Priority();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf priority_value; //type: uint8
        YLeaf weight; //type: uint8

}; // Native::Router::LispList::Default_::Service::Ipv4::UsePetr::Priority


class Native::Router::LispList::Default_::Service::Ipv6 : public Entity
{
    public:
        Ipv6();
        ~Ipv6();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf encapsulation; //type: EncapsulationEnum
        YLeaf proxy_etr; //type: empty
        YLeaf sgt; //type: empty
        YLeaf map_request_source; //type: string
        class Default__; //type: Native::Router::LispList::Default_::Service::Ipv6::Default__
        class DatabaseMapping; //type: Native::Router::LispList::Default_::Service::Ipv6::DatabaseMapping
        class Itr; //type: Native::Router::LispList::Default_::Service::Ipv6::Itr
        class ItrEnable; //type: Native::Router::LispList::Default_::Service::Ipv6::ItrEnable
        class EtrEnable; //type: Native::Router::LispList::Default_::Service::Ipv6::EtrEnable
        class Etr; //type: Native::Router::LispList::Default_::Service::Ipv6::Etr
        class MapCacheLimit; //type: Native::Router::LispList::Default_::Service::Ipv6::MapCacheLimit
        class MapResolver; //type: Native::Router::LispList::Default_::Service::Ipv6::MapResolver
        class MapServer; //type: Native::Router::LispList::Default_::Service::Ipv6::MapServer
        class SiteRegistration; //type: Native::Router::LispList::Default_::Service::Ipv6::SiteRegistration
        class SolicitMapRequest; //type: Native::Router::LispList::Default_::Service::Ipv6::SolicitMapRequest
        class Distance; //type: Native::Router::LispList::Default_::Service::Ipv6::Distance
        class MapCache; //type: Native::Router::LispList::Default_::Service::Ipv6::MapCache
        class MapCachePersistent; //type: Native::Router::LispList::Default_::Service::Ipv6::MapCachePersistent
        class ProxyItr; //type: Native::Router::LispList::Default_::Service::Ipv6::ProxyItr
        class RouteExport; //type: Native::Router::LispList::Default_::Service::Ipv6::RouteExport
        class UsePetr; //type: Native::Router::LispList::Default_::Service::Ipv6::UsePetr

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::DatabaseMapping> database_mapping;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::Default__> default_;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::Distance> distance;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::Etr> etr;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::EtrEnable> etr_enable;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::Itr> itr;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::ItrEnable> itr_enable;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::MapCache> map_cache;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::MapCacheLimit> map_cache_limit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::MapCachePersistent> map_cache_persistent;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::MapResolver> map_resolver; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::MapServer> map_server; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::ProxyItr> proxy_itr;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::RouteExport> route_export;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::SiteRegistration> site_registration;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::SolicitMapRequest> solicit_map_request;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::UsePetr> > use_petr;
                class EncapsulationEnum;

}; // Native::Router::LispList::Default_::Service::Ipv6


class Native::Router::LispList::Default_::Service::Ipv6::Default__ : public Entity
{
    public:
        Default__();
        ~Default__();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf encapsulation; //type: EncapsulationEnum
        YLeaf proxy_etr; //type: empty
        YLeaf sgt; //type: empty
        YLeaf map_request_source; //type: string
        class DatabaseMapping; //type: Native::Router::LispList::Default_::Service::Ipv6::Default__::DatabaseMapping
        class Itr; //type: Native::Router::LispList::Default_::Service::Ipv6::Default__::Itr
        class ItrEnable; //type: Native::Router::LispList::Default_::Service::Ipv6::Default__::ItrEnable
        class EtrEnable; //type: Native::Router::LispList::Default_::Service::Ipv6::Default__::EtrEnable
        class Etr; //type: Native::Router::LispList::Default_::Service::Ipv6::Default__::Etr
        class MapCacheLimit; //type: Native::Router::LispList::Default_::Service::Ipv6::Default__::MapCacheLimit
        class MapResolver; //type: Native::Router::LispList::Default_::Service::Ipv6::Default__::MapResolver
        class MapServer; //type: Native::Router::LispList::Default_::Service::Ipv6::Default__::MapServer
        class SiteRegistration; //type: Native::Router::LispList::Default_::Service::Ipv6::Default__::SiteRegistration
        class SolicitMapRequest; //type: Native::Router::LispList::Default_::Service::Ipv6::Default__::SolicitMapRequest
        class Distance; //type: Native::Router::LispList::Default_::Service::Ipv6::Default__::Distance
        class MapCache; //type: Native::Router::LispList::Default_::Service::Ipv6::Default__::MapCache
        class MapCachePersistent; //type: Native::Router::LispList::Default_::Service::Ipv6::Default__::MapCachePersistent
        class ProxyItr; //type: Native::Router::LispList::Default_::Service::Ipv6::Default__::ProxyItr
        class RouteExport; //type: Native::Router::LispList::Default_::Service::Ipv6::Default__::RouteExport
        class UsePetr; //type: Native::Router::LispList::Default_::Service::Ipv6::Default__::UsePetr

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::Default__::DatabaseMapping> database_mapping;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::Default__::Distance> distance;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::Default__::Etr> etr;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::Default__::EtrEnable> etr_enable;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::Default__::Itr> itr;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::Default__::ItrEnable> itr_enable;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::Default__::MapCache> map_cache;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::Default__::MapCacheLimit> map_cache_limit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::Default__::MapCachePersistent> map_cache_persistent;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::Default__::MapResolver> map_resolver; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::Default__::MapServer> map_server; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::Default__::ProxyItr> proxy_itr;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::Default__::RouteExport> route_export;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::Default__::SiteRegistration> site_registration;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::Default__::SolicitMapRequest> solicit_map_request;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::Default__::UsePetr> > use_petr;
                class EncapsulationEnum;

}; // Native::Router::LispList::Default_::Service::Ipv6::Default__


class Native::Router::LispList::Default_::Service::Ipv6::Default__::DatabaseMapping : public Entity
{
    public:
        DatabaseMapping();
        ~DatabaseMapping();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Limit; //type: Native::Router::LispList::Default_::Service::Ipv6::Default__::DatabaseMapping::Limit

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::Default__::DatabaseMapping::Limit> limit;
        
}; // Native::Router::LispList::Default_::Service::Ipv6::Default__::DatabaseMapping


class Native::Router::LispList::Default_::Service::Ipv6::Default__::DatabaseMapping::Limit : public Entity
{
    public:
        Limit();
        ~Limit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dynamic; //type: uint32
        YLeaf warning_threshold; //type: uint8

}; // Native::Router::LispList::Default_::Service::Ipv6::Default__::DatabaseMapping::Limit


class Native::Router::LispList::Default_::Service::Ipv6::Default__::Itr : public Entity
{
    public:
        Itr();
        ~Itr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class MapResolver; //type: Native::Router::LispList::Default_::Service::Ipv6::Default__::Itr::MapResolver

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::Default__::Itr::MapResolver> > map_resolver;
        
}; // Native::Router::LispList::Default_::Service::Ipv6::Default__::Itr


class Native::Router::LispList::Default_::Service::Ipv6::Default__::Itr::MapResolver : public Entity
{
    public:
        MapResolver();
        ~MapResolver();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ip_addr; //type: string

}; // Native::Router::LispList::Default_::Service::Ipv6::Default__::Itr::MapResolver


class Native::Router::LispList::Default_::Service::Ipv6::Default__::ItrEnable : public Entity
{
    public:
        ItrEnable();
        ~ItrEnable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf itr; //type: empty

}; // Native::Router::LispList::Default_::Service::Ipv6::Default__::ItrEnable


class Native::Router::LispList::Default_::Service::Ipv6::Default__::EtrEnable : public Entity
{
    public:
        EtrEnable();
        ~EtrEnable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf etr; //type: empty

}; // Native::Router::LispList::Default_::Service::Ipv6::Default__::EtrEnable


class Native::Router::LispList::Default_::Service::Ipv6::Default__::Etr : public Entity
{
    public:
        Etr();
        ~Etr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf map_cache_ttl; //type: uint16
        class MapServer; //type: Native::Router::LispList::Default_::Service::Ipv6::Default__::Etr::MapServer
        class AcceptMapRequestMapping; //type: Native::Router::LispList::Default_::Service::Ipv6::Default__::Etr::AcceptMapRequestMapping

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::Default__::Etr::AcceptMapRequestMapping> accept_map_request_mapping;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::Default__::Etr::MapServer> > map_server;
        
}; // Native::Router::LispList::Default_::Service::Ipv6::Default__::Etr


class Native::Router::LispList::Default_::Service::Ipv6::Default__::Etr::MapServer : public Entity
{
    public:
        MapServer();
        ~MapServer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ip_addr; //type: string
        YLeaf proxy_reply; //type: empty
        class Key; //type: Native::Router::LispList::Default_::Service::Ipv6::Default__::Etr::MapServer::Key

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::Default__::Etr::MapServer::Key> key;
        
}; // Native::Router::LispList::Default_::Service::Ipv6::Default__::Etr::MapServer


class Native::Router::LispList::Default_::Service::Ipv6::Default__::Etr::MapServer::Key : public Entity
{
    public:
        Key();
        ~Key();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class KeyPwd; //type: Native::Router::LispList::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::KeyPwd
        class Key0; //type: Native::Router::LispList::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::Key0
        class Key6; //type: Native::Router::LispList::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::Key6
        class Key7; //type: Native::Router::LispList::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::Key7

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::Key0> key_0;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::Key6> key_6;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::Key7> key_7;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::KeyPwd> key_pwd;
        
}; // Native::Router::LispList::Default_::Service::Ipv6::Default__::Etr::MapServer::Key


class Native::Router::LispList::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::KeyPwd : public Entity
{
    public:
        KeyPwd();
        ~KeyPwd();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf unc_pwd; //type: string
        YLeaf hash_function; //type: HashFunctionEnum
        class HashFunctionEnum;

}; // Native::Router::LispList::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::KeyPwd


class Native::Router::LispList::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::Key0 : public Entity
{
    public:
        Key0();
        ~Key0();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ak_0; //type: string
        YLeaf hash_function; //type: HashFunctionEnum
        class HashFunctionEnum;

}; // Native::Router::LispList::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::Key0


class Native::Router::LispList::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::Key6 : public Entity
{
    public:
        Key6();
        ~Key6();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ak_6; //type: string
        YLeaf hash_function; //type: HashFunctionEnum
        class HashFunctionEnum;

}; // Native::Router::LispList::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::Key6


class Native::Router::LispList::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::Key7 : public Entity
{
    public:
        Key7();
        ~Key7();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ak_7; //type: string
        YLeaf hash_function; //type: HashFunctionEnum
        class HashFunctionEnum;

}; // Native::Router::LispList::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::Key7


class Native::Router::LispList::Default_::Service::Ipv6::Default__::Etr::AcceptMapRequestMapping : public Entity
{
    public:
        AcceptMapRequestMapping();
        ~AcceptMapRequestMapping();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf accept_mappping; //type: empty
        YLeaf verify; //type: empty

}; // Native::Router::LispList::Default_::Service::Ipv6::Default__::Etr::AcceptMapRequestMapping


class Native::Router::LispList::Default_::Service::Ipv6::Default__::MapCacheLimit : public Entity
{
    public:
        MapCacheLimit();
        ~MapCacheLimit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf max_map_cache_entries; //type: uint32
        YLeaf reserve_list; //type: string
        YLeaf warning_threshold; //type: uint8

}; // Native::Router::LispList::Default_::Service::Ipv6::Default__::MapCacheLimit


class Native::Router::LispList::Default_::Service::Ipv6::Default__::MapResolver : public Entity
{
    public:
        MapResolver();
        ~MapResolver();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class MapRequest; //type: Native::Router::LispList::Default_::Service::Ipv6::Default__::MapResolver::MapRequest

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::Default__::MapResolver::MapRequest> map_request;
        
}; // Native::Router::LispList::Default_::Service::Ipv6::Default__::MapResolver


class Native::Router::LispList::Default_::Service::Ipv6::Default__::MapResolver::MapRequest : public Entity
{
    public:
        MapRequest();
        ~MapRequest();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Validate; //type: Native::Router::LispList::Default_::Service::Ipv6::Default__::MapResolver::MapRequest::Validate

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::Default__::MapResolver::MapRequest::Validate> validate;
        
}; // Native::Router::LispList::Default_::Service::Ipv6::Default__::MapResolver::MapRequest


class Native::Router::LispList::Default_::Service::Ipv6::Default__::MapResolver::MapRequest::Validate : public Entity
{
    public:
        Validate();
        ~Validate();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Source; //type: Native::Router::LispList::Default_::Service::Ipv6::Default__::MapResolver::MapRequest::Validate::Source

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::Default__::MapResolver::MapRequest::Validate::Source> source;
        
}; // Native::Router::LispList::Default_::Service::Ipv6::Default__::MapResolver::MapRequest::Validate


class Native::Router::LispList::Default_::Service::Ipv6::Default__::MapResolver::MapRequest::Validate::Source : public Entity
{
    public:
        Source();
        ~Source();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class List; //type: Native::Router::LispList::Default_::Service::Ipv6::Default__::MapResolver::MapRequest::Validate::Source::List
        class Registered; //type: Native::Router::LispList::Default_::Service::Ipv6::Default__::MapResolver::MapRequest::Validate::Source::Registered

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::Default__::MapResolver::MapRequest::Validate::Source::List> list;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::Default__::MapResolver::MapRequest::Validate::Source::Registered> registered;
        
}; // Native::Router::LispList::Default_::Service::Ipv6::Default__::MapResolver::MapRequest::Validate::Source


class Native::Router::LispList::Default_::Service::Ipv6::Default__::MapResolver::MapRequest::Validate::Source::List : public Entity
{
    public:
        List();
        ~List();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string

}; // Native::Router::LispList::Default_::Service::Ipv6::Default__::MapResolver::MapRequest::Validate::Source::List


class Native::Router::LispList::Default_::Service::Ipv6::Default__::MapResolver::MapRequest::Validate::Source::Registered : public Entity
{
    public:
        Registered();
        ~Registered();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class List; //type: Native::Router::LispList::Default_::Service::Ipv6::Default__::MapResolver::MapRequest::Validate::Source::Registered::List

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::Default__::MapResolver::MapRequest::Validate::Source::Registered::List> list;
        
}; // Native::Router::LispList::Default_::Service::Ipv6::Default__::MapResolver::MapRequest::Validate::Source::Registered


class Native::Router::LispList::Default_::Service::Ipv6::Default__::MapResolver::MapRequest::Validate::Source::Registered::List : public Entity
{
    public:
        List();
        ~List();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string

}; // Native::Router::LispList::Default_::Service::Ipv6::Default__::MapResolver::MapRequest::Validate::Source::Registered::List


class Native::Router::LispList::Default_::Service::Ipv6::Default__::MapServer : public Entity
{
    public:
        MapServer();
        ~MapServer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class MapRegister; //type: Native::Router::LispList::Default_::Service::Ipv6::Default__::MapServer::MapRegister

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::Default__::MapServer::MapRegister> map_register;
        
}; // Native::Router::LispList::Default_::Service::Ipv6::Default__::MapServer


class Native::Router::LispList::Default_::Service::Ipv6::Default__::MapServer::MapRegister : public Entity
{
    public:
        MapRegister();
        ~MapRegister();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Validate; //type: Native::Router::LispList::Default_::Service::Ipv6::Default__::MapServer::MapRegister::Validate

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Default_::Service::Ipv6::Default__::MapServer::MapRegister::Validate> validate;
        
}; // Native::Router::LispList::Default_::Service::Ipv6::Default__::MapServer::MapRegister

class Native::Router::Lisp::EidTable::InstanceList::MapServer::Rloc::Members::ModifyDiscovered::OperatorEnum : public Enum
{
    public:
        static const Enum::YLeaf add;
        static const Enum::YLeaf override;

};

class Native::Router::LispList::Default_::Service::Ipv4::EncapsulationEnum : public Enum
{
    public:
        static const Enum::YLeaf lisp;
        static const Enum::YLeaf vxlan;

};

class Native::Router::LispList::Default_::Service::Ipv4::Default__::EncapsulationEnum : public Enum
{
    public:
        static const Enum::YLeaf lisp;
        static const Enum::YLeaf vxlan;

};

class Native::Router::LispList::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::KeyPwd::HashFunctionEnum : public Enum
{
    public:
        static const Enum::YLeaf sha1;
        static const Enum::YLeaf sha2;

};

class Native::Router::LispList::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::Key0::HashFunctionEnum : public Enum
{
    public:
        static const Enum::YLeaf sha1;
        static const Enum::YLeaf sha2;

};

class Native::Router::LispList::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::Key6::HashFunctionEnum : public Enum
{
    public:
        static const Enum::YLeaf sha1;
        static const Enum::YLeaf sha2;

};

class Native::Router::LispList::Default_::Service::Ipv4::Default__::Etr::MapServer::Key::Key7::HashFunctionEnum : public Enum
{
    public:
        static const Enum::YLeaf sha1;
        static const Enum::YLeaf sha2;

};

class Native::Router::LispList::Default_::Service::Ipv4::Etr::MapServer::Key::KeyPwd::HashFunctionEnum : public Enum
{
    public:
        static const Enum::YLeaf sha1;
        static const Enum::YLeaf sha2;

};

class Native::Router::LispList::Default_::Service::Ipv4::Etr::MapServer::Key::Key0::HashFunctionEnum : public Enum
{
    public:
        static const Enum::YLeaf sha1;
        static const Enum::YLeaf sha2;

};

class Native::Router::LispList::Default_::Service::Ipv4::Etr::MapServer::Key::Key6::HashFunctionEnum : public Enum
{
    public:
        static const Enum::YLeaf sha1;
        static const Enum::YLeaf sha2;

};

class Native::Router::LispList::Default_::Service::Ipv4::Etr::MapServer::Key::Key7::HashFunctionEnum : public Enum
{
    public:
        static const Enum::YLeaf sha1;
        static const Enum::YLeaf sha2;

};

class Native::Router::LispList::Default_::Service::Ipv6::EncapsulationEnum : public Enum
{
    public:
        static const Enum::YLeaf lisp;
        static const Enum::YLeaf vxlan;

};

class Native::Router::LispList::Default_::Service::Ipv6::Default__::EncapsulationEnum : public Enum
{
    public:
        static const Enum::YLeaf lisp;
        static const Enum::YLeaf vxlan;

};

class Native::Router::LispList::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::KeyPwd::HashFunctionEnum : public Enum
{
    public:
        static const Enum::YLeaf sha1;
        static const Enum::YLeaf sha2;

};

class Native::Router::LispList::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::Key0::HashFunctionEnum : public Enum
{
    public:
        static const Enum::YLeaf sha1;
        static const Enum::YLeaf sha2;

};

class Native::Router::LispList::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::Key6::HashFunctionEnum : public Enum
{
    public:
        static const Enum::YLeaf sha1;
        static const Enum::YLeaf sha2;

};

class Native::Router::LispList::Default_::Service::Ipv6::Default__::Etr::MapServer::Key::Key7::HashFunctionEnum : public Enum
{
    public:
        static const Enum::YLeaf sha1;
        static const Enum::YLeaf sha2;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_121_ */

