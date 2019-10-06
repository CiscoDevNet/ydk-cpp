#ifndef _CISCO_IOS_XR_INFRA_DUMPER_EXCEPTION_OPER_
#define _CISCO_IOS_XR_INFRA_DUMPER_EXCEPTION_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_infra_dumper_exception_oper {

class Exception : public ydk::Entity
{
    public:
        Exception();
        ~Exception();

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

        class Enter; //type: Exception::Enter

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_dumper_exception_oper::Exception::Enter> enter;
        
}; // Exception


class Exception::Enter : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf pak_mem; //type: string
        ydk::YLeaf sparse; //type: string
        ydk::YLeaf spr_size; //type: string
        ydk::YLeaf core_verification; //type: string
        ydk::YLeaf dump_time_out; //type: string
        class DisplayConfig1; //type: Exception::Enter::DisplayConfig1
        class DisplayConfig2; //type: Exception::Enter::DisplayConfig2
        class DisplayConfig3; //type: Exception::Enter::DisplayConfig3
        class DisplayFallBackConfig1; //type: Exception::Enter::DisplayFallBackConfig1
        class DisplayFallBackConfig2; //type: Exception::Enter::DisplayFallBackConfig2
        class DisplayFallBackConfig3; //type: Exception::Enter::DisplayFallBackConfig3
        class KernelConfig; //type: Exception::Enter::KernelConfig
        class KernelRouteConfig; //type: Exception::Enter::KernelRouteConfig
        class CoreSize; //type: Exception::Enter::CoreSize
        class MemoryThreshold; //type: Exception::Enter::MemoryThreshold
        class ProcSize; //type: Exception::Enter::ProcSize
        class Qsize; //type: Exception::Enter::Qsize

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_dumper_exception_oper::Exception::Enter::DisplayConfig1> display_config1;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_dumper_exception_oper::Exception::Enter::DisplayConfig2> display_config2;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_dumper_exception_oper::Exception::Enter::DisplayConfig3> display_config3;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_dumper_exception_oper::Exception::Enter::DisplayFallBackConfig1> display_fall_back_config1;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_dumper_exception_oper::Exception::Enter::DisplayFallBackConfig2> display_fall_back_config2;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_dumper_exception_oper::Exception::Enter::DisplayFallBackConfig3> display_fall_back_config3;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_dumper_exception_oper::Exception::Enter::KernelConfig> kernel_config;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_dumper_exception_oper::Exception::Enter::KernelRouteConfig> kernel_route_config;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_dumper_exception_oper::Exception::Enter::CoreSize> core_size;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_dumper_exception_oper::Exception::Enter::MemoryThreshold> memory_threshold;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_dumper_exception_oper::Exception::Enter::ProcSize> proc_size;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_dumper_exception_oper::Exception::Enter::Qsize> qsize;
        
}; // Exception::Enter


class Exception::Enter::DisplayConfig1 : public ydk::Entity
{
    public:
        DisplayConfig1();
        ~DisplayConfig1();

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

        ydk::YLeaf choice; //type: string
        ydk::YLeaf path; //type: string
        ydk::YLeaf compress; //type: string
        ydk::YLeaf file_name; //type: string
        ydk::YLeaf range_low; //type: uint32
        ydk::YLeaf range_high; //type: uint32

}; // Exception::Enter::DisplayConfig1


class Exception::Enter::DisplayConfig2 : public ydk::Entity
{
    public:
        DisplayConfig2();
        ~DisplayConfig2();

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

        ydk::YLeaf choice; //type: string
        ydk::YLeaf path; //type: string
        ydk::YLeaf compress; //type: string
        ydk::YLeaf file_name; //type: string
        ydk::YLeaf range_low; //type: uint32
        ydk::YLeaf range_high; //type: uint32

}; // Exception::Enter::DisplayConfig2


class Exception::Enter::DisplayConfig3 : public ydk::Entity
{
    public:
        DisplayConfig3();
        ~DisplayConfig3();

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

        ydk::YLeaf choice; //type: string
        ydk::YLeaf path; //type: string
        ydk::YLeaf compress; //type: string
        ydk::YLeaf file_name; //type: string
        ydk::YLeaf range_low; //type: uint32
        ydk::YLeaf range_high; //type: uint32

}; // Exception::Enter::DisplayConfig3


class Exception::Enter::DisplayFallBackConfig1 : public ydk::Entity
{
    public:
        DisplayFallBackConfig1();
        ~DisplayFallBackConfig1();

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

        ydk::YLeaf choice_fall_back; //type: string
        ydk::YLeaf path; //type: string
        ydk::YLeaf compress; //type: string
        ydk::YLeaf file_name; //type: string
        ydk::YLeaf boot_device_str; //type: string
        ydk::YLeaf range_low; //type: uint32
        ydk::YLeaf range_high; //type: uint32

}; // Exception::Enter::DisplayFallBackConfig1


class Exception::Enter::DisplayFallBackConfig2 : public ydk::Entity
{
    public:
        DisplayFallBackConfig2();
        ~DisplayFallBackConfig2();

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

        ydk::YLeaf choice_fall_back; //type: string
        ydk::YLeaf path; //type: string
        ydk::YLeaf compress; //type: string
        ydk::YLeaf file_name; //type: string
        ydk::YLeaf boot_device_str; //type: string
        ydk::YLeaf range_low; //type: uint32
        ydk::YLeaf range_high; //type: uint32

}; // Exception::Enter::DisplayFallBackConfig2


class Exception::Enter::DisplayFallBackConfig3 : public ydk::Entity
{
    public:
        DisplayFallBackConfig3();
        ~DisplayFallBackConfig3();

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

        ydk::YLeaf choice_fall_back; //type: string
        ydk::YLeaf path; //type: string
        ydk::YLeaf compress; //type: string
        ydk::YLeaf file_name; //type: string
        ydk::YLeaf boot_device_str; //type: string
        ydk::YLeaf range_low; //type: uint32
        ydk::YLeaf range_high; //type: uint32

}; // Exception::Enter::DisplayFallBackConfig3


class Exception::Enter::KernelConfig : public ydk::Entity
{
    public:
        KernelConfig();
        ~KernelConfig();

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

        ydk::YLeaf choice_fall_back; //type: string
        ydk::YLeaf path; //type: string
        ydk::YLeaf file_name; //type: string
        ydk::YLeaf memory; //type: string

}; // Exception::Enter::KernelConfig


class Exception::Enter::KernelRouteConfig : public ydk::Entity
{
    public:
        KernelRouteConfig();
        ~KernelRouteConfig();

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

        ydk::YLeaf slot; //type: uint32
        ydk::YLeaf port; //type: uint32
        ydk::YLeaf ip_addr; //type: string
        ydk::YLeaf mask; //type: string
        ydk::YLeaf destination; //type: string
        ydk::YLeaf next_hop; //type: string

}; // Exception::Enter::KernelRouteConfig


class Exception::Enter::CoreSize : public ydk::Entity
{
    public:
        CoreSize();
        ~CoreSize();

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

        ydk::YLeaf string; //type: string

}; // Exception::Enter::CoreSize


class Exception::Enter::MemoryThreshold : public ydk::Entity
{
    public:
        MemoryThreshold();
        ~MemoryThreshold();

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

        ydk::YLeaf string; //type: string

}; // Exception::Enter::MemoryThreshold


class Exception::Enter::ProcSize : public ydk::Entity
{
    public:
        ProcSize();
        ~ProcSize();

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

        ydk::YLeaf string; //type: string

}; // Exception::Enter::ProcSize


class Exception::Enter::Qsize : public ydk::Entity
{
    public:
        Qsize();
        ~Qsize();

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

        ydk::YLeaf string; //type: string

}; // Exception::Enter::Qsize


}
}

#endif /* _CISCO_IOS_XR_INFRA_DUMPER_EXCEPTION_OPER_ */

