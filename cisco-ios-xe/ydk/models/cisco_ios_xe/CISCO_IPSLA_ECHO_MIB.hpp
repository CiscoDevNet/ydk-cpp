#ifndef _CISCO_IPSLA_ECHO_MIB_
#define _CISCO_IPSLA_ECHO_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace CISCO_IPSLA_ECHO_MIB {

class CISCOIPSLAECHOMIB : public ydk::Entity
{
    public:
        CISCOIPSLAECHOMIB();
        ~CISCOIPSLAECHOMIB();

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

        class Cipslaicmpechotmpltable; //type: CISCOIPSLAECHOMIB::Cipslaicmpechotmpltable
        class Cipslaudpechotmpltable; //type: CISCOIPSLAECHOMIB::Cipslaudpechotmpltable
        class Cipslatcpconntmpltable; //type: CISCOIPSLAECHOMIB::Cipslatcpconntmpltable

        std::shared_ptr<cisco_ios_xe::CISCO_IPSLA_ECHO_MIB::CISCOIPSLAECHOMIB::Cipslaicmpechotmpltable> cipslaicmpechotmpltable;
        std::shared_ptr<cisco_ios_xe::CISCO_IPSLA_ECHO_MIB::CISCOIPSLAECHOMIB::Cipslaudpechotmpltable> cipslaudpechotmpltable;
        std::shared_ptr<cisco_ios_xe::CISCO_IPSLA_ECHO_MIB::CISCOIPSLAECHOMIB::Cipslatcpconntmpltable> cipslatcpconntmpltable;
        
}; // CISCOIPSLAECHOMIB


class CISCOIPSLAECHOMIB::Cipslaicmpechotmpltable : public ydk::Entity
{
    public:
        Cipslaicmpechotmpltable();
        ~Cipslaicmpechotmpltable();

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

        class Cipslaicmpechotmplentry; //type: CISCOIPSLAECHOMIB::Cipslaicmpechotmpltable::Cipslaicmpechotmplentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_IPSLA_ECHO_MIB::CISCOIPSLAECHOMIB::Cipslaicmpechotmpltable::Cipslaicmpechotmplentry> > cipslaicmpechotmplentry;
        
}; // CISCOIPSLAECHOMIB::Cipslaicmpechotmpltable


class CISCOIPSLAECHOMIB::Cipslaicmpechotmpltable::Cipslaicmpechotmplentry : public ydk::Entity
{
    public:
        Cipslaicmpechotmplentry();
        ~Cipslaicmpechotmplentry();

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

        ydk::YLeaf cipslaicmpechotmplname; //type: string
        ydk::YLeaf cipslaicmpechotmpldescription; //type: string
        ydk::YLeaf cipslaicmpechotmplsrcaddrtype; //type: InetAddressType
        ydk::YLeaf cipslaicmpechotmplsrcaddr; //type: binary
        ydk::YLeaf cipslaicmpechotmpltimeout; //type: uint32
        ydk::YLeaf cipslaicmpechotmplverifydata; //type: boolean
        ydk::YLeaf cipslaicmpechotmplreqdatasize; //type: uint32
        ydk::YLeaf cipslaicmpechotmpltos; //type: uint32
        ydk::YLeaf cipslaicmpechotmplvrfname; //type: string
        ydk::YLeaf cipslaicmpechotmplthreshold; //type: uint32
        ydk::YLeaf cipslaicmpechotmplhistlives; //type: uint32
        ydk::YLeaf cipslaicmpechotmplhistbuckets; //type: uint32
        ydk::YLeaf cipslaicmpechotmplhistfilter; //type: Cipslaicmpechotmplhistfilter
        ydk::YLeaf cipslaicmpechotmplstatshours; //type: uint32
        ydk::YLeaf cipslaicmpechotmpldistbuckets; //type: uint32
        ydk::YLeaf cipslaicmpechotmpldistinterval; //type: uint32
        ydk::YLeaf cipslaicmpechotmplstoragetype; //type: StorageType
        ydk::YLeaf cipslaicmpechotmplrowstatus; //type: RowStatus
        class Cipslaicmpechotmplhistfilter;

}; // CISCOIPSLAECHOMIB::Cipslaicmpechotmpltable::Cipslaicmpechotmplentry


class CISCOIPSLAECHOMIB::Cipslaudpechotmpltable : public ydk::Entity
{
    public:
        Cipslaudpechotmpltable();
        ~Cipslaudpechotmpltable();

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

        class Cipslaudpechotmplentry; //type: CISCOIPSLAECHOMIB::Cipslaudpechotmpltable::Cipslaudpechotmplentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_IPSLA_ECHO_MIB::CISCOIPSLAECHOMIB::Cipslaudpechotmpltable::Cipslaudpechotmplentry> > cipslaudpechotmplentry;
        
}; // CISCOIPSLAECHOMIB::Cipslaudpechotmpltable


class CISCOIPSLAECHOMIB::Cipslaudpechotmpltable::Cipslaudpechotmplentry : public ydk::Entity
{
    public:
        Cipslaudpechotmplentry();
        ~Cipslaudpechotmplentry();

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

        ydk::YLeaf cipslaudpechotmplname; //type: string
        ydk::YLeaf cipslaudpechotmpldescription; //type: string
        ydk::YLeaf cipslaudpechotmplcontrolenable; //type: boolean
        ydk::YLeaf cipslaudpechotmplsrcaddrtype; //type: InetAddressType
        ydk::YLeaf cipslaudpechotmplsrcaddr; //type: binary
        ydk::YLeaf cipslaudpechotmplsrcport; //type: uint16
        ydk::YLeaf cipslaudpechotmpltimeout; //type: uint32
        ydk::YLeaf cipslaudpechotmplverifydata; //type: boolean
        ydk::YLeaf cipslaudpechotmplreqdatasize; //type: uint32
        ydk::YLeaf cipslaudpechotmpltos; //type: uint32
        ydk::YLeaf cipslaudpechotmplvrfname; //type: string
        ydk::YLeaf cipslaudpechotmplthreshold; //type: uint32
        ydk::YLeaf cipslaudpechotmplhistlives; //type: uint32
        ydk::YLeaf cipslaudpechotmplhistbuckets; //type: uint32
        ydk::YLeaf cipslaudpechotmplhistfilter; //type: Cipslaudpechotmplhistfilter
        ydk::YLeaf cipslaudpechotmplstatshours; //type: uint32
        ydk::YLeaf cipslaudpechotmpldistbuckets; //type: uint32
        ydk::YLeaf cipslaudpechotmpldistinterval; //type: uint32
        ydk::YLeaf cipslaudpechotmplstoragetype; //type: StorageType
        ydk::YLeaf cipslaudpechotmplrowstatus; //type: RowStatus
        class Cipslaudpechotmplhistfilter;

}; // CISCOIPSLAECHOMIB::Cipslaudpechotmpltable::Cipslaudpechotmplentry


class CISCOIPSLAECHOMIB::Cipslatcpconntmpltable : public ydk::Entity
{
    public:
        Cipslatcpconntmpltable();
        ~Cipslatcpconntmpltable();

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

        class Cipslatcpconntmplentry; //type: CISCOIPSLAECHOMIB::Cipslatcpconntmpltable::Cipslatcpconntmplentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_IPSLA_ECHO_MIB::CISCOIPSLAECHOMIB::Cipslatcpconntmpltable::Cipslatcpconntmplentry> > cipslatcpconntmplentry;
        
}; // CISCOIPSLAECHOMIB::Cipslatcpconntmpltable


class CISCOIPSLAECHOMIB::Cipslatcpconntmpltable::Cipslatcpconntmplentry : public ydk::Entity
{
    public:
        Cipslatcpconntmplentry();
        ~Cipslatcpconntmplentry();

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

        ydk::YLeaf cipslatcpconntmplname; //type: string
        ydk::YLeaf cipslatcpconntmpldescription; //type: string
        ydk::YLeaf cipslatcpconntmplcontrolenable; //type: boolean
        ydk::YLeaf cipslatcpconntmplsrcaddrtype; //type: InetAddressType
        ydk::YLeaf cipslatcpconntmplsrcaddr; //type: binary
        ydk::YLeaf cipslatcpconntmplsrcport; //type: uint16
        ydk::YLeaf cipslatcpconntmpltimeout; //type: uint32
        ydk::YLeaf cipslatcpconntmplverifydata; //type: boolean
        ydk::YLeaf cipslatcpconntmpltos; //type: uint32
        ydk::YLeaf cipslatcpconntmplthreshold; //type: uint32
        ydk::YLeaf cipslatcpconntmplhistlives; //type: uint32
        ydk::YLeaf cipslatcpconntmplhistbuckets; //type: uint32
        ydk::YLeaf cipslatcpconntmplhistfilter; //type: Cipslatcpconntmplhistfilter
        ydk::YLeaf cipslatcpconntmplstatshours; //type: uint32
        ydk::YLeaf cipslatcpconntmpldistbuckets; //type: uint32
        ydk::YLeaf cipslatcpconntmpldistinterval; //type: uint32
        ydk::YLeaf cipslatcpconntmplstoragetype; //type: StorageType
        ydk::YLeaf cipslatcpconntmplrowstatus; //type: RowStatus
        class Cipslatcpconntmplhistfilter;

}; // CISCOIPSLAECHOMIB::Cipslatcpconntmpltable::Cipslatcpconntmplentry

class CISCOIPSLAECHOMIB::Cipslaicmpechotmpltable::Cipslaicmpechotmplentry::Cipslaicmpechotmplhistfilter : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf all;
        static const ydk::Enum::YLeaf overThreshold;
        static const ydk::Enum::YLeaf failures;

};

class CISCOIPSLAECHOMIB::Cipslaudpechotmpltable::Cipslaudpechotmplentry::Cipslaudpechotmplhistfilter : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf all;
        static const ydk::Enum::YLeaf overThreshold;
        static const ydk::Enum::YLeaf failures;

};

class CISCOIPSLAECHOMIB::Cipslatcpconntmpltable::Cipslatcpconntmplentry::Cipslatcpconntmplhistfilter : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf all;
        static const ydk::Enum::YLeaf overThreshold;
        static const ydk::Enum::YLeaf failures;

};


}
}

#endif /* _CISCO_IPSLA_ECHO_MIB_ */

