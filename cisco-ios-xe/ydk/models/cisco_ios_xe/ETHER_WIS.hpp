#ifndef _ETHER_WIS_
#define _ETHER_WIS_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace ETHER_WIS {

class EtherWis : public Entity
{
    public:
        EtherWis();
        ~EtherWis();

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

        class Etherwisdevicetable; //type: EtherWis::Etherwisdevicetable
        class Etherwissectioncurrenttable; //type: EtherWis::Etherwissectioncurrenttable
        class Etherwispathcurrenttable; //type: EtherWis::Etherwispathcurrenttable
        class Etherwisfarendpathcurrenttable; //type: EtherWis::Etherwisfarendpathcurrenttable

        std::shared_ptr<ETHER_WIS::EtherWis::Etherwisdevicetable> etherwisdevicetable;
        std::shared_ptr<ETHER_WIS::EtherWis::Etherwisfarendpathcurrenttable> etherwisfarendpathcurrenttable;
        std::shared_ptr<ETHER_WIS::EtherWis::Etherwispathcurrenttable> etherwispathcurrenttable;
        std::shared_ptr<ETHER_WIS::EtherWis::Etherwissectioncurrenttable> etherwissectioncurrenttable;
        
}; // EtherWis


class EtherWis::Etherwisdevicetable : public Entity
{
    public:
        Etherwisdevicetable();
        ~Etherwisdevicetable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Etherwisdeviceentry; //type: EtherWis::Etherwisdevicetable::Etherwisdeviceentry

        std::vector<std::shared_ptr<ETHER_WIS::EtherWis::Etherwisdevicetable::Etherwisdeviceentry> > etherwisdeviceentry;
        
}; // EtherWis::Etherwisdevicetable


class EtherWis::Etherwisdevicetable::Etherwisdeviceentry : public Entity
{
    public:
        Etherwisdeviceentry();
        ~Etherwisdeviceentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        YLeaf ifindex;
        YLeaf etherwisdevicetxtestpatternmode; //type: EtherwisdevicetxtestpatternmodeEnum
        YLeaf etherwisdevicerxtestpatternmode; //type: EtherwisdevicerxtestpatternmodeEnum
        YLeaf etherwisdevicerxtestpatternerrors; //type: uint32
        class EtherwisdevicetxtestpatternmodeEnum;
        class EtherwisdevicerxtestpatternmodeEnum;

}; // EtherWis::Etherwisdevicetable::Etherwisdeviceentry


class EtherWis::Etherwissectioncurrenttable : public Entity
{
    public:
        Etherwissectioncurrenttable();
        ~Etherwissectioncurrenttable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Etherwissectioncurrententry; //type: EtherWis::Etherwissectioncurrenttable::Etherwissectioncurrententry

        std::vector<std::shared_ptr<ETHER_WIS::EtherWis::Etherwissectioncurrenttable::Etherwissectioncurrententry> > etherwissectioncurrententry;
        
}; // EtherWis::Etherwissectioncurrenttable


class EtherWis::Etherwissectioncurrenttable::Etherwissectioncurrententry : public Entity
{
    public:
        Etherwissectioncurrententry();
        ~Etherwissectioncurrententry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        YLeaf ifindex;
        YLeaf etherwissectioncurrentj0transmitted; //type: binary
        YLeaf etherwissectioncurrentj0received; //type: binary

}; // EtherWis::Etherwissectioncurrenttable::Etherwissectioncurrententry


class EtherWis::Etherwispathcurrenttable : public Entity
{
    public:
        Etherwispathcurrenttable();
        ~Etherwispathcurrenttable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Etherwispathcurrententry; //type: EtherWis::Etherwispathcurrenttable::Etherwispathcurrententry

        std::vector<std::shared_ptr<ETHER_WIS::EtherWis::Etherwispathcurrenttable::Etherwispathcurrententry> > etherwispathcurrententry;
        
}; // EtherWis::Etherwispathcurrenttable


class EtherWis::Etherwispathcurrenttable::Etherwispathcurrententry : public Entity
{
    public:
        Etherwispathcurrententry();
        ~Etherwispathcurrententry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        YLeaf ifindex;
        YLeaf etherwispathcurrentstatus; //type: Etherwispathcurrentstatus
        YLeaf etherwispathcurrentj1transmitted; //type: binary
        YLeaf etherwispathcurrentj1received; //type: binary

}; // EtherWis::Etherwispathcurrenttable::Etherwispathcurrententry


class EtherWis::Etherwisfarendpathcurrenttable : public Entity
{
    public:
        Etherwisfarendpathcurrenttable();
        ~Etherwisfarendpathcurrenttable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Etherwisfarendpathcurrententry; //type: EtherWis::Etherwisfarendpathcurrenttable::Etherwisfarendpathcurrententry

        std::vector<std::shared_ptr<ETHER_WIS::EtherWis::Etherwisfarendpathcurrenttable::Etherwisfarendpathcurrententry> > etherwisfarendpathcurrententry;
        
}; // EtherWis::Etherwisfarendpathcurrenttable


class EtherWis::Etherwisfarendpathcurrenttable::Etherwisfarendpathcurrententry : public Entity
{
    public:
        Etherwisfarendpathcurrententry();
        ~Etherwisfarendpathcurrententry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        YLeaf ifindex;
        YLeaf etherwisfarendpathcurrentstatus; //type: Etherwisfarendpathcurrentstatus

}; // EtherWis::Etherwisfarendpathcurrenttable::Etherwisfarendpathcurrententry

class EtherWis::Etherwisdevicetable::Etherwisdeviceentry::EtherwisdevicetxtestpatternmodeEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf squareWave;
        static const Enum::YLeaf prbs31;
        static const Enum::YLeaf mixedFrequency;

};

class EtherWis::Etherwisdevicetable::Etherwisdeviceentry::EtherwisdevicerxtestpatternmodeEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf prbs31;
        static const Enum::YLeaf mixedFrequency;

};


}
}

#endif /* _ETHER_WIS_ */

