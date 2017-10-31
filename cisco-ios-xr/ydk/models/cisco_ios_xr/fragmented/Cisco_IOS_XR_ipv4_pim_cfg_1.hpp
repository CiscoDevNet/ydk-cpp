#ifndef _CISCO_IOS_XR_IPV4_PIM_CFG_1_
#define _CISCO_IOS_XR_IPV4_PIM_CFG_1_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_ipv4_pim_cfg_0.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_pim_cfg {


class Pim::DefaultContext::Ipv4::Mofrr::CloneSources::CloneSource : public ydk::Entity
{
    public:
        CloneSource();
        ~CloneSource();

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

        ydk::YLeaf source; //type: string
        ydk::YLeaf primary; //type: string
        ydk::YLeaf backup; //type: string
        ydk::YLeaf prefix_length; //type: uint8

}; // Pim::DefaultContext::Ipv4::Mofrr::CloneSources::CloneSource


class Pim::DefaultContext::Ipv4::Paths : public ydk::Entity
{
    public:
        Paths();
        ~Paths();

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

        class Path; //type: Pim::DefaultContext::Ipv4::Paths::Path

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::Paths::Path> > path;
        
}; // Pim::DefaultContext::Ipv4::Paths


class Pim::DefaultContext::Ipv4::Paths::Path : public ydk::Entity
{
    public:
        Path();
        ~Path();

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

        ydk::YLeaf source_address; //type: string
        ydk::YLeaf prefix_length; //type: uint8
        ydk::YLeafList rpf_proxy_address; //type: list of  string

}; // Pim::DefaultContext::Ipv4::Paths::Path


class Pim::DefaultContext::Ipv4::AllowRp : public ydk::Entity
{
    public:
        AllowRp();
        ~AllowRp();

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

        ydk::YLeaf rp_list_name; //type: string
        ydk::YLeaf group_list_name; //type: string

}; // Pim::DefaultContext::Ipv4::AllowRp


class Pim::DefaultContext::Ipv4::Convergence : public ydk::Entity
{
    public:
        Convergence();
        ~Convergence();

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

        ydk::YLeaf rpf_conflict_join_delay; //type: uint32
        ydk::YLeaf link_down_prune_delay; //type: uint32

}; // Pim::DefaultContext::Ipv4::Convergence


}
}

#endif /* _CISCO_IOS_XR_IPV4_PIM_CFG_1_ */

