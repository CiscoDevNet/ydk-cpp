#ifndef _CISCO_IOS_XR_BUNDLEMGR_OPER_4_
#define _CISCO_IOS_XR_BUNDLEMGR_OPER_4_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_bundlemgr_oper_3.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_bundlemgr_oper {


class BundlesAdjacency::Nodes::Node::Brief::BundleData::SubInterface::LoadBalanceData : public ydk::Entity
{
    public:
        LoadBalanceData();
        ~LoadBalanceData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: LoadBalance
        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf local_link_threshold; //type: uint32

}; // BundlesAdjacency::Nodes::Node::Brief::BundleData::SubInterface::LoadBalanceData


class BundlesAdjacency::Nodes::Node::Bundles : public ydk::Entity
{
    public:
        Bundles();
        ~Bundles();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Bundle; //type: BundlesAdjacency::Nodes::Node::Bundles::Bundle

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundlesAdjacency::Nodes::Node::Bundles::Bundle> > bundle;
        
}; // BundlesAdjacency::Nodes::Node::Bundles


class BundlesAdjacency::Nodes::Node::Bundles::Bundle : public ydk::Entity
{
    public:
        Bundle();
        ~Bundle();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bundle_name; //type: string
        class BundleInfo; //type: BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo> bundle_info;
        
}; // BundlesAdjacency::Nodes::Node::Bundles::Bundle


class BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo : public ydk::Entity
{
    public:
        BundleInfo();
        ~BundleInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf media; //type: BundleMedia1
        ydk::YLeaf max_member_count; //type: uint32
        ydk::YLeaf avoid_rebalance; //type: boolean
        class Brief; //type: BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief
        class LoadBalanceData; //type: BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::LoadBalanceData
        class Member; //type: BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Member
        class SubInterface; //type: BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::SubInterface

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief> brief;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::LoadBalanceData> load_balance_data;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Member> > member;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::SubInterface> > sub_interface;
        
}; // BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo


class BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief : public ydk::Entity
{
    public:
        Brief();
        ~Brief();

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
        ydk::YLeaf sub_interface_count; //type: uint32
        ydk::YLeaf member_count; //type: uint32
        ydk::YLeaf total_weight; //type: uint32
        class SubInterface; //type: BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief::SubInterface

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief::SubInterface> > sub_interface;
        
}; // BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief


class BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief::SubInterface : public ydk::Entity
{
    public:
        SubInterface();
        ~SubInterface();

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
        class LoadBalanceData; //type: BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief::SubInterface::LoadBalanceData

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief::SubInterface::LoadBalanceData> load_balance_data;
        
}; // BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief::SubInterface


class BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief::SubInterface::LoadBalanceData : public ydk::Entity
{
    public:
        LoadBalanceData();
        ~LoadBalanceData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: LoadBalance
        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf local_link_threshold; //type: uint32

}; // BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief::SubInterface::LoadBalanceData


class BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::LoadBalanceData : public ydk::Entity
{
    public:
        LoadBalanceData();
        ~LoadBalanceData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: LoadBalance
        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf local_link_threshold; //type: uint32

}; // BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::LoadBalanceData


class BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Member : public ydk::Entity
{
    public:
        Member();
        ~Member();

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
        ydk::YLeaf link_id; //type: uint8
        ydk::YLeaf link_order_number; //type: uint8
        ydk::YLeaf bandwidth; //type: uint8

}; // BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Member


class BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::SubInterface : public ydk::Entity
{
    public:
        SubInterface();
        ~SubInterface();

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
        class LoadBalanceData; //type: BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::SubInterface::LoadBalanceData

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::SubInterface::LoadBalanceData> load_balance_data;
        
}; // BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::SubInterface


class BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::SubInterface::LoadBalanceData : public ydk::Entity
{
    public:
        LoadBalanceData();
        ~LoadBalanceData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: LoadBalance
        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf local_link_threshold; //type: uint32

}; // BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::SubInterface::LoadBalanceData


}
}

#endif /* _CISCO_IOS_XR_BUNDLEMGR_OPER_4_ */

