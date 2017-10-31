#ifndef _CISCO_IOS_XR_INFRA_DUMPER_CFG_
#define _CISCO_IOS_XR_INFRA_DUMPER_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_infra_dumper_cfg {

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

        ydk::YLeaf sparse; //type: boolean
        ydk::YLeaf core_verification; //type: boolean
        ydk::YLeaf core_size; //type: uint32
        ydk::YLeaf kernel_debugger; //type: empty
        ydk::YLeaf packet_memory; //type: boolean
        ydk::YLeaf sparse_size; //type: uint32
        ydk::YLeaf memory_threshold; //type: uint32
        class Choice1; //type: Exception::Choice1
        class Choice3; //type: Exception::Choice3
        class ProcessNames; //type: Exception::ProcessNames
        class Choice2; //type: Exception::Choice2

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_dumper_cfg::Exception::Choice1> choice1;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_dumper_cfg::Exception::Choice3> choice3;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_dumper_cfg::Exception::ProcessNames> process_names;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_dumper_cfg::Exception::Choice2> choice2;
        
}; // Exception


class Exception::Choice1 : public ydk::Entity
{
    public:
        Choice1();
        ~Choice1();

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

        ydk::YLeaf compress; //type: boolean
        ydk::YLeaf lower_limit; //type: uint32
        ydk::YLeaf higher_limit; //type: uint32
        ydk::YLeaf file_path; //type: string
        ydk::YLeaf filename; //type: string

}; // Exception::Choice1


class Exception::Choice3 : public ydk::Entity
{
    public:
        Choice3();
        ~Choice3();

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

        ydk::YLeaf compress; //type: boolean
        ydk::YLeaf lower_limit; //type: uint32
        ydk::YLeaf higher_limit; //type: uint32
        ydk::YLeaf file_path; //type: string
        ydk::YLeaf filename; //type: string

}; // Exception::Choice3


class Exception::ProcessNames : public ydk::Entity
{
    public:
        ProcessNames();
        ~ProcessNames();

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

        class ProcessName; //type: Exception::ProcessNames::ProcessName

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_dumper_cfg::Exception::ProcessNames::ProcessName> > process_name;
        
}; // Exception::ProcessNames


class Exception::ProcessNames::ProcessName : public ydk::Entity
{
    public:
        ProcessName();
        ~ProcessName();

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

        ydk::YLeaf processname; //type: string
        class CoreOption; //type: Exception::ProcessNames::ProcessName::CoreOption

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_dumper_cfg::Exception::ProcessNames::ProcessName::CoreOption> core_option;
        
}; // Exception::ProcessNames::ProcessName


class Exception::ProcessNames::ProcessName::CoreOption : public ydk::Entity
{
    public:
        CoreOption();
        ~CoreOption();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf main_memoryval; //type: Mainmemory
        ydk::YLeaf shared_memoryval; //type: Sharedmemory
        ydk::YLeaf packet_memoryval; //type: Packetmemory
        ydk::YLeaf copyval; //type: Copy
        ydk::YLeaf sparseval; //type: Sparse
        ydk::YLeaf skipcpuinfoval; //type: Skipcpuinfo
        ydk::YLeaf contextval; //type: Context
        ydk::YLeaf nocoreval; //type: Nocore

}; // Exception::ProcessNames::ProcessName::CoreOption


class Exception::Choice2 : public ydk::Entity
{
    public:
        Choice2();
        ~Choice2();

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

        ydk::YLeaf compress; //type: boolean
        ydk::YLeaf lower_limit; //type: uint32
        ydk::YLeaf higher_limit; //type: uint32
        ydk::YLeaf file_path; //type: string
        ydk::YLeaf filename; //type: string

}; // Exception::Choice2

class Copy : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf default_;
        static const ydk::Enum::YLeaf copy;

};

class Context : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf default_;
        static const ydk::Enum::YLeaf context;

};

class Sharedmemory : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf default_;
        static const ydk::Enum::YLeaf shared_memory;

};

class Sparse : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf default_;
        static const ydk::Enum::YLeaf sparse;

};

class Nocore : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf default_;
        static const ydk::Enum::YLeaf no_core;

};

class Packetmemory : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf default_;
        static const ydk::Enum::YLeaf packet_memory;

};

class Skipcpuinfo : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf default_;
        static const ydk::Enum::YLeaf skip_cpu_info;

};

class Mainmemory : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf default_;
        static const ydk::Enum::YLeaf main_memory;

};


}
}

#endif /* _CISCO_IOS_XR_INFRA_DUMPER_CFG_ */

