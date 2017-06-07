#ifndef _CISCO_IOS_XR_VSERVICE_CFG_
#define _CISCO_IOS_XR_VSERVICE_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_vservice_cfg {

class Vservice : public Entity
{
    public:
        Vservice();
        ~Vservice();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class ServiceFunctionLocator; //type: Vservice::ServiceFunctionLocator
        class MetadataDispositions; //type: Vservice::MetadataDispositions
        class ServiceFunctionForwardLocator; //type: Vservice::ServiceFunctionForwardLocator
        class MetadataTemplates; //type: Vservice::MetadataTemplates
        class ServiceFunctionPath; //type: Vservice::ServiceFunctionPath

        std::shared_ptr<Cisco_IOS_XR_vservice_cfg::Vservice::MetadataDispositions> metadata_dispositions;
        std::shared_ptr<Cisco_IOS_XR_vservice_cfg::Vservice::MetadataTemplates> metadata_templates;
        std::shared_ptr<Cisco_IOS_XR_vservice_cfg::Vservice::ServiceFunctionForwardLocator> service_function_forward_locator;
        std::shared_ptr<Cisco_IOS_XR_vservice_cfg::Vservice::ServiceFunctionLocator> service_function_locator;
        std::shared_ptr<Cisco_IOS_XR_vservice_cfg::Vservice::ServiceFunctionPath> service_function_path;
        
}; // Vservice


class Vservice::ServiceFunctionLocator : public Entity
{
    public:
        ServiceFunctionLocator();
        ~ServiceFunctionLocator();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Names; //type: Vservice::ServiceFunctionLocator::Names

        std::shared_ptr<Cisco_IOS_XR_vservice_cfg::Vservice::ServiceFunctionLocator::Names> names;
        
}; // Vservice::ServiceFunctionLocator


class Vservice::ServiceFunctionLocator::Names : public Entity
{
    public:
        Names();
        ~Names();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Name; //type: Vservice::ServiceFunctionLocator::Names::Name

        std::vector<std::shared_ptr<Cisco_IOS_XR_vservice_cfg::Vservice::ServiceFunctionLocator::Names::Name> > name;
        
}; // Vservice::ServiceFunctionLocator::Names


class Vservice::ServiceFunctionLocator::Names::Name : public Entity
{
    public:
        Name();
        ~Name();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf function_name; //type: string
        YLeaf locator_id; //type: uint32
        class Node; //type: Vservice::ServiceFunctionLocator::Names::Name::Node

        std::shared_ptr<Cisco_IOS_XR_vservice_cfg::Vservice::ServiceFunctionLocator::Names::Name::Node> node;
        
}; // Vservice::ServiceFunctionLocator::Names::Name


class Vservice::ServiceFunctionLocator::Names::Name::Node : public Entity
{
    public:
        Node();
        ~Node();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf transport; //type: SfcSfTransportEnum
        YLeaf ipv4_source_address; //type: string
        YLeaf ipv4_destination_address; //type: string
        YLeaf vni; //type: int32

}; // Vservice::ServiceFunctionLocator::Names::Name::Node


class Vservice::MetadataDispositions : public Entity
{
    public:
        MetadataDispositions();
        ~MetadataDispositions();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class MetadataDisposition; //type: Vservice::MetadataDispositions::MetadataDisposition

        std::vector<std::shared_ptr<Cisco_IOS_XR_vservice_cfg::Vservice::MetadataDispositions::MetadataDisposition> > metadata_disposition;
        
}; // Vservice::MetadataDispositions


class Vservice::MetadataDispositions::MetadataDisposition : public Entity
{
    public:
        MetadataDisposition();
        ~MetadataDisposition();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf disposition_name; //type: string
        YLeaf format; //type: SfcMetadataType1AllocFormatEnum
        class MatchEntry; //type: Vservice::MetadataDispositions::MetadataDisposition::MatchEntry

        std::vector<std::shared_ptr<Cisco_IOS_XR_vservice_cfg::Vservice::MetadataDispositions::MetadataDisposition::MatchEntry> > match_entry;
        
}; // Vservice::MetadataDispositions::MetadataDisposition


class Vservice::MetadataDispositions::MetadataDisposition::MatchEntry : public Entity
{
    public:
        MatchEntry();
        ~MatchEntry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf match_entry_name; //type: string
        class Node; //type: Vservice::MetadataDispositions::MetadataDisposition::MatchEntry::Node

        std::shared_ptr<Cisco_IOS_XR_vservice_cfg::Vservice::MetadataDispositions::MetadataDisposition::MatchEntry::Node> node;
        
}; // Vservice::MetadataDispositions::MetadataDisposition::MatchEntry


class Vservice::MetadataDispositions::MetadataDisposition::MatchEntry::Node : public Entity
{
    public:
        Node();
        ~Node();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf match_type; //type: SfcMetadataDispositionMatchEnum
        YLeaf action_type; //type: SfcMetadataDispositionActionEnum
        YLeaf vrf; //type: string
        YLeaf nexthop_ipv4_address; //type: string
        YLeafList tenant_id; //type: list of  int32

}; // Vservice::MetadataDispositions::MetadataDisposition::MatchEntry::Node


class Vservice::ServiceFunctionForwardLocator : public Entity
{
    public:
        ServiceFunctionForwardLocator();
        ~ServiceFunctionForwardLocator();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Names; //type: Vservice::ServiceFunctionForwardLocator::Names

        std::shared_ptr<Cisco_IOS_XR_vservice_cfg::Vservice::ServiceFunctionForwardLocator::Names> names;
        
}; // Vservice::ServiceFunctionForwardLocator


class Vservice::ServiceFunctionForwardLocator::Names : public Entity
{
    public:
        Names();
        ~Names();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Name; //type: Vservice::ServiceFunctionForwardLocator::Names::Name

        std::vector<std::shared_ptr<Cisco_IOS_XR_vservice_cfg::Vservice::ServiceFunctionForwardLocator::Names::Name> > name;
        
}; // Vservice::ServiceFunctionForwardLocator::Names


class Vservice::ServiceFunctionForwardLocator::Names::Name : public Entity
{
    public:
        Name();
        ~Name();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf function_name; //type: string
        YLeaf locator_id; //type: uint32
        class Node; //type: Vservice::ServiceFunctionForwardLocator::Names::Name::Node

        std::shared_ptr<Cisco_IOS_XR_vservice_cfg::Vservice::ServiceFunctionForwardLocator::Names::Name::Node> node;
        
}; // Vservice::ServiceFunctionForwardLocator::Names::Name


class Vservice::ServiceFunctionForwardLocator::Names::Name::Node : public Entity
{
    public:
        Node();
        ~Node();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf transport; //type: SfcSfTransportEnum
        YLeaf ipv4_source_address; //type: string
        YLeaf ipv4_destination_address; //type: string
        YLeaf vni; //type: int32

}; // Vservice::ServiceFunctionForwardLocator::Names::Name::Node


class Vservice::MetadataTemplates : public Entity
{
    public:
        MetadataTemplates();
        ~MetadataTemplates();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class MetadataTemplate; //type: Vservice::MetadataTemplates::MetadataTemplate

        std::vector<std::shared_ptr<Cisco_IOS_XR_vservice_cfg::Vservice::MetadataTemplates::MetadataTemplate> > metadata_template;
        
}; // Vservice::MetadataTemplates


class Vservice::MetadataTemplates::MetadataTemplate : public Entity
{
    public:
        MetadataTemplate();
        ~MetadataTemplate();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf metadata_name; //type: string
        YLeaf type; //type: SfcMetadataAllocEnum
        YLeaf format; //type: SfcMetadataType1AllocFormatEnum
        YLeaf tenant_id; //type: uint32

}; // Vservice::MetadataTemplates::MetadataTemplate


class Vservice::ServiceFunctionPath : public Entity
{
    public:
        ServiceFunctionPath();
        ~ServiceFunctionPath();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Paths; //type: Vservice::ServiceFunctionPath::Paths

        std::shared_ptr<Cisco_IOS_XR_vservice_cfg::Vservice::ServiceFunctionPath::Paths> paths;
        
}; // Vservice::ServiceFunctionPath


class Vservice::ServiceFunctionPath::Paths : public Entity
{
    public:
        Paths();
        ~Paths();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Path; //type: Vservice::ServiceFunctionPath::Paths::Path

        std::vector<std::shared_ptr<Cisco_IOS_XR_vservice_cfg::Vservice::ServiceFunctionPath::Paths::Path> > path;
        
}; // Vservice::ServiceFunctionPath::Paths


class Vservice::ServiceFunctionPath::Paths::Path : public Entity
{
    public:
        Path();
        ~Path();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf path_id; //type: uint32
        class ServiceIndex; //type: Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex

        std::vector<std::shared_ptr<Cisco_IOS_XR_vservice_cfg::Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex> > service_index;
        
}; // Vservice::ServiceFunctionPath::Paths::Path


class Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex : public Entity
{
    public:
        ServiceIndex();
        ~ServiceIndex();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf index_; //type: uint32
        class Terminate; //type: Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::Terminate
        class SffNames; //type: Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SffNames
        class SfNames; //type: Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SfNames

        std::shared_ptr<Cisco_IOS_XR_vservice_cfg::Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SfNames> sf_names;
        std::shared_ptr<Cisco_IOS_XR_vservice_cfg::Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SffNames> sff_names;
        std::shared_ptr<Cisco_IOS_XR_vservice_cfg::Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::Terminate> terminate;
        
}; // Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex


class Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::Terminate : public Entity
{
    public:
        Terminate();
        ~Terminate();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Node; //type: Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::Terminate::Node

        std::shared_ptr<Cisco_IOS_XR_vservice_cfg::Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::Terminate::Node> node;
        
}; // Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::Terminate


class Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::Terminate::Node : public Entity
{
    public:
        Node();
        ~Node();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf action; //type: SfcMetadataDispositionActionEnum
        YLeaf vrf; //type: string
        YLeaf nexthop_ipv4_address; //type: string
        YLeaf metatdata_disposition; //type: string

}; // Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::Terminate::Node


class Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SffNames : public Entity
{
    public:
        SffNames();
        ~SffNames();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class SffName; //type: Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SffNames::SffName

        std::vector<std::shared_ptr<Cisco_IOS_XR_vservice_cfg::Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SffNames::SffName> > sff_name;
        
}; // Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SffNames


class Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SffNames::SffName : public Entity
{
    public:
        SffName();
        ~SffName();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        class Node; //type: Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SffNames::SffName::Node

        std::shared_ptr<Cisco_IOS_XR_vservice_cfg::Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SffNames::SffName::Node> node;
        
}; // Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SffNames::SffName


class Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SffNames::SffName::Node : public Entity
{
    public:
        Node();
        ~Node();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf enable; //type: empty
        YLeaf reserved; //type: empty

}; // Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SffNames::SffName::Node


class Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SfNames : public Entity
{
    public:
        SfNames();
        ~SfNames();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class SfName; //type: Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SfNames::SfName

        std::vector<std::shared_ptr<Cisco_IOS_XR_vservice_cfg::Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SfNames::SfName> > sf_name;
        
}; // Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SfNames


class Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SfNames::SfName : public Entity
{
    public:
        SfName();
        ~SfName();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        class Node; //type: Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SfNames::SfName::Node

        std::shared_ptr<Cisco_IOS_XR_vservice_cfg::Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SfNames::SfName::Node> node;
        
}; // Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SfNames::SfName


class Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SfNames::SfName::Node : public Entity
{
    public:
        Node();
        ~Node();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf enable; //type: empty
        YLeaf reserved; //type: empty

}; // Vservice::ServiceFunctionPath::Paths::Path::ServiceIndex::SfNames::SfName::Node

class SfcSfTransportEnum : public Enum
{
    public:
        static const Enum::YLeaf vxlan_gpe;

};

class SfcMetadataDispositionMatchEnum : public Enum
{
    public:
        static const Enum::YLeaf type1_dcalloc_tenant_id;

};

class SfcMetadataAllocEnum : public Enum
{
    public:
        static const Enum::YLeaf type1;

};

class SfcMetadataType1AllocFormatEnum : public Enum
{
    public:
        static const Enum::YLeaf dc_allocation;

};

class SfcMetadataDispositionActionEnum : public Enum
{
    public:
        static const Enum::YLeaf redirect_nexthop;

};


}
}

#endif /* _CISCO_IOS_XR_VSERVICE_CFG_ */

