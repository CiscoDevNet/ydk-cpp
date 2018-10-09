#ifndef _CISCO_IOS_XR_PBR_BNG_CFG_
#define _CISCO_IOS_XR_PBR_BNG_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_pbr_bng_cfg {

class BngPbr : public ydk::Entity
{
    public:
        BngPbr();
        ~BngPbr();

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

        ydk::YLeaf bng_interface; //type: string
        class HttpEnrichment; //type: BngPbr::HttpEnrichment

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_bng_cfg::BngPbr::HttpEnrichment> http_enrichment;
        
}; // BngPbr


class BngPbr::HttpEnrichment : public ydk::Entity
{
    public:
        HttpEnrichment();
        ~HttpEnrichment();

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

        class Parameters; //type: BngPbr::HttpEnrichment::Parameters

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pbr_bng_cfg::BngPbr::HttpEnrichment::Parameters> parameters; // presence node
        
}; // BngPbr::HttpEnrichment


class BngPbr::HttpEnrichment::Parameters : public ydk::Entity
{
    public:
        Parameters();
        ~Parameters();

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

        ydk::YLeaf arg1; //type: BngPbrHttpEnrichmentParams
        ydk::YLeaf arg2; //type: BngPbrHttpEnrichmentParams
        ydk::YLeaf arg3; //type: BngPbrHttpEnrichmentParams
        ydk::YLeaf arg4; //type: BngPbrHttpEnrichmentParams

}; // BngPbr::HttpEnrichment::Parameters

class BngPbrHttpEnrichmentParams : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf subscriber_mac;
        static const ydk::Enum::YLeaf subscriber_ip;
        static const ydk::Enum::YLeaf host_name;
        static const ydk::Enum::YLeaf bng_identifier_interface;

};


}
}

#endif /* _CISCO_IOS_XR_PBR_BNG_CFG_ */

