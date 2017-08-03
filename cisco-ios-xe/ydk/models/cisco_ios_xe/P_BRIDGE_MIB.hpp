#ifndef _P_BRIDGE_MIB_
#define _P_BRIDGE_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace P_BRIDGE_MIB {

class PBridgeMib : public ydk::Entity
{
    public:
        PBridgeMib();
        ~PBridgeMib();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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

        class Dot1Dextbase; //type: PBridgeMib::Dot1Dextbase
        class Dot1Dtphcporttable; //type: PBridgeMib::Dot1Dtphcporttable
        class Dot1Dtpportoverflowtable; //type: PBridgeMib::Dot1Dtpportoverflowtable
        class Dot1Duserpriorityregentable; //type: PBridgeMib::Dot1Duserpriorityregentable
        class Dot1Dtrafficclasstable; //type: PBridgeMib::Dot1Dtrafficclasstable
        class Dot1Dportoutboundaccessprioritytable; //type: PBridgeMib::Dot1Dportoutboundaccessprioritytable

        std::shared_ptr<P_BRIDGE_MIB::PBridgeMib::Dot1Dextbase> dot1dextbase;
        std::shared_ptr<P_BRIDGE_MIB::PBridgeMib::Dot1Dportoutboundaccessprioritytable> dot1dportoutboundaccessprioritytable;
        std::shared_ptr<P_BRIDGE_MIB::PBridgeMib::Dot1Dtphcporttable> dot1dtphcporttable;
        std::shared_ptr<P_BRIDGE_MIB::PBridgeMib::Dot1Dtpportoverflowtable> dot1dtpportoverflowtable;
        std::shared_ptr<P_BRIDGE_MIB::PBridgeMib::Dot1Dtrafficclasstable> dot1dtrafficclasstable;
        std::shared_ptr<P_BRIDGE_MIB::PBridgeMib::Dot1Duserpriorityregentable> dot1duserpriorityregentable;
        
}; // PBridgeMib


class PBridgeMib::Dot1Dextbase : public ydk::Entity
{
    public:
        Dot1Dextbase();
        ~Dot1Dextbase();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dot1ddevicecapabilities; //type: Dot1Ddevicecapabilities
        ydk::YLeaf dot1dtrafficclassesenabled; //type: boolean
        ydk::YLeaf dot1dgmrpstatus; //type: Enabledstatus

}; // PBridgeMib::Dot1Dextbase


class PBridgeMib::Dot1Dtphcporttable : public ydk::Entity
{
    public:
        Dot1Dtphcporttable();
        ~Dot1Dtphcporttable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Dot1Dtphcportentry; //type: PBridgeMib::Dot1Dtphcporttable::Dot1Dtphcportentry

        std::vector<std::shared_ptr<P_BRIDGE_MIB::PBridgeMib::Dot1Dtphcporttable::Dot1Dtphcportentry> > dot1dtphcportentry;
        
}; // PBridgeMib::Dot1Dtphcporttable


class PBridgeMib::Dot1Dtphcporttable::Dot1Dtphcportentry : public ydk::Entity
{
    public:
        Dot1Dtphcportentry();
        ~Dot1Dtphcportentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to BRIDGE_MIB::BridgeMib::Dot1Dtpporttable::Dot1Dtpportentry::dot1dtpport)
        ydk::YLeaf dot1dtpport;
        ydk::YLeaf dot1dtphcportinframes; //type: uint64
        ydk::YLeaf dot1dtphcportoutframes; //type: uint64
        ydk::YLeaf dot1dtphcportindiscards; //type: uint64

}; // PBridgeMib::Dot1Dtphcporttable::Dot1Dtphcportentry


class PBridgeMib::Dot1Dtpportoverflowtable : public ydk::Entity
{
    public:
        Dot1Dtpportoverflowtable();
        ~Dot1Dtpportoverflowtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Dot1Dtpportoverflowentry; //type: PBridgeMib::Dot1Dtpportoverflowtable::Dot1Dtpportoverflowentry

        std::vector<std::shared_ptr<P_BRIDGE_MIB::PBridgeMib::Dot1Dtpportoverflowtable::Dot1Dtpportoverflowentry> > dot1dtpportoverflowentry;
        
}; // PBridgeMib::Dot1Dtpportoverflowtable


class PBridgeMib::Dot1Dtpportoverflowtable::Dot1Dtpportoverflowentry : public ydk::Entity
{
    public:
        Dot1Dtpportoverflowentry();
        ~Dot1Dtpportoverflowentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to BRIDGE_MIB::BridgeMib::Dot1Dtpporttable::Dot1Dtpportentry::dot1dtpport)
        ydk::YLeaf dot1dtpport;
        ydk::YLeaf dot1dtpportinoverflowframes; //type: uint32
        ydk::YLeaf dot1dtpportoutoverflowframes; //type: uint32
        ydk::YLeaf dot1dtpportinoverflowdiscards; //type: uint32

}; // PBridgeMib::Dot1Dtpportoverflowtable::Dot1Dtpportoverflowentry


class PBridgeMib::Dot1Duserpriorityregentable : public ydk::Entity
{
    public:
        Dot1Duserpriorityregentable();
        ~Dot1Duserpriorityregentable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Dot1Duserpriorityregenentry; //type: PBridgeMib::Dot1Duserpriorityregentable::Dot1Duserpriorityregenentry

        std::vector<std::shared_ptr<P_BRIDGE_MIB::PBridgeMib::Dot1Duserpriorityregentable::Dot1Duserpriorityregenentry> > dot1duserpriorityregenentry;
        
}; // PBridgeMib::Dot1Duserpriorityregentable


class PBridgeMib::Dot1Duserpriorityregentable::Dot1Duserpriorityregenentry : public ydk::Entity
{
    public:
        Dot1Duserpriorityregenentry();
        ~Dot1Duserpriorityregenentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to BRIDGE_MIB::BridgeMib::Dot1Dbaseporttable::Dot1Dbaseportentry::dot1dbaseport)
        ydk::YLeaf dot1dbaseport;
        ydk::YLeaf dot1duserpriority; //type: int32
        ydk::YLeaf dot1dregenuserpriority; //type: int32

}; // PBridgeMib::Dot1Duserpriorityregentable::Dot1Duserpriorityregenentry


class PBridgeMib::Dot1Dtrafficclasstable : public ydk::Entity
{
    public:
        Dot1Dtrafficclasstable();
        ~Dot1Dtrafficclasstable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Dot1Dtrafficclassentry; //type: PBridgeMib::Dot1Dtrafficclasstable::Dot1Dtrafficclassentry

        std::vector<std::shared_ptr<P_BRIDGE_MIB::PBridgeMib::Dot1Dtrafficclasstable::Dot1Dtrafficclassentry> > dot1dtrafficclassentry;
        
}; // PBridgeMib::Dot1Dtrafficclasstable


class PBridgeMib::Dot1Dtrafficclasstable::Dot1Dtrafficclassentry : public ydk::Entity
{
    public:
        Dot1Dtrafficclassentry();
        ~Dot1Dtrafficclassentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to BRIDGE_MIB::BridgeMib::Dot1Dbaseporttable::Dot1Dbaseportentry::dot1dbaseport)
        ydk::YLeaf dot1dbaseport;
        ydk::YLeaf dot1dtrafficclasspriority; //type: int32
        ydk::YLeaf dot1dtrafficclass; //type: int32

}; // PBridgeMib::Dot1Dtrafficclasstable::Dot1Dtrafficclassentry


class PBridgeMib::Dot1Dportoutboundaccessprioritytable : public ydk::Entity
{
    public:
        Dot1Dportoutboundaccessprioritytable();
        ~Dot1Dportoutboundaccessprioritytable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Dot1Dportoutboundaccesspriorityentry; //type: PBridgeMib::Dot1Dportoutboundaccessprioritytable::Dot1Dportoutboundaccesspriorityentry

        std::vector<std::shared_ptr<P_BRIDGE_MIB::PBridgeMib::Dot1Dportoutboundaccessprioritytable::Dot1Dportoutboundaccesspriorityentry> > dot1dportoutboundaccesspriorityentry;
        
}; // PBridgeMib::Dot1Dportoutboundaccessprioritytable


class PBridgeMib::Dot1Dportoutboundaccessprioritytable::Dot1Dportoutboundaccesspriorityentry : public ydk::Entity
{
    public:
        Dot1Dportoutboundaccesspriorityentry();
        ~Dot1Dportoutboundaccesspriorityentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to BRIDGE_MIB::BridgeMib::Dot1Dbaseporttable::Dot1Dbaseportentry::dot1dbaseport)
        ydk::YLeaf dot1dbaseport;
        //type: int32 (refers to P_BRIDGE_MIB::PBridgeMib::Dot1Duserpriorityregentable::Dot1Duserpriorityregenentry::dot1dregenuserpriority)
        ydk::YLeaf dot1dregenuserpriority;
        ydk::YLeaf dot1dportoutboundaccesspriority; //type: int32

}; // PBridgeMib::Dot1Dportoutboundaccessprioritytable::Dot1Dportoutboundaccesspriorityentry

class Enabledstatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

};


}
}

#endif /* _P_BRIDGE_MIB_ */

