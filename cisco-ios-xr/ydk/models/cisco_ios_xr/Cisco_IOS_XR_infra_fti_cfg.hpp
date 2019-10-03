#ifndef _CISCO_IOS_XR_INFRA_FTI_CFG_
#define _CISCO_IOS_XR_INFRA_FTI_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_infra_fti_cfg {

class DciFabricInterconnect : public ydk::Entity
{
    public:
        DciFabricInterconnect();
        ~DciFabricInterconnect();

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

        ydk::YLeaf identity; //type: string
        class Fabrics; //type: DciFabricInterconnect::Fabrics
        class Acp; //type: DciFabricInterconnect::Acp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_fti_cfg::DciFabricInterconnect::Fabrics> fabrics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_fti_cfg::DciFabricInterconnect::Acp> acp;
        
}; // DciFabricInterconnect


class DciFabricInterconnect::Fabrics : public ydk::Entity
{
    public:
        Fabrics();
        ~Fabrics();

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

        class Fabric; //type: DciFabricInterconnect::Fabrics::Fabric

        ydk::YList fabric;
        
}; // DciFabricInterconnect::Fabrics


class DciFabricInterconnect::Fabrics::Fabric : public ydk::Entity
{
    public:
        Fabric();
        ~Fabric();

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

        ydk::YLeaf id1; //type: uint32
        ydk::YLeaf ssl; //type: string
        class Controllers; //type: DciFabricInterconnect::Fabrics::Fabric::Controllers

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_fti_cfg::DciFabricInterconnect::Fabrics::Fabric::Controllers> controllers;
        
}; // DciFabricInterconnect::Fabrics::Fabric


class DciFabricInterconnect::Fabrics::Fabric::Controllers : public ydk::Entity
{
    public:
        Controllers();
        ~Controllers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Controller; //type: DciFabricInterconnect::Fabrics::Fabric::Controllers::Controller

        ydk::YList controller;
        
}; // DciFabricInterconnect::Fabrics::Fabric::Controllers


class DciFabricInterconnect::Fabrics::Fabric::Controllers::Controller : public ydk::Entity
{
    public:
        Controller();
        ~Controller();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip1; //type: string

}; // DciFabricInterconnect::Fabrics::Fabric::Controllers::Controller


class DciFabricInterconnect::Acp : public ydk::Entity
{
    public:
        Acp();
        ~Acp();

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

        ydk::YLeaf nve_id; //type: uint32
        ydk::YLeaf bgp_as; //type: uint32
        ydk::YLeaf bg_name; //type: string
        class BdRange; //type: DciFabricInterconnect::Acp::BdRange
        class VniRange; //type: DciFabricInterconnect::Acp::VniRange
        class BviRange; //type: DciFabricInterconnect::Acp::BviRange
        class Vrfs; //type: DciFabricInterconnect::Acp::Vrfs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_fti_cfg::DciFabricInterconnect::Acp::BdRange> bd_range;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_fti_cfg::DciFabricInterconnect::Acp::VniRange> vni_range;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_fti_cfg::DciFabricInterconnect::Acp::BviRange> bvi_range;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_fti_cfg::DciFabricInterconnect::Acp::Vrfs> vrfs;
        
}; // DciFabricInterconnect::Acp


class DciFabricInterconnect::Acp::BdRange : public ydk::Entity
{
    public:
        BdRange();
        ~BdRange();

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

        ydk::YLeaf bd_min; //type: uint32
        ydk::YLeaf bd_max; //type: uint32

}; // DciFabricInterconnect::Acp::BdRange


class DciFabricInterconnect::Acp::VniRange : public ydk::Entity
{
    public:
        VniRange();
        ~VniRange();

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

        ydk::YLeaf vni_min; //type: uint32
        ydk::YLeaf vni_max; //type: uint32

}; // DciFabricInterconnect::Acp::VniRange


class DciFabricInterconnect::Acp::BviRange : public ydk::Entity
{
    public:
        BviRange();
        ~BviRange();

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

        ydk::YLeaf bvi_min; //type: uint32
        ydk::YLeaf bvi_max; //type: uint32

}; // DciFabricInterconnect::Acp::BviRange


class DciFabricInterconnect::Acp::Vrfs : public ydk::Entity
{
    public:
        Vrfs();
        ~Vrfs();

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

        class Vrf; //type: DciFabricInterconnect::Acp::Vrfs::Vrf

        ydk::YList vrf;
        
}; // DciFabricInterconnect::Acp::Vrfs


class DciFabricInterconnect::Acp::Vrfs::Vrf : public ydk::Entity
{
    public:
        Vrf();
        ~Vrf();

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

        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf bvi_vrf_ip; //type: string

}; // DciFabricInterconnect::Acp::Vrfs::Vrf


}
}

#endif /* _CISCO_IOS_XR_INFRA_FTI_CFG_ */

