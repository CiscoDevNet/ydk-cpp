#ifndef _CISCO_IOS_XE_OSPF_OPER_1_
#define _CISCO_IOS_XE_OSPF_OPER_1_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_ospf_oper_0.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_ospf_oper {


class OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::LinkData : public ydk::Entity
{
    public:
        LinkData();
        ~LinkData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rtr_priority; //type: uint8
        ydk::YLeaf link_local_interface_address; //type: string
        ydk::YLeaf num_of_prefixes; //type: uint32
        ydk::YLeaf lsa_id_options; //type: Ospfv3LsaOptions

}; // OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::LinkData


class OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::IaPrefix : public ydk::Entity
{
    public:
        IaPrefix();
        ~IaPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf referenced_ls_type; //type: uint16
        ydk::YLeaf referenced_link_state_id; //type: uint32
        ydk::YLeaf referenced_adv_router; //type: string
        ydk::YLeaf num_of_prefixes; //type: uint16

}; // OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::IaPrefix


class OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Link : public ydk::Entity
{
    public:
        Ospfv3Link();
        ~Ospfv3Link();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_id; //type: uint32
        ydk::YLeaf neighbor_interface_id; //type: uint32
        ydk::YLeaf neighbor_router_id; //type: uint32
        ydk::YLeaf type; //type: uint8
        ydk::YLeaf metric; //type: uint16

}; // OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Link


class OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Prefix : public ydk::Entity
{
    public:
        Ospfv3Prefix();
        ~Ospfv3Prefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_options; //type: string

}; // OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Prefix


class OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3IaPrefix : public ydk::Entity
{
    public:
        Ospfv3IaPrefix();
        ~Ospfv3IaPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_options; //type: string

}; // OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3IaPrefix


class OspfOperData::OspfState::OspfInstance::MultiTopology : public ydk::Entity
{
    public:
        MultiTopology();
        ~MultiTopology();

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

}; // OspfOperData::OspfState::OspfInstance::MultiTopology


}
}

#endif /* _CISCO_IOS_XE_OSPF_OPER_1_ */

