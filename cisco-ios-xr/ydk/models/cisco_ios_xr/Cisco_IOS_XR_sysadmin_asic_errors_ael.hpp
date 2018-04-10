#ifndef _CISCO_IOS_XR_SYSADMIN_ASIC_ERRORS_AEL_
#define _CISCO_IOS_XR_SYSADMIN_ASIC_ERRORS_AEL_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_sysadmin_asic_errors_ael {

class AsicErrors : public ydk::Entity
{
    public:
        AsicErrors();
        ~AsicErrors();

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

        ydk::YLeaf device_name; //type: string
        class Instance; //type: AsicErrors::Instance
        class ShowAllInstances; //type: AsicErrors::ShowAllInstances

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_asic_errors_ael::AsicErrors::Instance> > instance;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_asic_errors_ael::AsicErrors::ShowAllInstances> show_all_instances;
        
}; // AsicErrors


class AsicErrors::Instance : public ydk::Entity
{
    public:
        Instance();
        ~Instance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf instance_num; //type: uint32
        class Sbe; //type: AsicErrors::Instance::Sbe
        class Mbe; //type: AsicErrors::Instance::Mbe
        class Parity; //type: AsicErrors::Instance::Parity
        class Generic; //type: AsicErrors::Instance::Generic
        class Crc; //type: AsicErrors::Instance::Crc
        class Reset; //type: AsicErrors::Instance::Reset
        class Barrier; //type: AsicErrors::Instance::Barrier
        class Unexpected; //type: AsicErrors::Instance::Unexpected
        class Link; //type: AsicErrors::Instance::Link
        class OorThresh; //type: AsicErrors::Instance::OorThresh
        class Bp; //type: AsicErrors::Instance::Bp
        class Io; //type: AsicErrors::Instance::Io
        class Ucode; //type: AsicErrors::Instance::Ucode
        class Config; //type: AsicErrors::Instance::Config
        class Indirect; //type: AsicErrors::Instance::Indirect
        class Nonerr; //type: AsicErrors::Instance::Nonerr
        class Summary; //type: AsicErrors::Instance::Summary
        class All; //type: AsicErrors::Instance::All

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_asic_errors_ael::AsicErrors::Instance::Sbe> sbe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_asic_errors_ael::AsicErrors::Instance::Mbe> mbe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_asic_errors_ael::AsicErrors::Instance::Parity> parity;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_asic_errors_ael::AsicErrors::Instance::Generic> generic;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_asic_errors_ael::AsicErrors::Instance::Crc> crc;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_asic_errors_ael::AsicErrors::Instance::Reset> reset;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_asic_errors_ael::AsicErrors::Instance::Barrier> barrier;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_asic_errors_ael::AsicErrors::Instance::Unexpected> unexpected;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_asic_errors_ael::AsicErrors::Instance::Link> link;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_asic_errors_ael::AsicErrors::Instance::OorThresh> oor_thresh;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_asic_errors_ael::AsicErrors::Instance::Bp> bp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_asic_errors_ael::AsicErrors::Instance::Io> io;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_asic_errors_ael::AsicErrors::Instance::Ucode> ucode;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_asic_errors_ael::AsicErrors::Instance::Config> config;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_asic_errors_ael::AsicErrors::Instance::Indirect> indirect;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_asic_errors_ael::AsicErrors::Instance::Nonerr> nonerr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_asic_errors_ael::AsicErrors::Instance::Summary> summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_asic_errors_ael::AsicErrors::Instance::All> all;
        
}; // AsicErrors::Instance


class AsicErrors::Instance::Sbe : public ydk::Entity
{
    public:
        Sbe();
        ~Sbe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Location; //type: AsicErrors::Instance::Sbe::Location

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_asic_errors_ael::AsicErrors::Instance::Sbe::Location> > location;
        
}; // AsicErrors::Instance::Sbe


class AsicErrors::Instance::Sbe::Location : public ydk::Entity
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
        class LogLst; //type: AsicErrors::Instance::Sbe::Location::LogLst

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_asic_errors_ael::AsicErrors::Instance::Sbe::Location::LogLst> > log_lst;
        
}; // AsicErrors::Instance::Sbe::Location


class AsicErrors::Instance::Sbe::Location::LogLst : public ydk::Entity
{
    public:
        LogLst();
        ~LogLst();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf log_line; //type: string

}; // AsicErrors::Instance::Sbe::Location::LogLst


class AsicErrors::Instance::Mbe : public ydk::Entity
{
    public:
        Mbe();
        ~Mbe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Location; //type: AsicErrors::Instance::Mbe::Location

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_asic_errors_ael::AsicErrors::Instance::Mbe::Location> > location;
        
}; // AsicErrors::Instance::Mbe


class AsicErrors::Instance::Mbe::Location : public ydk::Entity
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
        class LogLst; //type: AsicErrors::Instance::Mbe::Location::LogLst

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_asic_errors_ael::AsicErrors::Instance::Mbe::Location::LogLst> > log_lst;
        
}; // AsicErrors::Instance::Mbe::Location


class AsicErrors::Instance::Mbe::Location::LogLst : public ydk::Entity
{
    public:
        LogLst();
        ~LogLst();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf log_line; //type: string

}; // AsicErrors::Instance::Mbe::Location::LogLst


class AsicErrors::Instance::Parity : public ydk::Entity
{
    public:
        Parity();
        ~Parity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Location; //type: AsicErrors::Instance::Parity::Location

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_asic_errors_ael::AsicErrors::Instance::Parity::Location> > location;
        
}; // AsicErrors::Instance::Parity


class AsicErrors::Instance::Parity::Location : public ydk::Entity
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
        class LogLst; //type: AsicErrors::Instance::Parity::Location::LogLst

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_asic_errors_ael::AsicErrors::Instance::Parity::Location::LogLst> > log_lst;
        
}; // AsicErrors::Instance::Parity::Location


class AsicErrors::Instance::Parity::Location::LogLst : public ydk::Entity
{
    public:
        LogLst();
        ~LogLst();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf log_line; //type: string

}; // AsicErrors::Instance::Parity::Location::LogLst


class AsicErrors::Instance::Generic : public ydk::Entity
{
    public:
        Generic();
        ~Generic();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Location; //type: AsicErrors::Instance::Generic::Location

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_asic_errors_ael::AsicErrors::Instance::Generic::Location> > location;
        
}; // AsicErrors::Instance::Generic


class AsicErrors::Instance::Generic::Location : public ydk::Entity
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
        class LogLst; //type: AsicErrors::Instance::Generic::Location::LogLst

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_asic_errors_ael::AsicErrors::Instance::Generic::Location::LogLst> > log_lst;
        
}; // AsicErrors::Instance::Generic::Location


class AsicErrors::Instance::Generic::Location::LogLst : public ydk::Entity
{
    public:
        LogLst();
        ~LogLst();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf log_line; //type: string

}; // AsicErrors::Instance::Generic::Location::LogLst


class AsicErrors::Instance::Crc : public ydk::Entity
{
    public:
        Crc();
        ~Crc();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Location; //type: AsicErrors::Instance::Crc::Location

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_asic_errors_ael::AsicErrors::Instance::Crc::Location> > location;
        
}; // AsicErrors::Instance::Crc


class AsicErrors::Instance::Crc::Location : public ydk::Entity
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
        class LogLst; //type: AsicErrors::Instance::Crc::Location::LogLst

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_asic_errors_ael::AsicErrors::Instance::Crc::Location::LogLst> > log_lst;
        
}; // AsicErrors::Instance::Crc::Location


class AsicErrors::Instance::Crc::Location::LogLst : public ydk::Entity
{
    public:
        LogLst();
        ~LogLst();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf log_line; //type: string

}; // AsicErrors::Instance::Crc::Location::LogLst


class AsicErrors::Instance::Reset : public ydk::Entity
{
    public:
        Reset();
        ~Reset();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Location; //type: AsicErrors::Instance::Reset::Location

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_asic_errors_ael::AsicErrors::Instance::Reset::Location> > location;
        
}; // AsicErrors::Instance::Reset


class AsicErrors::Instance::Reset::Location : public ydk::Entity
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
        class LogLst; //type: AsicErrors::Instance::Reset::Location::LogLst

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_asic_errors_ael::AsicErrors::Instance::Reset::Location::LogLst> > log_lst;
        
}; // AsicErrors::Instance::Reset::Location


class AsicErrors::Instance::Reset::Location::LogLst : public ydk::Entity
{
    public:
        LogLst();
        ~LogLst();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf log_line; //type: string

}; // AsicErrors::Instance::Reset::Location::LogLst


class AsicErrors::Instance::Barrier : public ydk::Entity
{
    public:
        Barrier();
        ~Barrier();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Location; //type: AsicErrors::Instance::Barrier::Location

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_asic_errors_ael::AsicErrors::Instance::Barrier::Location> > location;
        
}; // AsicErrors::Instance::Barrier


class AsicErrors::Instance::Barrier::Location : public ydk::Entity
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
        class LogLst; //type: AsicErrors::Instance::Barrier::Location::LogLst

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_asic_errors_ael::AsicErrors::Instance::Barrier::Location::LogLst> > log_lst;
        
}; // AsicErrors::Instance::Barrier::Location


class AsicErrors::Instance::Barrier::Location::LogLst : public ydk::Entity
{
    public:
        LogLst();
        ~LogLst();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf log_line; //type: string

}; // AsicErrors::Instance::Barrier::Location::LogLst


class AsicErrors::Instance::Unexpected : public ydk::Entity
{
    public:
        Unexpected();
        ~Unexpected();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Location; //type: AsicErrors::Instance::Unexpected::Location

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_asic_errors_ael::AsicErrors::Instance::Unexpected::Location> > location;
        
}; // AsicErrors::Instance::Unexpected


class AsicErrors::Instance::Unexpected::Location : public ydk::Entity
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
        class LogLst; //type: AsicErrors::Instance::Unexpected::Location::LogLst

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_asic_errors_ael::AsicErrors::Instance::Unexpected::Location::LogLst> > log_lst;
        
}; // AsicErrors::Instance::Unexpected::Location


class AsicErrors::Instance::Unexpected::Location::LogLst : public ydk::Entity
{
    public:
        LogLst();
        ~LogLst();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf log_line; //type: string

}; // AsicErrors::Instance::Unexpected::Location::LogLst


class AsicErrors::Instance::Link : public ydk::Entity
{
    public:
        Link();
        ~Link();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Location; //type: AsicErrors::Instance::Link::Location

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_asic_errors_ael::AsicErrors::Instance::Link::Location> > location;
        
}; // AsicErrors::Instance::Link


class AsicErrors::Instance::Link::Location : public ydk::Entity
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
        class LogLst; //type: AsicErrors::Instance::Link::Location::LogLst

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_asic_errors_ael::AsicErrors::Instance::Link::Location::LogLst> > log_lst;
        
}; // AsicErrors::Instance::Link::Location


class AsicErrors::Instance::Link::Location::LogLst : public ydk::Entity
{
    public:
        LogLst();
        ~LogLst();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf log_line; //type: string

}; // AsicErrors::Instance::Link::Location::LogLst


class AsicErrors::Instance::OorThresh : public ydk::Entity
{
    public:
        OorThresh();
        ~OorThresh();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Location; //type: AsicErrors::Instance::OorThresh::Location

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_asic_errors_ael::AsicErrors::Instance::OorThresh::Location> > location;
        
}; // AsicErrors::Instance::OorThresh


class AsicErrors::Instance::OorThresh::Location : public ydk::Entity
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
        class LogLst; //type: AsicErrors::Instance::OorThresh::Location::LogLst

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_asic_errors_ael::AsicErrors::Instance::OorThresh::Location::LogLst> > log_lst;
        
}; // AsicErrors::Instance::OorThresh::Location


class AsicErrors::Instance::OorThresh::Location::LogLst : public ydk::Entity
{
    public:
        LogLst();
        ~LogLst();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf log_line; //type: string

}; // AsicErrors::Instance::OorThresh::Location::LogLst


class AsicErrors::Instance::Bp : public ydk::Entity
{
    public:
        Bp();
        ~Bp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Location; //type: AsicErrors::Instance::Bp::Location

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_asic_errors_ael::AsicErrors::Instance::Bp::Location> > location;
        
}; // AsicErrors::Instance::Bp


class AsicErrors::Instance::Bp::Location : public ydk::Entity
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
        class LogLst; //type: AsicErrors::Instance::Bp::Location::LogLst

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_asic_errors_ael::AsicErrors::Instance::Bp::Location::LogLst> > log_lst;
        
}; // AsicErrors::Instance::Bp::Location


class AsicErrors::Instance::Bp::Location::LogLst : public ydk::Entity
{
    public:
        LogLst();
        ~LogLst();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf log_line; //type: string

}; // AsicErrors::Instance::Bp::Location::LogLst


class AsicErrors::Instance::Io : public ydk::Entity
{
    public:
        Io();
        ~Io();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Location; //type: AsicErrors::Instance::Io::Location

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_asic_errors_ael::AsicErrors::Instance::Io::Location> > location;
        
}; // AsicErrors::Instance::Io


class AsicErrors::Instance::Io::Location : public ydk::Entity
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
        class LogLst; //type: AsicErrors::Instance::Io::Location::LogLst

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_asic_errors_ael::AsicErrors::Instance::Io::Location::LogLst> > log_lst;
        
}; // AsicErrors::Instance::Io::Location


class AsicErrors::Instance::Io::Location::LogLst : public ydk::Entity
{
    public:
        LogLst();
        ~LogLst();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf log_line; //type: string

}; // AsicErrors::Instance::Io::Location::LogLst


class AsicErrors::Instance::Ucode : public ydk::Entity
{
    public:
        Ucode();
        ~Ucode();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Location; //type: AsicErrors::Instance::Ucode::Location

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_asic_errors_ael::AsicErrors::Instance::Ucode::Location> > location;
        
}; // AsicErrors::Instance::Ucode


class AsicErrors::Instance::Ucode::Location : public ydk::Entity
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
        class LogLst; //type: AsicErrors::Instance::Ucode::Location::LogLst

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_asic_errors_ael::AsicErrors::Instance::Ucode::Location::LogLst> > log_lst;
        
}; // AsicErrors::Instance::Ucode::Location


class AsicErrors::Instance::Ucode::Location::LogLst : public ydk::Entity
{
    public:
        LogLst();
        ~LogLst();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf log_line; //type: string

}; // AsicErrors::Instance::Ucode::Location::LogLst


class AsicErrors::Instance::Config : public ydk::Entity
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

        class Location; //type: AsicErrors::Instance::Config::Location

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_asic_errors_ael::AsicErrors::Instance::Config::Location> > location;
        
}; // AsicErrors::Instance::Config


class AsicErrors::Instance::Config::Location : public ydk::Entity
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
        class LogLst; //type: AsicErrors::Instance::Config::Location::LogLst

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_asic_errors_ael::AsicErrors::Instance::Config::Location::LogLst> > log_lst;
        
}; // AsicErrors::Instance::Config::Location


class AsicErrors::Instance::Config::Location::LogLst : public ydk::Entity
{
    public:
        LogLst();
        ~LogLst();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf log_line; //type: string

}; // AsicErrors::Instance::Config::Location::LogLst


class AsicErrors::Instance::Indirect : public ydk::Entity
{
    public:
        Indirect();
        ~Indirect();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Location; //type: AsicErrors::Instance::Indirect::Location

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_asic_errors_ael::AsicErrors::Instance::Indirect::Location> > location;
        
}; // AsicErrors::Instance::Indirect


class AsicErrors::Instance::Indirect::Location : public ydk::Entity
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
        class LogLst; //type: AsicErrors::Instance::Indirect::Location::LogLst

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_asic_errors_ael::AsicErrors::Instance::Indirect::Location::LogLst> > log_lst;
        
}; // AsicErrors::Instance::Indirect::Location


class AsicErrors::Instance::Indirect::Location::LogLst : public ydk::Entity
{
    public:
        LogLst();
        ~LogLst();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf log_line; //type: string

}; // AsicErrors::Instance::Indirect::Location::LogLst


class AsicErrors::Instance::Nonerr : public ydk::Entity
{
    public:
        Nonerr();
        ~Nonerr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Location; //type: AsicErrors::Instance::Nonerr::Location

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_asic_errors_ael::AsicErrors::Instance::Nonerr::Location> > location;
        
}; // AsicErrors::Instance::Nonerr


class AsicErrors::Instance::Nonerr::Location : public ydk::Entity
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
        class LogLst; //type: AsicErrors::Instance::Nonerr::Location::LogLst

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_asic_errors_ael::AsicErrors::Instance::Nonerr::Location::LogLst> > log_lst;
        
}; // AsicErrors::Instance::Nonerr::Location


class AsicErrors::Instance::Nonerr::Location::LogLst : public ydk::Entity
{
    public:
        LogLst();
        ~LogLst();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf log_line; //type: string

}; // AsicErrors::Instance::Nonerr::Location::LogLst


class AsicErrors::Instance::Summary : public ydk::Entity
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

        class Location; //type: AsicErrors::Instance::Summary::Location

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_asic_errors_ael::AsicErrors::Instance::Summary::Location> > location;
        
}; // AsicErrors::Instance::Summary


class AsicErrors::Instance::Summary::Location : public ydk::Entity
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
        class LogLst; //type: AsicErrors::Instance::Summary::Location::LogLst

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_asic_errors_ael::AsicErrors::Instance::Summary::Location::LogLst> > log_lst;
        
}; // AsicErrors::Instance::Summary::Location


class AsicErrors::Instance::Summary::Location::LogLst : public ydk::Entity
{
    public:
        LogLst();
        ~LogLst();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf log_line; //type: string

}; // AsicErrors::Instance::Summary::Location::LogLst


class AsicErrors::Instance::All : public ydk::Entity
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

        class History; //type: AsicErrors::Instance::All::History
        class Location; //type: AsicErrors::Instance::All::Location

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_asic_errors_ael::AsicErrors::Instance::All::History> history;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_asic_errors_ael::AsicErrors::Instance::All::Location> > location;
        
}; // AsicErrors::Instance::All


class AsicErrors::Instance::All::History : public ydk::Entity
{
    public:
        History();
        ~History();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Location; //type: AsicErrors::Instance::All::History::Location

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_asic_errors_ael::AsicErrors::Instance::All::History::Location> > location;
        
}; // AsicErrors::Instance::All::History


class AsicErrors::Instance::All::History::Location : public ydk::Entity
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
        class LogLst; //type: AsicErrors::Instance::All::History::Location::LogLst

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_asic_errors_ael::AsicErrors::Instance::All::History::Location::LogLst> > log_lst;
        
}; // AsicErrors::Instance::All::History::Location


class AsicErrors::Instance::All::History::Location::LogLst : public ydk::Entity
{
    public:
        LogLst();
        ~LogLst();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf log_line; //type: string

}; // AsicErrors::Instance::All::History::Location::LogLst


class AsicErrors::Instance::All::Location : public ydk::Entity
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
        class LogLst; //type: AsicErrors::Instance::All::Location::LogLst

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_asic_errors_ael::AsicErrors::Instance::All::Location::LogLst> > log_lst;
        
}; // AsicErrors::Instance::All::Location


class AsicErrors::Instance::All::Location::LogLst : public ydk::Entity
{
    public:
        LogLst();
        ~LogLst();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf log_line; //type: string

}; // AsicErrors::Instance::All::Location::LogLst


class AsicErrors::ShowAllInstances : public ydk::Entity
{
    public:
        ShowAllInstances();
        ~ShowAllInstances();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Sbe; //type: AsicErrors::ShowAllInstances::Sbe
        class Mbe; //type: AsicErrors::ShowAllInstances::Mbe
        class Parity; //type: AsicErrors::ShowAllInstances::Parity
        class Generic; //type: AsicErrors::ShowAllInstances::Generic
        class Crc; //type: AsicErrors::ShowAllInstances::Crc
        class Reset; //type: AsicErrors::ShowAllInstances::Reset
        class Barrier; //type: AsicErrors::ShowAllInstances::Barrier
        class Unexpected; //type: AsicErrors::ShowAllInstances::Unexpected
        class Link; //type: AsicErrors::ShowAllInstances::Link
        class OorThresh; //type: AsicErrors::ShowAllInstances::OorThresh
        class Bp; //type: AsicErrors::ShowAllInstances::Bp
        class Io; //type: AsicErrors::ShowAllInstances::Io
        class Ucode; //type: AsicErrors::ShowAllInstances::Ucode
        class Config; //type: AsicErrors::ShowAllInstances::Config
        class Indirect; //type: AsicErrors::ShowAllInstances::Indirect
        class Nonerr; //type: AsicErrors::ShowAllInstances::Nonerr
        class Summary; //type: AsicErrors::ShowAllInstances::Summary
        class All; //type: AsicErrors::ShowAllInstances::All

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_asic_errors_ael::AsicErrors::ShowAllInstances::Sbe> sbe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_asic_errors_ael::AsicErrors::ShowAllInstances::Mbe> mbe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_asic_errors_ael::AsicErrors::ShowAllInstances::Parity> parity;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_asic_errors_ael::AsicErrors::ShowAllInstances::Generic> generic;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_asic_errors_ael::AsicErrors::ShowAllInstances::Crc> crc;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_asic_errors_ael::AsicErrors::ShowAllInstances::Reset> reset;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_asic_errors_ael::AsicErrors::ShowAllInstances::Barrier> barrier;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_asic_errors_ael::AsicErrors::ShowAllInstances::Unexpected> unexpected;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_asic_errors_ael::AsicErrors::ShowAllInstances::Link> link;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_asic_errors_ael::AsicErrors::ShowAllInstances::OorThresh> oor_thresh;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_asic_errors_ael::AsicErrors::ShowAllInstances::Bp> bp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_asic_errors_ael::AsicErrors::ShowAllInstances::Io> io;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_asic_errors_ael::AsicErrors::ShowAllInstances::Ucode> ucode;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_asic_errors_ael::AsicErrors::ShowAllInstances::Config> config;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_asic_errors_ael::AsicErrors::ShowAllInstances::Indirect> indirect;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_asic_errors_ael::AsicErrors::ShowAllInstances::Nonerr> nonerr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_asic_errors_ael::AsicErrors::ShowAllInstances::Summary> summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_asic_errors_ael::AsicErrors::ShowAllInstances::All> all;
        
}; // AsicErrors::ShowAllInstances


class AsicErrors::ShowAllInstances::Sbe : public ydk::Entity
{
    public:
        Sbe();
        ~Sbe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Location; //type: AsicErrors::ShowAllInstances::Sbe::Location

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_asic_errors_ael::AsicErrors::ShowAllInstances::Sbe::Location> > location;
        
}; // AsicErrors::ShowAllInstances::Sbe


class AsicErrors::ShowAllInstances::Sbe::Location : public ydk::Entity
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
        class LogLst; //type: AsicErrors::ShowAllInstances::Sbe::Location::LogLst

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_asic_errors_ael::AsicErrors::ShowAllInstances::Sbe::Location::LogLst> > log_lst;
        
}; // AsicErrors::ShowAllInstances::Sbe::Location


class AsicErrors::ShowAllInstances::Sbe::Location::LogLst : public ydk::Entity
{
    public:
        LogLst();
        ~LogLst();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf log_line; //type: string

}; // AsicErrors::ShowAllInstances::Sbe::Location::LogLst


class AsicErrors::ShowAllInstances::Mbe : public ydk::Entity
{
    public:
        Mbe();
        ~Mbe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Location; //type: AsicErrors::ShowAllInstances::Mbe::Location

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_asic_errors_ael::AsicErrors::ShowAllInstances::Mbe::Location> > location;
        
}; // AsicErrors::ShowAllInstances::Mbe


class AsicErrors::ShowAllInstances::Mbe::Location : public ydk::Entity
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
        class LogLst; //type: AsicErrors::ShowAllInstances::Mbe::Location::LogLst

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_asic_errors_ael::AsicErrors::ShowAllInstances::Mbe::Location::LogLst> > log_lst;
        
}; // AsicErrors::ShowAllInstances::Mbe::Location


class AsicErrors::ShowAllInstances::Mbe::Location::LogLst : public ydk::Entity
{
    public:
        LogLst();
        ~LogLst();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf log_line; //type: string

}; // AsicErrors::ShowAllInstances::Mbe::Location::LogLst


class AsicErrors::ShowAllInstances::Parity : public ydk::Entity
{
    public:
        Parity();
        ~Parity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Location; //type: AsicErrors::ShowAllInstances::Parity::Location

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_asic_errors_ael::AsicErrors::ShowAllInstances::Parity::Location> > location;
        
}; // AsicErrors::ShowAllInstances::Parity


class AsicErrors::ShowAllInstances::Parity::Location : public ydk::Entity
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
        class LogLst; //type: AsicErrors::ShowAllInstances::Parity::Location::LogLst

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_asic_errors_ael::AsicErrors::ShowAllInstances::Parity::Location::LogLst> > log_lst;
        
}; // AsicErrors::ShowAllInstances::Parity::Location


class AsicErrors::ShowAllInstances::Parity::Location::LogLst : public ydk::Entity
{
    public:
        LogLst();
        ~LogLst();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf log_line; //type: string

}; // AsicErrors::ShowAllInstances::Parity::Location::LogLst


class AsicErrors::ShowAllInstances::Generic : public ydk::Entity
{
    public:
        Generic();
        ~Generic();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Location; //type: AsicErrors::ShowAllInstances::Generic::Location

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_asic_errors_ael::AsicErrors::ShowAllInstances::Generic::Location> > location;
        
}; // AsicErrors::ShowAllInstances::Generic


class AsicErrors::ShowAllInstances::Generic::Location : public ydk::Entity
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
        class LogLst; //type: AsicErrors::ShowAllInstances::Generic::Location::LogLst

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_asic_errors_ael::AsicErrors::ShowAllInstances::Generic::Location::LogLst> > log_lst;
        
}; // AsicErrors::ShowAllInstances::Generic::Location


class AsicErrors::ShowAllInstances::Generic::Location::LogLst : public ydk::Entity
{
    public:
        LogLst();
        ~LogLst();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf log_line; //type: string

}; // AsicErrors::ShowAllInstances::Generic::Location::LogLst


class AsicErrors::ShowAllInstances::Crc : public ydk::Entity
{
    public:
        Crc();
        ~Crc();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Location; //type: AsicErrors::ShowAllInstances::Crc::Location

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_asic_errors_ael::AsicErrors::ShowAllInstances::Crc::Location> > location;
        
}; // AsicErrors::ShowAllInstances::Crc


class AsicErrors::ShowAllInstances::Crc::Location : public ydk::Entity
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
        class LogLst; //type: AsicErrors::ShowAllInstances::Crc::Location::LogLst

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_asic_errors_ael::AsicErrors::ShowAllInstances::Crc::Location::LogLst> > log_lst;
        
}; // AsicErrors::ShowAllInstances::Crc::Location


class AsicErrors::ShowAllInstances::Crc::Location::LogLst : public ydk::Entity
{
    public:
        LogLst();
        ~LogLst();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf log_line; //type: string

}; // AsicErrors::ShowAllInstances::Crc::Location::LogLst


class AsicErrors::ShowAllInstances::Reset : public ydk::Entity
{
    public:
        Reset();
        ~Reset();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Location; //type: AsicErrors::ShowAllInstances::Reset::Location

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_asic_errors_ael::AsicErrors::ShowAllInstances::Reset::Location> > location;
        
}; // AsicErrors::ShowAllInstances::Reset


class AsicErrors::ShowAllInstances::Reset::Location : public ydk::Entity
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
        class LogLst; //type: AsicErrors::ShowAllInstances::Reset::Location::LogLst

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_asic_errors_ael::AsicErrors::ShowAllInstances::Reset::Location::LogLst> > log_lst;
        
}; // AsicErrors::ShowAllInstances::Reset::Location


class AsicErrors::ShowAllInstances::Reset::Location::LogLst : public ydk::Entity
{
    public:
        LogLst();
        ~LogLst();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf log_line; //type: string

}; // AsicErrors::ShowAllInstances::Reset::Location::LogLst


class AsicErrors::ShowAllInstances::Barrier : public ydk::Entity
{
    public:
        Barrier();
        ~Barrier();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Location; //type: AsicErrors::ShowAllInstances::Barrier::Location

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_asic_errors_ael::AsicErrors::ShowAllInstances::Barrier::Location> > location;
        
}; // AsicErrors::ShowAllInstances::Barrier


class AsicErrors::ShowAllInstances::Barrier::Location : public ydk::Entity
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
        class LogLst; //type: AsicErrors::ShowAllInstances::Barrier::Location::LogLst

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_asic_errors_ael::AsicErrors::ShowAllInstances::Barrier::Location::LogLst> > log_lst;
        
}; // AsicErrors::ShowAllInstances::Barrier::Location


class AsicErrors::ShowAllInstances::Barrier::Location::LogLst : public ydk::Entity
{
    public:
        LogLst();
        ~LogLst();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf log_line; //type: string

}; // AsicErrors::ShowAllInstances::Barrier::Location::LogLst


class AsicErrors::ShowAllInstances::Unexpected : public ydk::Entity
{
    public:
        Unexpected();
        ~Unexpected();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Location; //type: AsicErrors::ShowAllInstances::Unexpected::Location

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_asic_errors_ael::AsicErrors::ShowAllInstances::Unexpected::Location> > location;
        
}; // AsicErrors::ShowAllInstances::Unexpected


class AsicErrors::ShowAllInstances::Unexpected::Location : public ydk::Entity
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
        class LogLst; //type: AsicErrors::ShowAllInstances::Unexpected::Location::LogLst

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_asic_errors_ael::AsicErrors::ShowAllInstances::Unexpected::Location::LogLst> > log_lst;
        
}; // AsicErrors::ShowAllInstances::Unexpected::Location


class AsicErrors::ShowAllInstances::Unexpected::Location::LogLst : public ydk::Entity
{
    public:
        LogLst();
        ~LogLst();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf log_line; //type: string

}; // AsicErrors::ShowAllInstances::Unexpected::Location::LogLst


class AsicErrors::ShowAllInstances::Link : public ydk::Entity
{
    public:
        Link();
        ~Link();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Location; //type: AsicErrors::ShowAllInstances::Link::Location

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_asic_errors_ael::AsicErrors::ShowAllInstances::Link::Location> > location;
        
}; // AsicErrors::ShowAllInstances::Link


class AsicErrors::ShowAllInstances::Link::Location : public ydk::Entity
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
        class LogLst; //type: AsicErrors::ShowAllInstances::Link::Location::LogLst

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_asic_errors_ael::AsicErrors::ShowAllInstances::Link::Location::LogLst> > log_lst;
        
}; // AsicErrors::ShowAllInstances::Link::Location


class AsicErrors::ShowAllInstances::Link::Location::LogLst : public ydk::Entity
{
    public:
        LogLst();
        ~LogLst();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf log_line; //type: string

}; // AsicErrors::ShowAllInstances::Link::Location::LogLst


class AsicErrors::ShowAllInstances::OorThresh : public ydk::Entity
{
    public:
        OorThresh();
        ~OorThresh();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Location; //type: AsicErrors::ShowAllInstances::OorThresh::Location

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_asic_errors_ael::AsicErrors::ShowAllInstances::OorThresh::Location> > location;
        
}; // AsicErrors::ShowAllInstances::OorThresh


class AsicErrors::ShowAllInstances::OorThresh::Location : public ydk::Entity
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
        class LogLst; //type: AsicErrors::ShowAllInstances::OorThresh::Location::LogLst

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_asic_errors_ael::AsicErrors::ShowAllInstances::OorThresh::Location::LogLst> > log_lst;
        
}; // AsicErrors::ShowAllInstances::OorThresh::Location


class AsicErrors::ShowAllInstances::OorThresh::Location::LogLst : public ydk::Entity
{
    public:
        LogLst();
        ~LogLst();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf log_line; //type: string

}; // AsicErrors::ShowAllInstances::OorThresh::Location::LogLst


class AsicErrors::ShowAllInstances::Bp : public ydk::Entity
{
    public:
        Bp();
        ~Bp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Location; //type: AsicErrors::ShowAllInstances::Bp::Location

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_asic_errors_ael::AsicErrors::ShowAllInstances::Bp::Location> > location;
        
}; // AsicErrors::ShowAllInstances::Bp


class AsicErrors::ShowAllInstances::Bp::Location : public ydk::Entity
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
        class LogLst; //type: AsicErrors::ShowAllInstances::Bp::Location::LogLst

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_asic_errors_ael::AsicErrors::ShowAllInstances::Bp::Location::LogLst> > log_lst;
        
}; // AsicErrors::ShowAllInstances::Bp::Location


class AsicErrors::ShowAllInstances::Bp::Location::LogLst : public ydk::Entity
{
    public:
        LogLst();
        ~LogLst();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf log_line; //type: string

}; // AsicErrors::ShowAllInstances::Bp::Location::LogLst


class AsicErrors::ShowAllInstances::Io : public ydk::Entity
{
    public:
        Io();
        ~Io();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Location; //type: AsicErrors::ShowAllInstances::Io::Location

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_asic_errors_ael::AsicErrors::ShowAllInstances::Io::Location> > location;
        
}; // AsicErrors::ShowAllInstances::Io


class AsicErrors::ShowAllInstances::Io::Location : public ydk::Entity
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
        class LogLst; //type: AsicErrors::ShowAllInstances::Io::Location::LogLst

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_asic_errors_ael::AsicErrors::ShowAllInstances::Io::Location::LogLst> > log_lst;
        
}; // AsicErrors::ShowAllInstances::Io::Location


class AsicErrors::ShowAllInstances::Io::Location::LogLst : public ydk::Entity
{
    public:
        LogLst();
        ~LogLst();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf log_line; //type: string

}; // AsicErrors::ShowAllInstances::Io::Location::LogLst


class AsicErrors::ShowAllInstances::Ucode : public ydk::Entity
{
    public:
        Ucode();
        ~Ucode();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Location; //type: AsicErrors::ShowAllInstances::Ucode::Location

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_asic_errors_ael::AsicErrors::ShowAllInstances::Ucode::Location> > location;
        
}; // AsicErrors::ShowAllInstances::Ucode


class AsicErrors::ShowAllInstances::Ucode::Location : public ydk::Entity
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
        class LogLst; //type: AsicErrors::ShowAllInstances::Ucode::Location::LogLst

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_asic_errors_ael::AsicErrors::ShowAllInstances::Ucode::Location::LogLst> > log_lst;
        
}; // AsicErrors::ShowAllInstances::Ucode::Location


class AsicErrors::ShowAllInstances::Ucode::Location::LogLst : public ydk::Entity
{
    public:
        LogLst();
        ~LogLst();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf log_line; //type: string

}; // AsicErrors::ShowAllInstances::Ucode::Location::LogLst


class AsicErrors::ShowAllInstances::Config : public ydk::Entity
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

        class Location; //type: AsicErrors::ShowAllInstances::Config::Location

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_asic_errors_ael::AsicErrors::ShowAllInstances::Config::Location> > location;
        
}; // AsicErrors::ShowAllInstances::Config


class AsicErrors::ShowAllInstances::Config::Location : public ydk::Entity
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
        class LogLst; //type: AsicErrors::ShowAllInstances::Config::Location::LogLst

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_asic_errors_ael::AsicErrors::ShowAllInstances::Config::Location::LogLst> > log_lst;
        
}; // AsicErrors::ShowAllInstances::Config::Location


class AsicErrors::ShowAllInstances::Config::Location::LogLst : public ydk::Entity
{
    public:
        LogLst();
        ~LogLst();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf log_line; //type: string

}; // AsicErrors::ShowAllInstances::Config::Location::LogLst


class AsicErrors::ShowAllInstances::Indirect : public ydk::Entity
{
    public:
        Indirect();
        ~Indirect();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Location; //type: AsicErrors::ShowAllInstances::Indirect::Location

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_asic_errors_ael::AsicErrors::ShowAllInstances::Indirect::Location> > location;
        
}; // AsicErrors::ShowAllInstances::Indirect


class AsicErrors::ShowAllInstances::Indirect::Location : public ydk::Entity
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
        class LogLst; //type: AsicErrors::ShowAllInstances::Indirect::Location::LogLst

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_asic_errors_ael::AsicErrors::ShowAllInstances::Indirect::Location::LogLst> > log_lst;
        
}; // AsicErrors::ShowAllInstances::Indirect::Location


class AsicErrors::ShowAllInstances::Indirect::Location::LogLst : public ydk::Entity
{
    public:
        LogLst();
        ~LogLst();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf log_line; //type: string

}; // AsicErrors::ShowAllInstances::Indirect::Location::LogLst


class AsicErrors::ShowAllInstances::Nonerr : public ydk::Entity
{
    public:
        Nonerr();
        ~Nonerr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Location; //type: AsicErrors::ShowAllInstances::Nonerr::Location

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_asic_errors_ael::AsicErrors::ShowAllInstances::Nonerr::Location> > location;
        
}; // AsicErrors::ShowAllInstances::Nonerr


class AsicErrors::ShowAllInstances::Nonerr::Location : public ydk::Entity
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
        class LogLst; //type: AsicErrors::ShowAllInstances::Nonerr::Location::LogLst

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_asic_errors_ael::AsicErrors::ShowAllInstances::Nonerr::Location::LogLst> > log_lst;
        
}; // AsicErrors::ShowAllInstances::Nonerr::Location


class AsicErrors::ShowAllInstances::Nonerr::Location::LogLst : public ydk::Entity
{
    public:
        LogLst();
        ~LogLst();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf log_line; //type: string

}; // AsicErrors::ShowAllInstances::Nonerr::Location::LogLst


class AsicErrors::ShowAllInstances::Summary : public ydk::Entity
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

        class Location; //type: AsicErrors::ShowAllInstances::Summary::Location

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_asic_errors_ael::AsicErrors::ShowAllInstances::Summary::Location> > location;
        
}; // AsicErrors::ShowAllInstances::Summary


class AsicErrors::ShowAllInstances::Summary::Location : public ydk::Entity
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
        class LogLst; //type: AsicErrors::ShowAllInstances::Summary::Location::LogLst

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_asic_errors_ael::AsicErrors::ShowAllInstances::Summary::Location::LogLst> > log_lst;
        
}; // AsicErrors::ShowAllInstances::Summary::Location


class AsicErrors::ShowAllInstances::Summary::Location::LogLst : public ydk::Entity
{
    public:
        LogLst();
        ~LogLst();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf log_line; //type: string

}; // AsicErrors::ShowAllInstances::Summary::Location::LogLst


class AsicErrors::ShowAllInstances::All : public ydk::Entity
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

        class Location; //type: AsicErrors::ShowAllInstances::All::Location

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_asic_errors_ael::AsicErrors::ShowAllInstances::All::Location> > location;
        
}; // AsicErrors::ShowAllInstances::All


class AsicErrors::ShowAllInstances::All::Location : public ydk::Entity
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
        class LogLst; //type: AsicErrors::ShowAllInstances::All::Location::LogLst

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_asic_errors_ael::AsicErrors::ShowAllInstances::All::Location::LogLst> > log_lst;
        
}; // AsicErrors::ShowAllInstances::All::Location


class AsicErrors::ShowAllInstances::All::Location::LogLst : public ydk::Entity
{
    public:
        LogLst();
        ~LogLst();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf log_line; //type: string

}; // AsicErrors::ShowAllInstances::All::Location::LogLst


}
}

#endif /* _CISCO_IOS_XR_SYSADMIN_ASIC_ERRORS_AEL_ */

