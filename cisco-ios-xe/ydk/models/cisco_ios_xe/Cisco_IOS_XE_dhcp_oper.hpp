#ifndef _CISCO_IOS_XE_DHCP_OPER_
#define _CISCO_IOS_XE_DHCP_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_dhcp_oper {

class DhcpOperData : public ydk::Entity
{
    public:
        DhcpOperData();
        ~DhcpOperData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::shared_ptr<ydk::Entity> clone_ptr() const override;
        ydk::augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;
        std::map<std::pair<std::string, std::string>, std::string> get_namespace_identity_lookup() const override;

        class Dhcpv4ServerOper; //type: DhcpOperData::Dhcpv4ServerOper
        class Dhcpv4ClientOper; //type: DhcpOperData::Dhcpv4ClientOper

        ydk::YList dhcpv4_server_oper;
        ydk::YList dhcpv4_client_oper;
        
}; // DhcpOperData


class DhcpOperData::Dhcpv4ServerOper : public ydk::Entity
{
    public:
        Dhcpv4ServerOper();
        ~Dhcpv4ServerOper();

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

        ydk::YLeaf pool_name; //type: string
        ydk::YLeaf client_ip; //type: string
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf client_id_type; //type: DhcpClientIdType
        ydk::YLeaf client_id; //type: string
        ydk::YLeaf type; //type: DhcpServerBindingType
        ydk::YLeaf state; //type: DhcpServerBindingState
        ydk::YLeaf interface; //type: string
        class Expiration; //type: DhcpOperData::Dhcpv4ServerOper::Expiration

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_dhcp_oper::DhcpOperData::Dhcpv4ServerOper::Expiration> expiration;
        
}; // DhcpOperData::Dhcpv4ServerOper


class DhcpOperData::Dhcpv4ServerOper::Expiration : public ydk::Entity
{
    public:
        Expiration();
        ~Expiration();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf time; //type: string
        ydk::YLeaf infinite; //type: empty

}; // DhcpOperData::Dhcpv4ServerOper::Expiration


class DhcpOperData::Dhcpv4ClientOper : public ydk::Entity
{
    public:
        Dhcpv4ClientOper();
        ~Dhcpv4ClientOper();

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

        ydk::YLeaf if_name; //type: string
        ydk::YLeaf client_addr; //type: string
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf state; //type: DhcpClientState
        ydk::YLeaf lease_server_addr; //type: string
        ydk::YLeaf gateway_addr; //type: string
        ydk::YLeaf lease_time; //type: uint32
        ydk::YLeaf lease_remaining; //type: uint32
        ydk::YLeaf dns_address; //type: string
        ydk::YLeaf dns_address_secondary; //type: string
        ydk::YLeaf subnet_mask; //type: string
        class LeaseExpiry; //type: DhcpOperData::Dhcpv4ClientOper::LeaseExpiry

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_dhcp_oper::DhcpOperData::Dhcpv4ClientOper::LeaseExpiry> lease_expiry;
        
}; // DhcpOperData::Dhcpv4ClientOper


class DhcpOperData::Dhcpv4ClientOper::LeaseExpiry : public ydk::Entity
{
    public:
        LeaseExpiry();
        ~LeaseExpiry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf time; //type: string
        ydk::YLeaf infinite; //type: empty

}; // DhcpOperData::Dhcpv4ClientOper::LeaseExpiry

class DhcpServerBindingType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf dhcp_server_binding_type_manual;
        static const ydk::Enum::YLeaf dhcp_server_binding_type_static;
        static const ydk::Enum::YLeaf dhcp_server_binding_type_relay;
        static const ydk::Enum::YLeaf dhcp_server_binding_type_automatic;
        static const ydk::Enum::YLeaf dhcp_server_binding_type_odap;
        static const ydk::Enum::YLeaf dhcp_server_binding_type_from_aaa;
        static const ydk::Enum::YLeaf dhcp_server_binding_type_remembered;

        static int get_enum_value(const std::string & name) {
            if (name == "dhcp-server-binding-type-manual") return 0;
            if (name == "dhcp-server-binding-type-static") return 1;
            if (name == "dhcp-server-binding-type-relay") return 2;
            if (name == "dhcp-server-binding-type-automatic") return 3;
            if (name == "dhcp-server-binding-type-odap") return 4;
            if (name == "dhcp-server-binding-type-from-aaa") return 5;
            if (name == "dhcp-server-binding-type-remembered") return 6;
            return -1;
        }
};

class DhcpExpiryOption : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf dhcp_expiration_time;
        static const ydk::Enum::YLeaf dhcp_expiration_infinite;

        static int get_enum_value(const std::string & name) {
            if (name == "dhcp-expiration-time") return 0;
            if (name == "dhcp-expiration-infinite") return 1;
            return -1;
        }
};

class DhcpClientIdType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf dhcp_htype_ethernet;
        static const ydk::Enum::YLeaf dhcp_htype_ieee802;
        static const ydk::Enum::YLeaf dhcp_htype_rfclimit;
        static const ydk::Enum::YLeaf dhcp_htype_clientid;

        static int get_enum_value(const std::string & name) {
            if (name == "dhcp-htype-ethernet") return 0;
            if (name == "dhcp-htype-ieee802") return 1;
            if (name == "dhcp-htype-rfclimit") return 2;
            if (name == "dhcp-htype-clientid") return 3;
            return -1;
        }
};

class DhcpClientState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf dhcp_client_state_temp_from_client;
        static const ydk::Enum::YLeaf dhcp_client_state_temp_from_sync;
        static const ydk::Enum::YLeaf dhcp_client_state_initial;
        static const ydk::Enum::YLeaf dhcp_client_state_selecting;
        static const ydk::Enum::YLeaf dhcp_client_state_requesting;
        static const ydk::Enum::YLeaf dhcp_client_state_bound;
        static const ydk::Enum::YLeaf dhcp_client_state_rebinding;
        static const ydk::Enum::YLeaf dhcp_client_state_renewing;
        static const ydk::Enum::YLeaf dhcp_client_state_holdtime;
        static const ydk::Enum::YLeaf dhcp_client_state_ddns_wait;
        static const ydk::Enum::YLeaf dhcp_client_state_releasing;
        static const ydk::Enum::YLeaf dhcp_client_state_purging;
        static const ydk::Enum::YLeaf dhcp_client_state_leasequery;
        static const ydk::Enum::YLeaf dhcp_client_state_unknown;

        static int get_enum_value(const std::string & name) {
            if (name == "dhcp-client-state-temp-from-client") return 0;
            if (name == "dhcp-client-state-temp-from-sync") return 1;
            if (name == "dhcp-client-state-initial") return 2;
            if (name == "dhcp-client-state-selecting") return 3;
            if (name == "dhcp-client-state-requesting") return 4;
            if (name == "dhcp-client-state-bound") return 5;
            if (name == "dhcp-client-state-rebinding") return 6;
            if (name == "dhcp-client-state-renewing") return 7;
            if (name == "dhcp-client-state-holdtime") return 8;
            if (name == "dhcp-client-state-ddns-wait") return 9;
            if (name == "dhcp-client-state-releasing") return 10;
            if (name == "dhcp-client-state-purging") return 11;
            if (name == "dhcp-client-state-leasequery") return 12;
            if (name == "dhcp-client-state-unknown") return 13;
            return -1;
        }
};

class DhcpServerBindingState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf dhcp_server_binding_state_selecting;
        static const ydk::Enum::YLeaf dhcp_server_binding_state_active;
        static const ydk::Enum::YLeaf dhcp_server_binding_state_terminated;
        static const ydk::Enum::YLeaf dhcp_server_binding_state_unknown;

        static int get_enum_value(const std::string & name) {
            if (name == "dhcp-server-binding-state-selecting") return 0;
            if (name == "dhcp-server-binding-state-active") return 1;
            if (name == "dhcp-server-binding-state-terminated") return 2;
            if (name == "dhcp-server-binding-state-unknown") return 3;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XE_DHCP_OPER_ */

