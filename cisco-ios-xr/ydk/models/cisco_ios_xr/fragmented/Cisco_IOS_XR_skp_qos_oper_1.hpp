#ifndef _CISCO_IOS_XR_SKP_QOS_OPER_1_
#define _CISCO_IOS_XR_SKP_QOS_OPER_1_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_skp_qos_oper_0.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_skp_qos_oper {


class PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node_config; //type: string
        class Police; //type: PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police
        class Shape; //type: PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape
        class Wfq; //type: PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police> police;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape> shape;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq> wfq;
        
}; // PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config


class PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police : public ydk::Entity
{
    public:
        Police();
        ~Police();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf color_aware; //type: boolean
        ydk::YLeaf policer_type; //type: TbAlgorithm
        class Cir; //type: PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cir
        class Cbs; //type: PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cbs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cbs> cbs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cir> cir;
        
}; // PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police


class PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cbs : public ydk::Entity
{
    public:
        Cbs();
        ~Cbs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: QosUnit

}; // PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cbs


class PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cir : public ydk::Entity
{
    public:
        Cir();
        ~Cir();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: QosUnit

}; // PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cir


class PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape : public ydk::Entity
{
    public:
        Shape();
        ~Shape();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Pir; //type: PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pir
        class Pbs; //type: PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pbs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pbs> pbs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pir> pir;
        
}; // PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape


class PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pbs : public ydk::Entity
{
    public:
        Pbs();
        ~Pbs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: QosUnit

}; // PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pbs


class PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pir : public ydk::Entity
{
    public:
        Pir();
        ~Pir();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: QosUnit

}; // PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pir


class PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq : public ydk::Entity
{
    public:
        Wfq();
        ~Wfq();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf excess_ratio; //type: uint16
        class Bandwidth; //type: PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::Bandwidth
        class SumOfBandwidth; //type: PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::SumOfBandwidth

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::Bandwidth> bandwidth;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::SumOfBandwidth> sum_of_bandwidth;
        
}; // PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq


class PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::Bandwidth : public ydk::Entity
{
    public:
        Bandwidth();
        ~Bandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: QosUnit

}; // PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::Bandwidth


class PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::SumOfBandwidth : public ydk::Entity
{
    public:
        SumOfBandwidth();
        ~SumOfBandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: QosUnit

}; // PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::SumOfBandwidth


class PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result : public ydk::Entity
{
    public:
        Result();
        ~Result();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf stats_id; //type: uint32
        class Queue; //type: PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Queue
        class Police; //type: PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Police

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Police> police;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Queue> queue;
        
}; // PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result


class PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Police : public ydk::Entity
{
    public:
        Police();
        ~Police();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf token_bucket_id; //type: uint32
        ydk::YLeaf conform; //type: uint32
        ydk::YLeaf exceed; //type: uint32
        ydk::YLeaf violate; //type: uint32

}; // PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Police


class PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Queue : public ydk::Entity
{
    public:
        Queue();
        ~Queue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf queue_id; //type: uint32
        ydk::YLeaf commit_tx; //type: uint32
        ydk::YLeaf excess_tx; //type: uint32
        ydk::YLeaf drop; //type: uint32

}; // PlatformQosEa::Nodes::Node::BundleInterfaces::BundleInterface::MemberInterfaces::MemberInterface::BundleOutput::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Queue


class PlatformQosEa::Nodes::Node::Interfaces : public ydk::Entity
{
    public:
        Interfaces();
        ~Interfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Interface; //type: PlatformQosEa::Nodes::Node::Interfaces::Interface

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::Interfaces::Interface> > interface;
        
}; // PlatformQosEa::Nodes::Node::Interfaces


class PlatformQosEa::Nodes::Node::Interfaces::Interface : public ydk::Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_name; //type: string
        class Output; //type: PlatformQosEa::Nodes::Node::Interfaces::Interface::Output
        class Input; //type: PlatformQosEa::Nodes::Node::Interfaces::Interface::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::Interfaces::Interface::Input> input;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::Interfaces::Interface::Output> output;
        
}; // PlatformQosEa::Nodes::Node::Interfaces::Interface


class PlatformQosEa::Nodes::Node::Interfaces::Interface::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Details; //type: PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details> details;
        
}; // PlatformQosEa::Nodes::Node::Interfaces::Interface::Input


class PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details : public ydk::Entity
{
    public:
        Details();
        ~Details();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Header; //type: PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::Header
        class InterfaceParameters; //type: PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::InterfaceParameters
        class SkywarpQosPolicyClass; //type: PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::Header> header;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::InterfaceParameters> interface_parameters;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass> skywarp_qos_policy_class;
        
}; // PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details


class PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::Header : public ydk::Entity
{
    public:
        Header();
        ~Header();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf policy_name; //type: string
        ydk::YLeaf direction; //type: string
        ydk::YLeaf classes; //type: uint16

}; // PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::Header


class PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::InterfaceParameters : public ydk::Entity
{
    public:
        InterfaceParameters();
        ~InterfaceParameters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf policy_name; //type: string
        ydk::YLeaf hierarchical_depth; //type: uint8
        ydk::YLeaf interface_type; //type: string
        ydk::YLeaf interface_rate; //type: uint32
        ydk::YLeaf port_shaper_rate; //type: uint32
        ydk::YLeaf interface_handle; //type: string
        ydk::YLeaf under_line_interface_handle; //type: string
        ydk::YLeaf bundle_id; //type: uint16
        ydk::YLeaf uidb_index; //type: uint16
        ydk::YLeaf qos_interface_handle; //type: uint64
        ydk::YLeaf port; //type: uint32
        ydk::YLeaf policy_map_id; //type: uint16

}; // PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::InterfaceParameters


class PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass : public ydk::Entity
{
    public:
        SkywarpQosPolicyClass();
        ~SkywarpQosPolicyClass();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class QosShowEaPclassSt; //type: PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt> > qos_show_ea_pclass_st;
        
}; // PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass


class PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt : public ydk::Entity
{
    public:
        QosShowEaPclassSt();
        ~QosShowEaPclassSt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf index_; //type: uint16
        ydk::YLeaf class_level; //type: uint8
        ydk::YLeaf class_name; //type: string
        ydk::YLeaf policy_name; //type: string
        ydk::YLeaf node_flags; //type: string
        ydk::YLeaf stats_flags; //type: string
        class Config; //type: PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config
        class Result; //type: PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config> config;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result> result;
        
}; // PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt


class PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node_config; //type: string
        class Police; //type: PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police
        class Shape; //type: PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape
        class Wfq; //type: PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police> police;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape> shape;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq> wfq;
        
}; // PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config


class PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police : public ydk::Entity
{
    public:
        Police();
        ~Police();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf color_aware; //type: boolean
        ydk::YLeaf policer_type; //type: TbAlgorithm
        class Cir; //type: PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cir
        class Cbs; //type: PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cbs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cbs> cbs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cir> cir;
        
}; // PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police


class PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cbs : public ydk::Entity
{
    public:
        Cbs();
        ~Cbs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: QosUnit

}; // PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cbs


class PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cir : public ydk::Entity
{
    public:
        Cir();
        ~Cir();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: QosUnit

}; // PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cir


class PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape : public ydk::Entity
{
    public:
        Shape();
        ~Shape();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Pir; //type: PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pir
        class Pbs; //type: PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pbs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pbs> pbs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pir> pir;
        
}; // PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape


class PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pbs : public ydk::Entity
{
    public:
        Pbs();
        ~Pbs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: QosUnit

}; // PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pbs


class PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pir : public ydk::Entity
{
    public:
        Pir();
        ~Pir();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: QosUnit

}; // PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pir


class PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq : public ydk::Entity
{
    public:
        Wfq();
        ~Wfq();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf excess_ratio; //type: uint16
        class Bandwidth; //type: PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::Bandwidth
        class SumOfBandwidth; //type: PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::SumOfBandwidth

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::Bandwidth> bandwidth;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::SumOfBandwidth> sum_of_bandwidth;
        
}; // PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq


class PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::Bandwidth : public ydk::Entity
{
    public:
        Bandwidth();
        ~Bandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: QosUnit

}; // PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::Bandwidth


class PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::SumOfBandwidth : public ydk::Entity
{
    public:
        SumOfBandwidth();
        ~SumOfBandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: QosUnit

}; // PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::SumOfBandwidth


class PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result : public ydk::Entity
{
    public:
        Result();
        ~Result();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf stats_id; //type: uint32
        class Queue; //type: PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Queue
        class Police; //type: PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Police

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Police> police;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Queue> queue;
        
}; // PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result


class PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Police : public ydk::Entity
{
    public:
        Police();
        ~Police();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf token_bucket_id; //type: uint32
        ydk::YLeaf conform; //type: uint32
        ydk::YLeaf exceed; //type: uint32
        ydk::YLeaf violate; //type: uint32

}; // PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Police


class PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Queue : public ydk::Entity
{
    public:
        Queue();
        ~Queue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf queue_id; //type: uint32
        ydk::YLeaf commit_tx; //type: uint32
        ydk::YLeaf excess_tx; //type: uint32
        ydk::YLeaf drop; //type: uint32

}; // PlatformQosEa::Nodes::Node::Interfaces::Interface::Input::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Queue


class PlatformQosEa::Nodes::Node::Interfaces::Interface::Output : public ydk::Entity
{
    public:
        Output();
        ~Output();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Details; //type: PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details> details;
        
}; // PlatformQosEa::Nodes::Node::Interfaces::Interface::Output


class PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details : public ydk::Entity
{
    public:
        Details();
        ~Details();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Header; //type: PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::Header
        class InterfaceParameters; //type: PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::InterfaceParameters
        class SkywarpQosPolicyClass; //type: PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::Header> header;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::InterfaceParameters> interface_parameters;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass> skywarp_qos_policy_class;
        
}; // PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details


class PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::Header : public ydk::Entity
{
    public:
        Header();
        ~Header();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf policy_name; //type: string
        ydk::YLeaf direction; //type: string
        ydk::YLeaf classes; //type: uint16

}; // PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::Header


class PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::InterfaceParameters : public ydk::Entity
{
    public:
        InterfaceParameters();
        ~InterfaceParameters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf policy_name; //type: string
        ydk::YLeaf hierarchical_depth; //type: uint8
        ydk::YLeaf interface_type; //type: string
        ydk::YLeaf interface_rate; //type: uint32
        ydk::YLeaf port_shaper_rate; //type: uint32
        ydk::YLeaf interface_handle; //type: string
        ydk::YLeaf under_line_interface_handle; //type: string
        ydk::YLeaf bundle_id; //type: uint16
        ydk::YLeaf uidb_index; //type: uint16
        ydk::YLeaf qos_interface_handle; //type: uint64
        ydk::YLeaf port; //type: uint32
        ydk::YLeaf policy_map_id; //type: uint16

}; // PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::InterfaceParameters


class PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass : public ydk::Entity
{
    public:
        SkywarpQosPolicyClass();
        ~SkywarpQosPolicyClass();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class QosShowEaPclassSt; //type: PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt> > qos_show_ea_pclass_st;
        
}; // PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass


class PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt : public ydk::Entity
{
    public:
        QosShowEaPclassSt();
        ~QosShowEaPclassSt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf index_; //type: uint16
        ydk::YLeaf class_level; //type: uint8
        ydk::YLeaf class_name; //type: string
        ydk::YLeaf policy_name; //type: string
        ydk::YLeaf node_flags; //type: string
        ydk::YLeaf stats_flags; //type: string
        class Config; //type: PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config
        class Result; //type: PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config> config;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result> result;
        
}; // PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt


class PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node_config; //type: string
        class Police; //type: PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police
        class Shape; //type: PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape
        class Wfq; //type: PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police> police;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape> shape;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq> wfq;
        
}; // PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config


class PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police : public ydk::Entity
{
    public:
        Police();
        ~Police();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf color_aware; //type: boolean
        ydk::YLeaf policer_type; //type: TbAlgorithm
        class Cir; //type: PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cir
        class Cbs; //type: PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cbs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cbs> cbs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cir> cir;
        
}; // PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police


class PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cbs : public ydk::Entity
{
    public:
        Cbs();
        ~Cbs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: QosUnit

}; // PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cbs


class PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cir : public ydk::Entity
{
    public:
        Cir();
        ~Cir();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: QosUnit

}; // PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Police::Cir


class PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape : public ydk::Entity
{
    public:
        Shape();
        ~Shape();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Pir; //type: PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pir
        class Pbs; //type: PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pbs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pbs> pbs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pir> pir;
        
}; // PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape


class PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pbs : public ydk::Entity
{
    public:
        Pbs();
        ~Pbs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: QosUnit

}; // PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pbs


class PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pir : public ydk::Entity
{
    public:
        Pir();
        ~Pir();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: QosUnit

}; // PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Shape::Pir


class PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq : public ydk::Entity
{
    public:
        Wfq();
        ~Wfq();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf excess_ratio; //type: uint16
        class Bandwidth; //type: PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::Bandwidth
        class SumOfBandwidth; //type: PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::SumOfBandwidth

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::Bandwidth> bandwidth;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::SumOfBandwidth> sum_of_bandwidth;
        
}; // PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq


class PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::Bandwidth : public ydk::Entity
{
    public:
        Bandwidth();
        ~Bandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: QosUnit

}; // PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::Bandwidth


class PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::SumOfBandwidth : public ydk::Entity
{
    public:
        SumOfBandwidth();
        ~SumOfBandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf unit; //type: QosUnit

}; // PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Config::Wfq::SumOfBandwidth


class PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result : public ydk::Entity
{
    public:
        Result();
        ~Result();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf stats_id; //type: uint32
        class Queue; //type: PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Queue
        class Police; //type: PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Police

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Police> police;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_skp_qos_oper::PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Queue> queue;
        
}; // PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result


class PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Police : public ydk::Entity
{
    public:
        Police();
        ~Police();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf token_bucket_id; //type: uint32
        ydk::YLeaf conform; //type: uint32
        ydk::YLeaf exceed; //type: uint32
        ydk::YLeaf violate; //type: uint32

}; // PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Police


class PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Queue : public ydk::Entity
{
    public:
        Queue();
        ~Queue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf queue_id; //type: uint32
        ydk::YLeaf commit_tx; //type: uint32
        ydk::YLeaf excess_tx; //type: uint32
        ydk::YLeaf drop; //type: uint32

}; // PlatformQosEa::Nodes::Node::Interfaces::Interface::Output::Details::SkywarpQosPolicyClass::QosShowEaPclassSt::Result::Queue


}
}

#endif /* _CISCO_IOS_XR_SKP_QOS_OPER_1_ */

