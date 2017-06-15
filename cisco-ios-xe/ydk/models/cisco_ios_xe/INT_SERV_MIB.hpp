#ifndef _INT_SERV_MIB_
#define _INT_SERV_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace ydk {
namespace INT_SERV_MIB {

class IntServMib : public Entity
{
    public:
        IntServMib();
        ~IntServMib();

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

        class Intsrvgenobjects; //type: IntServMib::Intsrvgenobjects
        class Intsrvifattribtable; //type: IntServMib::Intsrvifattribtable
        class Intsrvflowtable; //type: IntServMib::Intsrvflowtable

        std::shared_ptr<INT_SERV_MIB::IntServMib::Intsrvflowtable> intsrvflowtable_;
        std::shared_ptr<INT_SERV_MIB::IntServMib::Intsrvgenobjects> intsrvgenobjects_;
        std::shared_ptr<INT_SERV_MIB::IntServMib::Intsrvifattribtable> intsrvifattribtable_;
        
}; // IntServMib


class IntServMib::Intsrvgenobjects : public Entity
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

}; // IntServMib::Intsrvgenobjects


class IntServMib::Intsrvifattribtable : public Entity
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

        class Intsrvifattribentry; //type: IntServMib::Intsrvifattribtable::Intsrvifattribentry

        std::vector<std::shared_ptr<INT_SERV_MIB::IntServMib::Intsrvifattribtable::Intsrvifattribentry> > intsrvifattribentry_;
        
}; // IntServMib::Intsrvifattribtable


class IntServMib::Intsrvifattribtable::Intsrvifattribentry : public Entity
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

}; // IntServMib::Intsrvifattribtable::Intsrvifattribentry


class IntServMib::Intsrvflowtable : public Entity
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

        class Intsrvflowentry; //type: IntServMib::Intsrvflowtable::Intsrvflowentry

        std::vector<std::shared_ptr<INT_SERV_MIB::IntServMib::Intsrvflowtable::Intsrvflowentry> > intsrvflowentry_;
        
}; // IntServMib::Intsrvflowtable


class IntServMib::Intsrvflowtable::Intsrvflowentry : public Entity
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

}; // IntServMib::Intsrvflowtable::Intsrvflowentry

class QosserviceEnum : public Enum
{
    public:
        static const Enum::YLeaf bestEffort;
        static const Enum::YLeaf guaranteedDelay;
        static const Enum::YLeaf controlledLoad;

};

class IntServMib::Intsrvflowtable::Intsrvflowentry::IntsrvflowownerEnum : public Enum
{
    public:
        static const Enum::YLeaf other;
        static const Enum::YLeaf rsvp;
        static const Enum::YLeaf management;

};


}
}

#endif /* _INT_SERV_MIB_ */

