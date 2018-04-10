#ifndef _CISCO_IOS_XR_SYSADMIN_SHOW_INV_
#define _CISCO_IOS_XR_SYSADMIN_SHOW_INV_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_sysadmin_show_inv {

class Inventory : public ydk::Entity
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
        std::shared_ptr<ydk::Entity> clone_ptr() const override;
        ydk::augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;
        std::map<std::pair<std::string, std::string>, std::string> get_namespace_identity_lookup() const override;

        class Location; //type: Inventory::Location
        class All; //type: Inventory::All
        class Chassis; //type: Inventory::Chassis
        class Power; //type: Inventory::Power
        class Fan; //type: Inventory::Fan
        class Raw; //type: Inventory::Raw

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_show_inv::Inventory::Location> > location;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_show_inv::Inventory::All> > all;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_show_inv::Inventory::Chassis> > chassis;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_show_inv::Inventory::Power> > power;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_show_inv::Inventory::Fan> > fan;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_show_inv::Inventory::Raw> > raw;
        
}; // Inventory


class Inventory::Location : public ydk::Entity
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

        ydk::YLeaf loc; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf description; //type: string
        ydk::YLeaf pid; //type: string
        ydk::YLeaf vid; //type: string
        ydk::YLeaf sn; //type: string
        ydk::YLeaf index_; //type: uint32

}; // Inventory::Location


class Inventory::All : public ydk::Entity
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

        ydk::YLeaf index_; //type: uint32
        ydk::YLeaf name; //type: string
        ydk::YLeaf description; //type: string
        ydk::YLeaf pid; //type: string
        ydk::YLeaf vid; //type: string
        ydk::YLeaf sn; //type: string
        ydk::YLeaf loc; //type: string

}; // Inventory::All


class Inventory::Chassis : public ydk::Entity
{
    public:
        Chassis();
        ~Chassis();

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

        ydk::YLeaf index_; //type: uint32
        ydk::YLeaf name; //type: string
        ydk::YLeaf description; //type: string
        ydk::YLeaf pid; //type: string
        ydk::YLeaf vid; //type: string
        ydk::YLeaf sn; //type: string
        ydk::YLeaf loc; //type: string

}; // Inventory::Chassis


class Inventory::Power : public ydk::Entity
{
    public:
        Power();
        ~Power();

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

        ydk::YLeaf index_; //type: uint32
        ydk::YLeaf name; //type: string
        ydk::YLeaf description; //type: string
        ydk::YLeaf pid; //type: string
        ydk::YLeaf vid; //type: string
        ydk::YLeaf sn; //type: string
        ydk::YLeaf loc; //type: string

}; // Inventory::Power


class Inventory::Fan : public ydk::Entity
{
    public:
        Fan();
        ~Fan();

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

        ydk::YLeaf index_; //type: uint32
        ydk::YLeaf name; //type: string
        ydk::YLeaf description; //type: string
        ydk::YLeaf pid; //type: string
        ydk::YLeaf vid; //type: string
        ydk::YLeaf sn; //type: string
        ydk::YLeaf loc; //type: string

}; // Inventory::Fan


class Inventory::Raw : public ydk::Entity
{
    public:
        Raw();
        ~Raw();

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

        ydk::YLeaf index_; //type: uint32
        ydk::YLeaf name; //type: string
        ydk::YLeaf description; //type: string
        ydk::YLeaf pid; //type: string
        ydk::YLeaf vid; //type: string
        ydk::YLeaf sn; //type: string
        ydk::YLeaf loc; //type: string

}; // Inventory::Raw


}
}

#endif /* _CISCO_IOS_XR_SYSADMIN_SHOW_INV_ */

