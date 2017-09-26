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


class Pim::Vrfs::Vrf::Ipv6::RpfVectorEnable : public ydk::Entity
{
    public:
        RpfVectorEnable();
        ~RpfVectorEnable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: empty
        ydk::YLeaf allow_ebgp; //type: empty
        ydk::YLeaf disable_ibgp; //type: empty

}; // Pim::Vrfs::Vrf::Ipv6::RpfVectorEnable


class Pim::Vrfs::Vrf::Ipv6::SgExpiryTimer : public ydk::Entity
{
    public:
        SgExpiryTimer();
        ~SgExpiryTimer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interval; //type: uint32
        ydk::YLeaf access_list_name; //type: string

}; // Pim::Vrfs::Vrf::Ipv6::SgExpiryTimer


class Pim::Vrfs::Vrf::Ipv6::SparseModeRpAddresses : public ydk::Entity
{
    public:
        SparseModeRpAddresses();
        ~SparseModeRpAddresses();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SparseModeRpAddress; //type: Pim::Vrfs::Vrf::Ipv6::SparseModeRpAddresses::SparseModeRpAddress

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv6::SparseModeRpAddresses::SparseModeRpAddress> > sparse_mode_rp_address;
        
}; // Pim::Vrfs::Vrf::Ipv6::SparseModeRpAddresses


class Pim::Vrfs::Vrf::Ipv6::SparseModeRpAddresses::SparseModeRpAddress : public ydk::Entity
{
    public:
        SparseModeRpAddress();
        ~SparseModeRpAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rp_address; //type: string
        ydk::YLeaf access_list_name; //type: string
        ydk::YLeaf auto_rp_override; //type: boolean

}; // Pim::Vrfs::Vrf::Ipv6::SparseModeRpAddresses::SparseModeRpAddress


class Pim::Vrfs::Vrf::Ipv6::Ssm : public ydk::Entity
{
    public:
        Ssm();
        ~Ssm();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf disable; //type: boolean
        ydk::YLeaf range; //type: string

}; // Pim::Vrfs::Vrf::Ipv6::Ssm


}
}

#endif /* _CISCO_IOS_XR_IPV4_PIM_CFG_1_ */

