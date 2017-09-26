#ifndef _CISCO_IOS_XR_IPV4_MA_CFG_
#define _CISCO_IOS_XR_IPV4_MA_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_ma_cfg {

class Ipv4NetworkGlobal : public ydk::Entity
{
    public:
        Ipv4NetworkGlobal();
        ~Ipv4NetworkGlobal();

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

        ydk::YLeaf source_route; //type: boolean
        ydk::YLeaf reassemble_max_packets; //type: uint32
        ydk::YLeaf reassemble_time_out; //type: uint32
        class Unnumbered; //type: Ipv4NetworkGlobal::Unnumbered
        class Qppb; //type: Ipv4NetworkGlobal::Qppb

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ma_cfg::Ipv4NetworkGlobal::Qppb> qppb;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ma_cfg::Ipv4NetworkGlobal::Unnumbered> unnumbered;
        
}; // Ipv4NetworkGlobal


class Ipv4NetworkGlobal::Qppb : public ydk::Entity
{
    public:
        Qppb();
        ~Qppb();

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

        ydk::YLeaf source; //type: Ipv4Qppb
        ydk::YLeaf destination; //type: Ipv4Qppb

}; // Ipv4NetworkGlobal::Qppb


class Ipv4NetworkGlobal::Unnumbered : public ydk::Entity
{
    public:
        Unnumbered();
        ~Unnumbered();

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

        class Mpls; //type: Ipv4NetworkGlobal::Unnumbered::Mpls

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ma_cfg::Ipv4NetworkGlobal::Unnumbered::Mpls> mpls;
        
}; // Ipv4NetworkGlobal::Unnumbered


class Ipv4NetworkGlobal::Unnumbered::Mpls : public ydk::Entity
{
    public:
        Mpls();
        ~Mpls();

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

        class Te; //type: Ipv4NetworkGlobal::Unnumbered::Mpls::Te

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_ma_cfg::Ipv4NetworkGlobal::Unnumbered::Mpls::Te> te;
        
}; // Ipv4NetworkGlobal::Unnumbered::Mpls


class Ipv4NetworkGlobal::Unnumbered::Mpls::Te : public ydk::Entity
{
    public:
        Te();
        ~Te();

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

        ydk::YLeaf interface; //type: string

}; // Ipv4NetworkGlobal::Unnumbered::Mpls::Te

class SubscriberPta : public ydk::Entity
{
    public:
        SubscriberPta();
        ~SubscriberPta();

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

        ydk::YLeaf tcp_mss_adjust; //type: uint32

}; // SubscriberPta

class Ipv4Qppb : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf ip_prec;
        static const ydk::Enum::YLeaf qos_grp;
        static const ydk::Enum::YLeaf both;

};


}
}

#endif /* _CISCO_IOS_XR_IPV4_MA_CFG_ */

