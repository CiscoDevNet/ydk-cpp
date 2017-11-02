#ifndef _CISCO_IOS_XR_INFRA_DUMPER_OPER_
#define _CISCO_IOS_XR_INFRA_DUMPER_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_infra_dumper_oper {

class Context : public ydk::Entity
{
    public:
        Context();
        ~Context();

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

        class ContextNumbers; //type: Context::ContextNumbers
        class ContextLocations; //type: Context::ContextLocations
        class All; //type: Context::All

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_dumper_oper::Context::ContextNumbers> context_numbers;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_dumper_oper::Context::ContextLocations> context_locations;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_dumper_oper::Context::All> all;
        
}; // Context


class Context::ContextNumbers : public ydk::Entity
{
    public:
        ContextNumbers();
        ~ContextNumbers();

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

        class ContextNumber; //type: Context::ContextNumbers::ContextNumber

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_dumper_oper::Context::ContextNumbers::ContextNumber> > context_number;
        
}; // Context::ContextNumbers


class Context::ContextNumbers::ContextNumber : public ydk::Entity
{
    public:
        ContextNumber();
        ~ContextNumber();

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

        ydk::YLeaf context_num; //type: int32
        class Locations; //type: Context::ContextNumbers::ContextNumber::Locations
        class All; //type: Context::ContextNumbers::ContextNumber::All

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_dumper_oper::Context::ContextNumbers::ContextNumber::Locations> locations;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_dumper_oper::Context::ContextNumbers::ContextNumber::All> all;
        
}; // Context::ContextNumbers::ContextNumber


class Context::ContextNumbers::ContextNumber::Locations : public ydk::Entity
{
    public:
        Locations();
        ~Locations();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Location; //type: Context::ContextNumbers::ContextNumber::Locations::Location

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_dumper_oper::Context::ContextNumbers::ContextNumber::Locations::Location> > location;
        
}; // Context::ContextNumbers::ContextNumber::Locations


class Context::ContextNumbers::ContextNumber::Locations::Location : public ydk::Entity
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

        ydk::YLeaf node_name; //type: string
        class Enter; //type: Context::ContextNumbers::ContextNumber::Locations::Location::Enter

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_dumper_oper::Context::ContextNumbers::ContextNumber::Locations::Location::Enter> enter;
        
}; // Context::ContextNumbers::ContextNumber::Locations::Location


class Context::ContextNumbers::ContextNumber::Locations::Location::Enter : public ydk::Entity
{
    public:
        Enter();
        ~Enter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CrashInfo; //type: Context::ContextNumbers::ContextNumber::Locations::Location::Enter::CrashInfo

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_dumper_oper::Context::ContextNumbers::ContextNumber::Locations::Location::Enter::CrashInfo> > crash_info;
        
}; // Context::ContextNumbers::ContextNumber::Locations::Location::Enter


class Context::ContextNumbers::ContextNumber::Locations::Location::Enter::CrashInfo : public ydk::Entity
{
    public:
        CrashInfo();
        ~CrashInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node; //type: string
        class ContextInfo; //type: Context::ContextNumbers::ContextNumber::Locations::Location::Enter::CrashInfo::ContextInfo
        class CrashPackageInformation; //type: Context::ContextNumbers::ContextNumber::Locations::Location::Enter::CrashInfo::CrashPackageInformation

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_dumper_oper::Context::ContextNumbers::ContextNumber::Locations::Location::Enter::CrashInfo::ContextInfo> > context_info;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_dumper_oper::Context::ContextNumbers::ContextNumber::Locations::Location::Enter::CrashInfo::CrashPackageInformation> > crash_package_information;
        
}; // Context::ContextNumbers::ContextNumber::Locations::Location::Enter::CrashInfo


class Context::ContextNumbers::ContextNumber::Locations::Location::Enter::CrashInfo::ContextInfo : public ydk::Entity
{
    public:
        ContextInfo();
        ~ContextInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf process_name; //type: string
        ydk::YLeaf pid; //type: uint32
        ydk::YLeaf tid; //type: uint32
        ydk::YLeaf core_dump_time; //type: string
        ydk::YLeaf sig_num; //type: uint32
        ydk::YLeaf sin_err_str; //type: string
        ydk::YLeaf sig_send_pid; //type: uint32
        ydk::YLeaf sig_code; //type: uint32
        ydk::YLeaf sin_info; //type: string
        ydk::YLeaf core_for_process; //type: string
        ydk::YLeaf registers_info; //type: string
        class StackTrace; //type: Context::ContextNumbers::ContextNumber::Locations::Location::Enter::CrashInfo::ContextInfo::StackTrace
        class DllInfo; //type: Context::ContextNumbers::ContextNumber::Locations::Location::Enter::CrashInfo::ContextInfo::DllInfo

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_dumper_oper::Context::ContextNumbers::ContextNumber::Locations::Location::Enter::CrashInfo::ContextInfo::StackTrace> > stack_trace;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_dumper_oper::Context::ContextNumbers::ContextNumber::Locations::Location::Enter::CrashInfo::ContextInfo::DllInfo> > dll_info;
        
}; // Context::ContextNumbers::ContextNumber::Locations::Location::Enter::CrashInfo::ContextInfo


class Context::ContextNumbers::ContextNumber::Locations::Location::Enter::CrashInfo::ContextInfo::StackTrace : public ydk::Entity
{
    public:
        StackTrace();
        ~StackTrace();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf stack_trace; //type: uint32

}; // Context::ContextNumbers::ContextNumber::Locations::Location::Enter::CrashInfo::ContextInfo::StackTrace


class Context::ContextNumbers::ContextNumber::Locations::Location::Enter::CrashInfo::ContextInfo::DllInfo : public ydk::Entity
{
    public:
        DllInfo();
        ~DllInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf path; //type: string
        ydk::YLeaf text_addr; //type: uint32
        ydk::YLeaf text_size; //type: uint32
        ydk::YLeaf data_addr; //type: uint32
        ydk::YLeaf data_size; //type: uint32
        ydk::YLeaf version; //type: uint32

}; // Context::ContextNumbers::ContextNumber::Locations::Location::Enter::CrashInfo::ContextInfo::DllInfo


class Context::ContextNumbers::ContextNumber::Locations::Location::Enter::CrashInfo::CrashPackageInformation : public ydk::Entity
{
    public:
        CrashPackageInformation();
        ~CrashPackageInformation();

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
        ydk::YLeaf source; //type: string

}; // Context::ContextNumbers::ContextNumber::Locations::Location::Enter::CrashInfo::CrashPackageInformation


class Context::ContextNumbers::ContextNumber::All : public ydk::Entity
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

        class CrashInfo; //type: Context::ContextNumbers::ContextNumber::All::CrashInfo

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_dumper_oper::Context::ContextNumbers::ContextNumber::All::CrashInfo> > crash_info;
        
}; // Context::ContextNumbers::ContextNumber::All


class Context::ContextNumbers::ContextNumber::All::CrashInfo : public ydk::Entity
{
    public:
        CrashInfo();
        ~CrashInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node; //type: string
        class ContextInfo; //type: Context::ContextNumbers::ContextNumber::All::CrashInfo::ContextInfo
        class CrashPackageInformation; //type: Context::ContextNumbers::ContextNumber::All::CrashInfo::CrashPackageInformation

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_dumper_oper::Context::ContextNumbers::ContextNumber::All::CrashInfo::ContextInfo> > context_info;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_dumper_oper::Context::ContextNumbers::ContextNumber::All::CrashInfo::CrashPackageInformation> > crash_package_information;
        
}; // Context::ContextNumbers::ContextNumber::All::CrashInfo


class Context::ContextNumbers::ContextNumber::All::CrashInfo::ContextInfo : public ydk::Entity
{
    public:
        ContextInfo();
        ~ContextInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf process_name; //type: string
        ydk::YLeaf pid; //type: uint32
        ydk::YLeaf tid; //type: uint32
        ydk::YLeaf core_dump_time; //type: string
        ydk::YLeaf sig_num; //type: uint32
        ydk::YLeaf sin_err_str; //type: string
        ydk::YLeaf sig_send_pid; //type: uint32
        ydk::YLeaf sig_code; //type: uint32
        ydk::YLeaf sin_info; //type: string
        ydk::YLeaf core_for_process; //type: string
        ydk::YLeaf registers_info; //type: string
        class StackTrace; //type: Context::ContextNumbers::ContextNumber::All::CrashInfo::ContextInfo::StackTrace
        class DllInfo; //type: Context::ContextNumbers::ContextNumber::All::CrashInfo::ContextInfo::DllInfo

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_dumper_oper::Context::ContextNumbers::ContextNumber::All::CrashInfo::ContextInfo::StackTrace> > stack_trace;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_dumper_oper::Context::ContextNumbers::ContextNumber::All::CrashInfo::ContextInfo::DllInfo> > dll_info;
        
}; // Context::ContextNumbers::ContextNumber::All::CrashInfo::ContextInfo


class Context::ContextNumbers::ContextNumber::All::CrashInfo::ContextInfo::StackTrace : public ydk::Entity
{
    public:
        StackTrace();
        ~StackTrace();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf stack_trace; //type: uint32

}; // Context::ContextNumbers::ContextNumber::All::CrashInfo::ContextInfo::StackTrace


class Context::ContextNumbers::ContextNumber::All::CrashInfo::ContextInfo::DllInfo : public ydk::Entity
{
    public:
        DllInfo();
        ~DllInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf path; //type: string
        ydk::YLeaf text_addr; //type: uint32
        ydk::YLeaf text_size; //type: uint32
        ydk::YLeaf data_addr; //type: uint32
        ydk::YLeaf data_size; //type: uint32
        ydk::YLeaf version; //type: uint32

}; // Context::ContextNumbers::ContextNumber::All::CrashInfo::ContextInfo::DllInfo


class Context::ContextNumbers::ContextNumber::All::CrashInfo::CrashPackageInformation : public ydk::Entity
{
    public:
        CrashPackageInformation();
        ~CrashPackageInformation();

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
        ydk::YLeaf source; //type: string

}; // Context::ContextNumbers::ContextNumber::All::CrashInfo::CrashPackageInformation


class Context::ContextLocations : public ydk::Entity
{
    public:
        ContextLocations();
        ~ContextLocations();

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

        class ContextLocation; //type: Context::ContextLocations::ContextLocation

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_dumper_oper::Context::ContextLocations::ContextLocation> > context_location;
        
}; // Context::ContextLocations


class Context::ContextLocations::ContextLocation : public ydk::Entity
{
    public:
        ContextLocation();
        ~ContextLocation();

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

        ydk::YLeaf node_name; //type: string
        class Numbers; //type: Context::ContextLocations::ContextLocation::Numbers
        class All; //type: Context::ContextLocations::ContextLocation::All

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_dumper_oper::Context::ContextLocations::ContextLocation::Numbers> numbers;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_dumper_oper::Context::ContextLocations::ContextLocation::All> all;
        
}; // Context::ContextLocations::ContextLocation


class Context::ContextLocations::ContextLocation::Numbers : public ydk::Entity
{
    public:
        Numbers();
        ~Numbers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Number; //type: Context::ContextLocations::ContextLocation::Numbers::Number

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_dumper_oper::Context::ContextLocations::ContextLocation::Numbers::Number> > number;
        
}; // Context::ContextLocations::ContextLocation::Numbers


class Context::ContextLocations::ContextLocation::Numbers::Number : public ydk::Entity
{
    public:
        Number();
        ~Number();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf context_num; //type: int32
        class Enter; //type: Context::ContextLocations::ContextLocation::Numbers::Number::Enter

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_dumper_oper::Context::ContextLocations::ContextLocation::Numbers::Number::Enter> enter;
        
}; // Context::ContextLocations::ContextLocation::Numbers::Number


class Context::ContextLocations::ContextLocation::Numbers::Number::Enter : public ydk::Entity
{
    public:
        Enter();
        ~Enter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CrashInfo; //type: Context::ContextLocations::ContextLocation::Numbers::Number::Enter::CrashInfo

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_dumper_oper::Context::ContextLocations::ContextLocation::Numbers::Number::Enter::CrashInfo> > crash_info;
        
}; // Context::ContextLocations::ContextLocation::Numbers::Number::Enter


class Context::ContextLocations::ContextLocation::Numbers::Number::Enter::CrashInfo : public ydk::Entity
{
    public:
        CrashInfo();
        ~CrashInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node; //type: string
        class ContextInfo; //type: Context::ContextLocations::ContextLocation::Numbers::Number::Enter::CrashInfo::ContextInfo
        class CrashPackageInformation; //type: Context::ContextLocations::ContextLocation::Numbers::Number::Enter::CrashInfo::CrashPackageInformation

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_dumper_oper::Context::ContextLocations::ContextLocation::Numbers::Number::Enter::CrashInfo::ContextInfo> > context_info;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_dumper_oper::Context::ContextLocations::ContextLocation::Numbers::Number::Enter::CrashInfo::CrashPackageInformation> > crash_package_information;
        
}; // Context::ContextLocations::ContextLocation::Numbers::Number::Enter::CrashInfo


class Context::ContextLocations::ContextLocation::Numbers::Number::Enter::CrashInfo::ContextInfo : public ydk::Entity
{
    public:
        ContextInfo();
        ~ContextInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf process_name; //type: string
        ydk::YLeaf pid; //type: uint32
        ydk::YLeaf tid; //type: uint32
        ydk::YLeaf core_dump_time; //type: string
        ydk::YLeaf sig_num; //type: uint32
        ydk::YLeaf sin_err_str; //type: string
        ydk::YLeaf sig_send_pid; //type: uint32
        ydk::YLeaf sig_code; //type: uint32
        ydk::YLeaf sin_info; //type: string
        ydk::YLeaf core_for_process; //type: string
        ydk::YLeaf registers_info; //type: string
        class StackTrace; //type: Context::ContextLocations::ContextLocation::Numbers::Number::Enter::CrashInfo::ContextInfo::StackTrace
        class DllInfo; //type: Context::ContextLocations::ContextLocation::Numbers::Number::Enter::CrashInfo::ContextInfo::DllInfo

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_dumper_oper::Context::ContextLocations::ContextLocation::Numbers::Number::Enter::CrashInfo::ContextInfo::StackTrace> > stack_trace;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_dumper_oper::Context::ContextLocations::ContextLocation::Numbers::Number::Enter::CrashInfo::ContextInfo::DllInfo> > dll_info;
        
}; // Context::ContextLocations::ContextLocation::Numbers::Number::Enter::CrashInfo::ContextInfo


class Context::ContextLocations::ContextLocation::Numbers::Number::Enter::CrashInfo::ContextInfo::StackTrace : public ydk::Entity
{
    public:
        StackTrace();
        ~StackTrace();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf stack_trace; //type: uint32

}; // Context::ContextLocations::ContextLocation::Numbers::Number::Enter::CrashInfo::ContextInfo::StackTrace


class Context::ContextLocations::ContextLocation::Numbers::Number::Enter::CrashInfo::ContextInfo::DllInfo : public ydk::Entity
{
    public:
        DllInfo();
        ~DllInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf path; //type: string
        ydk::YLeaf text_addr; //type: uint32
        ydk::YLeaf text_size; //type: uint32
        ydk::YLeaf data_addr; //type: uint32
        ydk::YLeaf data_size; //type: uint32
        ydk::YLeaf version; //type: uint32

}; // Context::ContextLocations::ContextLocation::Numbers::Number::Enter::CrashInfo::ContextInfo::DllInfo


class Context::ContextLocations::ContextLocation::Numbers::Number::Enter::CrashInfo::CrashPackageInformation : public ydk::Entity
{
    public:
        CrashPackageInformation();
        ~CrashPackageInformation();

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
        ydk::YLeaf source; //type: string

}; // Context::ContextLocations::ContextLocation::Numbers::Number::Enter::CrashInfo::CrashPackageInformation


class Context::ContextLocations::ContextLocation::All : public ydk::Entity
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

        class CrashInfo; //type: Context::ContextLocations::ContextLocation::All::CrashInfo

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_dumper_oper::Context::ContextLocations::ContextLocation::All::CrashInfo> > crash_info;
        
}; // Context::ContextLocations::ContextLocation::All


class Context::ContextLocations::ContextLocation::All::CrashInfo : public ydk::Entity
{
    public:
        CrashInfo();
        ~CrashInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node; //type: string
        class ContextInfo; //type: Context::ContextLocations::ContextLocation::All::CrashInfo::ContextInfo
        class CrashPackageInformation; //type: Context::ContextLocations::ContextLocation::All::CrashInfo::CrashPackageInformation

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_dumper_oper::Context::ContextLocations::ContextLocation::All::CrashInfo::ContextInfo> > context_info;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_dumper_oper::Context::ContextLocations::ContextLocation::All::CrashInfo::CrashPackageInformation> > crash_package_information;
        
}; // Context::ContextLocations::ContextLocation::All::CrashInfo


class Context::ContextLocations::ContextLocation::All::CrashInfo::ContextInfo : public ydk::Entity
{
    public:
        ContextInfo();
        ~ContextInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf process_name; //type: string
        ydk::YLeaf pid; //type: uint32
        ydk::YLeaf tid; //type: uint32
        ydk::YLeaf core_dump_time; //type: string
        ydk::YLeaf sig_num; //type: uint32
        ydk::YLeaf sin_err_str; //type: string
        ydk::YLeaf sig_send_pid; //type: uint32
        ydk::YLeaf sig_code; //type: uint32
        ydk::YLeaf sin_info; //type: string
        ydk::YLeaf core_for_process; //type: string
        ydk::YLeaf registers_info; //type: string
        class StackTrace; //type: Context::ContextLocations::ContextLocation::All::CrashInfo::ContextInfo::StackTrace
        class DllInfo; //type: Context::ContextLocations::ContextLocation::All::CrashInfo::ContextInfo::DllInfo

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_dumper_oper::Context::ContextLocations::ContextLocation::All::CrashInfo::ContextInfo::StackTrace> > stack_trace;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_dumper_oper::Context::ContextLocations::ContextLocation::All::CrashInfo::ContextInfo::DllInfo> > dll_info;
        
}; // Context::ContextLocations::ContextLocation::All::CrashInfo::ContextInfo


class Context::ContextLocations::ContextLocation::All::CrashInfo::ContextInfo::StackTrace : public ydk::Entity
{
    public:
        StackTrace();
        ~StackTrace();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf stack_trace; //type: uint32

}; // Context::ContextLocations::ContextLocation::All::CrashInfo::ContextInfo::StackTrace


class Context::ContextLocations::ContextLocation::All::CrashInfo::ContextInfo::DllInfo : public ydk::Entity
{
    public:
        DllInfo();
        ~DllInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf path; //type: string
        ydk::YLeaf text_addr; //type: uint32
        ydk::YLeaf text_size; //type: uint32
        ydk::YLeaf data_addr; //type: uint32
        ydk::YLeaf data_size; //type: uint32
        ydk::YLeaf version; //type: uint32

}; // Context::ContextLocations::ContextLocation::All::CrashInfo::ContextInfo::DllInfo


class Context::ContextLocations::ContextLocation::All::CrashInfo::CrashPackageInformation : public ydk::Entity
{
    public:
        CrashPackageInformation();
        ~CrashPackageInformation();

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
        ydk::YLeaf source; //type: string

}; // Context::ContextLocations::ContextLocation::All::CrashInfo::CrashPackageInformation


class Context::All : public ydk::Entity
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

        class CrashInfo; //type: Context::All::CrashInfo

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_dumper_oper::Context::All::CrashInfo> > crash_info;
        
}; // Context::All


class Context::All::CrashInfo : public ydk::Entity
{
    public:
        CrashInfo();
        ~CrashInfo();

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

        ydk::YLeaf node; //type: string
        class ContextInfo; //type: Context::All::CrashInfo::ContextInfo
        class CrashPackageInformation; //type: Context::All::CrashInfo::CrashPackageInformation

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_dumper_oper::Context::All::CrashInfo::ContextInfo> > context_info;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_dumper_oper::Context::All::CrashInfo::CrashPackageInformation> > crash_package_information;
        
}; // Context::All::CrashInfo


class Context::All::CrashInfo::ContextInfo : public ydk::Entity
{
    public:
        ContextInfo();
        ~ContextInfo();

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

        ydk::YLeaf process_name; //type: string
        ydk::YLeaf pid; //type: uint32
        ydk::YLeaf tid; //type: uint32
        ydk::YLeaf core_dump_time; //type: string
        ydk::YLeaf sig_num; //type: uint32
        ydk::YLeaf sin_err_str; //type: string
        ydk::YLeaf sig_send_pid; //type: uint32
        ydk::YLeaf sig_code; //type: uint32
        ydk::YLeaf sin_info; //type: string
        ydk::YLeaf core_for_process; //type: string
        ydk::YLeaf registers_info; //type: string
        class StackTrace; //type: Context::All::CrashInfo::ContextInfo::StackTrace
        class DllInfo; //type: Context::All::CrashInfo::ContextInfo::DllInfo

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_dumper_oper::Context::All::CrashInfo::ContextInfo::StackTrace> > stack_trace;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_dumper_oper::Context::All::CrashInfo::ContextInfo::DllInfo> > dll_info;
        
}; // Context::All::CrashInfo::ContextInfo


class Context::All::CrashInfo::ContextInfo::StackTrace : public ydk::Entity
{
    public:
        StackTrace();
        ~StackTrace();

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

        ydk::YLeaf stack_trace; //type: uint32

}; // Context::All::CrashInfo::ContextInfo::StackTrace


class Context::All::CrashInfo::ContextInfo::DllInfo : public ydk::Entity
{
    public:
        DllInfo();
        ~DllInfo();

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

        ydk::YLeaf path; //type: string
        ydk::YLeaf text_addr; //type: uint32
        ydk::YLeaf text_size; //type: uint32
        ydk::YLeaf data_addr; //type: uint32
        ydk::YLeaf data_size; //type: uint32
        ydk::YLeaf version; //type: uint32

}; // Context::All::CrashInfo::ContextInfo::DllInfo


class Context::All::CrashInfo::CrashPackageInformation : public ydk::Entity
{
    public:
        CrashPackageInformation();
        ~CrashPackageInformation();

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

        ydk::YLeaf name; //type: string
        ydk::YLeaf source; //type: string

}; // Context::All::CrashInfo::CrashPackageInformation


}
}

#endif /* _CISCO_IOS_XR_INFRA_DUMPER_OPER_ */

