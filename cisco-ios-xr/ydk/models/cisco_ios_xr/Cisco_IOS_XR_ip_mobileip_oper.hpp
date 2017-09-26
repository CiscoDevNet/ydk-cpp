#ifndef _CISCO_IOS_XR_IP_MOBILEIP_OPER_
#define _CISCO_IOS_XR_IP_MOBILEIP_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ip_mobileip_oper {

class Pmipv6 : public ydk::Entity
{
    public:
        Pmipv6();
        ~Pmipv6();

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

        class Lma; //type: Pmipv6::Lma

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_mobileip_oper::Pmipv6::Lma> lma;
        
}; // Pmipv6


class Pmipv6::Lma : public ydk::Entity
{
    public:
        Lma();
        ~Lma();

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

        class Statistics; //type: Pmipv6::Lma::Statistics
        class Bindings; //type: Pmipv6::Lma::Bindings
        class Heartbeats; //type: Pmipv6::Lma::Heartbeats
        class ConfigVariables; //type: Pmipv6::Lma::ConfigVariables

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_mobileip_oper::Pmipv6::Lma::Bindings> bindings;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_mobileip_oper::Pmipv6::Lma::ConfigVariables> config_variables;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_mobileip_oper::Pmipv6::Lma::Heartbeats> heartbeats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_mobileip_oper::Pmipv6::Lma::Statistics> statistics;
        
}; // Pmipv6::Lma


class Pmipv6::Lma::Bindings : public ydk::Entity
{
    public:
        Bindings();
        ~Bindings();

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

        class Binding; //type: Pmipv6::Lma::Bindings::Binding

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_mobileip_oper::Pmipv6::Lma::Bindings::Binding> > binding;
        
}; // Pmipv6::Lma::Bindings


class Pmipv6::Lma::Bindings::Binding : public ydk::Entity
{
    public:
        Binding();
        ~Binding();

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

        ydk::YLeaf mag_name; //type: string
        ydk::YLeaf nai_string; //type: string
        ydk::YLeaf imsi_string; //type: string
        ydk::YLeaf customer_name; //type: string
        ydk::YLeaf mnnai; //type: string
        ydk::YLeaf customer_name_xr; //type: string
        ydk::YLeaf llid; //type: string
        ydk::YLeaf peer_id; //type: string
        ydk::YLeaf phyintf; //type: string
        ydk::YLeaf tunnel; //type: string
        ydk::YLeaf state; //type: string
        ydk::YLeaf apn; //type: string
        ydk::YLeaf att; //type: uint16
        ydk::YLeaf hoa; //type: string
        ydk::YLeaf dflt; //type: string
        ydk::YLeaf lifetime; //type: uint32
        ydk::YLeaf liferem; //type: uint32
        ydk::YLeaf refresh; //type: uint32
        ydk::YLeaf refresh_rem; //type: uint32
        ydk::YLeaf prefix_len; //type: uint8
        ydk::YLeaf num_hnps; //type: uint8
        ydk::YLeaf num_coa; //type: uint8
        ydk::YLeaf num_dmnp_v4; //type: uint8
        ydk::YLeaf num_dmnp_v6; //type: uint8
        ydk::YLeaf hnps; //type: string
        ydk::YLeaf ignore_home_address; //type: boolean
        ydk::YLeaf up_stream_grekey; //type: uint32
        ydk::YLeaf down_stream_grekey; //type: uint32
        ydk::YLeaf vrfid; //type: uint32
        class Coa; //type: Pmipv6::Lma::Bindings::Binding::Coa
        class DmnpV4; //type: Pmipv6::Lma::Bindings::Binding::DmnpV4
        class DmnpV6; //type: Pmipv6::Lma::Bindings::Binding::DmnpV6

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_mobileip_oper::Pmipv6::Lma::Bindings::Binding::Coa> > coa;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_mobileip_oper::Pmipv6::Lma::Bindings::Binding::DmnpV4> > dmnp_v4;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_mobileip_oper::Pmipv6::Lma::Bindings::Binding::DmnpV6> > dmnp_v6;
        
}; // Pmipv6::Lma::Bindings::Binding


class Pmipv6::Lma::Bindings::Binding::Coa : public ydk::Entity
{
    public:
        Coa();
        ~Coa();

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

        ydk::YLeaf llid; //type: string
        ydk::YLeaf peer_name; //type: string
        ydk::YLeaf tunnel; //type: string
        ydk::YLeaf e_label; //type: string
        ydk::YLeaf color; //type: string
        ydk::YLeaf roa_min_tf; //type: string
        ydk::YLeaf pstate; //type: string
        ydk::YLeaf msisdn; //type: string
        ydk::YLeaf imsi; //type: string
        ydk::YLeaf cdma_nai; //type: string
        ydk::YLeaf pgw_apn; //type: string
        ydk::YLeaf pgw_trans_vrf; //type: string
        ydk::YLeaf att; //type: uint16
        ydk::YLeaf lifetime; //type: uint32
        ydk::YLeaf lifetime_remaining; //type: uint32
        ydk::YLeaf refresh; //type: uint32
        ydk::YLeaf refresh_rem; //type: uint32
        ydk::YLeaf dnkey; //type: uint32
        ydk::YLeaf upkey; //type: uint32
        ydk::YLeaf coa_v4; //type: string
        ydk::YLeaf coa_v6; //type: string

}; // Pmipv6::Lma::Bindings::Binding::Coa


class Pmipv6::Lma::Bindings::Binding::DmnpV4 : public ydk::Entity
{
    public:
        DmnpV4();
        ~DmnpV4();

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

        ydk::YLeaf pfxlen; //type: uint8
        ydk::YLeaf prefix; //type: string

}; // Pmipv6::Lma::Bindings::Binding::DmnpV4


class Pmipv6::Lma::Bindings::Binding::DmnpV6 : public ydk::Entity
{
    public:
        DmnpV6();
        ~DmnpV6();

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

        ydk::YLeaf pfxlen; //type: uint8
        ydk::YLeaf prefix; //type: string

}; // Pmipv6::Lma::Bindings::Binding::DmnpV6


class Pmipv6::Lma::ConfigVariables : public ydk::Entity
{
    public:
        ConfigVariables();
        ~ConfigVariables();

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

        class CustomerVariables; //type: Pmipv6::Lma::ConfigVariables::CustomerVariables
        class GlobalVariables; //type: Pmipv6::Lma::ConfigVariables::GlobalVariables

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_mobileip_oper::Pmipv6::Lma::ConfigVariables::CustomerVariables> customer_variables;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_mobileip_oper::Pmipv6::Lma::ConfigVariables::GlobalVariables> global_variables;
        
}; // Pmipv6::Lma::ConfigVariables


class Pmipv6::Lma::ConfigVariables::CustomerVariables : public ydk::Entity
{
    public:
        CustomerVariables();
        ~CustomerVariables();

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

        class CustomerVariable; //type: Pmipv6::Lma::ConfigVariables::CustomerVariables::CustomerVariable

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_mobileip_oper::Pmipv6::Lma::ConfigVariables::CustomerVariables::CustomerVariable> > customer_variable;
        
}; // Pmipv6::Lma::ConfigVariables::CustomerVariables


class Pmipv6::Lma::ConfigVariables::CustomerVariables::CustomerVariable : public ydk::Entity
{
    public:
        CustomerVariable();
        ~CustomerVariable();

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

        ydk::YLeaf customer_name; //type: string
        ydk::YLeaf cust_name; //type: string
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf auth_option; //type: boolean
        class MllService; //type: Pmipv6::Lma::ConfigVariables::CustomerVariables::CustomerVariable::MllService

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_mobileip_oper::Pmipv6::Lma::ConfigVariables::CustomerVariables::CustomerVariable::MllService> mll_service;
        
}; // Pmipv6::Lma::ConfigVariables::CustomerVariables::CustomerVariable


class Pmipv6::Lma::ConfigVariables::CustomerVariables::CustomerVariable::MllService : public ydk::Entity
{
    public:
        MllService();
        ~MllService();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ignore_hoa; //type: boolean
        ydk::YLeaf mnp_ipv4_lmn_max; //type: uint16
        ydk::YLeaf mnp_ipv6_lmn_max; //type: uint16
        ydk::YLeaf mnp_lmn_max; //type: uint16
        ydk::YLeaf mnp_ipv4_cust_max; //type: uint32
        ydk::YLeaf mnp_ipv6_cust_max; //type: uint32
        ydk::YLeaf mnp_cust_max; //type: uint32
        ydk::YLeaf mnp_ipv4_cust_cur; //type: uint32
        ydk::YLeaf mnp_ipv6_cust_cur; //type: uint32

}; // Pmipv6::Lma::ConfigVariables::CustomerVariables::CustomerVariable::MllService


class Pmipv6::Lma::ConfigVariables::GlobalVariables : public ydk::Entity
{
    public:
        GlobalVariables();
        ~GlobalVariables();

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

        ydk::YLeaf domain; //type: string
        ydk::YLeaf selfid; //type: string
        ydk::YLeaf apn_name; //type: string
        ydk::YLeaf role; //type: Pmipv6Role
        ydk::YLeaf count; //type: uint32
        ydk::YLeaf peers; //type: uint32
        ydk::YLeaf customers; //type: uint32
        ydk::YLeaf num_network; //type: uint32
        ydk::YLeaf discover_mn; //type: boolean
        ydk::YLeaf local_routing; //type: boolean
        ydk::YLeaf aaa_accounting; //type: boolean
        ydk::YLeaf default_mn; //type: boolean
        ydk::YLeaf apn; //type: boolean
        ydk::YLeaf learn_mag; //type: boolean
        ydk::YLeaf session_mgr; //type: boolean
        ydk::YLeaf service; //type: uint8
        ydk::YLeaf profile; //type: string
        ydk::YLeaf ddp; //type: uint32
        ydk::YLeaf ddt; //type: uint32
        ydk::YLeaf ddr; //type: uint8
        class Parameters; //type: Pmipv6::Lma::ConfigVariables::GlobalVariables::Parameters
        class MllService; //type: Pmipv6::Lma::ConfigVariables::GlobalVariables::MllService
        class Intf; //type: Pmipv6::Lma::ConfigVariables::GlobalVariables::Intf
        class Peer; //type: Pmipv6::Lma::ConfigVariables::GlobalVariables::Peer
        class Network; //type: Pmipv6::Lma::ConfigVariables::GlobalVariables::Network
        class Cust; //type: Pmipv6::Lma::ConfigVariables::GlobalVariables::Cust

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_mobileip_oper::Pmipv6::Lma::ConfigVariables::GlobalVariables::Cust> > cust;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_mobileip_oper::Pmipv6::Lma::ConfigVariables::GlobalVariables::Intf> > intf;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_mobileip_oper::Pmipv6::Lma::ConfigVariables::GlobalVariables::MllService> mll_service;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_mobileip_oper::Pmipv6::Lma::ConfigVariables::GlobalVariables::Network> > network;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_mobileip_oper::Pmipv6::Lma::ConfigVariables::GlobalVariables::Parameters> parameters;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_mobileip_oper::Pmipv6::Lma::ConfigVariables::GlobalVariables::Peer> > peer;
        
}; // Pmipv6::Lma::ConfigVariables::GlobalVariables


class Pmipv6::Lma::ConfigVariables::GlobalVariables::Cust : public ydk::Entity
{
    public:
        Cust();
        ~Cust();

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

        ydk::YLeaf cust; //type: boolean
        ydk::YLeaf vrf; //type: boolean
        ydk::YLeaf t_vrf; //type: boolean
        ydk::YLeaf auth_option; //type: boolean
        ydk::YLeaf heart_beat; //type: boolean
        ydk::YLeaf reg_time; //type: uint32
        ydk::YLeaf cust_name; //type: string
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf t_vrf_name; //type: string

}; // Pmipv6::Lma::ConfigVariables::GlobalVariables::Cust


class Pmipv6::Lma::ConfigVariables::GlobalVariables::Intf : public ydk::Entity
{
    public:
        Intf();
        ~Intf();

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

        ydk::YLeaf apn; //type: boolean
        ydk::YLeaf interface; //type: string
        ydk::YLeaf apn_name; //type: string

}; // Pmipv6::Lma::ConfigVariables::GlobalVariables::Intf


class Pmipv6::Lma::ConfigVariables::GlobalVariables::MllService : public ydk::Entity
{
    public:
        MllService();
        ~MllService();

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

        ydk::YLeaf ignore_hoa; //type: boolean
        ydk::YLeaf mnp_ipv4_lmn_max; //type: uint16
        ydk::YLeaf mnp_ipv6_lmn_max; //type: uint16
        ydk::YLeaf mnp_lmn_max; //type: uint16
        ydk::YLeaf mnp_ipv4_cust_max; //type: uint32
        ydk::YLeaf mnp_ipv6_cust_max; //type: uint32
        ydk::YLeaf mnp_cust_max; //type: uint32
        ydk::YLeaf mnp_ipv4_cust_cur; //type: uint32
        ydk::YLeaf mnp_ipv6_cust_cur; //type: uint32

}; // Pmipv6::Lma::ConfigVariables::GlobalVariables::MllService


class Pmipv6::Lma::ConfigVariables::GlobalVariables::Network : public ydk::Entity
{
    public:
        Network();
        ~Network();

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

        ydk::YLeaf v4pool; //type: boolean
        ydk::YLeaf v6pool; //type: boolean
        ydk::YLeaf network; //type: string
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string
        ydk::YLeaf v4pfx_len; //type: uint8
        ydk::YLeaf v6pfx_len; //type: uint8
        ydk::YLeaf mrnet; //type: uint8

}; // Pmipv6::Lma::ConfigVariables::GlobalVariables::Network


class Pmipv6::Lma::ConfigVariables::GlobalVariables::Parameters : public ydk::Entity
{
    public:
        Parameters();
        ~Parameters();

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

        ydk::YLeaf timestamp; //type: boolean
        ydk::YLeaf window; //type: uint64
        ydk::YLeaf auth_option; //type: boolean
        ydk::YLeaf reg_time; //type: uint32
        ydk::YLeaf ref_time; //type: uint32
        ydk::YLeaf retx; //type: uint16
        ydk::YLeaf ret_max; //type: uint16
        ydk::YLeaf bri_init; //type: uint16
        ydk::YLeaf bri_retries; //type: uint16
        ydk::YLeaf bri_max; //type: uint16
        ydk::YLeaf max_bindings; //type: uint32
        ydk::YLeaf hnp; //type: uint8
        ydk::YLeaf encap; //type: Pmipv6Encap
        ydk::YLeaf delete_time; //type: uint16
        ydk::YLeaf create_time; //type: uint16
        ydk::YLeaf up_grekey; //type: uint32
        ydk::YLeaf down_grekey; //type: uint32
        class SelfId; //type: Pmipv6::Lma::ConfigVariables::GlobalVariables::Parameters::SelfId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_mobileip_oper::Pmipv6::Lma::ConfigVariables::GlobalVariables::Parameters::SelfId> self_id;
        
}; // Pmipv6::Lma::ConfigVariables::GlobalVariables::Parameters


class Pmipv6::Lma::ConfigVariables::GlobalVariables::Parameters::SelfId : public ydk::Entity
{
    public:
        SelfId();
        ~SelfId();

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

        ydk::YLeaf entity_; //type: string
        ydk::YLeaf addr_type; //type: Pmipv6Addr
        ydk::YLeaf address; //type: string
        ydk::YLeaf ipv4_address; //type: string

}; // Pmipv6::Lma::ConfigVariables::GlobalVariables::Parameters::SelfId


class Pmipv6::Lma::ConfigVariables::GlobalVariables::Peer : public ydk::Entity
{
    public:
        Peer();
        ~Peer();

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

        ydk::YLeaf peer; //type: string
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf interface; //type: string
        ydk::YLeaf encap; //type: Pmipv6Encap
        ydk::YLeaf auth; //type: boolean
        ydk::YLeaf vrf; //type: boolean
        ydk::YLeaf statictunnel; //type: boolean

}; // Pmipv6::Lma::ConfigVariables::GlobalVariables::Peer


class Pmipv6::Lma::Heartbeats : public ydk::Entity
{
    public:
        Heartbeats();
        ~Heartbeats();

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

        class Heartbeat; //type: Pmipv6::Lma::Heartbeats::Heartbeat

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_mobileip_oper::Pmipv6::Lma::Heartbeats::Heartbeat> > heartbeat;
        
}; // Pmipv6::Lma::Heartbeats


class Pmipv6::Lma::Heartbeats::Heartbeat : public ydk::Entity
{
    public:
        Heartbeat();
        ~Heartbeat();

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

        ydk::YLeaf peer_addr; //type: string
        ydk::YLeaf vrf; //type: string
        ydk::YLeaf customer_name; //type: string
        ydk::YLeaf source_port; //type: uint32
        ydk::YLeaf destination_port; //type: uint32
        ydk::YLeaf source_ipv4_address; //type: string
        ydk::YLeaf destination_ipv4_address; //type: string
        ydk::YLeaf source_ipv6_address; //type: string
        ydk::YLeaf destination_ipv6_address; //type: string
        ydk::YLeaf status; //type: boolean
        ydk::YLeaf ipv6_path; //type: boolean

}; // Pmipv6::Lma::Heartbeats::Heartbeat


class Pmipv6::Lma::Statistics : public ydk::Entity
{
    public:
        Statistics();
        ~Statistics();

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

        class CustomerStatistics; //type: Pmipv6::Lma::Statistics::CustomerStatistics
        class License; //type: Pmipv6::Lma::Statistics::License
        class Global; //type: Pmipv6::Lma::Statistics::Global
        class MagStatistics; //type: Pmipv6::Lma::Statistics::MagStatistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_mobileip_oper::Pmipv6::Lma::Statistics::CustomerStatistics> customer_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_mobileip_oper::Pmipv6::Lma::Statistics::Global> global;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_mobileip_oper::Pmipv6::Lma::Statistics::License> license;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_mobileip_oper::Pmipv6::Lma::Statistics::MagStatistics> mag_statistics;
        
}; // Pmipv6::Lma::Statistics


class Pmipv6::Lma::Statistics::CustomerStatistics : public ydk::Entity
{
    public:
        CustomerStatistics();
        ~CustomerStatistics();

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

        class CustomerStatistic; //type: Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_mobileip_oper::Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic> > customer_statistic;
        
}; // Pmipv6::Lma::Statistics::CustomerStatistics


class Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic : public ydk::Entity
{
    public:
        CustomerStatistic();
        ~CustomerStatistic();

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

        ydk::YLeaf customer_name; //type: string
        ydk::YLeaf lma_identifier; //type: string
        ydk::YLeaf bce_count; //type: uint32
        ydk::YLeaf handoff_count; //type: uint32
        ydk::YLeaf ipv4_mnp_count; //type: uint32
        ydk::YLeaf ipv6_mnp_count; //type: uint32
        class ProtocolStatistics; //type: Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::ProtocolStatistics
        class AccountingStatistics; //type: Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::AccountingStatistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_mobileip_oper::Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::AccountingStatistics> accounting_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_mobileip_oper::Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::ProtocolStatistics> protocol_statistics;
        
}; // Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic


class Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::AccountingStatistics : public ydk::Entity
{
    public:
        AccountingStatistics();
        ~AccountingStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf accounting_start_sent_count; //type: uint64
        ydk::YLeaf accounting_update_sent_count; //type: uint64
        ydk::YLeaf accounting_stop_sent_count; //type: uint64

}; // Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::AccountingStatistics


class Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::ProtocolStatistics : public ydk::Entity
{
    public:
        ProtocolStatistics();
        ~ProtocolStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PbuReceiveStatistics; //type: Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::ProtocolStatistics::PbuReceiveStatistics
        class PbaSendStatistics; //type: Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::ProtocolStatistics::PbaSendStatistics
        class PbriSendStatistics; //type: Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::ProtocolStatistics::PbriSendStatistics
        class PbriReceiveStatistics; //type: Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::ProtocolStatistics::PbriReceiveStatistics
        class PbraSendStatistics; //type: Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::ProtocolStatistics::PbraSendStatistics
        class PbraReceiveStatistics; //type: Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::ProtocolStatistics::PbraReceiveStatistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_mobileip_oper::Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::ProtocolStatistics::PbaSendStatistics> pba_send_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_mobileip_oper::Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::ProtocolStatistics::PbraReceiveStatistics> pbra_receive_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_mobileip_oper::Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::ProtocolStatistics::PbraSendStatistics> pbra_send_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_mobileip_oper::Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::ProtocolStatistics::PbriReceiveStatistics> pbri_receive_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_mobileip_oper::Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::ProtocolStatistics::PbriSendStatistics> pbri_send_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_mobileip_oper::Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::ProtocolStatistics::PbuReceiveStatistics> pbu_receive_statistics;
        
}; // Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::ProtocolStatistics


class Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::ProtocolStatistics::PbaSendStatistics : public ydk::Entity
{
    public:
        PbaSendStatistics();
        ~PbaSendStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pba_count; //type: uint64
        ydk::YLeaf pba_drop_count; //type: uint32
        ydk::YLeaf accepted_count; //type: uint32
        ydk::YLeaf unknown_count; //type: uint32
        ydk::YLeaf unspecified_failure_count; //type: uint32
        ydk::YLeaf admin_failure_count; //type: uint32
        ydk::YLeaf resource_failure_count; //type: uint32
        ydk::YLeaf home_reg_failure_count; //type: uint32
        ydk::YLeaf home_subnet_failure_count; //type: uint32
        ydk::YLeaf bad_sequence_failure_count; //type: uint32
        ydk::YLeaf reg_type_failure_count; //type: uint32
        ydk::YLeaf authen_failure_count; //type: uint32
        ydk::YLeaf proxy_reg_not_enabled_count; //type: uint32
        ydk::YLeaf not_lma_for_this_mn_count; //type: uint32
        ydk::YLeaf no_author_for_proxy_reg_count; //type: uint32
        ydk::YLeaf no_author_for_hnp_count; //type: uint32
        ydk::YLeaf timestamp_mismatch_count; //type: uint32
        ydk::YLeaf timestamp_lower_than_previous_accepted_count; //type: uint32
        ydk::YLeaf missing_hnp_opt_count; //type: uint32
        ydk::YLeaf received_hnps_do_not_match_bce_hnps_count; //type: uint32
        ydk::YLeaf missing_mn_id_opt_count; //type: uint32
        ydk::YLeaf missing_hi_opt_count; //type: uint32
        ydk::YLeaf missing_access_tech_type_opt_count; //type: uint32
        ydk::YLeaf no_author_for_ipv4_mobility_count; //type: uint32
        ydk::YLeaf no_author_for_ipv4_hoa_count; //type: uint32
        ydk::YLeaf no_author_for_ipv6_mobility_count; //type: uint32
        ydk::YLeaf multiple_ipv4_ho_a_not_supported_count; //type: uint32
        ydk::YLeaf gre_key_opt_required_count; //type: uint32

}; // Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::ProtocolStatistics::PbaSendStatistics


class Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::ProtocolStatistics::PbraReceiveStatistics : public ydk::Entity
{
    public:
        PbraReceiveStatistics();
        ~PbraReceiveStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pbra_count; //type: uint64
        ydk::YLeaf pbra_drop_count; //type: uint32
        ydk::YLeaf success_count; //type: uint32
        ydk::YLeaf partial_success_count; //type: uint32
        ydk::YLeaf no_binding_count; //type: uint32
        ydk::YLeaf hoa_required_count; //type: uint32
        ydk::YLeaf no_author_for_global_revoc_count; //type: uint32
        ydk::YLeaf mn_identity_required_count; //type: uint32
        ydk::YLeaf mn_attached_count; //type: uint32
        ydk::YLeaf unknown_revoc_trigger_count; //type: uint32
        ydk::YLeaf revoc_function_not_supported_count; //type: uint32
        ydk::YLeaf pbr_not_supported_count; //type: uint32

}; // Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::ProtocolStatistics::PbraReceiveStatistics


class Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::ProtocolStatistics::PbraSendStatistics : public ydk::Entity
{
    public:
        PbraSendStatistics();
        ~PbraSendStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pbra_count; //type: uint64
        ydk::YLeaf pbra_drop_count; //type: uint32
        ydk::YLeaf success_count; //type: uint32
        ydk::YLeaf partial_success_count; //type: uint32
        ydk::YLeaf no_binding_count; //type: uint32
        ydk::YLeaf hoa_required_count; //type: uint32
        ydk::YLeaf no_author_for_global_revoc_count; //type: uint32
        ydk::YLeaf mn_identity_required_count; //type: uint32
        ydk::YLeaf mn_attached_count; //type: uint32
        ydk::YLeaf unknown_revoc_trigger_count; //type: uint32
        ydk::YLeaf revoc_function_not_supported_count; //type: uint32
        ydk::YLeaf pbr_not_supported_count; //type: uint32

}; // Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::ProtocolStatistics::PbraSendStatistics


class Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::ProtocolStatistics::PbriReceiveStatistics : public ydk::Entity
{
    public:
        PbriReceiveStatistics();
        ~PbriReceiveStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pbri_count; //type: uint64
        ydk::YLeaf pbri_drop_count; //type: uint32
        ydk::YLeaf unspecified_count; //type: uint32
        ydk::YLeaf admin_reason_count; //type: uint32
        ydk::YLeaf mag_handover_same_att_count; //type: uint32
        ydk::YLeaf mag_handover_different_att_count; //type: uint32
        ydk::YLeaf mag_handover_unknown_count; //type: uint32
        ydk::YLeaf user_session_termination_count; //type: uint32
        ydk::YLeaf network_session_termination_count; //type: uint32
        ydk::YLeaf out_of_sync_bce_state_count; //type: uint32
        ydk::YLeaf per_peer_policy_count; //type: uint32
        ydk::YLeaf revoking_mn_local_policy_count; //type: uint32

}; // Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::ProtocolStatistics::PbriReceiveStatistics


class Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::ProtocolStatistics::PbriSendStatistics : public ydk::Entity
{
    public:
        PbriSendStatistics();
        ~PbriSendStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pbri_count; //type: uint64
        ydk::YLeaf pbri_drop_count; //type: uint32
        ydk::YLeaf unspecified_count; //type: uint32
        ydk::YLeaf admin_reason_count; //type: uint32
        ydk::YLeaf mag_handover_same_att_count; //type: uint32
        ydk::YLeaf mag_handover_different_att_count; //type: uint32
        ydk::YLeaf mag_handover_unknown_count; //type: uint32
        ydk::YLeaf user_session_termination_count; //type: uint32
        ydk::YLeaf network_session_termination_count; //type: uint32
        ydk::YLeaf out_of_sync_bce_state_count; //type: uint32
        ydk::YLeaf per_peer_policy_count; //type: uint32
        ydk::YLeaf revoking_mn_local_policy_count; //type: uint32

}; // Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::ProtocolStatistics::PbriSendStatistics


class Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::ProtocolStatistics::PbuReceiveStatistics : public ydk::Entity
{
    public:
        PbuReceiveStatistics();
        ~PbuReceiveStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pbu_count; //type: uint64
        ydk::YLeaf pbu_drop_count; //type: uint32

}; // Pmipv6::Lma::Statistics::CustomerStatistics::CustomerStatistic::ProtocolStatistics::PbuReceiveStatistics


class Pmipv6::Lma::Statistics::Global : public ydk::Entity
{
    public:
        Global();
        ~Global();

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

        ydk::YLeaf lma_identifier; //type: string
        ydk::YLeaf bce_count; //type: uint32
        ydk::YLeaf handoff_count; //type: uint32
        ydk::YLeaf single_tenant_count; //type: uint32
        ydk::YLeaf multi_tenant_count; //type: uint32
        class PacketStatistics; //type: Pmipv6::Lma::Statistics::Global::PacketStatistics
        class ProtocolStatistics; //type: Pmipv6::Lma::Statistics::Global::ProtocolStatistics
        class AccountingStatistics; //type: Pmipv6::Lma::Statistics::Global::AccountingStatistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_mobileip_oper::Pmipv6::Lma::Statistics::Global::AccountingStatistics> accounting_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_mobileip_oper::Pmipv6::Lma::Statistics::Global::PacketStatistics> packet_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_mobileip_oper::Pmipv6::Lma::Statistics::Global::ProtocolStatistics> protocol_statistics;
        
}; // Pmipv6::Lma::Statistics::Global


class Pmipv6::Lma::Statistics::Global::AccountingStatistics : public ydk::Entity
{
    public:
        AccountingStatistics();
        ~AccountingStatistics();

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

        ydk::YLeaf accounting_start_sent_count; //type: uint64
        ydk::YLeaf accounting_update_sent_count; //type: uint64
        ydk::YLeaf accounting_stop_sent_count; //type: uint64

}; // Pmipv6::Lma::Statistics::Global::AccountingStatistics


class Pmipv6::Lma::Statistics::Global::PacketStatistics : public ydk::Entity
{
    public:
        PacketStatistics();
        ~PacketStatistics();

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

        ydk::YLeaf checksum_errors; //type: uint64
        ydk::YLeaf send_drops; //type: uint64
        ydk::YLeaf receive_drops; //type: uint64
        ydk::YLeaf packets_received; //type: uint64
        ydk::YLeaf packets_sent; //type: uint64
        ydk::YLeaf send_drops_ipv6; //type: uint64
        ydk::YLeaf receive_drops_ipv6; //type: uint64
        ydk::YLeaf packets_received_ipv6; //type: uint64
        ydk::YLeaf packets_sent_ipv6; //type: uint64

}; // Pmipv6::Lma::Statistics::Global::PacketStatistics


class Pmipv6::Lma::Statistics::Global::ProtocolStatistics : public ydk::Entity
{
    public:
        ProtocolStatistics();
        ~ProtocolStatistics();

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

        class PbuReceiveStatistics; //type: Pmipv6::Lma::Statistics::Global::ProtocolStatistics::PbuReceiveStatistics
        class PbaSendStatistics; //type: Pmipv6::Lma::Statistics::Global::ProtocolStatistics::PbaSendStatistics
        class PbriSendStatistics; //type: Pmipv6::Lma::Statistics::Global::ProtocolStatistics::PbriSendStatistics
        class PbriReceiveStatistics; //type: Pmipv6::Lma::Statistics::Global::ProtocolStatistics::PbriReceiveStatistics
        class PbraSendStatistics; //type: Pmipv6::Lma::Statistics::Global::ProtocolStatistics::PbraSendStatistics
        class PbraReceiveStatistics; //type: Pmipv6::Lma::Statistics::Global::ProtocolStatistics::PbraReceiveStatistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_mobileip_oper::Pmipv6::Lma::Statistics::Global::ProtocolStatistics::PbaSendStatistics> pba_send_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_mobileip_oper::Pmipv6::Lma::Statistics::Global::ProtocolStatistics::PbraReceiveStatistics> pbra_receive_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_mobileip_oper::Pmipv6::Lma::Statistics::Global::ProtocolStatistics::PbraSendStatistics> pbra_send_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_mobileip_oper::Pmipv6::Lma::Statistics::Global::ProtocolStatistics::PbriReceiveStatistics> pbri_receive_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_mobileip_oper::Pmipv6::Lma::Statistics::Global::ProtocolStatistics::PbriSendStatistics> pbri_send_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_mobileip_oper::Pmipv6::Lma::Statistics::Global::ProtocolStatistics::PbuReceiveStatistics> pbu_receive_statistics;
        
}; // Pmipv6::Lma::Statistics::Global::ProtocolStatistics


class Pmipv6::Lma::Statistics::Global::ProtocolStatistics::PbaSendStatistics : public ydk::Entity
{
    public:
        PbaSendStatistics();
        ~PbaSendStatistics();

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

        ydk::YLeaf pba_count; //type: uint64
        ydk::YLeaf pba_drop_count; //type: uint32
        ydk::YLeaf accepted_count; //type: uint32
        ydk::YLeaf unknown_count; //type: uint32
        ydk::YLeaf unspecified_failure_count; //type: uint32
        ydk::YLeaf admin_failure_count; //type: uint32
        ydk::YLeaf resource_failure_count; //type: uint32
        ydk::YLeaf home_reg_failure_count; //type: uint32
        ydk::YLeaf home_subnet_failure_count; //type: uint32
        ydk::YLeaf bad_sequence_failure_count; //type: uint32
        ydk::YLeaf reg_type_failure_count; //type: uint32
        ydk::YLeaf authen_failure_count; //type: uint32
        ydk::YLeaf proxy_reg_not_enabled_count; //type: uint32
        ydk::YLeaf not_lma_for_this_mn_count; //type: uint32
        ydk::YLeaf no_author_for_proxy_reg_count; //type: uint32
        ydk::YLeaf no_author_for_hnp_count; //type: uint32
        ydk::YLeaf timestamp_mismatch_count; //type: uint32
        ydk::YLeaf timestamp_lower_than_previous_accepted_count; //type: uint32
        ydk::YLeaf missing_hnp_opt_count; //type: uint32
        ydk::YLeaf received_hnps_do_not_match_bce_hnps_count; //type: uint32
        ydk::YLeaf missing_mn_id_opt_count; //type: uint32
        ydk::YLeaf missing_hi_opt_count; //type: uint32
        ydk::YLeaf missing_access_tech_type_opt_count; //type: uint32
        ydk::YLeaf no_author_for_ipv4_mobility_count; //type: uint32
        ydk::YLeaf no_author_for_ipv4_hoa_count; //type: uint32
        ydk::YLeaf no_author_for_ipv6_mobility_count; //type: uint32
        ydk::YLeaf multiple_ipv4_ho_a_not_supported_count; //type: uint32
        ydk::YLeaf gre_key_opt_required_count; //type: uint32

}; // Pmipv6::Lma::Statistics::Global::ProtocolStatistics::PbaSendStatistics


class Pmipv6::Lma::Statistics::Global::ProtocolStatistics::PbraReceiveStatistics : public ydk::Entity
{
    public:
        PbraReceiveStatistics();
        ~PbraReceiveStatistics();

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

        ydk::YLeaf pbra_count; //type: uint64
        ydk::YLeaf pbra_drop_count; //type: uint32
        ydk::YLeaf success_count; //type: uint32
        ydk::YLeaf partial_success_count; //type: uint32
        ydk::YLeaf no_binding_count; //type: uint32
        ydk::YLeaf hoa_required_count; //type: uint32
        ydk::YLeaf no_author_for_global_revoc_count; //type: uint32
        ydk::YLeaf mn_identity_required_count; //type: uint32
        ydk::YLeaf mn_attached_count; //type: uint32
        ydk::YLeaf unknown_revoc_trigger_count; //type: uint32
        ydk::YLeaf revoc_function_not_supported_count; //type: uint32
        ydk::YLeaf pbr_not_supported_count; //type: uint32

}; // Pmipv6::Lma::Statistics::Global::ProtocolStatistics::PbraReceiveStatistics


class Pmipv6::Lma::Statistics::Global::ProtocolStatistics::PbraSendStatistics : public ydk::Entity
{
    public:
        PbraSendStatistics();
        ~PbraSendStatistics();

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

        ydk::YLeaf pbra_count; //type: uint64
        ydk::YLeaf pbra_drop_count; //type: uint32
        ydk::YLeaf success_count; //type: uint32
        ydk::YLeaf partial_success_count; //type: uint32
        ydk::YLeaf no_binding_count; //type: uint32
        ydk::YLeaf hoa_required_count; //type: uint32
        ydk::YLeaf no_author_for_global_revoc_count; //type: uint32
        ydk::YLeaf mn_identity_required_count; //type: uint32
        ydk::YLeaf mn_attached_count; //type: uint32
        ydk::YLeaf unknown_revoc_trigger_count; //type: uint32
        ydk::YLeaf revoc_function_not_supported_count; //type: uint32
        ydk::YLeaf pbr_not_supported_count; //type: uint32

}; // Pmipv6::Lma::Statistics::Global::ProtocolStatistics::PbraSendStatistics


class Pmipv6::Lma::Statistics::Global::ProtocolStatistics::PbriReceiveStatistics : public ydk::Entity
{
    public:
        PbriReceiveStatistics();
        ~PbriReceiveStatistics();

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

        ydk::YLeaf pbri_count; //type: uint64
        ydk::YLeaf pbri_drop_count; //type: uint32
        ydk::YLeaf unspecified_count; //type: uint32
        ydk::YLeaf admin_reason_count; //type: uint32
        ydk::YLeaf mag_handover_same_att_count; //type: uint32
        ydk::YLeaf mag_handover_different_att_count; //type: uint32
        ydk::YLeaf mag_handover_unknown_count; //type: uint32
        ydk::YLeaf user_session_termination_count; //type: uint32
        ydk::YLeaf network_session_termination_count; //type: uint32
        ydk::YLeaf out_of_sync_bce_state_count; //type: uint32
        ydk::YLeaf per_peer_policy_count; //type: uint32
        ydk::YLeaf revoking_mn_local_policy_count; //type: uint32

}; // Pmipv6::Lma::Statistics::Global::ProtocolStatistics::PbriReceiveStatistics


class Pmipv6::Lma::Statistics::Global::ProtocolStatistics::PbriSendStatistics : public ydk::Entity
{
    public:
        PbriSendStatistics();
        ~PbriSendStatistics();

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

        ydk::YLeaf pbri_count; //type: uint64
        ydk::YLeaf pbri_drop_count; //type: uint32
        ydk::YLeaf unspecified_count; //type: uint32
        ydk::YLeaf admin_reason_count; //type: uint32
        ydk::YLeaf mag_handover_same_att_count; //type: uint32
        ydk::YLeaf mag_handover_different_att_count; //type: uint32
        ydk::YLeaf mag_handover_unknown_count; //type: uint32
        ydk::YLeaf user_session_termination_count; //type: uint32
        ydk::YLeaf network_session_termination_count; //type: uint32
        ydk::YLeaf out_of_sync_bce_state_count; //type: uint32
        ydk::YLeaf per_peer_policy_count; //type: uint32
        ydk::YLeaf revoking_mn_local_policy_count; //type: uint32

}; // Pmipv6::Lma::Statistics::Global::ProtocolStatistics::PbriSendStatistics


class Pmipv6::Lma::Statistics::Global::ProtocolStatistics::PbuReceiveStatistics : public ydk::Entity
{
    public:
        PbuReceiveStatistics();
        ~PbuReceiveStatistics();

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

        ydk::YLeaf pbu_count; //type: uint64
        ydk::YLeaf pbu_drop_count; //type: uint32

}; // Pmipv6::Lma::Statistics::Global::ProtocolStatistics::PbuReceiveStatistics


class Pmipv6::Lma::Statistics::License : public ydk::Entity
{
    public:
        License();
        ~License();

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

        ydk::YLeaf lma_identifier; //type: string
        ydk::YLeaf bce_count; //type: uint32
        ydk::YLeaf peak_bce_count; //type: uint32
        ydk::YLeaf peak_bce_count_reset_timestamp; //type: uint32

}; // Pmipv6::Lma::Statistics::License


class Pmipv6::Lma::Statistics::MagStatistics : public ydk::Entity
{
    public:
        MagStatistics();
        ~MagStatistics();

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

        class MagStatistic; //type: Pmipv6::Lma::Statistics::MagStatistics::MagStatistic

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_mobileip_oper::Pmipv6::Lma::Statistics::MagStatistics::MagStatistic> > mag_statistic;
        
}; // Pmipv6::Lma::Statistics::MagStatistics


class Pmipv6::Lma::Statistics::MagStatistics::MagStatistic : public ydk::Entity
{
    public:
        MagStatistic();
        ~MagStatistic();

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

        ydk::YLeaf mag_name; //type: string
        ydk::YLeaf lma_identifier; //type: string
        class ProtocolStatistics; //type: Pmipv6::Lma::Statistics::MagStatistics::MagStatistic::ProtocolStatistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_mobileip_oper::Pmipv6::Lma::Statistics::MagStatistics::MagStatistic::ProtocolStatistics> protocol_statistics;
        
}; // Pmipv6::Lma::Statistics::MagStatistics::MagStatistic


class Pmipv6::Lma::Statistics::MagStatistics::MagStatistic::ProtocolStatistics : public ydk::Entity
{
    public:
        ProtocolStatistics();
        ~ProtocolStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PbuReceiveStatistics; //type: Pmipv6::Lma::Statistics::MagStatistics::MagStatistic::ProtocolStatistics::PbuReceiveStatistics
        class PbaSendStatistics; //type: Pmipv6::Lma::Statistics::MagStatistics::MagStatistic::ProtocolStatistics::PbaSendStatistics
        class PbriSendStatistics; //type: Pmipv6::Lma::Statistics::MagStatistics::MagStatistic::ProtocolStatistics::PbriSendStatistics
        class PbriReceiveStatistics; //type: Pmipv6::Lma::Statistics::MagStatistics::MagStatistic::ProtocolStatistics::PbriReceiveStatistics
        class PbraSendStatistics; //type: Pmipv6::Lma::Statistics::MagStatistics::MagStatistic::ProtocolStatistics::PbraSendStatistics
        class PbraReceiveStatistics; //type: Pmipv6::Lma::Statistics::MagStatistics::MagStatistic::ProtocolStatistics::PbraReceiveStatistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_mobileip_oper::Pmipv6::Lma::Statistics::MagStatistics::MagStatistic::ProtocolStatistics::PbaSendStatistics> pba_send_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_mobileip_oper::Pmipv6::Lma::Statistics::MagStatistics::MagStatistic::ProtocolStatistics::PbraReceiveStatistics> pbra_receive_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_mobileip_oper::Pmipv6::Lma::Statistics::MagStatistics::MagStatistic::ProtocolStatistics::PbraSendStatistics> pbra_send_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_mobileip_oper::Pmipv6::Lma::Statistics::MagStatistics::MagStatistic::ProtocolStatistics::PbriReceiveStatistics> pbri_receive_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_mobileip_oper::Pmipv6::Lma::Statistics::MagStatistics::MagStatistic::ProtocolStatistics::PbriSendStatistics> pbri_send_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_mobileip_oper::Pmipv6::Lma::Statistics::MagStatistics::MagStatistic::ProtocolStatistics::PbuReceiveStatistics> pbu_receive_statistics;
        
}; // Pmipv6::Lma::Statistics::MagStatistics::MagStatistic::ProtocolStatistics


class Pmipv6::Lma::Statistics::MagStatistics::MagStatistic::ProtocolStatistics::PbaSendStatistics : public ydk::Entity
{
    public:
        PbaSendStatistics();
        ~PbaSendStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pba_count; //type: uint64
        ydk::YLeaf pba_drop_count; //type: uint32
        ydk::YLeaf accepted_count; //type: uint32
        ydk::YLeaf unknown_count; //type: uint32
        ydk::YLeaf unspecified_failure_count; //type: uint32
        ydk::YLeaf admin_failure_count; //type: uint32
        ydk::YLeaf resource_failure_count; //type: uint32
        ydk::YLeaf home_reg_failure_count; //type: uint32
        ydk::YLeaf home_subnet_failure_count; //type: uint32
        ydk::YLeaf bad_sequence_failure_count; //type: uint32
        ydk::YLeaf reg_type_failure_count; //type: uint32
        ydk::YLeaf authen_failure_count; //type: uint32
        ydk::YLeaf proxy_reg_not_enabled_count; //type: uint32
        ydk::YLeaf not_lma_for_this_mn_count; //type: uint32
        ydk::YLeaf no_author_for_proxy_reg_count; //type: uint32
        ydk::YLeaf no_author_for_hnp_count; //type: uint32
        ydk::YLeaf timestamp_mismatch_count; //type: uint32
        ydk::YLeaf timestamp_lower_than_previous_accepted_count; //type: uint32
        ydk::YLeaf missing_hnp_opt_count; //type: uint32
        ydk::YLeaf received_hnps_do_not_match_bce_hnps_count; //type: uint32
        ydk::YLeaf missing_mn_id_opt_count; //type: uint32
        ydk::YLeaf missing_hi_opt_count; //type: uint32
        ydk::YLeaf missing_access_tech_type_opt_count; //type: uint32
        ydk::YLeaf no_author_for_ipv4_mobility_count; //type: uint32
        ydk::YLeaf no_author_for_ipv4_hoa_count; //type: uint32
        ydk::YLeaf no_author_for_ipv6_mobility_count; //type: uint32
        ydk::YLeaf multiple_ipv4_ho_a_not_supported_count; //type: uint32
        ydk::YLeaf gre_key_opt_required_count; //type: uint32

}; // Pmipv6::Lma::Statistics::MagStatistics::MagStatistic::ProtocolStatistics::PbaSendStatistics


class Pmipv6::Lma::Statistics::MagStatistics::MagStatistic::ProtocolStatistics::PbraReceiveStatistics : public ydk::Entity
{
    public:
        PbraReceiveStatistics();
        ~PbraReceiveStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pbra_count; //type: uint64
        ydk::YLeaf pbra_drop_count; //type: uint32
        ydk::YLeaf success_count; //type: uint32
        ydk::YLeaf partial_success_count; //type: uint32
        ydk::YLeaf no_binding_count; //type: uint32
        ydk::YLeaf hoa_required_count; //type: uint32
        ydk::YLeaf no_author_for_global_revoc_count; //type: uint32
        ydk::YLeaf mn_identity_required_count; //type: uint32
        ydk::YLeaf mn_attached_count; //type: uint32
        ydk::YLeaf unknown_revoc_trigger_count; //type: uint32
        ydk::YLeaf revoc_function_not_supported_count; //type: uint32
        ydk::YLeaf pbr_not_supported_count; //type: uint32

}; // Pmipv6::Lma::Statistics::MagStatistics::MagStatistic::ProtocolStatistics::PbraReceiveStatistics


class Pmipv6::Lma::Statistics::MagStatistics::MagStatistic::ProtocolStatistics::PbraSendStatistics : public ydk::Entity
{
    public:
        PbraSendStatistics();
        ~PbraSendStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pbra_count; //type: uint64
        ydk::YLeaf pbra_drop_count; //type: uint32
        ydk::YLeaf success_count; //type: uint32
        ydk::YLeaf partial_success_count; //type: uint32
        ydk::YLeaf no_binding_count; //type: uint32
        ydk::YLeaf hoa_required_count; //type: uint32
        ydk::YLeaf no_author_for_global_revoc_count; //type: uint32
        ydk::YLeaf mn_identity_required_count; //type: uint32
        ydk::YLeaf mn_attached_count; //type: uint32
        ydk::YLeaf unknown_revoc_trigger_count; //type: uint32
        ydk::YLeaf revoc_function_not_supported_count; //type: uint32
        ydk::YLeaf pbr_not_supported_count; //type: uint32

}; // Pmipv6::Lma::Statistics::MagStatistics::MagStatistic::ProtocolStatistics::PbraSendStatistics


class Pmipv6::Lma::Statistics::MagStatistics::MagStatistic::ProtocolStatistics::PbriReceiveStatistics : public ydk::Entity
{
    public:
        PbriReceiveStatistics();
        ~PbriReceiveStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pbri_count; //type: uint64
        ydk::YLeaf pbri_drop_count; //type: uint32
        ydk::YLeaf unspecified_count; //type: uint32
        ydk::YLeaf admin_reason_count; //type: uint32
        ydk::YLeaf mag_handover_same_att_count; //type: uint32
        ydk::YLeaf mag_handover_different_att_count; //type: uint32
        ydk::YLeaf mag_handover_unknown_count; //type: uint32
        ydk::YLeaf user_session_termination_count; //type: uint32
        ydk::YLeaf network_session_termination_count; //type: uint32
        ydk::YLeaf out_of_sync_bce_state_count; //type: uint32
        ydk::YLeaf per_peer_policy_count; //type: uint32
        ydk::YLeaf revoking_mn_local_policy_count; //type: uint32

}; // Pmipv6::Lma::Statistics::MagStatistics::MagStatistic::ProtocolStatistics::PbriReceiveStatistics


class Pmipv6::Lma::Statistics::MagStatistics::MagStatistic::ProtocolStatistics::PbriSendStatistics : public ydk::Entity
{
    public:
        PbriSendStatistics();
        ~PbriSendStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pbri_count; //type: uint64
        ydk::YLeaf pbri_drop_count; //type: uint32
        ydk::YLeaf unspecified_count; //type: uint32
        ydk::YLeaf admin_reason_count; //type: uint32
        ydk::YLeaf mag_handover_same_att_count; //type: uint32
        ydk::YLeaf mag_handover_different_att_count; //type: uint32
        ydk::YLeaf mag_handover_unknown_count; //type: uint32
        ydk::YLeaf user_session_termination_count; //type: uint32
        ydk::YLeaf network_session_termination_count; //type: uint32
        ydk::YLeaf out_of_sync_bce_state_count; //type: uint32
        ydk::YLeaf per_peer_policy_count; //type: uint32
        ydk::YLeaf revoking_mn_local_policy_count; //type: uint32

}; // Pmipv6::Lma::Statistics::MagStatistics::MagStatistic::ProtocolStatistics::PbriSendStatistics


class Pmipv6::Lma::Statistics::MagStatistics::MagStatistic::ProtocolStatistics::PbuReceiveStatistics : public ydk::Entity
{
    public:
        PbuReceiveStatistics();
        ~PbuReceiveStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pbu_count; //type: uint64
        ydk::YLeaf pbu_drop_count; //type: uint32

}; // Pmipv6::Lma::Statistics::MagStatistics::MagStatistic::ProtocolStatistics::PbuReceiveStatistics

class Pmipv6Addr : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf ipv4;
        static const ydk::Enum::YLeaf ipv6;
        static const ydk::Enum::YLeaf pmipv6_addr_ipv4_ipv6;

};

class Pmipv6Role : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf wlan;
        static const ydk::Enum::YLeaf gpp;
        static const ydk::Enum::YLeaf lte;
        static const ydk::Enum::YLeaf wi_max;
        static const ydk::Enum::YLeaf gma;
        static const ydk::Enum::YLeaf rmax;

};

class Pmipv6Encap : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf ipv6;
        static const ydk::Enum::YLeaf ipv6_ipv4;
        static const ydk::Enum::YLeaf ipv6_udp;
        static const ydk::Enum::YLeaf gre_ipv4;
        static const ydk::Enum::YLeaf gre_ipv6;
        static const ydk::Enum::YLeaf gre;
        static const ydk::Enum::YLeaf mgre_ipv4;
        static const ydk::Enum::YLeaf mgre_ipv6;
        static const ydk::Enum::YLeaf mip_udp;
        static const ydk::Enum::YLeaf mip_mudp;
        static const ydk::Enum::YLeaf max;

};


}
}

#endif /* _CISCO_IOS_XR_IP_MOBILEIP_OPER_ */

