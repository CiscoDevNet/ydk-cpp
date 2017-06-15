#ifndef _P_BRIDGE_MIB_
#define _P_BRIDGE_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace P_BRIDGE_MIB {

class PBridgeMib : public Entity
{
    public:
        PBridgeMib();
        ~PBridgeMib();

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

        class Dot1Dextbase; //type: PBridgeMib::Dot1Dextbase
        class Dot1Dtphcporttable; //type: PBridgeMib::Dot1Dtphcporttable
        class Dot1Dtpportoverflowtable; //type: PBridgeMib::Dot1Dtpportoverflowtable
        class Dot1Duserpriorityregentable; //type: PBridgeMib::Dot1Duserpriorityregentable
        class Dot1Dtrafficclasstable; //type: PBridgeMib::Dot1Dtrafficclasstable
        class Dot1Dportoutboundaccessprioritytable; //type: PBridgeMib::Dot1Dportoutboundaccessprioritytable

        std::shared_ptr<P_BRIDGE_MIB::PBridgeMib::Dot1Dextbase> dot1dextbase_;
        std::shared_ptr<P_BRIDGE_MIB::PBridgeMib::Dot1Dportoutboundaccessprioritytable> dot1dportoutboundaccessprioritytable_;
        std::shared_ptr<P_BRIDGE_MIB::PBridgeMib::Dot1Dtphcporttable> dot1dtphcporttable_;
        std::shared_ptr<P_BRIDGE_MIB::PBridgeMib::Dot1Dtpportoverflowtable> dot1dtpportoverflowtable_;
        std::shared_ptr<P_BRIDGE_MIB::PBridgeMib::Dot1Dtrafficclasstable> dot1dtrafficclasstable_;
        std::shared_ptr<P_BRIDGE_MIB::PBridgeMib::Dot1Duserpriorityregentable> dot1duserpriorityregentable_;
        
}; // PBridgeMib


class PBridgeMib::Dot1Dextbase : public Entity
{
    public:
        Dot1Dextbase();
        ~Dot1Dextbase();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dot1ddevicecapabilities; //type: Dot1Ddevicecapabilities
        YLeaf dot1dtrafficclassesenabled; //type: boolean
        YLeaf dot1dgmrpstatus; //type: EnabledstatusEnum

}; // PBridgeMib::Dot1Dextbase


class PBridgeMib::Dot1Dtphcporttable : public Entity
{
    public:
        Dot1Dtphcporttable();
        ~Dot1Dtphcporttable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Dot1Dtphcportentry; //type: PBridgeMib::Dot1Dtphcporttable::Dot1Dtphcportentry

        std::vector<std::shared_ptr<P_BRIDGE_MIB::PBridgeMib::Dot1Dtphcporttable::Dot1Dtphcportentry> > dot1dtphcportentry_;
        
}; // PBridgeMib::Dot1Dtphcporttable


class PBridgeMib::Dot1Dtphcporttable::Dot1Dtphcportentry : public Entity
{
    public:
        Dot1Dtphcportentry();
        ~Dot1Dtphcportentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to BRIDGE_MIB::BridgeMib::Dot1Dtpporttable::Dot1Dtpportentry::dot1dtpport)
        YLeaf dot1dtpport;
        YLeaf dot1dtphcportinframes; //type: uint64
        YLeaf dot1dtphcportoutframes; //type: uint64
        YLeaf dot1dtphcportindiscards; //type: uint64

}; // PBridgeMib::Dot1Dtphcporttable::Dot1Dtphcportentry


class PBridgeMib::Dot1Dtpportoverflowtable : public Entity
{
    public:
        Dot1Dtpportoverflowtable();
        ~Dot1Dtpportoverflowtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Dot1Dtpportoverflowentry; //type: PBridgeMib::Dot1Dtpportoverflowtable::Dot1Dtpportoverflowentry

        std::vector<std::shared_ptr<P_BRIDGE_MIB::PBridgeMib::Dot1Dtpportoverflowtable::Dot1Dtpportoverflowentry> > dot1dtpportoverflowentry_;
        
}; // PBridgeMib::Dot1Dtpportoverflowtable


class PBridgeMib::Dot1Dtpportoverflowtable::Dot1Dtpportoverflowentry : public Entity
{
    public:
        Dot1Dtpportoverflowentry();
        ~Dot1Dtpportoverflowentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to BRIDGE_MIB::BridgeMib::Dot1Dtpporttable::Dot1Dtpportentry::dot1dtpport)
        YLeaf dot1dtpport;
        YLeaf dot1dtpportinoverflowframes; //type: uint32
        YLeaf dot1dtpportoutoverflowframes; //type: uint32
        YLeaf dot1dtpportinoverflowdiscards; //type: uint32

}; // PBridgeMib::Dot1Dtpportoverflowtable::Dot1Dtpportoverflowentry


class PBridgeMib::Dot1Duserpriorityregentable : public Entity
{
    public:
        Dot1Duserpriorityregentable();
        ~Dot1Duserpriorityregentable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Dot1Duserpriorityregenentry; //type: PBridgeMib::Dot1Duserpriorityregentable::Dot1Duserpriorityregenentry

        std::vector<std::shared_ptr<P_BRIDGE_MIB::PBridgeMib::Dot1Duserpriorityregentable::Dot1Duserpriorityregenentry> > dot1duserpriorityregenentry_;
        
}; // PBridgeMib::Dot1Duserpriorityregentable


class PBridgeMib::Dot1Duserpriorityregentable::Dot1Duserpriorityregenentry : public Entity
{
    public:
        Dot1Duserpriorityregenentry();
        ~Dot1Duserpriorityregenentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to BRIDGE_MIB::BridgeMib::Dot1Dbaseporttable::Dot1Dbaseportentry::dot1dbaseport)
        YLeaf dot1dbaseport;
        YLeaf dot1duserpriority; //type: int32
        YLeaf dot1dregenuserpriority; //type: int32

}; // PBridgeMib::Dot1Duserpriorityregentable::Dot1Duserpriorityregenentry


class PBridgeMib::Dot1Dtrafficclasstable : public Entity
{
    public:
        Dot1Dtrafficclasstable();
        ~Dot1Dtrafficclasstable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Dot1Dtrafficclassentry; //type: PBridgeMib::Dot1Dtrafficclasstable::Dot1Dtrafficclassentry

        std::vector<std::shared_ptr<P_BRIDGE_MIB::PBridgeMib::Dot1Dtrafficclasstable::Dot1Dtrafficclassentry> > dot1dtrafficclassentry_;
        
}; // PBridgeMib::Dot1Dtrafficclasstable


class PBridgeMib::Dot1Dtrafficclasstable::Dot1Dtrafficclassentry : public Entity
{
    public:
        Dot1Dtrafficclassentry();
        ~Dot1Dtrafficclassentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to BRIDGE_MIB::BridgeMib::Dot1Dbaseporttable::Dot1Dbaseportentry::dot1dbaseport)
        YLeaf dot1dbaseport;
        YLeaf dot1dtrafficclasspriority; //type: int32
        YLeaf dot1dtrafficclass; //type: int32

}; // PBridgeMib::Dot1Dtrafficclasstable::Dot1Dtrafficclassentry


class PBridgeMib::Dot1Dportoutboundaccessprioritytable : public Entity
{
    public:
        Dot1Dportoutboundaccessprioritytable();
        ~Dot1Dportoutboundaccessprioritytable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Dot1Dportoutboundaccesspriorityentry; //type: PBridgeMib::Dot1Dportoutboundaccessprioritytable::Dot1Dportoutboundaccesspriorityentry

        std::vector<std::shared_ptr<P_BRIDGE_MIB::PBridgeMib::Dot1Dportoutboundaccessprioritytable::Dot1Dportoutboundaccesspriorityentry> > dot1dportoutboundaccesspriorityentry_;
        
}; // PBridgeMib::Dot1Dportoutboundaccessprioritytable


class PBridgeMib::Dot1Dportoutboundaccessprioritytable::Dot1Dportoutboundaccesspriorityentry : public Entity
{
    public:
        Dot1Dportoutboundaccesspriorityentry();
        ~Dot1Dportoutboundaccesspriorityentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to BRIDGE_MIB::BridgeMib::Dot1Dbaseporttable::Dot1Dbaseportentry::dot1dbaseport)
        YLeaf dot1dbaseport;
        //type: int32 (refers to P_BRIDGE_MIB::PBridgeMib::Dot1Duserpriorityregentable::Dot1Duserpriorityregenentry::dot1dregenuserpriority)
        YLeaf dot1dregenuserpriority;
        YLeaf dot1dportoutboundaccesspriority; //type: int32

}; // PBridgeMib::Dot1Dportoutboundaccessprioritytable::Dot1Dportoutboundaccesspriorityentry

class EnabledstatusEnum : public Enum
{
    public:
        static const Enum::YLeaf enabled;
        static const Enum::YLeaf disabled;

};


}
}

#endif /* _P_BRIDGE_MIB_ */

