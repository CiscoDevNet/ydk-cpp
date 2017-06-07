#ifndef _INTEGRATED_SERVICES_MIB_
#define _INTEGRATED_SERVICES_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace ydk {
namespace INTEGRATED_SERVICES_MIB {

class IntegratedServicesMib : public Entity
{
    public:
        IntegratedServicesMib();
        ~IntegratedServicesMib();

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

        class Intsrvgenobjects; //type: IntegratedServicesMib::Intsrvgenobjects
        class Intsrvifattribtable; //type: IntegratedServicesMib::Intsrvifattribtable
        class Intsrvflowtable; //type: IntegratedServicesMib::Intsrvflowtable

        std::shared_ptr<INTEGRATED_SERVICES_MIB::IntegratedServicesMib::Intsrvflowtable> intsrvflowtable;
        std::shared_ptr<INTEGRATED_SERVICES_MIB::IntegratedServicesMib::Intsrvgenobjects> intsrvgenobjects;
        std::shared_ptr<INTEGRATED_SERVICES_MIB::IntegratedServicesMib::Intsrvifattribtable> intsrvifattribtable;
        
}; // IntegratedServicesMib


class IntegratedServicesMib::Intsrvgenobjects : public Entity
{
    public:
        Intsrvgenobjects();
        ~Intsrvgenobjects();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf intsrvflownewindex; //type: int32

}; // IntegratedServicesMib::Intsrvgenobjects


class IntegratedServicesMib::Intsrvifattribtable : public Entity
{
    public:
        Intsrvifattribtable();
        ~Intsrvifattribtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Intsrvifattribentry; //type: IntegratedServicesMib::Intsrvifattribtable::Intsrvifattribentry

        std::vector<std::shared_ptr<INTEGRATED_SERVICES_MIB::IntegratedServicesMib::Intsrvifattribtable::Intsrvifattribentry> > intsrvifattribentry;
        
}; // IntegratedServicesMib::Intsrvifattribtable


class IntegratedServicesMib::Intsrvifattribtable::Intsrvifattribentry : public Entity
{
    public:
        Intsrvifattribentry();
        ~Intsrvifattribentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        YLeaf ifindex;
        YLeaf intsrvifattriballocatedbits; //type: int32
        YLeaf intsrvifattribmaxallocatedbits; //type: int32
        YLeaf intsrvifattriballocatedbuffer; //type: int32
        YLeaf intsrvifattribflows; //type: uint32
        YLeaf intsrvifattribpropagationdelay; //type: int32
        YLeaf intsrvifattribstatus; //type: RowstatusEnum

}; // IntegratedServicesMib::Intsrvifattribtable::Intsrvifattribentry


class IntegratedServicesMib::Intsrvflowtable : public Entity
{
    public:
        Intsrvflowtable();
        ~Intsrvflowtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Intsrvflowentry; //type: IntegratedServicesMib::Intsrvflowtable::Intsrvflowentry

        std::vector<std::shared_ptr<INTEGRATED_SERVICES_MIB::IntegratedServicesMib::Intsrvflowtable::Intsrvflowentry> > intsrvflowentry;
        
}; // IntegratedServicesMib::Intsrvflowtable


class IntegratedServicesMib::Intsrvflowtable::Intsrvflowentry : public Entity
{
    public:
        Intsrvflowentry();
        ~Intsrvflowentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf intsrvflownumber; //type: int32
        YLeaf intsrvflowtype; //type: int32
        YLeaf intsrvflowowner; //type: IntsrvflowownerEnum
        YLeaf intsrvflowdestaddr; //type: binary
        YLeaf intsrvflowsenderaddr; //type: binary
        YLeaf intsrvflowdestaddrlength; //type: int32
        YLeaf intsrvflowsenderaddrlength; //type: int32
        YLeaf intsrvflowprotocol; //type: int32
        YLeaf intsrvflowdestport; //type: binary
        YLeaf intsrvflowport; //type: binary
        YLeaf intsrvflowflowid; //type: int32
        YLeaf intsrvflowinterface; //type: int32
        YLeaf intsrvflowifaddr; //type: binary
        YLeaf intsrvflowrate; //type: int32
        YLeaf intsrvflowburst; //type: int32
        YLeaf intsrvflowweight; //type: int32
        YLeaf intsrvflowqueue; //type: int32
        YLeaf intsrvflowmintu; //type: int32
        YLeaf intsrvflowmaxtu; //type: int32
        YLeaf intsrvflowbesteffort; //type: uint32
        YLeaf intsrvflowpoliced; //type: uint32
        YLeaf intsrvflowdiscard; //type: boolean
        YLeaf intsrvflowservice; //type: QosserviceEnum
        YLeaf intsrvfloworder; //type: int32
        YLeaf intsrvflowstatus; //type: RowstatusEnum
        class IntsrvflowownerEnum;

}; // IntegratedServicesMib::Intsrvflowtable::Intsrvflowentry

class QosserviceEnum : public Enum
{
    public:
        static const Enum::YLeaf bestEffort;
        static const Enum::YLeaf guaranteedDelay;
        static const Enum::YLeaf controlledLoad;

};

class IntegratedServicesMib::Intsrvflowtable::Intsrvflowentry::IntsrvflowownerEnum : public Enum
{
    public:
        static const Enum::YLeaf other;
        static const Enum::YLeaf rsvp;
        static const Enum::YLeaf management;

};


}
}

#endif /* _INTEGRATED_SERVICES_MIB_ */

