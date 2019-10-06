#ifndef _CISCO_IOS_XE_PPP_OPER_
#define _CISCO_IOS_XE_PPP_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_ppp_oper {

class PppData : public ydk::Entity
{
    public:
        PppData();
        ~PppData();

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

        class PppInterface; //type: PppData::PppInterface
        class PppStatistics; //type: PppData::PppStatistics
        class Pppoe; //type: PppData::Pppoe

        ydk::YList ppp_interface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_ppp_oper::PppData::PppStatistics> ppp_statistics; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_ppp_oper::PppData::Pppoe> pppoe; // presence node
        
}; // PppData


class PppData::PppInterface : public ydk::Entity
{
    public:
        PppInterface();
        ~PppInterface();

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

        ydk::YLeaf phy_ifname; //type: string
        class PppVa; //type: PppData::PppInterface::PppVa

        ydk::YList ppp_va;
        
}; // PppData::PppInterface


class PppData::PppInterface::PppVa : public ydk::Entity
{
    public:
        PppVa();
        ~PppVa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf va_ifname; //type: string
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf interface_ip; //type: string
        ydk::YLeaf gateway_ip; //type: string
        ydk::YLeaf primary_dns_ip; //type: string
        ydk::YLeaf secondary_dns_ip; //type: string
        ydk::YLeaf mtu; //type: uint32
        ydk::YLeaf auth_type; //type: PppIosAuthType

}; // PppData::PppInterface::PppVa


class PppData::PppStatistics : public ydk::Entity
{
    public:
        PppStatistics();
        ~PppStatistics();

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

        ydk::YLeaf ppp_lcp_pkts; //type: uint32
        ydk::YLeaf ppp_ipcp_pkts; //type: uint32
        ydk::YLeaf ppp_ccp_pkts; //type: uint32

}; // PppData::PppStatistics


class PppData::Pppoe : public ydk::Entity
{
    public:
        Pppoe();
        ~Pppoe();

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

        ydk::YLeaf role; //type: PppoeOperationalRole
        class PppoeSessionList; //type: PppData::Pppoe::PppoeSessionList
        class PppoeStatistics; //type: PppData::Pppoe::PppoeStatistics

        ydk::YList pppoe_session_list;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_ppp_oper::PppData::Pppoe::PppoeStatistics> pppoe_statistics; // presence node
        
}; // PppData::Pppoe


class PppData::Pppoe::PppoeSessionList : public ydk::Entity
{
    public:
        PppoeSessionList();
        ~PppoeSessionList();

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

        ydk::YLeaf ifname; //type: string
        class Session; //type: PppData::Pppoe::PppoeSessionList::Session

        ydk::YList session;
        
}; // PppData::Pppoe::PppoeSessionList


class PppData::Pppoe::PppoeSessionList::Session : public ydk::Entity
{
    public:
        Session();
        ~Session();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf session_id; //type: uint16
        ydk::YLeaf lmac; //type: string
        ydk::YLeaf rmac; //type: string
        ydk::YLeaf va_ifname; //type: string
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf dot1q_qinq_outer_vlan; //type: uint16
        ydk::YLeaf dot1q_qinq_inner_vlan; //type: uint16
        ydk::YLeaf service_name; //type: string
        ydk::YLeaf in_packet; //type: uint32
        ydk::YLeaf out_packet; //type: uint32
        ydk::YLeaf in_bytes; //type: uint64
        ydk::YLeaf out_bytes; //type: uint64

}; // PppData::Pppoe::PppoeSessionList::Session


class PppData::Pppoe::PppoeStatistics : public ydk::Entity
{
    public:
        PppoeStatistics();
        ~PppoeStatistics();

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

        ydk::YLeaf pppoe_padi_pkts; //type: uint32
        ydk::YLeaf pppoe_pado_pkts; //type: uint32
        ydk::YLeaf pppoe_padr_pkts; //type: uint32
        ydk::YLeaf pppoe_pads_pkts; //type: uint32
        ydk::YLeaf pppoe_padt_pkts; //type: uint32
        ydk::YLeaf invalid_discovery_pkts; //type: uint32

}; // PppData::Pppoe::PppoeStatistics

class PppIosAuthType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ppp_ios_auth_none;
        static const ydk::Enum::YLeaf ppp_ios_auth_chap;
        static const ydk::Enum::YLeaf ppp_ios_auth_pap;
        static const ydk::Enum::YLeaf ppp_ios_auth_mschap;
        static const ydk::Enum::YLeaf ppp_ios_auth_mschap_v2;
        static const ydk::Enum::YLeaf ppp_ios_auth_eap;

        static int get_enum_value(const std::string & name) {
            if (name == "ppp-ios-auth-none") return 0;
            if (name == "ppp-ios-auth-chap") return 1;
            if (name == "ppp-ios-auth-pap") return 2;
            if (name == "ppp-ios-auth-mschap") return 3;
            if (name == "ppp-ios-auth-mschap-v2") return 4;
            if (name == "ppp-ios-auth-eap") return 5;
            return -1;
        }
};

class PppoeOperationalRole : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf pppoe_client;
        static const ydk::Enum::YLeaf pppoe_server;

        static int get_enum_value(const std::string & name) {
            if (name == "pppoe-client") return 0;
            if (name == "pppoe-server") return 1;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XE_PPP_OPER_ */

