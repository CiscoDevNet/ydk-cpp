#ifndef _CISCO_IOS_XR_FREQSYNC_CFG_
#define _CISCO_IOS_XR_FREQSYNC_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xr {
namespace Cisco_IOS_XR_freqsync_cfg {

class FrequencySynchronization : public ydk::Entity
{
    public:
        FrequencySynchronization();
        ~FrequencySynchronization();

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

        ydk::YLeaf quality_level_option; //type: FsyncQlOption
        ydk::YLeaf enable; //type: empty
        ydk::YLeaf source_selection_logging; //type: FsyncSourceSelectionLogging
        ydk::YLeaf clock_interface_source_type; //type: FsyncClockSource
        ydk::YLeaf system_timing_mode; //type: FsyncSystemTimingMode

}; // FrequencySynchronization

class FsyncClockSource : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf system;
        static const ydk::Enum::YLeaf independent;

        static int get_enum_value(const std::string & name) {
            if (name == "system") return 1;
            if (name == "independent") return 3;
            return -1;
        }
};

class FsyncSourceSelectionLogging : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf changes;
        static const ydk::Enum::YLeaf errors;

        static int get_enum_value(const std::string & name) {
            if (name == "changes") return 1;
            if (name == "errors") return 2;
            return -1;
        }
};

class FsyncSystemTimingMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf line_only;
        static const ydk::Enum::YLeaf clock_only;

        static int get_enum_value(const std::string & name) {
            if (name == "line-only") return 2;
            if (name == "clock-only") return 3;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XR_FREQSYNC_CFG_ */

