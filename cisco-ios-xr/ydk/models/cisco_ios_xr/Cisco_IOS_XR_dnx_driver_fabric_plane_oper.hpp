#ifndef _CISCO_IOS_XR_DNX_DRIVER_FABRIC_PLANE_OPER_
#define _CISCO_IOS_XR_DNX_DRIVER_FABRIC_PLANE_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_dnx_driver_fabric_plane_oper {

class Fabric : public ydk::Entity
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
        std::shared_ptr<ydk::Entity> clone_ptr() const override;
        ydk::augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;
        std::map<std::pair<std::string, std::string>, std::string> get_namespace_identity_lookup() const override;

        class PlaneTable; //type: Fabric::PlaneTable

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_dnx_driver_fabric_plane_oper::Fabric::PlaneTable> plane_table;
        
}; // Fabric


class Fabric::PlaneTable : public ydk::Entity
{
    public:
        PlaneTable();
        ~PlaneTable();

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

        class Statistics; //type: Fabric::PlaneTable::Statistics
        class Plane; //type: Fabric::PlaneTable::Plane

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_dnx_driver_fabric_plane_oper::Fabric::PlaneTable::Statistics> statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_dnx_driver_fabric_plane_oper::Fabric::PlaneTable::Plane> plane;
        
}; // Fabric::PlaneTable


class Fabric::PlaneTable::Statistics : public ydk::Entity
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

        class PlaneStatsInfo; //type: Fabric::PlaneTable::Statistics::PlaneStatsInfo

        ydk::YList plane_stats_info;
        
}; // Fabric::PlaneTable::Statistics


class Fabric::PlaneTable::Statistics::PlaneStatsInfo : public ydk::Entity
{
    public:
        PlaneStatsInfo();
        ~PlaneStatsInfo();

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

        ydk::YLeaf plane_id; //type: uint32
        ydk::YLeaf rx_data_cells; //type: uint64
        ydk::YLeaf tx_data_cells; //type: uint64
        ydk::YLeaf rx_correctable_error_cells; //type: uint32
        ydk::YLeaf rx_un_correctable_error_cells; //type: uint32
        ydk::YLeaf rx_parity_error_cells; //type: uint32

}; // Fabric::PlaneTable::Statistics::PlaneStatsInfo


class Fabric::PlaneTable::Plane : public ydk::Entity
{
    public:
        Plane();
        ~Plane();

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

        class DetailPlaneInfo; //type: Fabric::PlaneTable::Plane::DetailPlaneInfo

        ydk::YList detail_plane_info;
        
}; // Fabric::PlaneTable::Plane


class Fabric::PlaneTable::Plane::DetailPlaneInfo : public ydk::Entity
{
    public:
        DetailPlaneInfo();
        ~DetailPlaneInfo();

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

        ydk::YLeaf plane_id; //type: uint32
        ydk::YLeaf plane_oper_status; //type: FsdbPlaneOperState
        ydk::YLeaf plane_admin_status; //type: FsdbPlaneAdminState
        ydk::YLeaf plane_mode; //type: FsdbPlaneMode
        ydk::YLeaf bundles; //type: uint16
        ydk::YLeaf down_bundles; //type: uint16
        ydk::YLeaf plane_up_down_count; //type: uint32
        ydk::YLeaf up_multicast_count; //type: uint32
        ydk::YLeaf ppu_state; //type: string

}; // Fabric::PlaneTable::Plane::DetailPlaneInfo

class FsdbPlaneMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf plane_mode_unknown;
        static const ydk::Enum::YLeaf plane_mode_sc;
        static const ydk::Enum::YLeaf plane_mode_b2b;
        static const ydk::Enum::YLeaf plane_mode_mc;
        static const ydk::Enum::YLeaf plane_mode_folded;

        static int get_enum_value(const std::string & name) {
            if (name == "plane-mode-unknown") return 0;
            if (name == "plane-mode-sc") return 1;
            if (name == "plane-mode-b2b") return 2;
            if (name == "plane-mode-mc") return 3;
            if (name == "plane-mode-folded") return 4;
            return -1;
        }
};

class FsdbPlaneAdminState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf plane_state_admin_up;
        static const ydk::Enum::YLeaf plane_state_admin_down;

        static int get_enum_value(const std::string & name) {
            if (name == "plane-state-admin-up") return 0;
            if (name == "plane-state-admin-down") return 1;
            return -1;
        }
};

class FsdbPlaneOperState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf plane_state_oper_up;
        static const ydk::Enum::YLeaf plane_state_oper_down;
        static const ydk::Enum::YLeaf plane_state_oper_mcast_down;

        static int get_enum_value(const std::string & name) {
            if (name == "plane-state-oper-up") return 0;
            if (name == "plane-state-oper-down") return 1;
            if (name == "plane-state-oper-mcast-down") return 2;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XR_DNX_DRIVER_FABRIC_PLANE_OPER_ */

