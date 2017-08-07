#ifndef _ETHER_WIS_
#define _ETHER_WIS_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace ETHER_WIS {

class EtherWis : public ydk::Entity
{
    public:
        EtherWis();
        ~EtherWis();

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

        class Etherwisdevicetable; //type: EtherWis::Etherwisdevicetable
        class Etherwissectioncurrenttable; //type: EtherWis::Etherwissectioncurrenttable
        class Etherwispathcurrenttable; //type: EtherWis::Etherwispathcurrenttable
        class Etherwisfarendpathcurrenttable; //type: EtherWis::Etherwisfarendpathcurrenttable

        std::shared_ptr<ETHER_WIS::EtherWis::Etherwisdevicetable> etherwisdevicetable;
        std::shared_ptr<ETHER_WIS::EtherWis::Etherwisfarendpathcurrenttable> etherwisfarendpathcurrenttable;
        std::shared_ptr<ETHER_WIS::EtherWis::Etherwispathcurrenttable> etherwispathcurrenttable;
        std::shared_ptr<ETHER_WIS::EtherWis::Etherwissectioncurrenttable> etherwissectioncurrenttable;
        
}; // EtherWis


class EtherWis::Etherwisdevicetable : public ydk::Entity
{
    public:
        Etherwisdevicetable();
        ~Etherwisdevicetable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Etherwisdeviceentry; //type: EtherWis::Etherwisdevicetable::Etherwisdeviceentry

        std::vector<std::shared_ptr<ETHER_WIS::EtherWis::Etherwisdevicetable::Etherwisdeviceentry> > etherwisdeviceentry;
        
}; // EtherWis::Etherwisdevicetable


class EtherWis::Etherwisdevicetable::Etherwisdeviceentry : public ydk::Entity
{
    public:
        Etherwisdeviceentry();
        ~Etherwisdeviceentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf etherwisdevicetxtestpatternmode; //type: Etherwisdevicetxtestpatternmode
        ydk::YLeaf etherwisdevicerxtestpatternmode; //type: Etherwisdevicerxtestpatternmode
        ydk::YLeaf etherwisdevicerxtestpatternerrors; //type: uint32
        class Etherwisdevicetxtestpatternmode;
        class Etherwisdevicerxtestpatternmode;

}; // EtherWis::Etherwisdevicetable::Etherwisdeviceentry


class EtherWis::Etherwissectioncurrenttable : public ydk::Entity
{
    public:
        Etherwissectioncurrenttable();
        ~Etherwissectioncurrenttable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Etherwissectioncurrententry; //type: EtherWis::Etherwissectioncurrenttable::Etherwissectioncurrententry

        std::vector<std::shared_ptr<ETHER_WIS::EtherWis::Etherwissectioncurrenttable::Etherwissectioncurrententry> > etherwissectioncurrententry;
        
}; // EtherWis::Etherwissectioncurrenttable


class EtherWis::Etherwissectioncurrenttable::Etherwissectioncurrententry : public ydk::Entity
{
    public:
        Etherwissectioncurrententry();
        ~Etherwissectioncurrententry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf etherwissectioncurrentj0transmitted; //type: binary
        ydk::YLeaf etherwissectioncurrentj0received; //type: binary

}; // EtherWis::Etherwissectioncurrenttable::Etherwissectioncurrententry


class EtherWis::Etherwispathcurrenttable : public ydk::Entity
{
    public:
        Etherwispathcurrenttable();
        ~Etherwispathcurrenttable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Etherwispathcurrententry; //type: EtherWis::Etherwispathcurrenttable::Etherwispathcurrententry

        std::vector<std::shared_ptr<ETHER_WIS::EtherWis::Etherwispathcurrenttable::Etherwispathcurrententry> > etherwispathcurrententry;
        
}; // EtherWis::Etherwispathcurrenttable


class EtherWis::Etherwispathcurrenttable::Etherwispathcurrententry : public ydk::Entity
{
    public:
        Etherwispathcurrententry();
        ~Etherwispathcurrententry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf etherwispathcurrentstatus; //type: Etherwispathcurrentstatus
        ydk::YLeaf etherwispathcurrentj1transmitted; //type: binary
        ydk::YLeaf etherwispathcurrentj1received; //type: binary

}; // EtherWis::Etherwispathcurrenttable::Etherwispathcurrententry


class EtherWis::Etherwisfarendpathcurrenttable : public ydk::Entity
{
    public:
        Etherwisfarendpathcurrenttable();
        ~Etherwisfarendpathcurrenttable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Etherwisfarendpathcurrententry; //type: EtherWis::Etherwisfarendpathcurrenttable::Etherwisfarendpathcurrententry

        std::vector<std::shared_ptr<ETHER_WIS::EtherWis::Etherwisfarendpathcurrenttable::Etherwisfarendpathcurrententry> > etherwisfarendpathcurrententry;
        
}; // EtherWis::Etherwisfarendpathcurrenttable


class EtherWis::Etherwisfarendpathcurrenttable::Etherwisfarendpathcurrententry : public ydk::Entity
{
    public:
        Etherwisfarendpathcurrententry();
        ~Etherwisfarendpathcurrententry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf etherwisfarendpathcurrentstatus; //type: Etherwisfarendpathcurrentstatus

}; // EtherWis::Etherwisfarendpathcurrenttable::Etherwisfarendpathcurrententry

class EtherWis::Etherwisdevicetable::Etherwisdeviceentry::Etherwisdevicetxtestpatternmode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf squareWave;
        static const ydk::Enum::YLeaf prbs31;
        static const ydk::Enum::YLeaf mixedFrequency;

};

class EtherWis::Etherwisdevicetable::Etherwisdeviceentry::Etherwisdevicerxtestpatternmode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf prbs31;
        static const ydk::Enum::YLeaf mixedFrequency;

};


}
}

#endif /* _ETHER_WIS_ */

