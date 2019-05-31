#ifndef _CISCO_IOS_XR_VSERVICE_CFG_
#define _CISCO_IOS_XR_VSERVICE_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_vservice_cfg {

class Vservice : public ydk::Entity
{
    public:
        Vservice();
        ~Vservice();

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

        class ServiceFunctionLocator; //type: Vservice::ServiceFunctionLocator
        class MetadataDispositions; //type: Vservice::MetadataDispositions
        class ServiceFunctionForwardLocator; //type: Vservice::ServiceFunctionForwardLocator
        class MetadataTemplates; //type: Vservice::MetadataTemplates
        class ServiceFunctionPath; //type: Vservice::ServiceFunctionPath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_vservice_cfg::Vservice::ServiceFunctionLocator> service_function_locator;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_vservice_cfg::Vservice::MetadataDispositions> metadata_dispositions;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_vservice_cfg::Vservice::ServiceFunctionForwardLocator> service_function_forward_locator;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_vservice_cfg::Vservice::MetadataTemplates> metadata_templates;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_vservice_cfg::Vservice::ServiceFunctionPath> service_function_path;
        
}; // Vservice


class Vservice::ServiceFunctionLocator : public ydk::Entity
{
    public:
        ServiceFunctionLocator();
        ~ServiceFunctionLocator();

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

        class Names; //type: Vservice::ServiceFunctionLocator::Names

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_vservice_cfg::Vservice::ServiceFunctionLocator::Names> names;
        
}; // Vservice::ServiceFunctionLocator


class Vservice::ServiceFunctionLocator::Names : public ydk::Entity
{
    public:
        Names();
        ~Names();

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

        class Name; //type: Vservice::ServiceFunctionLocator::Names::Name

        ydk::YList name;
        
}; // Vservice::ServiceFunctionLocator::Names


class Vservice::ServiceFunctionLocator::Names::Name : public ydk::Entity
{
    public:
        Name();
        ~Name();

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

        ydk::YLeaf function_name; //type: string
        ydk::YLeaf locator_id; //type: uint32
        class Node; //type: Vservice::ServiceFunctionLocator::Names::Name::Node

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_vservice_cfg::Vservice::ServiceFunctionLocator::Names::Name::Node> node;
        
}; // Vservice::ServiceFunctionLocator::Names::Name


class Vservice::ServiceFunctionLocator::Names::Name::Node : public ydk::Entity
{
    public:
        Node();
        ~Node();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf transport; //type: SfcSfTransport
        ydk::YLeaf ipv4_source_address; //type: string
        ydk::YLeaf ipv4_destination_address; //type: string
        ydk::YLeaf vni; //type: uint32

}; // Vservice::ServiceFunctionLocator::Names::Name::Node


class Vservice::MetadataDispositions : public ydk::Entity
{
    public:
        MetadataDispositions();
        ~MetadataDispositions();

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

        class MetadataDisposition; //type: Vservice::MetadataDispositions::MetadataDisposition

        ydk::YList metadata_disposition;
        
}; // Vservice::MetadataDispositions


class Vservice::MetadataDispositions::MetadataDisposition : public ydk::Entity
{
    public:
        MetadataDisposition();
        ~MetadataDisposition();

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

        ydk::YLeaf disposition_name; //type: string
        ydk::YLeaf format; //type: SfcMetadataType1AllocFormat
        class MatchEntry; //type: Vservice::MetadataDispositions::MetadataDisposition::MatchEntry

        ydk::YList match_entry;
        
}; // Vservice::MetadataDispositions::MetadataDisposition


class Vservice::MetadataDispositions::MetadataDisposition::MatchEntry : public ydk::Entity
{
    public:
        MatchEntry();
        ~MatchEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf match_entry_name; //type: string
        class Node; //type: Vservice::MetadataDispositions::MetadataDisposition::MatchEntry::Node

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_vservice_cfg::Vservice::MetadataDispositions::MetadataDisposition::MatchEntry::Node> node;
        
}; // Vservice::MetadataDispositions::MetadataDisposition::MatchEntry


class Vservice::MetadataDispositions::MetadataDisposition::MatchEntry::Node : public ydk::Entity
{
    public:
        Node();
        ~Node();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf match_type; //type: SfcMetadataDispositionMatch
        ydk::YLeaf action_type; //type: SfcMetadataDispositionAction
        ydk::YLeaf vrf; //type: string
        ydk::YLeaf nexthop_ipv4_address; //type: string
        ydk::YLeafList tenant_id; //type: list of  uint32

}; // Vservice::MetadataDispositions::MetadataDisposition::MatchEntry::Node


class Vservice::ServiceFunctionForwardLocator : public ydk::Entity
{
    public:
        ServiceFunctionForwardLocator();
        ~ServiceFunctionForwardLocator();

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

        class Names; //type: Vservice::ServiceFunctionForwardLocator::Names

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_vservice_cfg::Vservice::ServiceFunctionForwardLocator::Names> names;
        
}; // Vservice::ServiceFunctionForwardLocator


class Vservice::ServiceFunctionForwardLocator::Names : public ydk::Entity
{
    public:
        Names();
        ~Names();

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

        class Name; //type: Vservice::ServiceFunctionForwardLocator::Names::Name

        ydk::YList name;
        
}; // Vservice::ServiceFunctionForwardLocator::Names


class Vservice::ServiceFunctionForwardLocator::Names::Name : public ydk::Entity
{
    public:
        Name();
        ~Name();

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

        ydk::YLeaf function_name; //type: string
        ydk::YLeaf locator_id; //type: uint32
        class Node; //type: Vservice::ServiceFunctionForwardLocator::Names::Name::Node

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_vservice_cfg::Vservice::ServiceFunctionForwardLocator::Names::Name::Node> node;
        
}; // Vservice::ServiceFunctionForwardLocator::Names::Name


class Vservice::ServiceFunctionForwardLocator::Names::Name::Node : public ydk::Entity
{
    public:
        Node();
        ~Node();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf transport; //type: SfcSfTransport
        ydk::YLeaf ipv4_source_address; //type: string
        ydk::YLeaf ipv4_destination_address; //type: string
        ydk::YLeaf vni; //type: uint32

}; // Vservice::ServiceFunctionForwardLocator::Names::Name::Node


class Vservice::MetadataTemplates : public ydk::Entity
{
    public:
        MetadataTemplates();
        ~MetadataTemplates();

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

        class MetadataTemplate; //type: Vservice::MetadataTemplates::MetadataTemplate

        ydk::YList metadata_template;
        
}; // Vservice::MetadataTemplates


class Vservice::MetadataTemplates::MetadataTemplate : public ydk::Entity
{
    public:
        MetadataTemplate();
        ~MetadataTemplate();

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

        ydk::YLeaf metadata_name; //type: string
        ydk::YLeaf type; //type: SfcMetadataAlloc
        ydk::YLeaf format; //type: SfcMetadataType1AllocFormat
        ydk::YLeaf tenant_id; //type: uint32

}; // Vservice::MetadataTemplates::MetadataTemplate


class Vservice::ServiceFunctionPath : public ydk::Entity
{
    public:
        ServiceFunctionPath();
        ~ServiceFunctionPath();

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

        class Paths; //type: Vservice::ServiceFunctionPath::Paths

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_vservice_cfg::Vservice::ServiceFunctionPath::Paths> paths;
        
}; // Vservice::ServiceFunctionPath


class Vservice::ServiceFunctionPath::Paths : public ydk::Entity
{
    public:
        Paths();
        ~Paths();

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

        class Path; //type: Vservice::ServiceFunctionPath::Paths::Path

        ydk::YList path;
        
}; // Vservice::ServiceFunctionPath::Paths


class Vservice::ServiceFunctionPath::Paths::Path : public ydk::Entity
{
    public:
        Path();
        ~Path();

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

        ydk::YLeaf path_id; //type: uint32
        class ServiceIndex; //type: Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex

        ydk::YList service_index;
        
}; // Vservice::ServiceFunctionPath::Paths::Path


class Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex : public ydk::Entity
{
    public:
        ServiceIndex();
        ~ServiceIndex();

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
        class Terminate; //type: Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::Terminate
        class SffNames; //type: Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SffNames
        class SfNames; //type: Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SfNames

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_vservice_cfg::Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::Terminate> terminate;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_vservice_cfg::Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SffNames> sff_names;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_vservice_cfg::Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SfNames> sf_names;
        
}; // Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex


class Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::Terminate : public ydk::Entity
{
    public:
        Terminate();
        ~Terminate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Node; //type: Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::Terminate::Node

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_vservice_cfg::Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::Terminate::Node> node;
        
}; // Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::Terminate


class Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::Terminate::Node : public ydk::Entity
{
    public:
        Node();
        ~Node();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf action; //type: SfcMetadataDispositionAction
        ydk::YLeaf vrf; //type: string
        ydk::YLeaf nexthop_ipv4_address; //type: string
        ydk::YLeaf metatdata_disposition; //type: string

}; // Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::Terminate::Node


class Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SffNames : public ydk::Entity
{
    public:
        SffNames();
        ~SffNames();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SffName; //type: Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SffNames::SffName

        ydk::YList sff_name;
        
}; // Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SffNames


class Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SffNames::SffName : public ydk::Entity
{
    public:
        SffName();
        ~SffName();

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
        class Node; //type: Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SffNames::SffName::Node

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_vservice_cfg::Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SffNames::SffName::Node> node;
        
}; // Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SffNames::SffName


class Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SffNames::SffName::Node : public ydk::Entity
{
    public:
        Node();
        ~Node();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: empty
        ydk::YLeaf reserved; //type: empty

}; // Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SffNames::SffName::Node


class Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SfNames : public ydk::Entity
{
    public:
        SfNames();
        ~SfNames();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SfName; //type: Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SfNames::SfName

        ydk::YList sf_name;
        
}; // Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SfNames


class Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SfNames::SfName : public ydk::Entity
{
    public:
        SfName();
        ~SfName();

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
        class Node; //type: Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SfNames::SfName::Node

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_vservice_cfg::Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SfNames::SfName::Node> node;
        
}; // Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SfNames::SfName


class Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SfNames::SfName::Node : public ydk::Entity
{
    public:
        Node();
        ~Node();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: empty
        ydk::YLeaf reserved; //type: empty

}; // Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SfNames::SfName::Node

class SfcMetadataType1AllocFormat : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf dc_allocation;

};

class SfcSfTransport : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf vxlan_gpe;

};

class SfcMetadataDispositionMatch : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf type1_dcalloc_tenant_id;

};

class SfcMetadataDispositionAction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf redirect_nexthop;

};

class SfcMetadataAlloc : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf type1;

};


}
}

#endif /* _CISCO_IOS_XR_VSERVICE_CFG_ */

