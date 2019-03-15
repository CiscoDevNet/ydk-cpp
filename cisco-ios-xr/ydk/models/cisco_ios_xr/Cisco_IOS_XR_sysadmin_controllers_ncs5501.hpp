#ifndef _CISCO_IOS_XR_SYSADMIN_CONTROLLERS_NCS5501_
#define _CISCO_IOS_XR_SYSADMIN_CONTROLLERS_NCS5501_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_sysadmin_controllers_ncs5501 {

class Controller : public ydk::Entity
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
        std::shared_ptr<ydk::Entity> clone_ptr() const override;
        ydk::augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;
        std::map<std::pair<std::string, std::string>, std::string> get_namespace_identity_lookup() const override;

        class Fabric; //type: Controller::Fabric
        class CardMgr; //type: Controller::CardMgr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5501::Controller::Fabric> fabric;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5501::Controller::CardMgr> card_mgr;
        
}; // Controller


class Controller::Fabric : public ydk::Entity
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

        class Oper; //type: Controller::Fabric::Oper

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5501::Controller::Fabric::Oper> oper;
        
}; // Controller::Fabric


class Controller::Fabric::Oper : public ydk::Entity
{
    public:
        Oper();
        ~Oper();

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

        class Fgid; //type: Controller::Fabric::Oper::Fgid

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5501::Controller::Fabric::Oper::Fgid> fgid;
        
}; // Controller::Fabric::Oper


class Controller::Fabric::Oper::Fgid : public ydk::Entity
{
    public:
        Fgid();
        ~Fgid();

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

        class Information; //type: Controller::Fabric::Oper::Fgid::Information
        class Resource; //type: Controller::Fabric::Oper::Fgid::Resource
        class Statistics; //type: Controller::Fabric::Oper::Fgid::Statistics
        class FgidMgr; //type: Controller::Fabric::Oper::Fgid::FgidMgr
        class ProgramError; //type: Controller::Fabric::Oper::Fgid::ProgramError

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5501::Controller::Fabric::Oper::Fgid::Information> information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5501::Controller::Fabric::Oper::Fgid::Resource> resource;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5501::Controller::Fabric::Oper::Fgid::Statistics> statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5501::Controller::Fabric::Oper::Fgid::FgidMgr> fgid_mgr;
        ydk::YList program_error;
        
}; // Controller::Fabric::Oper::Fgid


class Controller::Fabric::Oper::Fgid::Information : public ydk::Entity
{
    public:
        Information();
        ~Information();

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

        class Id; //type: Controller::Fabric::Oper::Fgid::Information::Id

        ydk::YList id;
        
}; // Controller::Fabric::Oper::Fgid::Information


class Controller::Fabric::Oper::Fgid::Information::Id : public ydk::Entity
{
    public:
        Id();
        ~Id();

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

        ydk::YLeaf fgid_id; //type: int32
        ydk::YLeaf total_asso_fabricq_ids; //type: int32
        ydk::YLeaf asso_client_info; //type: string
        class HexBitmaps; //type: Controller::Fabric::Oper::Fgid::Information::Id::HexBitmaps
        class BinaryBitmaps; //type: Controller::Fabric::Oper::Fgid::Information::Id::BinaryBitmaps
        class AssoFabricqIds; //type: Controller::Fabric::Oper::Fgid::Information::Id::AssoFabricqIds
        class Drivers; //type: Controller::Fabric::Oper::Fgid::Information::Id::Drivers

        ydk::YList hex_bitmaps;
        ydk::YList binary_bitmaps;
        ydk::YList asso_fabricq_ids;
        ydk::YList drivers;
        
}; // Controller::Fabric::Oper::Fgid::Information::Id


class Controller::Fabric::Oper::Fgid::Information::Id::HexBitmaps : public ydk::Entity
{
    public:
        HexBitmaps();
        ~HexBitmaps();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rack_number; //type: int32
        ydk::YLeaf bitmap; //type: string

}; // Controller::Fabric::Oper::Fgid::Information::Id::HexBitmaps


class Controller::Fabric::Oper::Fgid::Information::Id::BinaryBitmaps : public ydk::Entity
{
    public:
        BinaryBitmaps();
        ~BinaryBitmaps();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rack_number; //type: int32
        ydk::YLeaf bitmap; //type: string

}; // Controller::Fabric::Oper::Fgid::Information::Id::BinaryBitmaps


class Controller::Fabric::Oper::Fgid::Information::Id::AssoFabricqIds : public ydk::Entity
{
    public:
        AssoFabricqIds();
        ~AssoFabricqIds();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fabricq_id; //type: string

}; // Controller::Fabric::Oper::Fgid::Information::Id::AssoFabricqIds


class Controller::Fabric::Oper::Fgid::Information::Id::Drivers : public ydk::Entity
{
    public:
        Drivers();
        ~Drivers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rack_number; //type: int32
        class Clients; //type: Controller::Fabric::Oper::Fgid::Information::Id::Drivers::Clients

        ydk::YList clients;
        
}; // Controller::Fabric::Oper::Fgid::Information::Id::Drivers


class Controller::Fabric::Oper::Fgid::Information::Id::Drivers::Clients : public ydk::Entity
{
    public:
        Clients();
        ~Clients();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf client_idx; //type: int32
        ydk::YLeaf show_asic_0; //type: boolean
        ydk::YLeaf asic_0_bitmap; //type: string
        ydk::YLeaf show_asic_1; //type: boolean
        ydk::YLeaf asic_1_bitmap; //type: string
        ydk::YLeaf show_asic_2; //type: boolean
        ydk::YLeaf asic_2_bitmap; //type: string
        ydk::YLeaf show_asic_3; //type: boolean
        ydk::YLeaf asic_3_bitmap; //type: string
        ydk::YLeaf show_asic_4; //type: boolean
        ydk::YLeaf asic_4_bitmap; //type: string
        ydk::YLeaf show_asic_5; //type: boolean
        ydk::YLeaf asic_5_bitmap; //type: string
        ydk::YLeaf show_asic_6; //type: boolean
        ydk::YLeaf asic_6_bitmap; //type: string
        ydk::YLeaf show_asic_7; //type: boolean
        ydk::YLeaf asic_7_bitmap; //type: string
        ydk::YLeaf show_asic_8; //type: boolean
        ydk::YLeaf asic_8_bitmap; //type: string
        ydk::YLeaf show_asic_9; //type: boolean
        ydk::YLeaf asic_9_bitmap; //type: string
        ydk::YLeaf show_asic_10; //type: boolean
        ydk::YLeaf asic_10_bitmap; //type: string
        ydk::YLeaf show_asic_11; //type: boolean
        ydk::YLeaf asic_11_bitmap; //type: string
        ydk::YLeaf show_asic_12; //type: boolean
        ydk::YLeaf asic_12_bitmap; //type: string
        ydk::YLeaf show_asic_13; //type: boolean
        ydk::YLeaf asic_13_bitmap; //type: string
        ydk::YLeaf show_asic_14; //type: boolean
        ydk::YLeaf asic_14_bitmap; //type: string
        ydk::YLeaf show_asic_15; //type: boolean
        ydk::YLeaf asic_15_bitmap; //type: string
        ydk::YLeaf show_asic_16; //type: boolean
        ydk::YLeaf asic_16_bitmap; //type: string
        ydk::YLeaf show_asic_17; //type: boolean
        ydk::YLeaf asic_17_bitmap; //type: string
        ydk::YLeaf show_asic_18; //type: boolean
        ydk::YLeaf asic_18_bitmap; //type: string
        ydk::YLeaf show_asic_19; //type: boolean
        ydk::YLeaf asic_19_bitmap; //type: string
        ydk::YLeaf show_asic_20; //type: boolean
        ydk::YLeaf asic_20_bitmap; //type: string
        ydk::YLeaf show_asic_21; //type: boolean
        ydk::YLeaf asic_21_bitmap; //type: string
        ydk::YLeaf show_asic_22; //type: boolean
        ydk::YLeaf asic_22_bitmap; //type: string
        ydk::YLeaf show_asic_23; //type: boolean
        ydk::YLeaf asic_23_bitmap; //type: string
        ydk::YLeaf show_asic_24; //type: boolean
        ydk::YLeaf asic_24_bitmap; //type: string
        ydk::YLeaf show_asic_25; //type: boolean
        ydk::YLeaf asic_25_bitmap; //type: string
        ydk::YLeaf show_asic_26; //type: boolean
        ydk::YLeaf asic_26_bitmap; //type: string
        ydk::YLeaf show_asic_27; //type: boolean
        ydk::YLeaf asic_27_bitmap; //type: string
        ydk::YLeaf show_asic_28; //type: boolean
        ydk::YLeaf asic_28_bitmap; //type: string
        ydk::YLeaf show_asic_29; //type: boolean
        ydk::YLeaf asic_29_bitmap; //type: string
        ydk::YLeaf show_asic_30; //type: boolean
        ydk::YLeaf asic_30_bitmap; //type: string
        ydk::YLeaf show_asic_31; //type: boolean
        ydk::YLeaf asic_31_bitmap; //type: string
        ydk::YLeaf show_asic_32; //type: boolean
        ydk::YLeaf asic_32_bitmap; //type: string
        ydk::YLeaf show_asic_33; //type: boolean
        ydk::YLeaf asic_33_bitmap; //type: string
        ydk::YLeaf show_asic_34; //type: boolean
        ydk::YLeaf asic_34_bitmap; //type: string
        ydk::YLeaf show_asic_35; //type: boolean
        ydk::YLeaf asic_35_bitmap; //type: string

}; // Controller::Fabric::Oper::Fgid::Information::Id::Drivers::Clients


class Controller::Fabric::Oper::Fgid::Resource : public ydk::Entity
{
    public:
        Resource();
        ~Resource();

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

        class Sdr; //type: Controller::Fabric::Oper::Fgid::Resource::Sdr

        ydk::YList sdr;
        
}; // Controller::Fabric::Oper::Fgid::Resource


class Controller::Fabric::Oper::Fgid::Resource::Sdr : public ydk::Entity
{
    public:
        Sdr();
        ~Sdr();

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

        ydk::YLeaf sdr_name; //type: string
        ydk::YLeaf description; //type: string
        class Application; //type: Controller::Fabric::Oper::Fgid::Resource::Sdr::Application

        ydk::YList application;
        
}; // Controller::Fabric::Oper::Fgid::Resource::Sdr


class Controller::Fabric::Oper::Fgid::Resource::Sdr::Application : public ydk::Entity
{
    public:
        Application();
        ~Application();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf app_name; //type: string
        ydk::YLeaf description; //type: string
        class IdsRange; //type: Controller::Fabric::Oper::Fgid::Resource::Sdr::Application::IdsRange

        ydk::YList ids_range;
        
}; // Controller::Fabric::Oper::Fgid::Resource::Sdr::Application


class Controller::Fabric::Oper::Fgid::Resource::Sdr::Application::IdsRange : public ydk::Entity
{
    public:
        IdsRange();
        ~IdsRange();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: int32
        ydk::YLeaf elements; //type: int32
        class FgidIds; //type: Controller::Fabric::Oper::Fgid::Resource::Sdr::Application::IdsRange::FgidIds

        ydk::YList fgid_ids;
        
}; // Controller::Fabric::Oper::Fgid::Resource::Sdr::Application::IdsRange


class Controller::Fabric::Oper::Fgid::Resource::Sdr::Application::IdsRange::FgidIds : public ydk::Entity
{
    public:
        FgidIds();
        ~FgidIds();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fgid_id; //type: string
        ydk::YLeaf line_idx; //type: int32
        ydk::YLeaf sdr_name_h; //type: string
        ydk::YLeaf app_name_h; //type: string

}; // Controller::Fabric::Oper::Fgid::Resource::Sdr::Application::IdsRange::FgidIds


class Controller::Fabric::Oper::Fgid::Statistics : public ydk::Entity
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

        class All; //type: Controller::Fabric::Oper::Fgid::Statistics::All
        class Sdr; //type: Controller::Fabric::Oper::Fgid::Statistics::Sdr
        class Pool; //type: Controller::Fabric::Oper::Fgid::Statistics::Pool
        class System; //type: Controller::Fabric::Oper::Fgid::Statistics::System

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5501::Controller::Fabric::Oper::Fgid::Statistics::All> all;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5501::Controller::Fabric::Oper::Fgid::Statistics::Sdr> sdr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5501::Controller::Fabric::Oper::Fgid::Statistics::Pool> pool;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5501::Controller::Fabric::Oper::Fgid::Statistics::System> system;
        
}; // Controller::Fabric::Oper::Fgid::Statistics


class Controller::Fabric::Oper::Fgid::Statistics::All : public ydk::Entity
{
    public:
        All();
        ~All();

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

        class StatsList; //type: Controller::Fabric::Oper::Fgid::Statistics::All::StatsList
        class SdrList; //type: Controller::Fabric::Oper::Fgid::Statistics::All::SdrList
        class PoolList; //type: Controller::Fabric::Oper::Fgid::Statistics::All::PoolList

        ydk::YList stats_list;
        ydk::YList sdr_list;
        ydk::YList pool_list;
        
}; // Controller::Fabric::Oper::Fgid::Statistics::All


class Controller::Fabric::Oper::Fgid::Statistics::All::StatsList : public ydk::Entity
{
    public:
        StatsList();
        ~StatsList();

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

        ydk::YLeaf system_stats; //type: int32
        ydk::YLeaf system_total_fgids; //type: uint32
        ydk::YLeaf system_inuse_fgids; //type: uint32
        ydk::YLeaf system_hwm_fgids; //type: uint32

}; // Controller::Fabric::Oper::Fgid::Statistics::All::StatsList


class Controller::Fabric::Oper::Fgid::Statistics::All::SdrList : public ydk::Entity
{
    public:
        SdrList();
        ~SdrList();

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

        ydk::YLeaf sdr_name; //type: string
        ydk::YLeaf description; //type: string
        ydk::YLeaf sdr_total_fgids; //type: uint32
        ydk::YLeaf sdr_inuse_fgids; //type: uint32
        ydk::YLeaf sdr_hwm_fgids; //type: uint32
        class Application; //type: Controller::Fabric::Oper::Fgid::Statistics::All::SdrList::Application

        ydk::YList application;
        
}; // Controller::Fabric::Oper::Fgid::Statistics::All::SdrList


class Controller::Fabric::Oper::Fgid::Statistics::All::SdrList::Application : public ydk::Entity
{
    public:
        Application();
        ~Application();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf app_name; //type: string
        ydk::YLeaf description; //type: string
        ydk::YLeaf app_id; //type: uint32
        ydk::YLeaf pool_id; //type: uint32
        ydk::YLeaf inuse_fgids; //type: uint32
        ydk::YLeaf hwm_fgids; //type: uint32

}; // Controller::Fabric::Oper::Fgid::Statistics::All::SdrList::Application


class Controller::Fabric::Oper::Fgid::Statistics::All::PoolList : public ydk::Entity
{
    public:
        PoolList();
        ~PoolList();

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

        ydk::YLeaf pool_id; //type: uint32
        ydk::YLeaf pool_name; //type: string
        ydk::YLeaf pool_type; //type: string
        ydk::YLeaf start_fgid; //type: string
        ydk::YLeaf total_fgids; //type: uint32
        ydk::YLeaf current_fgids; //type: uint32
        ydk::YLeaf hwm_fgids; //type: uint32

}; // Controller::Fabric::Oper::Fgid::Statistics::All::PoolList


class Controller::Fabric::Oper::Fgid::Statistics::Sdr : public ydk::Entity
{
    public:
        Sdr();
        ~Sdr();

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

        class SdrList; //type: Controller::Fabric::Oper::Fgid::Statistics::Sdr::SdrList

        ydk::YList sdr_list;
        
}; // Controller::Fabric::Oper::Fgid::Statistics::Sdr


class Controller::Fabric::Oper::Fgid::Statistics::Sdr::SdrList : public ydk::Entity
{
    public:
        SdrList();
        ~SdrList();

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

        ydk::YLeaf sdr_name; //type: string
        ydk::YLeaf description; //type: string
        ydk::YLeaf sdr_total_fgids; //type: uint32
        ydk::YLeaf sdr_inuse_fgids; //type: uint32
        ydk::YLeaf sdr_hwm_fgids; //type: uint32
        class Application; //type: Controller::Fabric::Oper::Fgid::Statistics::Sdr::SdrList::Application

        ydk::YList application;
        
}; // Controller::Fabric::Oper::Fgid::Statistics::Sdr::SdrList


class Controller::Fabric::Oper::Fgid::Statistics::Sdr::SdrList::Application : public ydk::Entity
{
    public:
        Application();
        ~Application();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf app_name; //type: string
        ydk::YLeaf description; //type: string
        ydk::YLeaf app_id; //type: uint32
        ydk::YLeaf pool_id; //type: uint32
        ydk::YLeaf inuse_fgids; //type: uint32
        ydk::YLeaf hwm_fgids; //type: uint32

}; // Controller::Fabric::Oper::Fgid::Statistics::Sdr::SdrList::Application


class Controller::Fabric::Oper::Fgid::Statistics::Pool : public ydk::Entity
{
    public:
        Pool();
        ~Pool();

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

        class PoolList; //type: Controller::Fabric::Oper::Fgid::Statistics::Pool::PoolList

        ydk::YList pool_list;
        
}; // Controller::Fabric::Oper::Fgid::Statistics::Pool


class Controller::Fabric::Oper::Fgid::Statistics::Pool::PoolList : public ydk::Entity
{
    public:
        PoolList();
        ~PoolList();

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

        ydk::YLeaf pool_id; //type: uint32
        ydk::YLeaf pool_name; //type: string
        ydk::YLeaf pool_type; //type: string
        ydk::YLeaf start_fgid; //type: string
        ydk::YLeaf total_fgids; //type: uint32
        ydk::YLeaf current_fgids; //type: uint32
        ydk::YLeaf hwm_fgids; //type: uint32

}; // Controller::Fabric::Oper::Fgid::Statistics::Pool::PoolList


class Controller::Fabric::Oper::Fgid::Statistics::System : public ydk::Entity
{
    public:
        System();
        ~System();

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

        class StatsList; //type: Controller::Fabric::Oper::Fgid::Statistics::System::StatsList

        ydk::YList stats_list;
        
}; // Controller::Fabric::Oper::Fgid::Statistics::System


class Controller::Fabric::Oper::Fgid::Statistics::System::StatsList : public ydk::Entity
{
    public:
        StatsList();
        ~StatsList();

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

        ydk::YLeaf system_stats; //type: int32
        ydk::YLeaf system_total_fgids; //type: uint32
        ydk::YLeaf system_inuse_fgids; //type: uint32
        ydk::YLeaf system_hwm_fgids; //type: uint32

}; // Controller::Fabric::Oper::Fgid::Statistics::System::StatsList


class Controller::Fabric::Oper::Fgid::FgidMgr : public ydk::Entity
{
    public:
        FgidMgr();
        ~FgidMgr();

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

        class Trace; //type: Controller::Fabric::Oper::Fgid::FgidMgr::Trace

        ydk::YList trace;
        
}; // Controller::Fabric::Oper::Fgid::FgidMgr


class Controller::Fabric::Oper::Fgid::FgidMgr::Trace : public ydk::Entity
{
    public:
        Trace();
        ~Trace();

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

        ydk::YLeaf buffer; //type: string
        class Location; //type: Controller::Fabric::Oper::Fgid::FgidMgr::Trace::Location

        ydk::YList location;
        
}; // Controller::Fabric::Oper::Fgid::FgidMgr::Trace


class Controller::Fabric::Oper::Fgid::FgidMgr::Trace::Location : public ydk::Entity
{
    public:
        Location();
        ~Location();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf location_name; //type: string
        class AllOptions; //type: Controller::Fabric::Oper::Fgid::FgidMgr::Trace::Location::AllOptions

        ydk::YList all_options;
        
}; // Controller::Fabric::Oper::Fgid::FgidMgr::Trace::Location


class Controller::Fabric::Oper::Fgid::FgidMgr::Trace::Location::AllOptions : public ydk::Entity
{
    public:
        AllOptions();
        ~AllOptions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf option; //type: string
        class TraceBlocks; //type: Controller::Fabric::Oper::Fgid::FgidMgr::Trace::Location::AllOptions::TraceBlocks

        ydk::YList trace_blocks;
        
}; // Controller::Fabric::Oper::Fgid::FgidMgr::Trace::Location::AllOptions


class Controller::Fabric::Oper::Fgid::FgidMgr::Trace::Location::AllOptions::TraceBlocks : public ydk::Entity
{
    public:
        TraceBlocks();
        ~TraceBlocks();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: string

}; // Controller::Fabric::Oper::Fgid::FgidMgr::Trace::Location::AllOptions::TraceBlocks


class Controller::Fabric::Oper::Fgid::ProgramError : public ydk::Entity
{
    public:
        ProgramError();
        ~ProgramError();

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

        ydk::YLeaf start; //type: int32
        ydk::YLeaf end; //type: int32
        class Rack; //type: Controller::Fabric::Oper::Fgid::ProgramError::Rack

        ydk::YList rack;
        
}; // Controller::Fabric::Oper::Fgid::ProgramError


class Controller::Fabric::Oper::Fgid::ProgramError::Rack : public ydk::Entity
{
    public:
        Rack();
        ~Rack();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rack_id; //type: int32
        ydk::YLeaf rack_id_str; //type: string
        ydk::YLeaf fgids_in_error; //type: string
        ydk::YLeaf found_fgids_in_error; //type: boolean
        ydk::YLeaf total_error_fgids; //type: int32
        ydk::YLeaf incorrect_fgids_range; //type: boolean
        ydk::YLeaf cmd_not_supported; //type: boolean

}; // Controller::Fabric::Oper::Fgid::ProgramError::Rack


class Controller::CardMgr : public ydk::Entity
{
    public:
        CardMgr();
        ~CardMgr();

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

        class Trace; //type: Controller::CardMgr::Trace
        class Inventory; //type: Controller::CardMgr::Inventory
        class EventHistory; //type: Controller::CardMgr::EventHistory
        class NotifHistory; //type: Controller::CardMgr::NotifHistory
        class OirHistory; //type: Controller::CardMgr::OirHistory
        class Iofpga; //type: Controller::CardMgr::Iofpga
        class Bootloader; //type: Controller::CardMgr::Bootloader

        ydk::YList trace;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5501::Controller::CardMgr::Inventory> inventory;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5501::Controller::CardMgr::EventHistory> event_history;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5501::Controller::CardMgr::NotifHistory> notif_history;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5501::Controller::CardMgr::OirHistory> oir_history;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5501::Controller::CardMgr::Iofpga> iofpga;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5501::Controller::CardMgr::Bootloader> bootloader;
        
}; // Controller::CardMgr


class Controller::CardMgr::Trace : public ydk::Entity
{
    public:
        Trace();
        ~Trace();

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

        ydk::YLeaf buffer; //type: string
        class Location; //type: Controller::CardMgr::Trace::Location

        ydk::YList location;
        
}; // Controller::CardMgr::Trace


class Controller::CardMgr::Trace::Location : public ydk::Entity
{
    public:
        Location();
        ~Location();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf location_name; //type: string
        class AllOptions; //type: Controller::CardMgr::Trace::Location::AllOptions

        ydk::YList all_options;
        
}; // Controller::CardMgr::Trace::Location


class Controller::CardMgr::Trace::Location::AllOptions : public ydk::Entity
{
    public:
        AllOptions();
        ~AllOptions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf option; //type: string
        class TraceBlocks; //type: Controller::CardMgr::Trace::Location::AllOptions::TraceBlocks

        ydk::YList trace_blocks;
        
}; // Controller::CardMgr::Trace::Location::AllOptions


class Controller::CardMgr::Trace::Location::AllOptions::TraceBlocks : public ydk::Entity
{
    public:
        TraceBlocks();
        ~TraceBlocks();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: string

}; // Controller::CardMgr::Trace::Location::AllOptions::TraceBlocks


class Controller::CardMgr::Inventory : public ydk::Entity
{
    public:
        Inventory();
        ~Inventory();

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

        class Summary; //type: Controller::CardMgr::Inventory::Summary
        class Detail; //type: Controller::CardMgr::Inventory::Detail

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5501::Controller::CardMgr::Inventory::Summary> summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5501::Controller::CardMgr::Inventory::Detail> detail;
        
}; // Controller::CardMgr::Inventory


class Controller::CardMgr::Inventory::Summary : public ydk::Entity
{
    public:
        Summary();
        ~Summary();

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

        class CardMgrInvSummary; //type: Controller::CardMgr::Inventory::Summary::CardMgrInvSummary

        ydk::YList card_mgr_inv_summary;
        
}; // Controller::CardMgr::Inventory::Summary


class Controller::CardMgr::Inventory::Summary::CardMgrInvSummary : public ydk::Entity
{
    public:
        CardMgrInvSummary();
        ~CardMgrInvSummary();

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

        ydk::YLeaf location; //type: string
        ydk::YLeaf card_mgr_inv_pid_string; //type: string
        ydk::YLeaf card_mgr_inv_slot_number; //type: uint32
        ydk::YLeaf card_mgr_inv_serial_number; //type: string
        ydk::YLeaf card_mgr_inv_hw_version; //type: string
        ydk::YLeaf card_mgr_inv_card_state; //type: string

}; // Controller::CardMgr::Inventory::Summary::CardMgrInvSummary


class Controller::CardMgr::Inventory::Detail : public ydk::Entity
{
    public:
        Detail();
        ~Detail();

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

        class CardMgrInvDetail; //type: Controller::CardMgr::Inventory::Detail::CardMgrInvDetail

        ydk::YList card_mgr_inv_detail;
        
}; // Controller::CardMgr::Inventory::Detail


class Controller::CardMgr::Inventory::Detail::CardMgrInvDetail : public ydk::Entity
{
    public:
        CardMgrInvDetail();
        ~CardMgrInvDetail();

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

        ydk::YLeaf location; //type: string
        class CardMgrInvDetailList; //type: Controller::CardMgr::Inventory::Detail::CardMgrInvDetail::CardMgrInvDetailList

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5501::Controller::CardMgr::Inventory::Detail::CardMgrInvDetail::CardMgrInvDetailList> card_mgr_inv_detail_list;
        
}; // Controller::CardMgr::Inventory::Detail::CardMgrInvDetail


class Controller::CardMgr::Inventory::Detail::CardMgrInvDetail::CardMgrInvDetailList : public ydk::Entity
{
    public:
        CardMgrInvDetailList();
        ~CardMgrInvDetailList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList card_mgr_inv_detail_values; //type: list of  string

}; // Controller::CardMgr::Inventory::Detail::CardMgrInvDetail::CardMgrInvDetailList


class Controller::CardMgr::EventHistory : public ydk::Entity
{
    public:
        EventHistory();
        ~EventHistory();

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

        class Brief; //type: Controller::CardMgr::EventHistory::Brief
        class Detail; //type: Controller::CardMgr::EventHistory::Detail

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5501::Controller::CardMgr::EventHistory::Brief> brief;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5501::Controller::CardMgr::EventHistory::Detail> detail;
        
}; // Controller::CardMgr::EventHistory


class Controller::CardMgr::EventHistory::Brief : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Location; //type: Controller::CardMgr::EventHistory::Brief::Location

        ydk::YList location;
        
}; // Controller::CardMgr::EventHistory::Brief


class Controller::CardMgr::EventHistory::Brief::Location : public ydk::Entity
{
    public:
        Location();
        ~Location();

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

        ydk::YLeaf location; //type: string
        class CardEventHistBrief; //type: Controller::CardMgr::EventHistory::Brief::Location::CardEventHistBrief

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5501::Controller::CardMgr::EventHistory::Brief::Location::CardEventHistBrief> card_event_hist_brief;
        
}; // Controller::CardMgr::EventHistory::Brief::Location


class Controller::CardMgr::EventHistory::Brief::Location::CardEventHistBrief : public ydk::Entity
{
    public:
        CardEventHistBrief();
        ~CardEventHistBrief();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList card_event_hist_brief_values; //type: list of  string

}; // Controller::CardMgr::EventHistory::Brief::Location::CardEventHistBrief


class Controller::CardMgr::EventHistory::Detail : public ydk::Entity
{
    public:
        Detail();
        ~Detail();

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

        class Location; //type: Controller::CardMgr::EventHistory::Detail::Location

        ydk::YList location;
        
}; // Controller::CardMgr::EventHistory::Detail


class Controller::CardMgr::EventHistory::Detail::Location : public ydk::Entity
{
    public:
        Location();
        ~Location();

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

        ydk::YLeaf location; //type: string
        class CardEventHistDetail; //type: Controller::CardMgr::EventHistory::Detail::Location::CardEventHistDetail

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5501::Controller::CardMgr::EventHistory::Detail::Location::CardEventHistDetail> card_event_hist_detail;
        
}; // Controller::CardMgr::EventHistory::Detail::Location


class Controller::CardMgr::EventHistory::Detail::Location::CardEventHistDetail : public ydk::Entity
{
    public:
        CardEventHistDetail();
        ~CardEventHistDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList card_event_hist_detail_values; //type: list of  string

}; // Controller::CardMgr::EventHistory::Detail::Location::CardEventHistDetail


class Controller::CardMgr::NotifHistory : public ydk::Entity
{
    public:
        NotifHistory();
        ~NotifHistory();

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

        class Brief; //type: Controller::CardMgr::NotifHistory::Brief
        class Detail; //type: Controller::CardMgr::NotifHistory::Detail

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5501::Controller::CardMgr::NotifHistory::Brief> brief;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5501::Controller::CardMgr::NotifHistory::Detail> detail;
        
}; // Controller::CardMgr::NotifHistory


class Controller::CardMgr::NotifHistory::Brief : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Location; //type: Controller::CardMgr::NotifHistory::Brief::Location

        ydk::YList location;
        
}; // Controller::CardMgr::NotifHistory::Brief


class Controller::CardMgr::NotifHistory::Brief::Location : public ydk::Entity
{
    public:
        Location();
        ~Location();

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

        ydk::YLeaf location; //type: string
        class CardNotifHistBrief; //type: Controller::CardMgr::NotifHistory::Brief::Location::CardNotifHistBrief

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5501::Controller::CardMgr::NotifHistory::Brief::Location::CardNotifHistBrief> card_notif_hist_brief;
        
}; // Controller::CardMgr::NotifHistory::Brief::Location


class Controller::CardMgr::NotifHistory::Brief::Location::CardNotifHistBrief : public ydk::Entity
{
    public:
        CardNotifHistBrief();
        ~CardNotifHistBrief();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList card_notif_hist_brief_values; //type: list of  string

}; // Controller::CardMgr::NotifHistory::Brief::Location::CardNotifHistBrief


class Controller::CardMgr::NotifHistory::Detail : public ydk::Entity
{
    public:
        Detail();
        ~Detail();

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

        class Location; //type: Controller::CardMgr::NotifHistory::Detail::Location

        ydk::YList location;
        
}; // Controller::CardMgr::NotifHistory::Detail


class Controller::CardMgr::NotifHistory::Detail::Location : public ydk::Entity
{
    public:
        Location();
        ~Location();

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

        ydk::YLeaf location; //type: string
        class CardNotifHistDetail; //type: Controller::CardMgr::NotifHistory::Detail::Location::CardNotifHistDetail

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5501::Controller::CardMgr::NotifHistory::Detail::Location::CardNotifHistDetail> card_notif_hist_detail;
        
}; // Controller::CardMgr::NotifHistory::Detail::Location


class Controller::CardMgr::NotifHistory::Detail::Location::CardNotifHistDetail : public ydk::Entity
{
    public:
        CardNotifHistDetail();
        ~CardNotifHistDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList card_notif_hist_detail_values; //type: list of  string

}; // Controller::CardMgr::NotifHistory::Detail::Location::CardNotifHistDetail


class Controller::CardMgr::OirHistory : public ydk::Entity
{
    public:
        OirHistory();
        ~OirHistory();

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

        class Rack; //type: Controller::CardMgr::OirHistory::Rack

        ydk::YList rack;
        
}; // Controller::CardMgr::OirHistory


class Controller::CardMgr::OirHistory::Rack : public ydk::Entity
{
    public:
        Rack();
        ~Rack();

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

        ydk::YLeaf rack; //type: string
        class CardOirHist; //type: Controller::CardMgr::OirHistory::Rack::CardOirHist

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5501::Controller::CardMgr::OirHistory::Rack::CardOirHist> card_oir_hist;
        
}; // Controller::CardMgr::OirHistory::Rack


class Controller::CardMgr::OirHistory::Rack::CardOirHist : public ydk::Entity
{
    public:
        CardOirHist();
        ~CardOirHist();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList card_oir_events; //type: list of  string

}; // Controller::CardMgr::OirHistory::Rack::CardOirHist


class Controller::CardMgr::Iofpga : public ydk::Entity
{
    public:
        Iofpga();
        ~Iofpga();

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

        class Register; //type: Controller::CardMgr::Iofpga::Register
        class Flash; //type: Controller::CardMgr::Iofpga::Flash

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5501::Controller::CardMgr::Iofpga::Register> register_;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5501::Controller::CardMgr::Iofpga::Flash> flash;
        
}; // Controller::CardMgr::Iofpga


class Controller::CardMgr::Iofpga::Register : public ydk::Entity
{
    public:
        Register();
        ~Register();

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

        class Cpu; //type: Controller::CardMgr::Iofpga::Register::Cpu
        class Mb; //type: Controller::CardMgr::Iofpga::Register::Mb
        class Dc; //type: Controller::CardMgr::Iofpga::Register::Dc

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5501::Controller::CardMgr::Iofpga::Register::Cpu> cpu;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5501::Controller::CardMgr::Iofpga::Register::Mb> mb;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5501::Controller::CardMgr::Iofpga::Register::Dc> dc;
        
}; // Controller::CardMgr::Iofpga::Register


class Controller::CardMgr::Iofpga::Register::Cpu : public ydk::Entity
{
    public:
        Cpu();
        ~Cpu();

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

        class RegisterLocation; //type: Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation

        ydk::YList register_location;
        
}; // Controller::CardMgr::Iofpga::Register::Cpu


class Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation : public ydk::Entity
{
    public:
        RegisterLocation();
        ~RegisterLocation();

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

        ydk::YLeaf register_location; //type: string
        class IofpgaBlockNumber; //type: Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaBlockNumber
        class IofpgaOffset; //type: Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaOffset
        class IofpgaAddress; //type: Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaAddress

        ydk::YList iofpga_block_number;
        ydk::YList iofpga_offset;
        ydk::YList iofpga_address;
        
}; // Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation


class Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaBlockNumber : public ydk::Entity
{
    public:
        IofpgaBlockNumber();
        ~IofpgaBlockNumber();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf iofpga_block_num; //type: uint32
        ydk::YLeaf block_location; //type: string
        ydk::YLeaf iofpga_block_nm; //type: string
        class IofpgaRegisterNumber; //type: Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber

        ydk::YList iofpga_register_number;
        
}; // Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaBlockNumber


class Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber : public ydk::Entity
{
    public:
        IofpgaRegisterNumber();
        ~IofpgaRegisterNumber();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf index_; //type: uint32
        ydk::YLeaf iofpga_register_name; //type: string
        class IofpgaData; //type: Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::IofpgaData

        ydk::YList iofpga_data;
        
}; // Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber


class Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::IofpgaData : public ydk::Entity
{
    public:
        IofpgaData();
        ~IofpgaData();

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
        ydk::YLeaf offset; //type: uint32
        ydk::YLeaf value_; //type: uint32

}; // Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::IofpgaData


class Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaOffset : public ydk::Entity
{
    public:
        IofpgaOffset();
        ~IofpgaOffset();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hex_offset; //type: string
        class IofpgaRegOffsetData; //type: Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaOffset::IofpgaRegOffsetData

        ydk::YList iofpga_reg_offset_data;
        
}; // Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaOffset


class Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaOffset::IofpgaRegOffsetData : public ydk::Entity
{
    public:
        IofpgaRegOffsetData();
        ~IofpgaRegOffsetData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf iofpga_reg_off_addr; //type: uint32
        ydk::YLeaf reg_off_value; //type: string

}; // Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaOffset::IofpgaRegOffsetData


class Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaAddress : public ydk::Entity
{
    public:
        IofpgaAddress();
        ~IofpgaAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_hex_addr; //type: string
        ydk::YLeaf end_hex_addr; //type: string
        class IofpgaRegRangeAddrList; //type: Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList

        ydk::YList iofpga_reg_range_addr_list;
        
}; // Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaAddress


class Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList : public ydk::Entity
{
    public:
        IofpgaRegRangeAddrList();
        ~IofpgaRegRangeAddrList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf iofpga_reg_range_addr; //type: uint32
        class IofpgaRegData; //type: Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::IofpgaRegData

        ydk::YList iofpga_reg_data;
        
}; // Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList


class Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::IofpgaRegData : public ydk::Entity
{
    public:
        IofpgaRegData();
        ~IofpgaRegData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf iofpga_reg_addr; //type: uint32
        ydk::YLeaf reg_value; //type: string

}; // Controller::CardMgr::Iofpga::Register::Cpu::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::IofpgaRegData


class Controller::CardMgr::Iofpga::Register::Mb : public ydk::Entity
{
    public:
        Mb();
        ~Mb();

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

        class RegisterLocation; //type: Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation

        ydk::YList register_location;
        
}; // Controller::CardMgr::Iofpga::Register::Mb


class Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation : public ydk::Entity
{
    public:
        RegisterLocation();
        ~RegisterLocation();

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

        ydk::YLeaf register_location; //type: string
        class IofpgaBlockNumber; //type: Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaBlockNumber
        class IofpgaOffset; //type: Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaOffset
        class IofpgaAddress; //type: Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaAddress

        ydk::YList iofpga_block_number;
        ydk::YList iofpga_offset;
        ydk::YList iofpga_address;
        
}; // Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation


class Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaBlockNumber : public ydk::Entity
{
    public:
        IofpgaBlockNumber();
        ~IofpgaBlockNumber();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf iofpga_block_num; //type: uint32
        ydk::YLeaf block_location; //type: string
        ydk::YLeaf iofpga_block_nm; //type: string
        class IofpgaRegisterNumber; //type: Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber

        ydk::YList iofpga_register_number;
        
}; // Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaBlockNumber


class Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber : public ydk::Entity
{
    public:
        IofpgaRegisterNumber();
        ~IofpgaRegisterNumber();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf index_; //type: uint32
        ydk::YLeaf iofpga_register_name; //type: string
        class IofpgaData; //type: Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::IofpgaData

        ydk::YList iofpga_data;
        
}; // Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber


class Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::IofpgaData : public ydk::Entity
{
    public:
        IofpgaData();
        ~IofpgaData();

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
        ydk::YLeaf offset; //type: uint32
        ydk::YLeaf value_; //type: uint32

}; // Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::IofpgaData


class Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaOffset : public ydk::Entity
{
    public:
        IofpgaOffset();
        ~IofpgaOffset();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hex_offset; //type: string
        class IofpgaRegOffsetData; //type: Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaOffset::IofpgaRegOffsetData

        ydk::YList iofpga_reg_offset_data;
        
}; // Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaOffset


class Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaOffset::IofpgaRegOffsetData : public ydk::Entity
{
    public:
        IofpgaRegOffsetData();
        ~IofpgaRegOffsetData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf iofpga_reg_off_addr; //type: uint32
        ydk::YLeaf reg_off_value; //type: string

}; // Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaOffset::IofpgaRegOffsetData


class Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaAddress : public ydk::Entity
{
    public:
        IofpgaAddress();
        ~IofpgaAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_hex_addr; //type: string
        ydk::YLeaf end_hex_addr; //type: string
        class IofpgaRegRangeAddrList; //type: Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList

        ydk::YList iofpga_reg_range_addr_list;
        
}; // Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaAddress


class Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList : public ydk::Entity
{
    public:
        IofpgaRegRangeAddrList();
        ~IofpgaRegRangeAddrList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf iofpga_reg_range_addr; //type: uint32
        class IofpgaRegData; //type: Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::IofpgaRegData

        ydk::YList iofpga_reg_data;
        
}; // Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList


class Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::IofpgaRegData : public ydk::Entity
{
    public:
        IofpgaRegData();
        ~IofpgaRegData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf iofpga_reg_addr; //type: uint32
        ydk::YLeaf reg_value; //type: string

}; // Controller::CardMgr::Iofpga::Register::Mb::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::IofpgaRegData


class Controller::CardMgr::Iofpga::Register::Dc : public ydk::Entity
{
    public:
        Dc();
        ~Dc();

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

        class RegisterLocation; //type: Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation

        ydk::YList register_location;
        
}; // Controller::CardMgr::Iofpga::Register::Dc


class Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation : public ydk::Entity
{
    public:
        RegisterLocation();
        ~RegisterLocation();

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

        ydk::YLeaf register_location; //type: string
        class IofpgaBlockNumber; //type: Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaBlockNumber
        class IofpgaOffset; //type: Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaOffset
        class IofpgaAddress; //type: Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaAddress

        ydk::YList iofpga_block_number;
        ydk::YList iofpga_offset;
        ydk::YList iofpga_address;
        
}; // Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation


class Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaBlockNumber : public ydk::Entity
{
    public:
        IofpgaBlockNumber();
        ~IofpgaBlockNumber();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf iofpga_block_num; //type: uint32
        ydk::YLeaf block_location; //type: string
        ydk::YLeaf iofpga_block_nm; //type: string
        class IofpgaRegisterNumber; //type: Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber

        ydk::YList iofpga_register_number;
        
}; // Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaBlockNumber


class Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber : public ydk::Entity
{
    public:
        IofpgaRegisterNumber();
        ~IofpgaRegisterNumber();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf index_; //type: uint32
        ydk::YLeaf iofpga_register_name; //type: string
        class IofpgaData; //type: Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::IofpgaData

        ydk::YList iofpga_data;
        
}; // Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber


class Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::IofpgaData : public ydk::Entity
{
    public:
        IofpgaData();
        ~IofpgaData();

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
        ydk::YLeaf offset; //type: uint32
        ydk::YLeaf value_; //type: uint32

}; // Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaBlockNumber::IofpgaRegisterNumber::IofpgaData


class Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaOffset : public ydk::Entity
{
    public:
        IofpgaOffset();
        ~IofpgaOffset();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hex_offset; //type: string
        class IofpgaRegOffsetData; //type: Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaOffset::IofpgaRegOffsetData

        ydk::YList iofpga_reg_offset_data;
        
}; // Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaOffset


class Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaOffset::IofpgaRegOffsetData : public ydk::Entity
{
    public:
        IofpgaRegOffsetData();
        ~IofpgaRegOffsetData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf iofpga_reg_off_addr; //type: uint32
        ydk::YLeaf reg_off_value; //type: string

}; // Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaOffset::IofpgaRegOffsetData


class Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaAddress : public ydk::Entity
{
    public:
        IofpgaAddress();
        ~IofpgaAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_hex_addr; //type: string
        ydk::YLeaf end_hex_addr; //type: string
        class IofpgaRegRangeAddrList; //type: Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList

        ydk::YList iofpga_reg_range_addr_list;
        
}; // Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaAddress


class Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList : public ydk::Entity
{
    public:
        IofpgaRegRangeAddrList();
        ~IofpgaRegRangeAddrList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf iofpga_reg_range_addr; //type: uint32
        class IofpgaRegData; //type: Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::IofpgaRegData

        ydk::YList iofpga_reg_data;
        
}; // Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList


class Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::IofpgaRegData : public ydk::Entity
{
    public:
        IofpgaRegData();
        ~IofpgaRegData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf iofpga_reg_addr; //type: uint32
        ydk::YLeaf reg_value; //type: string

}; // Controller::CardMgr::Iofpga::Register::Dc::RegisterLocation::IofpgaAddress::IofpgaRegRangeAddrList::IofpgaRegData


class Controller::CardMgr::Iofpga::Flash : public ydk::Entity
{
    public:
        Flash();
        ~Flash();

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

        class Info; //type: Controller::CardMgr::Iofpga::Flash::Info
        class Status; //type: Controller::CardMgr::Iofpga::Flash::Status

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5501::Controller::CardMgr::Iofpga::Flash::Info> info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5501::Controller::CardMgr::Iofpga::Flash::Status> status;
        
}; // Controller::CardMgr::Iofpga::Flash


class Controller::CardMgr::Iofpga::Flash::Info : public ydk::Entity
{
    public:
        Info();
        ~Info();

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

        class FlashLocation; //type: Controller::CardMgr::Iofpga::Flash::Info::FlashLocation

        ydk::YList flash_location;
        
}; // Controller::CardMgr::Iofpga::Flash::Info


class Controller::CardMgr::Iofpga::Flash::Info::FlashLocation : public ydk::Entity
{
    public:
        FlashLocation();
        ~FlashLocation();

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

        ydk::YLeaf flash_location; //type: string
        class IofpgaFlashInfo; //type: Controller::CardMgr::Iofpga::Flash::Info::FlashLocation::IofpgaFlashInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5501::Controller::CardMgr::Iofpga::Flash::Info::FlashLocation::IofpgaFlashInfo> iofpga_flash_info;
        
}; // Controller::CardMgr::Iofpga::Flash::Info::FlashLocation


class Controller::CardMgr::Iofpga::Flash::Info::FlashLocation::IofpgaFlashInfo : public ydk::Entity
{
    public:
        IofpgaFlashInfo();
        ~IofpgaFlashInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList iofpga_flash_info_values; //type: list of  string

}; // Controller::CardMgr::Iofpga::Flash::Info::FlashLocation::IofpgaFlashInfo


class Controller::CardMgr::Iofpga::Flash::Status : public ydk::Entity
{
    public:
        Status();
        ~Status();

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

        class FlashLocation; //type: Controller::CardMgr::Iofpga::Flash::Status::FlashLocation

        ydk::YList flash_location;
        
}; // Controller::CardMgr::Iofpga::Flash::Status


class Controller::CardMgr::Iofpga::Flash::Status::FlashLocation : public ydk::Entity
{
    public:
        FlashLocation();
        ~FlashLocation();

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

        ydk::YLeaf flash_location; //type: string
        class IofpgaFlashStatus; //type: Controller::CardMgr::Iofpga::Flash::Status::FlashLocation::IofpgaFlashStatus

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5501::Controller::CardMgr::Iofpga::Flash::Status::FlashLocation::IofpgaFlashStatus> iofpga_flash_status;
        
}; // Controller::CardMgr::Iofpga::Flash::Status::FlashLocation


class Controller::CardMgr::Iofpga::Flash::Status::FlashLocation::IofpgaFlashStatus : public ydk::Entity
{
    public:
        IofpgaFlashStatus();
        ~IofpgaFlashStatus();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList iofpga_flash_status_values; //type: list of  string

}; // Controller::CardMgr::Iofpga::Flash::Status::FlashLocation::IofpgaFlashStatus


class Controller::CardMgr::Bootloader : public ydk::Entity
{
    public:
        Bootloader();
        ~Bootloader();

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

        class Flash; //type: Controller::CardMgr::Bootloader::Flash

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5501::Controller::CardMgr::Bootloader::Flash> flash;
        
}; // Controller::CardMgr::Bootloader


class Controller::CardMgr::Bootloader::Flash : public ydk::Entity
{
    public:
        Flash();
        ~Flash();

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

        class Info; //type: Controller::CardMgr::Bootloader::Flash::Info
        class Status; //type: Controller::CardMgr::Bootloader::Flash::Status

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5501::Controller::CardMgr::Bootloader::Flash::Info> info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5501::Controller::CardMgr::Bootloader::Flash::Status> status;
        
}; // Controller::CardMgr::Bootloader::Flash


class Controller::CardMgr::Bootloader::Flash::Info : public ydk::Entity
{
    public:
        Info();
        ~Info();

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

        class FlashLocation; //type: Controller::CardMgr::Bootloader::Flash::Info::FlashLocation

        ydk::YList flash_location;
        
}; // Controller::CardMgr::Bootloader::Flash::Info


class Controller::CardMgr::Bootloader::Flash::Info::FlashLocation : public ydk::Entity
{
    public:
        FlashLocation();
        ~FlashLocation();

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

        ydk::YLeaf flash_location; //type: string
        class BootldrFlashInfo; //type: Controller::CardMgr::Bootloader::Flash::Info::FlashLocation::BootldrFlashInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5501::Controller::CardMgr::Bootloader::Flash::Info::FlashLocation::BootldrFlashInfo> bootldr_flash_info;
        
}; // Controller::CardMgr::Bootloader::Flash::Info::FlashLocation


class Controller::CardMgr::Bootloader::Flash::Info::FlashLocation::BootldrFlashInfo : public ydk::Entity
{
    public:
        BootldrFlashInfo();
        ~BootldrFlashInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList bootldr_flash_info_values; //type: list of  string

}; // Controller::CardMgr::Bootloader::Flash::Info::FlashLocation::BootldrFlashInfo


class Controller::CardMgr::Bootloader::Flash::Status : public ydk::Entity
{
    public:
        Status();
        ~Status();

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

        class FlashLocation; //type: Controller::CardMgr::Bootloader::Flash::Status::FlashLocation

        ydk::YList flash_location;
        
}; // Controller::CardMgr::Bootloader::Flash::Status


class Controller::CardMgr::Bootloader::Flash::Status::FlashLocation : public ydk::Entity
{
    public:
        FlashLocation();
        ~FlashLocation();

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

        ydk::YLeaf flash_location; //type: string
        class BootldrFlashStatus; //type: Controller::CardMgr::Bootloader::Flash::Status::FlashLocation::BootldrFlashStatus

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5501::Controller::CardMgr::Bootloader::Flash::Status::FlashLocation::BootldrFlashStatus> bootldr_flash_status;
        
}; // Controller::CardMgr::Bootloader::Flash::Status::FlashLocation


class Controller::CardMgr::Bootloader::Flash::Status::FlashLocation::BootldrFlashStatus : public ydk::Entity
{
    public:
        BootldrFlashStatus();
        ~BootldrFlashStatus();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList bootldr_flash_status_values; //type: list of  string

}; // Controller::CardMgr::Bootloader::Flash::Status::FlashLocation::BootldrFlashStatus


}
}

#endif /* _CISCO_IOS_XR_SYSADMIN_CONTROLLERS_NCS5501_ */

