
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "Cisco_IOS_XR_pbr_vservice_ea_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XR_pbr_vservice_ea_oper {

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::SpiSi::SpiSi()
    :
    	processed_bytes{YType::uint64, "processed-bytes"},
	 processed_pkts{YType::uint64, "processed-pkts"}
{
    yang_name = "spi-si"; yang_parent_name = "sfp";
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::SpiSi::~SpiSi()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::SpiSi::has_data() const
{
    return processed_bytes.is_set
	|| processed_pkts.is_set;
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::SpiSi::has_operation() const
{
    return is_set(operation)
	|| is_set(processed_bytes.operation)
	|| is_set(processed_pkts.operation);
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::SpiSi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spi-si";

    return path_buffer.str();

}

EntityPath ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::SpiSi::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (processed_bytes.is_set || is_set(processed_bytes.operation)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());
    if (processed_pkts.is_set || is_set(processed_pkts.operation)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::SpiSi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::SpiSi::get_children()
{
    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::SpiSi::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
    }
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
    }
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::Term::Term()
    :
    	terminated_bytes{YType::uint64, "terminated-bytes"},
	 terminated_pkts{YType::uint64, "terminated-pkts"}
{
    yang_name = "term"; yang_parent_name = "sfp";
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::Term::~Term()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::Term::has_data() const
{
    return terminated_bytes.is_set
	|| terminated_pkts.is_set;
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::Term::has_operation() const
{
    return is_set(operation)
	|| is_set(terminated_bytes.operation)
	|| is_set(terminated_pkts.operation);
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::Term::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "term";

    return path_buffer.str();

}

EntityPath ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::Term::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (terminated_bytes.is_set || is_set(terminated_bytes.operation)) leaf_name_data.push_back(terminated_bytes.get_name_leafdata());
    if (terminated_pkts.is_set || is_set(terminated_pkts.operation)) leaf_name_data.push_back(terminated_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::Term::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::Term::get_children()
{
    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::Term::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "terminated-bytes")
    {
        terminated_bytes = value;
    }
    if(value_path == "terminated-pkts")
    {
        terminated_pkts = value;
    }
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::Sfp()
    :
    spi_si(std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::SpiSi>())
	,term(std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::Term>())
{
    spi_si->parent = this;
    children["spi-si"] = spi_si.get();

    term->parent = this;
    children["term"] = term.get();

    yang_name = "sfp"; yang_parent_name = "data";
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::~Sfp()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::has_data() const
{
    return (spi_si !=  nullptr && spi_si->has_data())
	|| (term !=  nullptr && term->has_data());
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::has_operation() const
{
    return is_set(operation)
	|| (spi_si !=  nullptr && is_set(spi_si->operation))
	|| (term !=  nullptr && is_set(term->operation));
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sfp";

    return path_buffer.str();

}

EntityPath ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "spi-si")
    {
        if(spi_si != nullptr)
        {
            children["spi-si"] = spi_si.get();
        }
        else
        {
            spi_si = std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::SpiSi>();
            spi_si->parent = this;
            children["spi-si"] = spi_si.get();
        }
        return children.at("spi-si");
    }

    if(child_yang_name == "term")
    {
        if(term != nullptr)
        {
            children["term"] = term.get();
        }
        else
        {
            term = std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::Term>();
            term->parent = this;
            children["term"] = term.get();
        }
        return children.at("term");
    }

    return nullptr;
}

std::map<std::string, Entity*> & ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::get_children()
{
    if(children.find("spi-si") == children.end())
    {
        if(spi_si != nullptr)
        {
            children["spi-si"] = spi_si.get();
        }
    }

    if(children.find("term") == children.end())
    {
        if(term != nullptr)
        {
            children["term"] = term.get();
        }
    }

    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::set_value(const std::string & value_path, std::string value)
{
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SpiSi::SpiSi()
    :
    	processed_bytes{YType::uint64, "processed-bytes"},
	 processed_pkts{YType::uint64, "processed-pkts"}
{
    yang_name = "spi-si"; yang_parent_name = "data";
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SpiSi::~SpiSi()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SpiSi::has_data() const
{
    return processed_bytes.is_set
	|| processed_pkts.is_set;
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SpiSi::has_operation() const
{
    return is_set(operation)
	|| is_set(processed_bytes.operation)
	|| is_set(processed_pkts.operation);
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SpiSi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spi-si";

    return path_buffer.str();

}

EntityPath ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SpiSi::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (processed_bytes.is_set || is_set(processed_bytes.operation)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());
    if (processed_pkts.is_set || is_set(processed_pkts.operation)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SpiSi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SpiSi::get_children()
{
    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SpiSi::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
    }
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
    }
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Term::Term()
    :
    	terminated_bytes{YType::uint64, "terminated-bytes"},
	 terminated_pkts{YType::uint64, "terminated-pkts"}
{
    yang_name = "term"; yang_parent_name = "data";
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Term::~Term()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Term::has_data() const
{
    return terminated_bytes.is_set
	|| terminated_pkts.is_set;
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Term::has_operation() const
{
    return is_set(operation)
	|| is_set(terminated_bytes.operation)
	|| is_set(terminated_pkts.operation);
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Term::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "term";

    return path_buffer.str();

}

EntityPath ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Term::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (terminated_bytes.is_set || is_set(terminated_bytes.operation)) leaf_name_data.push_back(terminated_bytes.get_name_leafdata());
    if (terminated_pkts.is_set || is_set(terminated_pkts.operation)) leaf_name_data.push_back(terminated_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Term::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Term::get_children()
{
    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Term::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "terminated-bytes")
    {
        terminated_bytes = value;
    }
    if(value_path == "terminated-pkts")
    {
        terminated_pkts = value;
    }
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sf::Sf()
    :
    	processed_bytes{YType::uint64, "processed-bytes"},
	 processed_pkts{YType::uint64, "processed-pkts"}
{
    yang_name = "sf"; yang_parent_name = "data";
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sf::~Sf()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sf::has_data() const
{
    return processed_bytes.is_set
	|| processed_pkts.is_set;
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sf::has_operation() const
{
    return is_set(operation)
	|| is_set(processed_bytes.operation)
	|| is_set(processed_pkts.operation);
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sf";

    return path_buffer.str();

}

EntityPath ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (processed_bytes.is_set || is_set(processed_bytes.operation)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());
    if (processed_pkts.is_set || is_set(processed_pkts.operation)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sf::get_children()
{
    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
    }
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
    }
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sff::Sff()
    :
    	processed_bytes{YType::uint64, "processed-bytes"},
	 processed_pkts{YType::uint64, "processed-pkts"}
{
    yang_name = "sff"; yang_parent_name = "data";
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sff::~Sff()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sff::has_data() const
{
    return processed_bytes.is_set
	|| processed_pkts.is_set;
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sff::has_operation() const
{
    return is_set(operation)
	|| is_set(processed_bytes.operation)
	|| is_set(processed_pkts.operation);
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sff::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sff";

    return path_buffer.str();

}

EntityPath ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sff::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (processed_bytes.is_set || is_set(processed_bytes.operation)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());
    if (processed_pkts.is_set || is_set(processed_pkts.operation)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sff::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sff::get_children()
{
    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sff::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
    }
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
    }
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SffLocal::SffLocal()
    :
    	lookup_err_bytes{YType::uint64, "lookup-err-bytes"},
	 lookup_err_pkts{YType::uint64, "lookup-err-pkts"},
	 malformed_err_bytes{YType::uint64, "malformed-err-bytes"},
	 malformed_err_pkts{YType::uint64, "malformed-err-pkts"}
{
    yang_name = "sff-local"; yang_parent_name = "data";
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SffLocal::~SffLocal()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SffLocal::has_data() const
{
    return lookup_err_bytes.is_set
	|| lookup_err_pkts.is_set
	|| malformed_err_bytes.is_set
	|| malformed_err_pkts.is_set;
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SffLocal::has_operation() const
{
    return is_set(operation)
	|| is_set(lookup_err_bytes.operation)
	|| is_set(lookup_err_pkts.operation)
	|| is_set(malformed_err_bytes.operation)
	|| is_set(malformed_err_pkts.operation);
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SffLocal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sff-local";

    return path_buffer.str();

}

EntityPath ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SffLocal::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lookup_err_bytes.is_set || is_set(lookup_err_bytes.operation)) leaf_name_data.push_back(lookup_err_bytes.get_name_leafdata());
    if (lookup_err_pkts.is_set || is_set(lookup_err_pkts.operation)) leaf_name_data.push_back(lookup_err_pkts.get_name_leafdata());
    if (malformed_err_bytes.is_set || is_set(malformed_err_bytes.operation)) leaf_name_data.push_back(malformed_err_bytes.get_name_leafdata());
    if (malformed_err_pkts.is_set || is_set(malformed_err_pkts.operation)) leaf_name_data.push_back(malformed_err_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SffLocal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SffLocal::get_children()
{
    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SffLocal::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "lookup-err-bytes")
    {
        lookup_err_bytes = value;
    }
    if(value_path == "lookup-err-pkts")
    {
        lookup_err_pkts = value;
    }
    if(value_path == "malformed-err-bytes")
    {
        malformed_err_bytes = value;
    }
    if(value_path == "malformed-err-pkts")
    {
        malformed_err_pkts = value;
    }
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Data()
    :
    	type{YType::enumeration, "type"}
    	,
    sf(std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sf>())
	,sff(std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sff>())
	,sff_local(std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SffLocal>())
	,sfp(std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp>())
	,spi_si(std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SpiSi>())
	,term(std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Term>())
{
    sf->parent = this;
    children["sf"] = sf.get();

    sff->parent = this;
    children["sff"] = sff.get();

    sff_local->parent = this;
    children["sff-local"] = sff_local.get();

    sfp->parent = this;
    children["sfp"] = sfp.get();

    spi_si->parent = this;
    children["spi-si"] = spi_si.get();

    term->parent = this;
    children["term"] = term.get();

    yang_name = "data"; yang_parent_name = "service-index";
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::~Data()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::has_data() const
{
    return type.is_set
	|| (sf !=  nullptr && sf->has_data())
	|| (sff !=  nullptr && sff->has_data())
	|| (sff_local !=  nullptr && sff_local->has_data())
	|| (sfp !=  nullptr && sfp->has_data())
	|| (spi_si !=  nullptr && spi_si->has_data())
	|| (term !=  nullptr && term->has_data());
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::has_operation() const
{
    return is_set(operation)
	|| is_set(type.operation)
	|| (sf !=  nullptr && is_set(sf->operation))
	|| (sff !=  nullptr && is_set(sff->operation))
	|| (sff_local !=  nullptr && is_set(sff_local->operation))
	|| (sfp !=  nullptr && is_set(sfp->operation))
	|| (spi_si !=  nullptr && is_set(spi_si->operation))
	|| (term !=  nullptr && is_set(term->operation));
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";

    return path_buffer.str();

}

EntityPath ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sf")
    {
        if(sf != nullptr)
        {
            children["sf"] = sf.get();
        }
        else
        {
            sf = std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sf>();
            sf->parent = this;
            children["sf"] = sf.get();
        }
        return children.at("sf");
    }

    if(child_yang_name == "sff")
    {
        if(sff != nullptr)
        {
            children["sff"] = sff.get();
        }
        else
        {
            sff = std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sff>();
            sff->parent = this;
            children["sff"] = sff.get();
        }
        return children.at("sff");
    }

    if(child_yang_name == "sff-local")
    {
        if(sff_local != nullptr)
        {
            children["sff-local"] = sff_local.get();
        }
        else
        {
            sff_local = std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SffLocal>();
            sff_local->parent = this;
            children["sff-local"] = sff_local.get();
        }
        return children.at("sff-local");
    }

    if(child_yang_name == "sfp")
    {
        if(sfp != nullptr)
        {
            children["sfp"] = sfp.get();
        }
        else
        {
            sfp = std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp>();
            sfp->parent = this;
            children["sfp"] = sfp.get();
        }
        return children.at("sfp");
    }

    if(child_yang_name == "spi-si")
    {
        if(spi_si != nullptr)
        {
            children["spi-si"] = spi_si.get();
        }
        else
        {
            spi_si = std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SpiSi>();
            spi_si->parent = this;
            children["spi-si"] = spi_si.get();
        }
        return children.at("spi-si");
    }

    if(child_yang_name == "term")
    {
        if(term != nullptr)
        {
            children["term"] = term.get();
        }
        else
        {
            term = std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Term>();
            term->parent = this;
            children["term"] = term.get();
        }
        return children.at("term");
    }

    return nullptr;
}

std::map<std::string, Entity*> & ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::get_children()
{
    if(children.find("sf") == children.end())
    {
        if(sf != nullptr)
        {
            children["sf"] = sf.get();
        }
    }

    if(children.find("sff") == children.end())
    {
        if(sff != nullptr)
        {
            children["sff"] = sff.get();
        }
    }

    if(children.find("sff-local") == children.end())
    {
        if(sff_local != nullptr)
        {
            children["sff-local"] = sff_local.get();
        }
    }

    if(children.find("sfp") == children.end())
    {
        if(sfp != nullptr)
        {
            children["sfp"] = sfp.get();
        }
    }

    if(children.find("spi-si") == children.end())
    {
        if(spi_si != nullptr)
        {
            children["spi-si"] = spi_si.get();
        }
    }

    if(children.find("term") == children.end())
    {
        if(term != nullptr)
        {
            children["term"] = term.get();
        }
    }

    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "type")
    {
        type = value;
    }
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::SpiSi::SpiSi()
    :
    	processed_bytes{YType::uint64, "processed-bytes"},
	 processed_pkts{YType::uint64, "processed-pkts"}
{
    yang_name = "spi-si"; yang_parent_name = "data";
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::SpiSi::~SpiSi()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::SpiSi::has_data() const
{
    return processed_bytes.is_set
	|| processed_pkts.is_set;
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::SpiSi::has_operation() const
{
    return is_set(operation)
	|| is_set(processed_bytes.operation)
	|| is_set(processed_pkts.operation);
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::SpiSi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spi-si";

    return path_buffer.str();

}

EntityPath ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::SpiSi::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (processed_bytes.is_set || is_set(processed_bytes.operation)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());
    if (processed_pkts.is_set || is_set(processed_pkts.operation)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::SpiSi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::SpiSi::get_children()
{
    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::SpiSi::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
    }
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
    }
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::Term::Term()
    :
    	terminated_bytes{YType::uint64, "terminated-bytes"},
	 terminated_pkts{YType::uint64, "terminated-pkts"}
{
    yang_name = "term"; yang_parent_name = "data";
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::Term::~Term()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::Term::has_data() const
{
    return terminated_bytes.is_set
	|| terminated_pkts.is_set;
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::Term::has_operation() const
{
    return is_set(operation)
	|| is_set(terminated_bytes.operation)
	|| is_set(terminated_pkts.operation);
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::Term::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "term";

    return path_buffer.str();

}

EntityPath ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::Term::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (terminated_bytes.is_set || is_set(terminated_bytes.operation)) leaf_name_data.push_back(terminated_bytes.get_name_leafdata());
    if (terminated_pkts.is_set || is_set(terminated_pkts.operation)) leaf_name_data.push_back(terminated_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::Term::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::Term::get_children()
{
    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::Term::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "terminated-bytes")
    {
        terminated_bytes = value;
    }
    if(value_path == "terminated-pkts")
    {
        terminated_pkts = value;
    }
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::Data()
    :
    	type{YType::enumeration, "type"}
    	,
    spi_si(std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::SpiSi>())
	,term(std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::Term>())
{
    spi_si->parent = this;
    children["spi-si"] = spi_si.get();

    term->parent = this;
    children["term"] = term.get();

    yang_name = "data"; yang_parent_name = "si-arr";
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::~Data()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::has_data() const
{
    return type.is_set
	|| (spi_si !=  nullptr && spi_si->has_data())
	|| (term !=  nullptr && term->has_data());
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::has_operation() const
{
    return is_set(operation)
	|| is_set(type.operation)
	|| (spi_si !=  nullptr && is_set(spi_si->operation))
	|| (term !=  nullptr && is_set(term->operation));
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";

    return path_buffer.str();

}

EntityPath ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "spi-si")
    {
        if(spi_si != nullptr)
        {
            children["spi-si"] = spi_si.get();
        }
        else
        {
            spi_si = std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::SpiSi>();
            spi_si->parent = this;
            children["spi-si"] = spi_si.get();
        }
        return children.at("spi-si");
    }

    if(child_yang_name == "term")
    {
        if(term != nullptr)
        {
            children["term"] = term.get();
        }
        else
        {
            term = std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::Term>();
            term->parent = this;
            children["term"] = term.get();
        }
        return children.at("term");
    }

    return nullptr;
}

std::map<std::string, Entity*> & ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::get_children()
{
    if(children.find("spi-si") == children.end())
    {
        if(spi_si != nullptr)
        {
            children["spi-si"] = spi_si.get();
        }
    }

    if(children.find("term") == children.end())
    {
        if(term != nullptr)
        {
            children["term"] = term.get();
        }
    }

    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "type")
    {
        type = value;
    }
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::SiArr()
    :
    	si{YType::uint8, "si"}
    	,
    data(std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data>())
{
    data->parent = this;
    children["data"] = data.get();

    yang_name = "si-arr"; yang_parent_name = "service-index";
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::~SiArr()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::has_data() const
{
    return si.is_set
	|| (data !=  nullptr && data->has_data());
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::has_operation() const
{
    return is_set(operation)
	|| is_set(si.operation)
	|| (data !=  nullptr && is_set(data->operation));
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "si-arr";

    return path_buffer.str();

}

EntityPath ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (si.is_set || is_set(si.operation)) leaf_name_data.push_back(si.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "data")
    {
        if(data != nullptr)
        {
            children["data"] = data.get();
        }
        else
        {
            data = std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data>();
            data->parent = this;
            children["data"] = data.get();
        }
        return children.at("data");
    }

    return nullptr;
}

std::map<std::string, Entity*> & ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::get_children()
{
    if(children.find("data") == children.end())
    {
        if(data != nullptr)
        {
            children["data"] = data.get();
        }
    }

    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "si")
    {
        si = value;
    }
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::ServiceIndex()
    :
    	index_{YType::uint32, "index"}
    	,
    data(std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data>())
{
    data->parent = this;
    children["data"] = data.get();

    yang_name = "service-index"; yang_parent_name = "service-indexes";
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::~ServiceIndex()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::has_data() const
{
    for (std::size_t index=0; index<si_arr.size(); index++)
    {
        if(si_arr[index]->has_data())
            return true;
    }
    return index_.is_set
	|| (data !=  nullptr && data->has_data());
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::has_operation() const
{
    for (std::size_t index=0; index<si_arr.size(); index++)
    {
        if(si_arr[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(index_.operation)
	|| (data !=  nullptr && is_set(data->operation));
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-index" <<"[index='" <<index_.get() <<"']";

    return path_buffer.str();

}

EntityPath ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "data")
    {
        if(data != nullptr)
        {
            children["data"] = data.get();
        }
        else
        {
            data = std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data>();
            data->parent = this;
            children["data"] = data.get();
        }
        return children.at("data");
    }

    if(child_yang_name == "si-arr")
    {
        for(auto const & c : si_arr)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr>();
        c->parent = this;
        si_arr.push_back(std::move(c));
        children[segment_path] = si_arr.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::get_children()
{
    if(children.find("data") == children.end())
    {
        if(data != nullptr)
        {
            children["data"] = data.get();
        }
    }

    for (auto const & c : si_arr)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "index")
    {
        index_ = value;
    }
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndexes()
{
    yang_name = "service-indexes"; yang_parent_name = "path-id";
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::~ServiceIndexes()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::has_data() const
{
    for (std::size_t index=0; index<service_index.size(); index++)
    {
        if(service_index[index]->has_data())
            return true;
    }
    return false;
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::has_operation() const
{
    for (std::size_t index=0; index<service_index.size(); index++)
    {
        if(service_index[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-indexes";

    return path_buffer.str();

}

EntityPath ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "service-index")
    {
        for(auto const & c : service_index)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex>();
        c->parent = this;
        service_index.push_back(std::move(c));
        children[segment_path] = service_index.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::get_children()
{
    for (auto const & c : service_index)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::set_value(const std::string & value_path, std::string value)
{
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::SpiSi::SpiSi()
    :
    	processed_bytes{YType::uint64, "processed-bytes"},
	 processed_pkts{YType::uint64, "processed-pkts"}
{
    yang_name = "spi-si"; yang_parent_name = "sfp";
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::SpiSi::~SpiSi()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::SpiSi::has_data() const
{
    return processed_bytes.is_set
	|| processed_pkts.is_set;
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::SpiSi::has_operation() const
{
    return is_set(operation)
	|| is_set(processed_bytes.operation)
	|| is_set(processed_pkts.operation);
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::SpiSi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spi-si";

    return path_buffer.str();

}

EntityPath ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::SpiSi::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (processed_bytes.is_set || is_set(processed_bytes.operation)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());
    if (processed_pkts.is_set || is_set(processed_pkts.operation)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::SpiSi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::SpiSi::get_children()
{
    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::SpiSi::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
    }
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
    }
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::Term::Term()
    :
    	terminated_bytes{YType::uint64, "terminated-bytes"},
	 terminated_pkts{YType::uint64, "terminated-pkts"}
{
    yang_name = "term"; yang_parent_name = "sfp";
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::Term::~Term()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::Term::has_data() const
{
    return terminated_bytes.is_set
	|| terminated_pkts.is_set;
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::Term::has_operation() const
{
    return is_set(operation)
	|| is_set(terminated_bytes.operation)
	|| is_set(terminated_pkts.operation);
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::Term::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "term";

    return path_buffer.str();

}

EntityPath ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::Term::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (terminated_bytes.is_set || is_set(terminated_bytes.operation)) leaf_name_data.push_back(terminated_bytes.get_name_leafdata());
    if (terminated_pkts.is_set || is_set(terminated_pkts.operation)) leaf_name_data.push_back(terminated_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::Term::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::Term::get_children()
{
    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::Term::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "terminated-bytes")
    {
        terminated_bytes = value;
    }
    if(value_path == "terminated-pkts")
    {
        terminated_pkts = value;
    }
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::Sfp()
    :
    spi_si(std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::SpiSi>())
	,term(std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::Term>())
{
    spi_si->parent = this;
    children["spi-si"] = spi_si.get();

    term->parent = this;
    children["term"] = term.get();

    yang_name = "sfp"; yang_parent_name = "data";
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::~Sfp()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::has_data() const
{
    return (spi_si !=  nullptr && spi_si->has_data())
	|| (term !=  nullptr && term->has_data());
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::has_operation() const
{
    return is_set(operation)
	|| (spi_si !=  nullptr && is_set(spi_si->operation))
	|| (term !=  nullptr && is_set(term->operation));
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sfp";

    return path_buffer.str();

}

EntityPath ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "spi-si")
    {
        if(spi_si != nullptr)
        {
            children["spi-si"] = spi_si.get();
        }
        else
        {
            spi_si = std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::SpiSi>();
            spi_si->parent = this;
            children["spi-si"] = spi_si.get();
        }
        return children.at("spi-si");
    }

    if(child_yang_name == "term")
    {
        if(term != nullptr)
        {
            children["term"] = term.get();
        }
        else
        {
            term = std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::Term>();
            term->parent = this;
            children["term"] = term.get();
        }
        return children.at("term");
    }

    return nullptr;
}

std::map<std::string, Entity*> & ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::get_children()
{
    if(children.find("spi-si") == children.end())
    {
        if(spi_si != nullptr)
        {
            children["spi-si"] = spi_si.get();
        }
    }

    if(children.find("term") == children.end())
    {
        if(term != nullptr)
        {
            children["term"] = term.get();
        }
    }

    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::set_value(const std::string & value_path, std::string value)
{
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SpiSi::SpiSi()
    :
    	processed_bytes{YType::uint64, "processed-bytes"},
	 processed_pkts{YType::uint64, "processed-pkts"}
{
    yang_name = "spi-si"; yang_parent_name = "data";
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SpiSi::~SpiSi()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SpiSi::has_data() const
{
    return processed_bytes.is_set
	|| processed_pkts.is_set;
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SpiSi::has_operation() const
{
    return is_set(operation)
	|| is_set(processed_bytes.operation)
	|| is_set(processed_pkts.operation);
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SpiSi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spi-si";

    return path_buffer.str();

}

EntityPath ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SpiSi::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (processed_bytes.is_set || is_set(processed_bytes.operation)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());
    if (processed_pkts.is_set || is_set(processed_pkts.operation)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SpiSi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SpiSi::get_children()
{
    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SpiSi::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
    }
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
    }
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Term::Term()
    :
    	terminated_bytes{YType::uint64, "terminated-bytes"},
	 terminated_pkts{YType::uint64, "terminated-pkts"}
{
    yang_name = "term"; yang_parent_name = "data";
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Term::~Term()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Term::has_data() const
{
    return terminated_bytes.is_set
	|| terminated_pkts.is_set;
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Term::has_operation() const
{
    return is_set(operation)
	|| is_set(terminated_bytes.operation)
	|| is_set(terminated_pkts.operation);
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Term::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "term";

    return path_buffer.str();

}

EntityPath ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Term::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (terminated_bytes.is_set || is_set(terminated_bytes.operation)) leaf_name_data.push_back(terminated_bytes.get_name_leafdata());
    if (terminated_pkts.is_set || is_set(terminated_pkts.operation)) leaf_name_data.push_back(terminated_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Term::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Term::get_children()
{
    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Term::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "terminated-bytes")
    {
        terminated_bytes = value;
    }
    if(value_path == "terminated-pkts")
    {
        terminated_pkts = value;
    }
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sf::Sf()
    :
    	processed_bytes{YType::uint64, "processed-bytes"},
	 processed_pkts{YType::uint64, "processed-pkts"}
{
    yang_name = "sf"; yang_parent_name = "data";
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sf::~Sf()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sf::has_data() const
{
    return processed_bytes.is_set
	|| processed_pkts.is_set;
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sf::has_operation() const
{
    return is_set(operation)
	|| is_set(processed_bytes.operation)
	|| is_set(processed_pkts.operation);
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sf";

    return path_buffer.str();

}

EntityPath ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (processed_bytes.is_set || is_set(processed_bytes.operation)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());
    if (processed_pkts.is_set || is_set(processed_pkts.operation)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sf::get_children()
{
    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
    }
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
    }
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sff::Sff()
    :
    	processed_bytes{YType::uint64, "processed-bytes"},
	 processed_pkts{YType::uint64, "processed-pkts"}
{
    yang_name = "sff"; yang_parent_name = "data";
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sff::~Sff()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sff::has_data() const
{
    return processed_bytes.is_set
	|| processed_pkts.is_set;
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sff::has_operation() const
{
    return is_set(operation)
	|| is_set(processed_bytes.operation)
	|| is_set(processed_pkts.operation);
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sff::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sff";

    return path_buffer.str();

}

EntityPath ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sff::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (processed_bytes.is_set || is_set(processed_bytes.operation)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());
    if (processed_pkts.is_set || is_set(processed_pkts.operation)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sff::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sff::get_children()
{
    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sff::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
    }
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
    }
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SffLocal::SffLocal()
    :
    	lookup_err_bytes{YType::uint64, "lookup-err-bytes"},
	 lookup_err_pkts{YType::uint64, "lookup-err-pkts"},
	 malformed_err_bytes{YType::uint64, "malformed-err-bytes"},
	 malformed_err_pkts{YType::uint64, "malformed-err-pkts"}
{
    yang_name = "sff-local"; yang_parent_name = "data";
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SffLocal::~SffLocal()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SffLocal::has_data() const
{
    return lookup_err_bytes.is_set
	|| lookup_err_pkts.is_set
	|| malformed_err_bytes.is_set
	|| malformed_err_pkts.is_set;
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SffLocal::has_operation() const
{
    return is_set(operation)
	|| is_set(lookup_err_bytes.operation)
	|| is_set(lookup_err_pkts.operation)
	|| is_set(malformed_err_bytes.operation)
	|| is_set(malformed_err_pkts.operation);
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SffLocal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sff-local";

    return path_buffer.str();

}

EntityPath ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SffLocal::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lookup_err_bytes.is_set || is_set(lookup_err_bytes.operation)) leaf_name_data.push_back(lookup_err_bytes.get_name_leafdata());
    if (lookup_err_pkts.is_set || is_set(lookup_err_pkts.operation)) leaf_name_data.push_back(lookup_err_pkts.get_name_leafdata());
    if (malformed_err_bytes.is_set || is_set(malformed_err_bytes.operation)) leaf_name_data.push_back(malformed_err_bytes.get_name_leafdata());
    if (malformed_err_pkts.is_set || is_set(malformed_err_pkts.operation)) leaf_name_data.push_back(malformed_err_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SffLocal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SffLocal::get_children()
{
    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SffLocal::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "lookup-err-bytes")
    {
        lookup_err_bytes = value;
    }
    if(value_path == "lookup-err-pkts")
    {
        lookup_err_pkts = value;
    }
    if(value_path == "malformed-err-bytes")
    {
        malformed_err_bytes = value;
    }
    if(value_path == "malformed-err-pkts")
    {
        malformed_err_pkts = value;
    }
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Data()
    :
    	type{YType::enumeration, "type"}
    	,
    sf(std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sf>())
	,sff(std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sff>())
	,sff_local(std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SffLocal>())
	,sfp(std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp>())
	,spi_si(std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SpiSi>())
	,term(std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Term>())
{
    sf->parent = this;
    children["sf"] = sf.get();

    sff->parent = this;
    children["sff"] = sff.get();

    sff_local->parent = this;
    children["sff-local"] = sff_local.get();

    sfp->parent = this;
    children["sfp"] = sfp.get();

    spi_si->parent = this;
    children["spi-si"] = spi_si.get();

    term->parent = this;
    children["term"] = term.get();

    yang_name = "data"; yang_parent_name = "detail";
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::~Data()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::has_data() const
{
    return type.is_set
	|| (sf !=  nullptr && sf->has_data())
	|| (sff !=  nullptr && sff->has_data())
	|| (sff_local !=  nullptr && sff_local->has_data())
	|| (sfp !=  nullptr && sfp->has_data())
	|| (spi_si !=  nullptr && spi_si->has_data())
	|| (term !=  nullptr && term->has_data());
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::has_operation() const
{
    return is_set(operation)
	|| is_set(type.operation)
	|| (sf !=  nullptr && is_set(sf->operation))
	|| (sff !=  nullptr && is_set(sff->operation))
	|| (sff_local !=  nullptr && is_set(sff_local->operation))
	|| (sfp !=  nullptr && is_set(sfp->operation))
	|| (spi_si !=  nullptr && is_set(spi_si->operation))
	|| (term !=  nullptr && is_set(term->operation));
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";

    return path_buffer.str();

}

EntityPath ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sf")
    {
        if(sf != nullptr)
        {
            children["sf"] = sf.get();
        }
        else
        {
            sf = std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sf>();
            sf->parent = this;
            children["sf"] = sf.get();
        }
        return children.at("sf");
    }

    if(child_yang_name == "sff")
    {
        if(sff != nullptr)
        {
            children["sff"] = sff.get();
        }
        else
        {
            sff = std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sff>();
            sff->parent = this;
            children["sff"] = sff.get();
        }
        return children.at("sff");
    }

    if(child_yang_name == "sff-local")
    {
        if(sff_local != nullptr)
        {
            children["sff-local"] = sff_local.get();
        }
        else
        {
            sff_local = std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SffLocal>();
            sff_local->parent = this;
            children["sff-local"] = sff_local.get();
        }
        return children.at("sff-local");
    }

    if(child_yang_name == "sfp")
    {
        if(sfp != nullptr)
        {
            children["sfp"] = sfp.get();
        }
        else
        {
            sfp = std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp>();
            sfp->parent = this;
            children["sfp"] = sfp.get();
        }
        return children.at("sfp");
    }

    if(child_yang_name == "spi-si")
    {
        if(spi_si != nullptr)
        {
            children["spi-si"] = spi_si.get();
        }
        else
        {
            spi_si = std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SpiSi>();
            spi_si->parent = this;
            children["spi-si"] = spi_si.get();
        }
        return children.at("spi-si");
    }

    if(child_yang_name == "term")
    {
        if(term != nullptr)
        {
            children["term"] = term.get();
        }
        else
        {
            term = std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Term>();
            term->parent = this;
            children["term"] = term.get();
        }
        return children.at("term");
    }

    return nullptr;
}

std::map<std::string, Entity*> & ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::get_children()
{
    if(children.find("sf") == children.end())
    {
        if(sf != nullptr)
        {
            children["sf"] = sf.get();
        }
    }

    if(children.find("sff") == children.end())
    {
        if(sff != nullptr)
        {
            children["sff"] = sff.get();
        }
    }

    if(children.find("sff-local") == children.end())
    {
        if(sff_local != nullptr)
        {
            children["sff-local"] = sff_local.get();
        }
    }

    if(children.find("sfp") == children.end())
    {
        if(sfp != nullptr)
        {
            children["sfp"] = sfp.get();
        }
    }

    if(children.find("spi-si") == children.end())
    {
        if(spi_si != nullptr)
        {
            children["spi-si"] = spi_si.get();
        }
    }

    if(children.find("term") == children.end())
    {
        if(term != nullptr)
        {
            children["term"] = term.get();
        }
    }

    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "type")
    {
        type = value;
    }
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::SpiSi::SpiSi()
    :
    	processed_bytes{YType::uint64, "processed-bytes"},
	 processed_pkts{YType::uint64, "processed-pkts"}
{
    yang_name = "spi-si"; yang_parent_name = "data";
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::SpiSi::~SpiSi()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::SpiSi::has_data() const
{
    return processed_bytes.is_set
	|| processed_pkts.is_set;
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::SpiSi::has_operation() const
{
    return is_set(operation)
	|| is_set(processed_bytes.operation)
	|| is_set(processed_pkts.operation);
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::SpiSi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spi-si";

    return path_buffer.str();

}

EntityPath ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::SpiSi::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (processed_bytes.is_set || is_set(processed_bytes.operation)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());
    if (processed_pkts.is_set || is_set(processed_pkts.operation)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::SpiSi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::SpiSi::get_children()
{
    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::SpiSi::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
    }
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
    }
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::Term::Term()
    :
    	terminated_bytes{YType::uint64, "terminated-bytes"},
	 terminated_pkts{YType::uint64, "terminated-pkts"}
{
    yang_name = "term"; yang_parent_name = "data";
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::Term::~Term()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::Term::has_data() const
{
    return terminated_bytes.is_set
	|| terminated_pkts.is_set;
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::Term::has_operation() const
{
    return is_set(operation)
	|| is_set(terminated_bytes.operation)
	|| is_set(terminated_pkts.operation);
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::Term::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "term";

    return path_buffer.str();

}

EntityPath ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::Term::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (terminated_bytes.is_set || is_set(terminated_bytes.operation)) leaf_name_data.push_back(terminated_bytes.get_name_leafdata());
    if (terminated_pkts.is_set || is_set(terminated_pkts.operation)) leaf_name_data.push_back(terminated_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::Term::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::Term::get_children()
{
    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::Term::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "terminated-bytes")
    {
        terminated_bytes = value;
    }
    if(value_path == "terminated-pkts")
    {
        terminated_pkts = value;
    }
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::Data()
    :
    	type{YType::enumeration, "type"}
    	,
    spi_si(std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::SpiSi>())
	,term(std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::Term>())
{
    spi_si->parent = this;
    children["spi-si"] = spi_si.get();

    term->parent = this;
    children["term"] = term.get();

    yang_name = "data"; yang_parent_name = "si-arr";
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::~Data()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::has_data() const
{
    return type.is_set
	|| (spi_si !=  nullptr && spi_si->has_data())
	|| (term !=  nullptr && term->has_data());
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::has_operation() const
{
    return is_set(operation)
	|| is_set(type.operation)
	|| (spi_si !=  nullptr && is_set(spi_si->operation))
	|| (term !=  nullptr && is_set(term->operation));
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";

    return path_buffer.str();

}

EntityPath ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "spi-si")
    {
        if(spi_si != nullptr)
        {
            children["spi-si"] = spi_si.get();
        }
        else
        {
            spi_si = std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::SpiSi>();
            spi_si->parent = this;
            children["spi-si"] = spi_si.get();
        }
        return children.at("spi-si");
    }

    if(child_yang_name == "term")
    {
        if(term != nullptr)
        {
            children["term"] = term.get();
        }
        else
        {
            term = std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::Term>();
            term->parent = this;
            children["term"] = term.get();
        }
        return children.at("term");
    }

    return nullptr;
}

std::map<std::string, Entity*> & ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::get_children()
{
    if(children.find("spi-si") == children.end())
    {
        if(spi_si != nullptr)
        {
            children["spi-si"] = spi_si.get();
        }
    }

    if(children.find("term") == children.end())
    {
        if(term != nullptr)
        {
            children["term"] = term.get();
        }
    }

    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "type")
    {
        type = value;
    }
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::SiArr()
    :
    	si{YType::uint8, "si"}
    	,
    data(std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data>())
{
    data->parent = this;
    children["data"] = data.get();

    yang_name = "si-arr"; yang_parent_name = "detail";
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::~SiArr()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::has_data() const
{
    return si.is_set
	|| (data !=  nullptr && data->has_data());
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::has_operation() const
{
    return is_set(operation)
	|| is_set(si.operation)
	|| (data !=  nullptr && is_set(data->operation));
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "si-arr";

    return path_buffer.str();

}

EntityPath ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (si.is_set || is_set(si.operation)) leaf_name_data.push_back(si.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "data")
    {
        if(data != nullptr)
        {
            children["data"] = data.get();
        }
        else
        {
            data = std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data>();
            data->parent = this;
            children["data"] = data.get();
        }
        return children.at("data");
    }

    return nullptr;
}

std::map<std::string, Entity*> & ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::get_children()
{
    if(children.find("data") == children.end())
    {
        if(data != nullptr)
        {
            children["data"] = data.get();
        }
    }

    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "si")
    {
        si = value;
    }
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Detail()
    :
    data(std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data>())
{
    data->parent = this;
    children["data"] = data.get();

    yang_name = "detail"; yang_parent_name = "stats";
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::~Detail()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::has_data() const
{
    for (std::size_t index=0; index<si_arr.size(); index++)
    {
        if(si_arr[index]->has_data())
            return true;
    }
    return (data !=  nullptr && data->has_data());
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::has_operation() const
{
    for (std::size_t index=0; index<si_arr.size(); index++)
    {
        if(si_arr[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (data !=  nullptr && is_set(data->operation));
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail";

    return path_buffer.str();

}

EntityPath ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "data")
    {
        if(data != nullptr)
        {
            children["data"] = data.get();
        }
        else
        {
            data = std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data>();
            data->parent = this;
            children["data"] = data.get();
        }
        return children.at("data");
    }

    if(child_yang_name == "si-arr")
    {
        for(auto const & c : si_arr)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr>();
        c->parent = this;
        si_arr.push_back(std::move(c));
        children[segment_path] = si_arr.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::get_children()
{
    if(children.find("data") == children.end())
    {
        if(data != nullptr)
        {
            children["data"] = data.get();
        }
    }

    for (auto const & c : si_arr)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::set_value(const std::string & value_path, std::string value)
{
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::SpiSi::SpiSi()
    :
    	processed_bytes{YType::uint64, "processed-bytes"},
	 processed_pkts{YType::uint64, "processed-pkts"}
{
    yang_name = "spi-si"; yang_parent_name = "sfp";
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::SpiSi::~SpiSi()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::SpiSi::has_data() const
{
    return processed_bytes.is_set
	|| processed_pkts.is_set;
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::SpiSi::has_operation() const
{
    return is_set(operation)
	|| is_set(processed_bytes.operation)
	|| is_set(processed_pkts.operation);
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::SpiSi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spi-si";

    return path_buffer.str();

}

EntityPath ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::SpiSi::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (processed_bytes.is_set || is_set(processed_bytes.operation)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());
    if (processed_pkts.is_set || is_set(processed_pkts.operation)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::SpiSi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::SpiSi::get_children()
{
    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::SpiSi::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
    }
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
    }
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::Term::Term()
    :
    	terminated_bytes{YType::uint64, "terminated-bytes"},
	 terminated_pkts{YType::uint64, "terminated-pkts"}
{
    yang_name = "term"; yang_parent_name = "sfp";
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::Term::~Term()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::Term::has_data() const
{
    return terminated_bytes.is_set
	|| terminated_pkts.is_set;
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::Term::has_operation() const
{
    return is_set(operation)
	|| is_set(terminated_bytes.operation)
	|| is_set(terminated_pkts.operation);
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::Term::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "term";

    return path_buffer.str();

}

EntityPath ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::Term::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (terminated_bytes.is_set || is_set(terminated_bytes.operation)) leaf_name_data.push_back(terminated_bytes.get_name_leafdata());
    if (terminated_pkts.is_set || is_set(terminated_pkts.operation)) leaf_name_data.push_back(terminated_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::Term::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::Term::get_children()
{
    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::Term::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "terminated-bytes")
    {
        terminated_bytes = value;
    }
    if(value_path == "terminated-pkts")
    {
        terminated_pkts = value;
    }
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::Sfp()
    :
    spi_si(std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::SpiSi>())
	,term(std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::Term>())
{
    spi_si->parent = this;
    children["spi-si"] = spi_si.get();

    term->parent = this;
    children["term"] = term.get();

    yang_name = "sfp"; yang_parent_name = "data";
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::~Sfp()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::has_data() const
{
    return (spi_si !=  nullptr && spi_si->has_data())
	|| (term !=  nullptr && term->has_data());
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::has_operation() const
{
    return is_set(operation)
	|| (spi_si !=  nullptr && is_set(spi_si->operation))
	|| (term !=  nullptr && is_set(term->operation));
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sfp";

    return path_buffer.str();

}

EntityPath ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "spi-si")
    {
        if(spi_si != nullptr)
        {
            children["spi-si"] = spi_si.get();
        }
        else
        {
            spi_si = std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::SpiSi>();
            spi_si->parent = this;
            children["spi-si"] = spi_si.get();
        }
        return children.at("spi-si");
    }

    if(child_yang_name == "term")
    {
        if(term != nullptr)
        {
            children["term"] = term.get();
        }
        else
        {
            term = std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::Term>();
            term->parent = this;
            children["term"] = term.get();
        }
        return children.at("term");
    }

    return nullptr;
}

std::map<std::string, Entity*> & ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::get_children()
{
    if(children.find("spi-si") == children.end())
    {
        if(spi_si != nullptr)
        {
            children["spi-si"] = spi_si.get();
        }
    }

    if(children.find("term") == children.end())
    {
        if(term != nullptr)
        {
            children["term"] = term.get();
        }
    }

    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::set_value(const std::string & value_path, std::string value)
{
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SpiSi::SpiSi()
    :
    	processed_bytes{YType::uint64, "processed-bytes"},
	 processed_pkts{YType::uint64, "processed-pkts"}
{
    yang_name = "spi-si"; yang_parent_name = "data";
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SpiSi::~SpiSi()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SpiSi::has_data() const
{
    return processed_bytes.is_set
	|| processed_pkts.is_set;
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SpiSi::has_operation() const
{
    return is_set(operation)
	|| is_set(processed_bytes.operation)
	|| is_set(processed_pkts.operation);
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SpiSi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spi-si";

    return path_buffer.str();

}

EntityPath ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SpiSi::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (processed_bytes.is_set || is_set(processed_bytes.operation)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());
    if (processed_pkts.is_set || is_set(processed_pkts.operation)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SpiSi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SpiSi::get_children()
{
    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SpiSi::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
    }
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
    }
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Term::Term()
    :
    	terminated_bytes{YType::uint64, "terminated-bytes"},
	 terminated_pkts{YType::uint64, "terminated-pkts"}
{
    yang_name = "term"; yang_parent_name = "data";
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Term::~Term()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Term::has_data() const
{
    return terminated_bytes.is_set
	|| terminated_pkts.is_set;
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Term::has_operation() const
{
    return is_set(operation)
	|| is_set(terminated_bytes.operation)
	|| is_set(terminated_pkts.operation);
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Term::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "term";

    return path_buffer.str();

}

EntityPath ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Term::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (terminated_bytes.is_set || is_set(terminated_bytes.operation)) leaf_name_data.push_back(terminated_bytes.get_name_leafdata());
    if (terminated_pkts.is_set || is_set(terminated_pkts.operation)) leaf_name_data.push_back(terminated_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Term::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Term::get_children()
{
    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Term::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "terminated-bytes")
    {
        terminated_bytes = value;
    }
    if(value_path == "terminated-pkts")
    {
        terminated_pkts = value;
    }
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sf::Sf()
    :
    	processed_bytes{YType::uint64, "processed-bytes"},
	 processed_pkts{YType::uint64, "processed-pkts"}
{
    yang_name = "sf"; yang_parent_name = "data";
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sf::~Sf()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sf::has_data() const
{
    return processed_bytes.is_set
	|| processed_pkts.is_set;
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sf::has_operation() const
{
    return is_set(operation)
	|| is_set(processed_bytes.operation)
	|| is_set(processed_pkts.operation);
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sf";

    return path_buffer.str();

}

EntityPath ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (processed_bytes.is_set || is_set(processed_bytes.operation)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());
    if (processed_pkts.is_set || is_set(processed_pkts.operation)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sf::get_children()
{
    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
    }
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
    }
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sff::Sff()
    :
    	processed_bytes{YType::uint64, "processed-bytes"},
	 processed_pkts{YType::uint64, "processed-pkts"}
{
    yang_name = "sff"; yang_parent_name = "data";
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sff::~Sff()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sff::has_data() const
{
    return processed_bytes.is_set
	|| processed_pkts.is_set;
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sff::has_operation() const
{
    return is_set(operation)
	|| is_set(processed_bytes.operation)
	|| is_set(processed_pkts.operation);
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sff::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sff";

    return path_buffer.str();

}

EntityPath ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sff::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (processed_bytes.is_set || is_set(processed_bytes.operation)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());
    if (processed_pkts.is_set || is_set(processed_pkts.operation)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sff::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sff::get_children()
{
    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sff::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
    }
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
    }
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SffLocal::SffLocal()
    :
    	lookup_err_bytes{YType::uint64, "lookup-err-bytes"},
	 lookup_err_pkts{YType::uint64, "lookup-err-pkts"},
	 malformed_err_bytes{YType::uint64, "malformed-err-bytes"},
	 malformed_err_pkts{YType::uint64, "malformed-err-pkts"}
{
    yang_name = "sff-local"; yang_parent_name = "data";
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SffLocal::~SffLocal()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SffLocal::has_data() const
{
    return lookup_err_bytes.is_set
	|| lookup_err_pkts.is_set
	|| malformed_err_bytes.is_set
	|| malformed_err_pkts.is_set;
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SffLocal::has_operation() const
{
    return is_set(operation)
	|| is_set(lookup_err_bytes.operation)
	|| is_set(lookup_err_pkts.operation)
	|| is_set(malformed_err_bytes.operation)
	|| is_set(malformed_err_pkts.operation);
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SffLocal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sff-local";

    return path_buffer.str();

}

EntityPath ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SffLocal::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lookup_err_bytes.is_set || is_set(lookup_err_bytes.operation)) leaf_name_data.push_back(lookup_err_bytes.get_name_leafdata());
    if (lookup_err_pkts.is_set || is_set(lookup_err_pkts.operation)) leaf_name_data.push_back(lookup_err_pkts.get_name_leafdata());
    if (malformed_err_bytes.is_set || is_set(malformed_err_bytes.operation)) leaf_name_data.push_back(malformed_err_bytes.get_name_leafdata());
    if (malformed_err_pkts.is_set || is_set(malformed_err_pkts.operation)) leaf_name_data.push_back(malformed_err_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SffLocal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SffLocal::get_children()
{
    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SffLocal::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "lookup-err-bytes")
    {
        lookup_err_bytes = value;
    }
    if(value_path == "lookup-err-pkts")
    {
        lookup_err_pkts = value;
    }
    if(value_path == "malformed-err-bytes")
    {
        malformed_err_bytes = value;
    }
    if(value_path == "malformed-err-pkts")
    {
        malformed_err_pkts = value;
    }
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Data()
    :
    	type{YType::enumeration, "type"}
    	,
    sf(std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sf>())
	,sff(std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sff>())
	,sff_local(std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SffLocal>())
	,sfp(std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp>())
	,spi_si(std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SpiSi>())
	,term(std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Term>())
{
    sf->parent = this;
    children["sf"] = sf.get();

    sff->parent = this;
    children["sff"] = sff.get();

    sff_local->parent = this;
    children["sff-local"] = sff_local.get();

    sfp->parent = this;
    children["sfp"] = sfp.get();

    spi_si->parent = this;
    children["spi-si"] = spi_si.get();

    term->parent = this;
    children["term"] = term.get();

    yang_name = "data"; yang_parent_name = "summarized";
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::~Data()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::has_data() const
{
    return type.is_set
	|| (sf !=  nullptr && sf->has_data())
	|| (sff !=  nullptr && sff->has_data())
	|| (sff_local !=  nullptr && sff_local->has_data())
	|| (sfp !=  nullptr && sfp->has_data())
	|| (spi_si !=  nullptr && spi_si->has_data())
	|| (term !=  nullptr && term->has_data());
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::has_operation() const
{
    return is_set(operation)
	|| is_set(type.operation)
	|| (sf !=  nullptr && is_set(sf->operation))
	|| (sff !=  nullptr && is_set(sff->operation))
	|| (sff_local !=  nullptr && is_set(sff_local->operation))
	|| (sfp !=  nullptr && is_set(sfp->operation))
	|| (spi_si !=  nullptr && is_set(spi_si->operation))
	|| (term !=  nullptr && is_set(term->operation));
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";

    return path_buffer.str();

}

EntityPath ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sf")
    {
        if(sf != nullptr)
        {
            children["sf"] = sf.get();
        }
        else
        {
            sf = std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sf>();
            sf->parent = this;
            children["sf"] = sf.get();
        }
        return children.at("sf");
    }

    if(child_yang_name == "sff")
    {
        if(sff != nullptr)
        {
            children["sff"] = sff.get();
        }
        else
        {
            sff = std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sff>();
            sff->parent = this;
            children["sff"] = sff.get();
        }
        return children.at("sff");
    }

    if(child_yang_name == "sff-local")
    {
        if(sff_local != nullptr)
        {
            children["sff-local"] = sff_local.get();
        }
        else
        {
            sff_local = std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SffLocal>();
            sff_local->parent = this;
            children["sff-local"] = sff_local.get();
        }
        return children.at("sff-local");
    }

    if(child_yang_name == "sfp")
    {
        if(sfp != nullptr)
        {
            children["sfp"] = sfp.get();
        }
        else
        {
            sfp = std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp>();
            sfp->parent = this;
            children["sfp"] = sfp.get();
        }
        return children.at("sfp");
    }

    if(child_yang_name == "spi-si")
    {
        if(spi_si != nullptr)
        {
            children["spi-si"] = spi_si.get();
        }
        else
        {
            spi_si = std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SpiSi>();
            spi_si->parent = this;
            children["spi-si"] = spi_si.get();
        }
        return children.at("spi-si");
    }

    if(child_yang_name == "term")
    {
        if(term != nullptr)
        {
            children["term"] = term.get();
        }
        else
        {
            term = std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Term>();
            term->parent = this;
            children["term"] = term.get();
        }
        return children.at("term");
    }

    return nullptr;
}

std::map<std::string, Entity*> & ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::get_children()
{
    if(children.find("sf") == children.end())
    {
        if(sf != nullptr)
        {
            children["sf"] = sf.get();
        }
    }

    if(children.find("sff") == children.end())
    {
        if(sff != nullptr)
        {
            children["sff"] = sff.get();
        }
    }

    if(children.find("sff-local") == children.end())
    {
        if(sff_local != nullptr)
        {
            children["sff-local"] = sff_local.get();
        }
    }

    if(children.find("sfp") == children.end())
    {
        if(sfp != nullptr)
        {
            children["sfp"] = sfp.get();
        }
    }

    if(children.find("spi-si") == children.end())
    {
        if(spi_si != nullptr)
        {
            children["spi-si"] = spi_si.get();
        }
    }

    if(children.find("term") == children.end())
    {
        if(term != nullptr)
        {
            children["term"] = term.get();
        }
    }

    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "type")
    {
        type = value;
    }
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::SpiSi::SpiSi()
    :
    	processed_bytes{YType::uint64, "processed-bytes"},
	 processed_pkts{YType::uint64, "processed-pkts"}
{
    yang_name = "spi-si"; yang_parent_name = "data";
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::SpiSi::~SpiSi()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::SpiSi::has_data() const
{
    return processed_bytes.is_set
	|| processed_pkts.is_set;
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::SpiSi::has_operation() const
{
    return is_set(operation)
	|| is_set(processed_bytes.operation)
	|| is_set(processed_pkts.operation);
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::SpiSi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spi-si";

    return path_buffer.str();

}

EntityPath ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::SpiSi::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (processed_bytes.is_set || is_set(processed_bytes.operation)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());
    if (processed_pkts.is_set || is_set(processed_pkts.operation)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::SpiSi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::SpiSi::get_children()
{
    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::SpiSi::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
    }
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
    }
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::Term::Term()
    :
    	terminated_bytes{YType::uint64, "terminated-bytes"},
	 terminated_pkts{YType::uint64, "terminated-pkts"}
{
    yang_name = "term"; yang_parent_name = "data";
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::Term::~Term()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::Term::has_data() const
{
    return terminated_bytes.is_set
	|| terminated_pkts.is_set;
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::Term::has_operation() const
{
    return is_set(operation)
	|| is_set(terminated_bytes.operation)
	|| is_set(terminated_pkts.operation);
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::Term::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "term";

    return path_buffer.str();

}

EntityPath ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::Term::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (terminated_bytes.is_set || is_set(terminated_bytes.operation)) leaf_name_data.push_back(terminated_bytes.get_name_leafdata());
    if (terminated_pkts.is_set || is_set(terminated_pkts.operation)) leaf_name_data.push_back(terminated_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::Term::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::Term::get_children()
{
    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::Term::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "terminated-bytes")
    {
        terminated_bytes = value;
    }
    if(value_path == "terminated-pkts")
    {
        terminated_pkts = value;
    }
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::Data()
    :
    	type{YType::enumeration, "type"}
    	,
    spi_si(std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::SpiSi>())
	,term(std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::Term>())
{
    spi_si->parent = this;
    children["spi-si"] = spi_si.get();

    term->parent = this;
    children["term"] = term.get();

    yang_name = "data"; yang_parent_name = "si-arr";
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::~Data()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::has_data() const
{
    return type.is_set
	|| (spi_si !=  nullptr && spi_si->has_data())
	|| (term !=  nullptr && term->has_data());
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::has_operation() const
{
    return is_set(operation)
	|| is_set(type.operation)
	|| (spi_si !=  nullptr && is_set(spi_si->operation))
	|| (term !=  nullptr && is_set(term->operation));
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";

    return path_buffer.str();

}

EntityPath ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "spi-si")
    {
        if(spi_si != nullptr)
        {
            children["spi-si"] = spi_si.get();
        }
        else
        {
            spi_si = std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::SpiSi>();
            spi_si->parent = this;
            children["spi-si"] = spi_si.get();
        }
        return children.at("spi-si");
    }

    if(child_yang_name == "term")
    {
        if(term != nullptr)
        {
            children["term"] = term.get();
        }
        else
        {
            term = std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::Term>();
            term->parent = this;
            children["term"] = term.get();
        }
        return children.at("term");
    }

    return nullptr;
}

std::map<std::string, Entity*> & ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::get_children()
{
    if(children.find("spi-si") == children.end())
    {
        if(spi_si != nullptr)
        {
            children["spi-si"] = spi_si.get();
        }
    }

    if(children.find("term") == children.end())
    {
        if(term != nullptr)
        {
            children["term"] = term.get();
        }
    }

    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "type")
    {
        type = value;
    }
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::SiArr()
    :
    	si{YType::uint8, "si"}
    	,
    data(std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data>())
{
    data->parent = this;
    children["data"] = data.get();

    yang_name = "si-arr"; yang_parent_name = "summarized";
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::~SiArr()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::has_data() const
{
    return si.is_set
	|| (data !=  nullptr && data->has_data());
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::has_operation() const
{
    return is_set(operation)
	|| is_set(si.operation)
	|| (data !=  nullptr && is_set(data->operation));
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "si-arr";

    return path_buffer.str();

}

EntityPath ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (si.is_set || is_set(si.operation)) leaf_name_data.push_back(si.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "data")
    {
        if(data != nullptr)
        {
            children["data"] = data.get();
        }
        else
        {
            data = std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data>();
            data->parent = this;
            children["data"] = data.get();
        }
        return children.at("data");
    }

    return nullptr;
}

std::map<std::string, Entity*> & ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::get_children()
{
    if(children.find("data") == children.end())
    {
        if(data != nullptr)
        {
            children["data"] = data.get();
        }
    }

    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "si")
    {
        si = value;
    }
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Summarized()
    :
    data(std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data>())
{
    data->parent = this;
    children["data"] = data.get();

    yang_name = "summarized"; yang_parent_name = "stats";
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::~Summarized()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::has_data() const
{
    for (std::size_t index=0; index<si_arr.size(); index++)
    {
        if(si_arr[index]->has_data())
            return true;
    }
    return (data !=  nullptr && data->has_data());
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::has_operation() const
{
    for (std::size_t index=0; index<si_arr.size(); index++)
    {
        if(si_arr[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (data !=  nullptr && is_set(data->operation));
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summarized";

    return path_buffer.str();

}

EntityPath ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "data")
    {
        if(data != nullptr)
        {
            children["data"] = data.get();
        }
        else
        {
            data = std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data>();
            data->parent = this;
            children["data"] = data.get();
        }
        return children.at("data");
    }

    if(child_yang_name == "si-arr")
    {
        for(auto const & c : si_arr)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr>();
        c->parent = this;
        si_arr.push_back(std::move(c));
        children[segment_path] = si_arr.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::get_children()
{
    if(children.find("data") == children.end())
    {
        if(data != nullptr)
        {
            children["data"] = data.get();
        }
    }

    for (auto const & c : si_arr)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::set_value(const std::string & value_path, std::string value)
{
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Stats()
    :
    detail(std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail>())
	,summarized(std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized>())
{
    detail->parent = this;
    children["detail"] = detail.get();

    summarized->parent = this;
    children["summarized"] = summarized.get();

    yang_name = "stats"; yang_parent_name = "path-id";
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::~Stats()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::has_data() const
{
    return (detail !=  nullptr && detail->has_data())
	|| (summarized !=  nullptr && summarized->has_data());
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::has_operation() const
{
    return is_set(operation)
	|| (detail !=  nullptr && is_set(detail->operation))
	|| (summarized !=  nullptr && is_set(summarized->operation));
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stats";

    return path_buffer.str();

}

EntityPath ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "detail")
    {
        if(detail != nullptr)
        {
            children["detail"] = detail.get();
        }
        else
        {
            detail = std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail>();
            detail->parent = this;
            children["detail"] = detail.get();
        }
        return children.at("detail");
    }

    if(child_yang_name == "summarized")
    {
        if(summarized != nullptr)
        {
            children["summarized"] = summarized.get();
        }
        else
        {
            summarized = std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized>();
            summarized->parent = this;
            children["summarized"] = summarized.get();
        }
        return children.at("summarized");
    }

    return nullptr;
}

std::map<std::string, Entity*> & ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::get_children()
{
    if(children.find("detail") == children.end())
    {
        if(detail != nullptr)
        {
            children["detail"] = detail.get();
        }
    }

    if(children.find("summarized") == children.end())
    {
        if(summarized != nullptr)
        {
            children["summarized"] = summarized.get();
        }
    }

    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::set_value(const std::string & value_path, std::string value)
{
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::PathId()
    :
    	id{YType::uint32, "id"}
    	,
    service_indexes(std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes>())
	,stats(std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats>())
{
    service_indexes->parent = this;
    children["service-indexes"] = service_indexes.get();

    stats->parent = this;
    children["stats"] = stats.get();

    yang_name = "path-id"; yang_parent_name = "path-ids";
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::~PathId()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::has_data() const
{
    return id.is_set
	|| (service_indexes !=  nullptr && service_indexes->has_data())
	|| (stats !=  nullptr && stats->has_data());
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| (service_indexes !=  nullptr && is_set(service_indexes->operation))
	|| (stats !=  nullptr && is_set(stats->operation));
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-id" <<"[id='" <<id.get() <<"']";

    return path_buffer.str();

}

EntityPath ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "service-indexes")
    {
        if(service_indexes != nullptr)
        {
            children["service-indexes"] = service_indexes.get();
        }
        else
        {
            service_indexes = std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes>();
            service_indexes->parent = this;
            children["service-indexes"] = service_indexes.get();
        }
        return children.at("service-indexes");
    }

    if(child_yang_name == "stats")
    {
        if(stats != nullptr)
        {
            children["stats"] = stats.get();
        }
        else
        {
            stats = std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats>();
            stats->parent = this;
            children["stats"] = stats.get();
        }
        return children.at("stats");
    }

    return nullptr;
}

std::map<std::string, Entity*> & ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::get_children()
{
    if(children.find("service-indexes") == children.end())
    {
        if(service_indexes != nullptr)
        {
            children["service-indexes"] = service_indexes.get();
        }
    }

    if(children.find("stats") == children.end())
    {
        if(stats != nullptr)
        {
            children["stats"] = stats.get();
        }
    }

    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathIds()
{
    yang_name = "path-ids"; yang_parent_name = "service-function-path";
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::~PathIds()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::has_data() const
{
    for (std::size_t index=0; index<path_id.size(); index++)
    {
        if(path_id[index]->has_data())
            return true;
    }
    return false;
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::has_operation() const
{
    for (std::size_t index=0; index<path_id.size(); index++)
    {
        if(path_id[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-ids";

    return path_buffer.str();

}

EntityPath ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "path-id")
    {
        for(auto const & c : path_id)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId>();
        c->parent = this;
        path_id.push_back(std::move(c));
        children[segment_path] = path_id.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::get_children()
{
    for (auto const & c : path_id)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::set_value(const std::string & value_path, std::string value)
{
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::ServiceFunctionPath()
    :
    path_ids(std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds>())
{
    path_ids->parent = this;
    children["path-ids"] = path_ids.get();

    yang_name = "service-function-path"; yang_parent_name = "process";
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::~ServiceFunctionPath()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::has_data() const
{
    return (path_ids !=  nullptr && path_ids->has_data());
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::has_operation() const
{
    return is_set(operation)
	|| (path_ids !=  nullptr && is_set(path_ids->operation));
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-function-path";

    return path_buffer.str();

}

EntityPath ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "path-ids")
    {
        if(path_ids != nullptr)
        {
            children["path-ids"] = path_ids.get();
        }
        else
        {
            path_ids = std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds>();
            path_ids->parent = this;
            children["path-ids"] = path_ids.get();
        }
        return children.at("path-ids");
    }

    return nullptr;
}

std::map<std::string, Entity*> & ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::get_children()
{
    if(children.find("path-ids") == children.end())
    {
        if(path_ids != nullptr)
        {
            children["path-ids"] = path_ids.get();
        }
    }

    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::set_value(const std::string & value_path, std::string value)
{
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sfp::SpiSi::SpiSi()
    :
    	processed_bytes{YType::uint64, "processed-bytes"},
	 processed_pkts{YType::uint64, "processed-pkts"}
{
    yang_name = "spi-si"; yang_parent_name = "sfp";
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sfp::SpiSi::~SpiSi()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sfp::SpiSi::has_data() const
{
    return processed_bytes.is_set
	|| processed_pkts.is_set;
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sfp::SpiSi::has_operation() const
{
    return is_set(operation)
	|| is_set(processed_bytes.operation)
	|| is_set(processed_pkts.operation);
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sfp::SpiSi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spi-si";

    return path_buffer.str();

}

EntityPath ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sfp::SpiSi::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (processed_bytes.is_set || is_set(processed_bytes.operation)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());
    if (processed_pkts.is_set || is_set(processed_pkts.operation)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sfp::SpiSi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sfp::SpiSi::get_children()
{
    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sfp::SpiSi::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
    }
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
    }
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sfp::Term::Term()
    :
    	terminated_bytes{YType::uint64, "terminated-bytes"},
	 terminated_pkts{YType::uint64, "terminated-pkts"}
{
    yang_name = "term"; yang_parent_name = "sfp";
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sfp::Term::~Term()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sfp::Term::has_data() const
{
    return terminated_bytes.is_set
	|| terminated_pkts.is_set;
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sfp::Term::has_operation() const
{
    return is_set(operation)
	|| is_set(terminated_bytes.operation)
	|| is_set(terminated_pkts.operation);
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sfp::Term::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "term";

    return path_buffer.str();

}

EntityPath ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sfp::Term::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (terminated_bytes.is_set || is_set(terminated_bytes.operation)) leaf_name_data.push_back(terminated_bytes.get_name_leafdata());
    if (terminated_pkts.is_set || is_set(terminated_pkts.operation)) leaf_name_data.push_back(terminated_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sfp::Term::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sfp::Term::get_children()
{
    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sfp::Term::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "terminated-bytes")
    {
        terminated_bytes = value;
    }
    if(value_path == "terminated-pkts")
    {
        terminated_pkts = value;
    }
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sfp::Sfp()
    :
    spi_si(std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sfp::SpiSi>())
	,term(std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sfp::Term>())
{
    spi_si->parent = this;
    children["spi-si"] = spi_si.get();

    term->parent = this;
    children["term"] = term.get();

    yang_name = "sfp"; yang_parent_name = "data";
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sfp::~Sfp()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sfp::has_data() const
{
    return (spi_si !=  nullptr && spi_si->has_data())
	|| (term !=  nullptr && term->has_data());
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sfp::has_operation() const
{
    return is_set(operation)
	|| (spi_si !=  nullptr && is_set(spi_si->operation))
	|| (term !=  nullptr && is_set(term->operation));
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sfp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sfp";

    return path_buffer.str();

}

EntityPath ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sfp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sfp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "spi-si")
    {
        if(spi_si != nullptr)
        {
            children["spi-si"] = spi_si.get();
        }
        else
        {
            spi_si = std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sfp::SpiSi>();
            spi_si->parent = this;
            children["spi-si"] = spi_si.get();
        }
        return children.at("spi-si");
    }

    if(child_yang_name == "term")
    {
        if(term != nullptr)
        {
            children["term"] = term.get();
        }
        else
        {
            term = std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sfp::Term>();
            term->parent = this;
            children["term"] = term.get();
        }
        return children.at("term");
    }

    return nullptr;
}

std::map<std::string, Entity*> & ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sfp::get_children()
{
    if(children.find("spi-si") == children.end())
    {
        if(spi_si != nullptr)
        {
            children["spi-si"] = spi_si.get();
        }
    }

    if(children.find("term") == children.end())
    {
        if(term != nullptr)
        {
            children["term"] = term.get();
        }
    }

    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sfp::set_value(const std::string & value_path, std::string value)
{
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::SpiSi::SpiSi()
    :
    	processed_bytes{YType::uint64, "processed-bytes"},
	 processed_pkts{YType::uint64, "processed-pkts"}
{
    yang_name = "spi-si"; yang_parent_name = "data";
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::SpiSi::~SpiSi()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::SpiSi::has_data() const
{
    return processed_bytes.is_set
	|| processed_pkts.is_set;
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::SpiSi::has_operation() const
{
    return is_set(operation)
	|| is_set(processed_bytes.operation)
	|| is_set(processed_pkts.operation);
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::SpiSi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spi-si";

    return path_buffer.str();

}

EntityPath ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::SpiSi::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (processed_bytes.is_set || is_set(processed_bytes.operation)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());
    if (processed_pkts.is_set || is_set(processed_pkts.operation)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::SpiSi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::SpiSi::get_children()
{
    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::SpiSi::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
    }
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
    }
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Term::Term()
    :
    	terminated_bytes{YType::uint64, "terminated-bytes"},
	 terminated_pkts{YType::uint64, "terminated-pkts"}
{
    yang_name = "term"; yang_parent_name = "data";
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Term::~Term()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Term::has_data() const
{
    return terminated_bytes.is_set
	|| terminated_pkts.is_set;
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Term::has_operation() const
{
    return is_set(operation)
	|| is_set(terminated_bytes.operation)
	|| is_set(terminated_pkts.operation);
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Term::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "term";

    return path_buffer.str();

}

EntityPath ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Term::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (terminated_bytes.is_set || is_set(terminated_bytes.operation)) leaf_name_data.push_back(terminated_bytes.get_name_leafdata());
    if (terminated_pkts.is_set || is_set(terminated_pkts.operation)) leaf_name_data.push_back(terminated_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Term::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Term::get_children()
{
    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Term::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "terminated-bytes")
    {
        terminated_bytes = value;
    }
    if(value_path == "terminated-pkts")
    {
        terminated_pkts = value;
    }
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sf::Sf()
    :
    	processed_bytes{YType::uint64, "processed-bytes"},
	 processed_pkts{YType::uint64, "processed-pkts"}
{
    yang_name = "sf"; yang_parent_name = "data";
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sf::~Sf()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sf::has_data() const
{
    return processed_bytes.is_set
	|| processed_pkts.is_set;
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sf::has_operation() const
{
    return is_set(operation)
	|| is_set(processed_bytes.operation)
	|| is_set(processed_pkts.operation);
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sf";

    return path_buffer.str();

}

EntityPath ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (processed_bytes.is_set || is_set(processed_bytes.operation)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());
    if (processed_pkts.is_set || is_set(processed_pkts.operation)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sf::get_children()
{
    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
    }
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
    }
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sff::Sff()
    :
    	processed_bytes{YType::uint64, "processed-bytes"},
	 processed_pkts{YType::uint64, "processed-pkts"}
{
    yang_name = "sff"; yang_parent_name = "data";
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sff::~Sff()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sff::has_data() const
{
    return processed_bytes.is_set
	|| processed_pkts.is_set;
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sff::has_operation() const
{
    return is_set(operation)
	|| is_set(processed_bytes.operation)
	|| is_set(processed_pkts.operation);
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sff::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sff";

    return path_buffer.str();

}

EntityPath ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sff::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (processed_bytes.is_set || is_set(processed_bytes.operation)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());
    if (processed_pkts.is_set || is_set(processed_pkts.operation)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sff::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sff::get_children()
{
    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sff::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
    }
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
    }
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::SffLocal::SffLocal()
    :
    	lookup_err_bytes{YType::uint64, "lookup-err-bytes"},
	 lookup_err_pkts{YType::uint64, "lookup-err-pkts"},
	 malformed_err_bytes{YType::uint64, "malformed-err-bytes"},
	 malformed_err_pkts{YType::uint64, "malformed-err-pkts"}
{
    yang_name = "sff-local"; yang_parent_name = "data";
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::SffLocal::~SffLocal()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::SffLocal::has_data() const
{
    return lookup_err_bytes.is_set
	|| lookup_err_pkts.is_set
	|| malformed_err_bytes.is_set
	|| malformed_err_pkts.is_set;
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::SffLocal::has_operation() const
{
    return is_set(operation)
	|| is_set(lookup_err_bytes.operation)
	|| is_set(lookup_err_pkts.operation)
	|| is_set(malformed_err_bytes.operation)
	|| is_set(malformed_err_pkts.operation);
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::SffLocal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sff-local";

    return path_buffer.str();

}

EntityPath ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::SffLocal::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lookup_err_bytes.is_set || is_set(lookup_err_bytes.operation)) leaf_name_data.push_back(lookup_err_bytes.get_name_leafdata());
    if (lookup_err_pkts.is_set || is_set(lookup_err_pkts.operation)) leaf_name_data.push_back(lookup_err_pkts.get_name_leafdata());
    if (malformed_err_bytes.is_set || is_set(malformed_err_bytes.operation)) leaf_name_data.push_back(malformed_err_bytes.get_name_leafdata());
    if (malformed_err_pkts.is_set || is_set(malformed_err_pkts.operation)) leaf_name_data.push_back(malformed_err_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::SffLocal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::SffLocal::get_children()
{
    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::SffLocal::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "lookup-err-bytes")
    {
        lookup_err_bytes = value;
    }
    if(value_path == "lookup-err-pkts")
    {
        lookup_err_pkts = value;
    }
    if(value_path == "malformed-err-bytes")
    {
        malformed_err_bytes = value;
    }
    if(value_path == "malformed-err-pkts")
    {
        malformed_err_pkts = value;
    }
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Data()
    :
    	type{YType::enumeration, "type"}
    	,
    sf(std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sf>())
	,sff(std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sff>())
	,sff_local(std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::SffLocal>())
	,sfp(std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sfp>())
	,spi_si(std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::SpiSi>())
	,term(std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Term>())
{
    sf->parent = this;
    children["sf"] = sf.get();

    sff->parent = this;
    children["sff"] = sff.get();

    sff_local->parent = this;
    children["sff-local"] = sff_local.get();

    sfp->parent = this;
    children["sfp"] = sfp.get();

    spi_si->parent = this;
    children["spi-si"] = spi_si.get();

    term->parent = this;
    children["term"] = term.get();

    yang_name = "data"; yang_parent_name = "sf-name";
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::~Data()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::has_data() const
{
    return type.is_set
	|| (sf !=  nullptr && sf->has_data())
	|| (sff !=  nullptr && sff->has_data())
	|| (sff_local !=  nullptr && sff_local->has_data())
	|| (sfp !=  nullptr && sfp->has_data())
	|| (spi_si !=  nullptr && spi_si->has_data())
	|| (term !=  nullptr && term->has_data());
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::has_operation() const
{
    return is_set(operation)
	|| is_set(type.operation)
	|| (sf !=  nullptr && is_set(sf->operation))
	|| (sff !=  nullptr && is_set(sff->operation))
	|| (sff_local !=  nullptr && is_set(sff_local->operation))
	|| (sfp !=  nullptr && is_set(sfp->operation))
	|| (spi_si !=  nullptr && is_set(spi_si->operation))
	|| (term !=  nullptr && is_set(term->operation));
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";

    return path_buffer.str();

}

EntityPath ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sf")
    {
        if(sf != nullptr)
        {
            children["sf"] = sf.get();
        }
        else
        {
            sf = std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sf>();
            sf->parent = this;
            children["sf"] = sf.get();
        }
        return children.at("sf");
    }

    if(child_yang_name == "sff")
    {
        if(sff != nullptr)
        {
            children["sff"] = sff.get();
        }
        else
        {
            sff = std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sff>();
            sff->parent = this;
            children["sff"] = sff.get();
        }
        return children.at("sff");
    }

    if(child_yang_name == "sff-local")
    {
        if(sff_local != nullptr)
        {
            children["sff-local"] = sff_local.get();
        }
        else
        {
            sff_local = std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::SffLocal>();
            sff_local->parent = this;
            children["sff-local"] = sff_local.get();
        }
        return children.at("sff-local");
    }

    if(child_yang_name == "sfp")
    {
        if(sfp != nullptr)
        {
            children["sfp"] = sfp.get();
        }
        else
        {
            sfp = std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sfp>();
            sfp->parent = this;
            children["sfp"] = sfp.get();
        }
        return children.at("sfp");
    }

    if(child_yang_name == "spi-si")
    {
        if(spi_si != nullptr)
        {
            children["spi-si"] = spi_si.get();
        }
        else
        {
            spi_si = std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::SpiSi>();
            spi_si->parent = this;
            children["spi-si"] = spi_si.get();
        }
        return children.at("spi-si");
    }

    if(child_yang_name == "term")
    {
        if(term != nullptr)
        {
            children["term"] = term.get();
        }
        else
        {
            term = std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Term>();
            term->parent = this;
            children["term"] = term.get();
        }
        return children.at("term");
    }

    return nullptr;
}

std::map<std::string, Entity*> & ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::get_children()
{
    if(children.find("sf") == children.end())
    {
        if(sf != nullptr)
        {
            children["sf"] = sf.get();
        }
    }

    if(children.find("sff") == children.end())
    {
        if(sff != nullptr)
        {
            children["sff"] = sff.get();
        }
    }

    if(children.find("sff-local") == children.end())
    {
        if(sff_local != nullptr)
        {
            children["sff-local"] = sff_local.get();
        }
    }

    if(children.find("sfp") == children.end())
    {
        if(sfp != nullptr)
        {
            children["sfp"] = sfp.get();
        }
    }

    if(children.find("spi-si") == children.end())
    {
        if(spi_si != nullptr)
        {
            children["spi-si"] = spi_si.get();
        }
    }

    if(children.find("term") == children.end())
    {
        if(term != nullptr)
        {
            children["term"] = term.get();
        }
    }

    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "type")
    {
        type = value;
    }
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::SiArr::Data::SpiSi::SpiSi()
    :
    	processed_bytes{YType::uint64, "processed-bytes"},
	 processed_pkts{YType::uint64, "processed-pkts"}
{
    yang_name = "spi-si"; yang_parent_name = "data";
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::SiArr::Data::SpiSi::~SpiSi()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::SiArr::Data::SpiSi::has_data() const
{
    return processed_bytes.is_set
	|| processed_pkts.is_set;
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::SiArr::Data::SpiSi::has_operation() const
{
    return is_set(operation)
	|| is_set(processed_bytes.operation)
	|| is_set(processed_pkts.operation);
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::SiArr::Data::SpiSi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spi-si";

    return path_buffer.str();

}

EntityPath ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::SiArr::Data::SpiSi::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (processed_bytes.is_set || is_set(processed_bytes.operation)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());
    if (processed_pkts.is_set || is_set(processed_pkts.operation)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::SiArr::Data::SpiSi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::SiArr::Data::SpiSi::get_children()
{
    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::SiArr::Data::SpiSi::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
    }
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
    }
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::SiArr::Data::Term::Term()
    :
    	terminated_bytes{YType::uint64, "terminated-bytes"},
	 terminated_pkts{YType::uint64, "terminated-pkts"}
{
    yang_name = "term"; yang_parent_name = "data";
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::SiArr::Data::Term::~Term()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::SiArr::Data::Term::has_data() const
{
    return terminated_bytes.is_set
	|| terminated_pkts.is_set;
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::SiArr::Data::Term::has_operation() const
{
    return is_set(operation)
	|| is_set(terminated_bytes.operation)
	|| is_set(terminated_pkts.operation);
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::SiArr::Data::Term::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "term";

    return path_buffer.str();

}

EntityPath ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::SiArr::Data::Term::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (terminated_bytes.is_set || is_set(terminated_bytes.operation)) leaf_name_data.push_back(terminated_bytes.get_name_leafdata());
    if (terminated_pkts.is_set || is_set(terminated_pkts.operation)) leaf_name_data.push_back(terminated_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::SiArr::Data::Term::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::SiArr::Data::Term::get_children()
{
    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::SiArr::Data::Term::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "terminated-bytes")
    {
        terminated_bytes = value;
    }
    if(value_path == "terminated-pkts")
    {
        terminated_pkts = value;
    }
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::SiArr::Data::Data()
    :
    	type{YType::enumeration, "type"}
    	,
    spi_si(std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::SiArr::Data::SpiSi>())
	,term(std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::SiArr::Data::Term>())
{
    spi_si->parent = this;
    children["spi-si"] = spi_si.get();

    term->parent = this;
    children["term"] = term.get();

    yang_name = "data"; yang_parent_name = "si-arr";
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::SiArr::Data::~Data()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::SiArr::Data::has_data() const
{
    return type.is_set
	|| (spi_si !=  nullptr && spi_si->has_data())
	|| (term !=  nullptr && term->has_data());
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::SiArr::Data::has_operation() const
{
    return is_set(operation)
	|| is_set(type.operation)
	|| (spi_si !=  nullptr && is_set(spi_si->operation))
	|| (term !=  nullptr && is_set(term->operation));
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::SiArr::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";

    return path_buffer.str();

}

EntityPath ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::SiArr::Data::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::SiArr::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "spi-si")
    {
        if(spi_si != nullptr)
        {
            children["spi-si"] = spi_si.get();
        }
        else
        {
            spi_si = std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::SiArr::Data::SpiSi>();
            spi_si->parent = this;
            children["spi-si"] = spi_si.get();
        }
        return children.at("spi-si");
    }

    if(child_yang_name == "term")
    {
        if(term != nullptr)
        {
            children["term"] = term.get();
        }
        else
        {
            term = std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::SiArr::Data::Term>();
            term->parent = this;
            children["term"] = term.get();
        }
        return children.at("term");
    }

    return nullptr;
}

std::map<std::string, Entity*> & ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::SiArr::Data::get_children()
{
    if(children.find("spi-si") == children.end())
    {
        if(spi_si != nullptr)
        {
            children["spi-si"] = spi_si.get();
        }
    }

    if(children.find("term") == children.end())
    {
        if(term != nullptr)
        {
            children["term"] = term.get();
        }
    }

    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::SiArr::Data::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "type")
    {
        type = value;
    }
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::SiArr::SiArr()
    :
    	si{YType::uint8, "si"}
    	,
    data(std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::SiArr::Data>())
{
    data->parent = this;
    children["data"] = data.get();

    yang_name = "si-arr"; yang_parent_name = "sf-name";
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::SiArr::~SiArr()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::SiArr::has_data() const
{
    return si.is_set
	|| (data !=  nullptr && data->has_data());
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::SiArr::has_operation() const
{
    return is_set(operation)
	|| is_set(si.operation)
	|| (data !=  nullptr && is_set(data->operation));
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::SiArr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "si-arr";

    return path_buffer.str();

}

EntityPath ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::SiArr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (si.is_set || is_set(si.operation)) leaf_name_data.push_back(si.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::SiArr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "data")
    {
        if(data != nullptr)
        {
            children["data"] = data.get();
        }
        else
        {
            data = std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::SiArr::Data>();
            data->parent = this;
            children["data"] = data.get();
        }
        return children.at("data");
    }

    return nullptr;
}

std::map<std::string, Entity*> & ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::SiArr::get_children()
{
    if(children.find("data") == children.end())
    {
        if(data != nullptr)
        {
            children["data"] = data.get();
        }
    }

    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::SiArr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "si")
    {
        si = value;
    }
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::SfName()
    :
    	name{YType::str, "name"}
    	,
    data(std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data>())
{
    data->parent = this;
    children["data"] = data.get();

    yang_name = "sf-name"; yang_parent_name = "sf-names";
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::~SfName()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::has_data() const
{
    for (std::size_t index=0; index<si_arr.size(); index++)
    {
        if(si_arr[index]->has_data())
            return true;
    }
    return name.is_set
	|| (data !=  nullptr && data->has_data());
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::has_operation() const
{
    for (std::size_t index=0; index<si_arr.size(); index++)
    {
        if(si_arr[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(name.operation)
	|| (data !=  nullptr && is_set(data->operation));
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sf-name" <<"[name='" <<name.get() <<"']";

    return path_buffer.str();

}

EntityPath ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "data")
    {
        if(data != nullptr)
        {
            children["data"] = data.get();
        }
        else
        {
            data = std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data>();
            data->parent = this;
            children["data"] = data.get();
        }
        return children.at("data");
    }

    if(child_yang_name == "si-arr")
    {
        for(auto const & c : si_arr)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::SiArr>();
        c->parent = this;
        si_arr.push_back(std::move(c));
        children[segment_path] = si_arr.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::get_children()
{
    if(children.find("data") == children.end())
    {
        if(data != nullptr)
        {
            children["data"] = data.get();
        }
    }

    for (auto const & c : si_arr)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfNames()
{
    yang_name = "sf-names"; yang_parent_name = "service-function";
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::~SfNames()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::has_data() const
{
    for (std::size_t index=0; index<sf_name.size(); index++)
    {
        if(sf_name[index]->has_data())
            return true;
    }
    return false;
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::has_operation() const
{
    for (std::size_t index=0; index<sf_name.size(); index++)
    {
        if(sf_name[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sf-names";

    return path_buffer.str();

}

EntityPath ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sf-name")
    {
        for(auto const & c : sf_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName>();
        c->parent = this;
        sf_name.push_back(std::move(c));
        children[segment_path] = sf_name.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::get_children()
{
    for (auto const & c : sf_name)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::set_value(const std::string & value_path, std::string value)
{
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::ServiceFunction()
    :
    sf_names(std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames>())
{
    sf_names->parent = this;
    children["sf-names"] = sf_names.get();

    yang_name = "service-function"; yang_parent_name = "process";
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::~ServiceFunction()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::has_data() const
{
    return (sf_names !=  nullptr && sf_names->has_data());
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::has_operation() const
{
    return is_set(operation)
	|| (sf_names !=  nullptr && is_set(sf_names->operation));
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-function";

    return path_buffer.str();

}

EntityPath ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sf-names")
    {
        if(sf_names != nullptr)
        {
            children["sf-names"] = sf_names.get();
        }
        else
        {
            sf_names = std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames>();
            sf_names->parent = this;
            children["sf-names"] = sf_names.get();
        }
        return children.at("sf-names");
    }

    return nullptr;
}

std::map<std::string, Entity*> & ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::get_children()
{
    if(children.find("sf-names") == children.end())
    {
        if(sf_names != nullptr)
        {
            children["sf-names"] = sf_names.get();
        }
    }

    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::set_value(const std::string & value_path, std::string value)
{
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sfp::SpiSi::SpiSi()
    :
    	processed_bytes{YType::uint64, "processed-bytes"},
	 processed_pkts{YType::uint64, "processed-pkts"}
{
    yang_name = "spi-si"; yang_parent_name = "sfp";
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sfp::SpiSi::~SpiSi()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sfp::SpiSi::has_data() const
{
    return processed_bytes.is_set
	|| processed_pkts.is_set;
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sfp::SpiSi::has_operation() const
{
    return is_set(operation)
	|| is_set(processed_bytes.operation)
	|| is_set(processed_pkts.operation);
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sfp::SpiSi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spi-si";

    return path_buffer.str();

}

EntityPath ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sfp::SpiSi::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (processed_bytes.is_set || is_set(processed_bytes.operation)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());
    if (processed_pkts.is_set || is_set(processed_pkts.operation)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sfp::SpiSi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sfp::SpiSi::get_children()
{
    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sfp::SpiSi::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
    }
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
    }
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sfp::Term::Term()
    :
    	terminated_bytes{YType::uint64, "terminated-bytes"},
	 terminated_pkts{YType::uint64, "terminated-pkts"}
{
    yang_name = "term"; yang_parent_name = "sfp";
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sfp::Term::~Term()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sfp::Term::has_data() const
{
    return terminated_bytes.is_set
	|| terminated_pkts.is_set;
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sfp::Term::has_operation() const
{
    return is_set(operation)
	|| is_set(terminated_bytes.operation)
	|| is_set(terminated_pkts.operation);
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sfp::Term::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "term";

    return path_buffer.str();

}

EntityPath ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sfp::Term::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (terminated_bytes.is_set || is_set(terminated_bytes.operation)) leaf_name_data.push_back(terminated_bytes.get_name_leafdata());
    if (terminated_pkts.is_set || is_set(terminated_pkts.operation)) leaf_name_data.push_back(terminated_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sfp::Term::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sfp::Term::get_children()
{
    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sfp::Term::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "terminated-bytes")
    {
        terminated_bytes = value;
    }
    if(value_path == "terminated-pkts")
    {
        terminated_pkts = value;
    }
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sfp::Sfp()
    :
    spi_si(std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sfp::SpiSi>())
	,term(std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sfp::Term>())
{
    spi_si->parent = this;
    children["spi-si"] = spi_si.get();

    term->parent = this;
    children["term"] = term.get();

    yang_name = "sfp"; yang_parent_name = "data";
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sfp::~Sfp()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sfp::has_data() const
{
    return (spi_si !=  nullptr && spi_si->has_data())
	|| (term !=  nullptr && term->has_data());
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sfp::has_operation() const
{
    return is_set(operation)
	|| (spi_si !=  nullptr && is_set(spi_si->operation))
	|| (term !=  nullptr && is_set(term->operation));
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sfp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sfp";

    return path_buffer.str();

}

EntityPath ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sfp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sfp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "spi-si")
    {
        if(spi_si != nullptr)
        {
            children["spi-si"] = spi_si.get();
        }
        else
        {
            spi_si = std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sfp::SpiSi>();
            spi_si->parent = this;
            children["spi-si"] = spi_si.get();
        }
        return children.at("spi-si");
    }

    if(child_yang_name == "term")
    {
        if(term != nullptr)
        {
            children["term"] = term.get();
        }
        else
        {
            term = std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sfp::Term>();
            term->parent = this;
            children["term"] = term.get();
        }
        return children.at("term");
    }

    return nullptr;
}

std::map<std::string, Entity*> & ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sfp::get_children()
{
    if(children.find("spi-si") == children.end())
    {
        if(spi_si != nullptr)
        {
            children["spi-si"] = spi_si.get();
        }
    }

    if(children.find("term") == children.end())
    {
        if(term != nullptr)
        {
            children["term"] = term.get();
        }
    }

    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sfp::set_value(const std::string & value_path, std::string value)
{
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::SpiSi::SpiSi()
    :
    	processed_bytes{YType::uint64, "processed-bytes"},
	 processed_pkts{YType::uint64, "processed-pkts"}
{
    yang_name = "spi-si"; yang_parent_name = "data";
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::SpiSi::~SpiSi()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::SpiSi::has_data() const
{
    return processed_bytes.is_set
	|| processed_pkts.is_set;
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::SpiSi::has_operation() const
{
    return is_set(operation)
	|| is_set(processed_bytes.operation)
	|| is_set(processed_pkts.operation);
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::SpiSi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spi-si";

    return path_buffer.str();

}

EntityPath ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::SpiSi::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (processed_bytes.is_set || is_set(processed_bytes.operation)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());
    if (processed_pkts.is_set || is_set(processed_pkts.operation)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::SpiSi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::SpiSi::get_children()
{
    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::SpiSi::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
    }
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
    }
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Term::Term()
    :
    	terminated_bytes{YType::uint64, "terminated-bytes"},
	 terminated_pkts{YType::uint64, "terminated-pkts"}
{
    yang_name = "term"; yang_parent_name = "data";
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Term::~Term()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Term::has_data() const
{
    return terminated_bytes.is_set
	|| terminated_pkts.is_set;
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Term::has_operation() const
{
    return is_set(operation)
	|| is_set(terminated_bytes.operation)
	|| is_set(terminated_pkts.operation);
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Term::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "term";

    return path_buffer.str();

}

EntityPath ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Term::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (terminated_bytes.is_set || is_set(terminated_bytes.operation)) leaf_name_data.push_back(terminated_bytes.get_name_leafdata());
    if (terminated_pkts.is_set || is_set(terminated_pkts.operation)) leaf_name_data.push_back(terminated_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Term::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Term::get_children()
{
    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Term::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "terminated-bytes")
    {
        terminated_bytes = value;
    }
    if(value_path == "terminated-pkts")
    {
        terminated_pkts = value;
    }
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sf::Sf()
    :
    	processed_bytes{YType::uint64, "processed-bytes"},
	 processed_pkts{YType::uint64, "processed-pkts"}
{
    yang_name = "sf"; yang_parent_name = "data";
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sf::~Sf()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sf::has_data() const
{
    return processed_bytes.is_set
	|| processed_pkts.is_set;
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sf::has_operation() const
{
    return is_set(operation)
	|| is_set(processed_bytes.operation)
	|| is_set(processed_pkts.operation);
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sf";

    return path_buffer.str();

}

EntityPath ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (processed_bytes.is_set || is_set(processed_bytes.operation)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());
    if (processed_pkts.is_set || is_set(processed_pkts.operation)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sf::get_children()
{
    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
    }
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
    }
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sff::Sff()
    :
    	processed_bytes{YType::uint64, "processed-bytes"},
	 processed_pkts{YType::uint64, "processed-pkts"}
{
    yang_name = "sff"; yang_parent_name = "data";
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sff::~Sff()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sff::has_data() const
{
    return processed_bytes.is_set
	|| processed_pkts.is_set;
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sff::has_operation() const
{
    return is_set(operation)
	|| is_set(processed_bytes.operation)
	|| is_set(processed_pkts.operation);
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sff::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sff";

    return path_buffer.str();

}

EntityPath ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sff::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (processed_bytes.is_set || is_set(processed_bytes.operation)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());
    if (processed_pkts.is_set || is_set(processed_pkts.operation)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sff::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sff::get_children()
{
    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sff::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
    }
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
    }
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::SffLocal::SffLocal()
    :
    	lookup_err_bytes{YType::uint64, "lookup-err-bytes"},
	 lookup_err_pkts{YType::uint64, "lookup-err-pkts"},
	 malformed_err_bytes{YType::uint64, "malformed-err-bytes"},
	 malformed_err_pkts{YType::uint64, "malformed-err-pkts"}
{
    yang_name = "sff-local"; yang_parent_name = "data";
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::SffLocal::~SffLocal()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::SffLocal::has_data() const
{
    return lookup_err_bytes.is_set
	|| lookup_err_pkts.is_set
	|| malformed_err_bytes.is_set
	|| malformed_err_pkts.is_set;
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::SffLocal::has_operation() const
{
    return is_set(operation)
	|| is_set(lookup_err_bytes.operation)
	|| is_set(lookup_err_pkts.operation)
	|| is_set(malformed_err_bytes.operation)
	|| is_set(malformed_err_pkts.operation);
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::SffLocal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sff-local";

    return path_buffer.str();

}

EntityPath ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::SffLocal::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lookup_err_bytes.is_set || is_set(lookup_err_bytes.operation)) leaf_name_data.push_back(lookup_err_bytes.get_name_leafdata());
    if (lookup_err_pkts.is_set || is_set(lookup_err_pkts.operation)) leaf_name_data.push_back(lookup_err_pkts.get_name_leafdata());
    if (malformed_err_bytes.is_set || is_set(malformed_err_bytes.operation)) leaf_name_data.push_back(malformed_err_bytes.get_name_leafdata());
    if (malformed_err_pkts.is_set || is_set(malformed_err_pkts.operation)) leaf_name_data.push_back(malformed_err_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::SffLocal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::SffLocal::get_children()
{
    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::SffLocal::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "lookup-err-bytes")
    {
        lookup_err_bytes = value;
    }
    if(value_path == "lookup-err-pkts")
    {
        lookup_err_pkts = value;
    }
    if(value_path == "malformed-err-bytes")
    {
        malformed_err_bytes = value;
    }
    if(value_path == "malformed-err-pkts")
    {
        malformed_err_pkts = value;
    }
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Data()
    :
    	type{YType::enumeration, "type"}
    	,
    sf(std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sf>())
	,sff(std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sff>())
	,sff_local(std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::SffLocal>())
	,sfp(std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sfp>())
	,spi_si(std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::SpiSi>())
	,term(std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Term>())
{
    sf->parent = this;
    children["sf"] = sf.get();

    sff->parent = this;
    children["sff"] = sff.get();

    sff_local->parent = this;
    children["sff-local"] = sff_local.get();

    sfp->parent = this;
    children["sfp"] = sfp.get();

    spi_si->parent = this;
    children["spi-si"] = spi_si.get();

    term->parent = this;
    children["term"] = term.get();

    yang_name = "data"; yang_parent_name = "error";
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::~Data()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::has_data() const
{
    return type.is_set
	|| (sf !=  nullptr && sf->has_data())
	|| (sff !=  nullptr && sff->has_data())
	|| (sff_local !=  nullptr && sff_local->has_data())
	|| (sfp !=  nullptr && sfp->has_data())
	|| (spi_si !=  nullptr && spi_si->has_data())
	|| (term !=  nullptr && term->has_data());
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::has_operation() const
{
    return is_set(operation)
	|| is_set(type.operation)
	|| (sf !=  nullptr && is_set(sf->operation))
	|| (sff !=  nullptr && is_set(sff->operation))
	|| (sff_local !=  nullptr && is_set(sff_local->operation))
	|| (sfp !=  nullptr && is_set(sfp->operation))
	|| (spi_si !=  nullptr && is_set(spi_si->operation))
	|| (term !=  nullptr && is_set(term->operation));
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";

    return path_buffer.str();

}

EntityPath ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sf")
    {
        if(sf != nullptr)
        {
            children["sf"] = sf.get();
        }
        else
        {
            sf = std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sf>();
            sf->parent = this;
            children["sf"] = sf.get();
        }
        return children.at("sf");
    }

    if(child_yang_name == "sff")
    {
        if(sff != nullptr)
        {
            children["sff"] = sff.get();
        }
        else
        {
            sff = std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sff>();
            sff->parent = this;
            children["sff"] = sff.get();
        }
        return children.at("sff");
    }

    if(child_yang_name == "sff-local")
    {
        if(sff_local != nullptr)
        {
            children["sff-local"] = sff_local.get();
        }
        else
        {
            sff_local = std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::SffLocal>();
            sff_local->parent = this;
            children["sff-local"] = sff_local.get();
        }
        return children.at("sff-local");
    }

    if(child_yang_name == "sfp")
    {
        if(sfp != nullptr)
        {
            children["sfp"] = sfp.get();
        }
        else
        {
            sfp = std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sfp>();
            sfp->parent = this;
            children["sfp"] = sfp.get();
        }
        return children.at("sfp");
    }

    if(child_yang_name == "spi-si")
    {
        if(spi_si != nullptr)
        {
            children["spi-si"] = spi_si.get();
        }
        else
        {
            spi_si = std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::SpiSi>();
            spi_si->parent = this;
            children["spi-si"] = spi_si.get();
        }
        return children.at("spi-si");
    }

    if(child_yang_name == "term")
    {
        if(term != nullptr)
        {
            children["term"] = term.get();
        }
        else
        {
            term = std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Term>();
            term->parent = this;
            children["term"] = term.get();
        }
        return children.at("term");
    }

    return nullptr;
}

std::map<std::string, Entity*> & ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::get_children()
{
    if(children.find("sf") == children.end())
    {
        if(sf != nullptr)
        {
            children["sf"] = sf.get();
        }
    }

    if(children.find("sff") == children.end())
    {
        if(sff != nullptr)
        {
            children["sff"] = sff.get();
        }
    }

    if(children.find("sff-local") == children.end())
    {
        if(sff_local != nullptr)
        {
            children["sff-local"] = sff_local.get();
        }
    }

    if(children.find("sfp") == children.end())
    {
        if(sfp != nullptr)
        {
            children["sfp"] = sfp.get();
        }
    }

    if(children.find("spi-si") == children.end())
    {
        if(spi_si != nullptr)
        {
            children["spi-si"] = spi_si.get();
        }
    }

    if(children.find("term") == children.end())
    {
        if(term != nullptr)
        {
            children["term"] = term.get();
        }
    }

    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "type")
    {
        type = value;
    }
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::SiArr::Data::SpiSi::SpiSi()
    :
    	processed_bytes{YType::uint64, "processed-bytes"},
	 processed_pkts{YType::uint64, "processed-pkts"}
{
    yang_name = "spi-si"; yang_parent_name = "data";
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::SiArr::Data::SpiSi::~SpiSi()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::SiArr::Data::SpiSi::has_data() const
{
    return processed_bytes.is_set
	|| processed_pkts.is_set;
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::SiArr::Data::SpiSi::has_operation() const
{
    return is_set(operation)
	|| is_set(processed_bytes.operation)
	|| is_set(processed_pkts.operation);
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::SiArr::Data::SpiSi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spi-si";

    return path_buffer.str();

}

EntityPath ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::SiArr::Data::SpiSi::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (processed_bytes.is_set || is_set(processed_bytes.operation)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());
    if (processed_pkts.is_set || is_set(processed_pkts.operation)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::SiArr::Data::SpiSi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::SiArr::Data::SpiSi::get_children()
{
    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::SiArr::Data::SpiSi::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
    }
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
    }
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::SiArr::Data::Term::Term()
    :
    	terminated_bytes{YType::uint64, "terminated-bytes"},
	 terminated_pkts{YType::uint64, "terminated-pkts"}
{
    yang_name = "term"; yang_parent_name = "data";
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::SiArr::Data::Term::~Term()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::SiArr::Data::Term::has_data() const
{
    return terminated_bytes.is_set
	|| terminated_pkts.is_set;
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::SiArr::Data::Term::has_operation() const
{
    return is_set(operation)
	|| is_set(terminated_bytes.operation)
	|| is_set(terminated_pkts.operation);
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::SiArr::Data::Term::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "term";

    return path_buffer.str();

}

EntityPath ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::SiArr::Data::Term::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (terminated_bytes.is_set || is_set(terminated_bytes.operation)) leaf_name_data.push_back(terminated_bytes.get_name_leafdata());
    if (terminated_pkts.is_set || is_set(terminated_pkts.operation)) leaf_name_data.push_back(terminated_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::SiArr::Data::Term::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::SiArr::Data::Term::get_children()
{
    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::SiArr::Data::Term::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "terminated-bytes")
    {
        terminated_bytes = value;
    }
    if(value_path == "terminated-pkts")
    {
        terminated_pkts = value;
    }
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::SiArr::Data::Data()
    :
    	type{YType::enumeration, "type"}
    	,
    spi_si(std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::SiArr::Data::SpiSi>())
	,term(std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::SiArr::Data::Term>())
{
    spi_si->parent = this;
    children["spi-si"] = spi_si.get();

    term->parent = this;
    children["term"] = term.get();

    yang_name = "data"; yang_parent_name = "si-arr";
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::SiArr::Data::~Data()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::SiArr::Data::has_data() const
{
    return type.is_set
	|| (spi_si !=  nullptr && spi_si->has_data())
	|| (term !=  nullptr && term->has_data());
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::SiArr::Data::has_operation() const
{
    return is_set(operation)
	|| is_set(type.operation)
	|| (spi_si !=  nullptr && is_set(spi_si->operation))
	|| (term !=  nullptr && is_set(term->operation));
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::SiArr::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";

    return path_buffer.str();

}

EntityPath ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::SiArr::Data::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::SiArr::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "spi-si")
    {
        if(spi_si != nullptr)
        {
            children["spi-si"] = spi_si.get();
        }
        else
        {
            spi_si = std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::SiArr::Data::SpiSi>();
            spi_si->parent = this;
            children["spi-si"] = spi_si.get();
        }
        return children.at("spi-si");
    }

    if(child_yang_name == "term")
    {
        if(term != nullptr)
        {
            children["term"] = term.get();
        }
        else
        {
            term = std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::SiArr::Data::Term>();
            term->parent = this;
            children["term"] = term.get();
        }
        return children.at("term");
    }

    return nullptr;
}

std::map<std::string, Entity*> & ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::SiArr::Data::get_children()
{
    if(children.find("spi-si") == children.end())
    {
        if(spi_si != nullptr)
        {
            children["spi-si"] = spi_si.get();
        }
    }

    if(children.find("term") == children.end())
    {
        if(term != nullptr)
        {
            children["term"] = term.get();
        }
    }

    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::SiArr::Data::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "type")
    {
        type = value;
    }
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::SiArr::SiArr()
    :
    	si{YType::uint8, "si"}
    	,
    data(std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::SiArr::Data>())
{
    data->parent = this;
    children["data"] = data.get();

    yang_name = "si-arr"; yang_parent_name = "error";
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::SiArr::~SiArr()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::SiArr::has_data() const
{
    return si.is_set
	|| (data !=  nullptr && data->has_data());
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::SiArr::has_operation() const
{
    return is_set(operation)
	|| is_set(si.operation)
	|| (data !=  nullptr && is_set(data->operation));
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::SiArr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "si-arr";

    return path_buffer.str();

}

EntityPath ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::SiArr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (si.is_set || is_set(si.operation)) leaf_name_data.push_back(si.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::SiArr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "data")
    {
        if(data != nullptr)
        {
            children["data"] = data.get();
        }
        else
        {
            data = std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::SiArr::Data>();
            data->parent = this;
            children["data"] = data.get();
        }
        return children.at("data");
    }

    return nullptr;
}

std::map<std::string, Entity*> & ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::SiArr::get_children()
{
    if(children.find("data") == children.end())
    {
        if(data != nullptr)
        {
            children["data"] = data.get();
        }
    }

    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::SiArr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "si")
    {
        si = value;
    }
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Error()
    :
    data(std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data>())
{
    data->parent = this;
    children["data"] = data.get();

    yang_name = "error"; yang_parent_name = "local";
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::~Error()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::has_data() const
{
    for (std::size_t index=0; index<si_arr.size(); index++)
    {
        if(si_arr[index]->has_data())
            return true;
    }
    return (data !=  nullptr && data->has_data());
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::has_operation() const
{
    for (std::size_t index=0; index<si_arr.size(); index++)
    {
        if(si_arr[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (data !=  nullptr && is_set(data->operation));
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error";

    return path_buffer.str();

}

EntityPath ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "data")
    {
        if(data != nullptr)
        {
            children["data"] = data.get();
        }
        else
        {
            data = std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data>();
            data->parent = this;
            children["data"] = data.get();
        }
        return children.at("data");
    }

    if(child_yang_name == "si-arr")
    {
        for(auto const & c : si_arr)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::SiArr>();
        c->parent = this;
        si_arr.push_back(std::move(c));
        children[segment_path] = si_arr.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::get_children()
{
    if(children.find("data") == children.end())
    {
        if(data != nullptr)
        {
            children["data"] = data.get();
        }
    }

    for (auto const & c : si_arr)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::set_value(const std::string & value_path, std::string value)
{
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Local()
    :
    error(std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error>())
{
    error->parent = this;
    children["error"] = error.get();

    yang_name = "local"; yang_parent_name = "service-function-forwarder";
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::~Local()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::has_data() const
{
    return (error !=  nullptr && error->has_data());
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::has_operation() const
{
    return is_set(operation)
	|| (error !=  nullptr && is_set(error->operation));
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local";

    return path_buffer.str();

}

EntityPath ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "error")
    {
        if(error != nullptr)
        {
            children["error"] = error.get();
        }
        else
        {
            error = std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error>();
            error->parent = this;
            children["error"] = error.get();
        }
        return children.at("error");
    }

    return nullptr;
}

std::map<std::string, Entity*> & ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::get_children()
{
    if(children.find("error") == children.end())
    {
        if(error != nullptr)
        {
            children["error"] = error.get();
        }
    }

    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::set_value(const std::string & value_path, std::string value)
{
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::SpiSi::SpiSi()
    :
    	processed_bytes{YType::uint64, "processed-bytes"},
	 processed_pkts{YType::uint64, "processed-pkts"}
{
    yang_name = "spi-si"; yang_parent_name = "sfp";
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::SpiSi::~SpiSi()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::SpiSi::has_data() const
{
    return processed_bytes.is_set
	|| processed_pkts.is_set;
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::SpiSi::has_operation() const
{
    return is_set(operation)
	|| is_set(processed_bytes.operation)
	|| is_set(processed_pkts.operation);
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::SpiSi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spi-si";

    return path_buffer.str();

}

EntityPath ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::SpiSi::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (processed_bytes.is_set || is_set(processed_bytes.operation)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());
    if (processed_pkts.is_set || is_set(processed_pkts.operation)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::SpiSi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::SpiSi::get_children()
{
    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::SpiSi::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
    }
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
    }
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::Term::Term()
    :
    	terminated_bytes{YType::uint64, "terminated-bytes"},
	 terminated_pkts{YType::uint64, "terminated-pkts"}
{
    yang_name = "term"; yang_parent_name = "sfp";
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::Term::~Term()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::Term::has_data() const
{
    return terminated_bytes.is_set
	|| terminated_pkts.is_set;
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::Term::has_operation() const
{
    return is_set(operation)
	|| is_set(terminated_bytes.operation)
	|| is_set(terminated_pkts.operation);
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::Term::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "term";

    return path_buffer.str();

}

EntityPath ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::Term::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (terminated_bytes.is_set || is_set(terminated_bytes.operation)) leaf_name_data.push_back(terminated_bytes.get_name_leafdata());
    if (terminated_pkts.is_set || is_set(terminated_pkts.operation)) leaf_name_data.push_back(terminated_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::Term::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::Term::get_children()
{
    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::Term::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "terminated-bytes")
    {
        terminated_bytes = value;
    }
    if(value_path == "terminated-pkts")
    {
        terminated_pkts = value;
    }
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::Sfp()
    :
    spi_si(std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::SpiSi>())
	,term(std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::Term>())
{
    spi_si->parent = this;
    children["spi-si"] = spi_si.get();

    term->parent = this;
    children["term"] = term.get();

    yang_name = "sfp"; yang_parent_name = "data";
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::~Sfp()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::has_data() const
{
    return (spi_si !=  nullptr && spi_si->has_data())
	|| (term !=  nullptr && term->has_data());
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::has_operation() const
{
    return is_set(operation)
	|| (spi_si !=  nullptr && is_set(spi_si->operation))
	|| (term !=  nullptr && is_set(term->operation));
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sfp";

    return path_buffer.str();

}

EntityPath ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "spi-si")
    {
        if(spi_si != nullptr)
        {
            children["spi-si"] = spi_si.get();
        }
        else
        {
            spi_si = std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::SpiSi>();
            spi_si->parent = this;
            children["spi-si"] = spi_si.get();
        }
        return children.at("spi-si");
    }

    if(child_yang_name == "term")
    {
        if(term != nullptr)
        {
            children["term"] = term.get();
        }
        else
        {
            term = std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::Term>();
            term->parent = this;
            children["term"] = term.get();
        }
        return children.at("term");
    }

    return nullptr;
}

std::map<std::string, Entity*> & ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::get_children()
{
    if(children.find("spi-si") == children.end())
    {
        if(spi_si != nullptr)
        {
            children["spi-si"] = spi_si.get();
        }
    }

    if(children.find("term") == children.end())
    {
        if(term != nullptr)
        {
            children["term"] = term.get();
        }
    }

    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::set_value(const std::string & value_path, std::string value)
{
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::SpiSi::SpiSi()
    :
    	processed_bytes{YType::uint64, "processed-bytes"},
	 processed_pkts{YType::uint64, "processed-pkts"}
{
    yang_name = "spi-si"; yang_parent_name = "data";
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::SpiSi::~SpiSi()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::SpiSi::has_data() const
{
    return processed_bytes.is_set
	|| processed_pkts.is_set;
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::SpiSi::has_operation() const
{
    return is_set(operation)
	|| is_set(processed_bytes.operation)
	|| is_set(processed_pkts.operation);
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::SpiSi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spi-si";

    return path_buffer.str();

}

EntityPath ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::SpiSi::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (processed_bytes.is_set || is_set(processed_bytes.operation)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());
    if (processed_pkts.is_set || is_set(processed_pkts.operation)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::SpiSi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::SpiSi::get_children()
{
    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::SpiSi::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
    }
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
    }
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Term::Term()
    :
    	terminated_bytes{YType::uint64, "terminated-bytes"},
	 terminated_pkts{YType::uint64, "terminated-pkts"}
{
    yang_name = "term"; yang_parent_name = "data";
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Term::~Term()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Term::has_data() const
{
    return terminated_bytes.is_set
	|| terminated_pkts.is_set;
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Term::has_operation() const
{
    return is_set(operation)
	|| is_set(terminated_bytes.operation)
	|| is_set(terminated_pkts.operation);
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Term::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "term";

    return path_buffer.str();

}

EntityPath ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Term::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (terminated_bytes.is_set || is_set(terminated_bytes.operation)) leaf_name_data.push_back(terminated_bytes.get_name_leafdata());
    if (terminated_pkts.is_set || is_set(terminated_pkts.operation)) leaf_name_data.push_back(terminated_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Term::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Term::get_children()
{
    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Term::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "terminated-bytes")
    {
        terminated_bytes = value;
    }
    if(value_path == "terminated-pkts")
    {
        terminated_pkts = value;
    }
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sf::Sf()
    :
    	processed_bytes{YType::uint64, "processed-bytes"},
	 processed_pkts{YType::uint64, "processed-pkts"}
{
    yang_name = "sf"; yang_parent_name = "data";
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sf::~Sf()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sf::has_data() const
{
    return processed_bytes.is_set
	|| processed_pkts.is_set;
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sf::has_operation() const
{
    return is_set(operation)
	|| is_set(processed_bytes.operation)
	|| is_set(processed_pkts.operation);
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sf";

    return path_buffer.str();

}

EntityPath ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (processed_bytes.is_set || is_set(processed_bytes.operation)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());
    if (processed_pkts.is_set || is_set(processed_pkts.operation)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sf::get_children()
{
    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
    }
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
    }
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sff::Sff()
    :
    	processed_bytes{YType::uint64, "processed-bytes"},
	 processed_pkts{YType::uint64, "processed-pkts"}
{
    yang_name = "sff"; yang_parent_name = "data";
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sff::~Sff()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sff::has_data() const
{
    return processed_bytes.is_set
	|| processed_pkts.is_set;
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sff::has_operation() const
{
    return is_set(operation)
	|| is_set(processed_bytes.operation)
	|| is_set(processed_pkts.operation);
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sff::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sff";

    return path_buffer.str();

}

EntityPath ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sff::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (processed_bytes.is_set || is_set(processed_bytes.operation)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());
    if (processed_pkts.is_set || is_set(processed_pkts.operation)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sff::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sff::get_children()
{
    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sff::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
    }
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
    }
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::SffLocal::SffLocal()
    :
    	lookup_err_bytes{YType::uint64, "lookup-err-bytes"},
	 lookup_err_pkts{YType::uint64, "lookup-err-pkts"},
	 malformed_err_bytes{YType::uint64, "malformed-err-bytes"},
	 malformed_err_pkts{YType::uint64, "malformed-err-pkts"}
{
    yang_name = "sff-local"; yang_parent_name = "data";
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::SffLocal::~SffLocal()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::SffLocal::has_data() const
{
    return lookup_err_bytes.is_set
	|| lookup_err_pkts.is_set
	|| malformed_err_bytes.is_set
	|| malformed_err_pkts.is_set;
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::SffLocal::has_operation() const
{
    return is_set(operation)
	|| is_set(lookup_err_bytes.operation)
	|| is_set(lookup_err_pkts.operation)
	|| is_set(malformed_err_bytes.operation)
	|| is_set(malformed_err_pkts.operation);
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::SffLocal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sff-local";

    return path_buffer.str();

}

EntityPath ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::SffLocal::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lookup_err_bytes.is_set || is_set(lookup_err_bytes.operation)) leaf_name_data.push_back(lookup_err_bytes.get_name_leafdata());
    if (lookup_err_pkts.is_set || is_set(lookup_err_pkts.operation)) leaf_name_data.push_back(lookup_err_pkts.get_name_leafdata());
    if (malformed_err_bytes.is_set || is_set(malformed_err_bytes.operation)) leaf_name_data.push_back(malformed_err_bytes.get_name_leafdata());
    if (malformed_err_pkts.is_set || is_set(malformed_err_pkts.operation)) leaf_name_data.push_back(malformed_err_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::SffLocal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::SffLocal::get_children()
{
    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::SffLocal::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "lookup-err-bytes")
    {
        lookup_err_bytes = value;
    }
    if(value_path == "lookup-err-pkts")
    {
        lookup_err_pkts = value;
    }
    if(value_path == "malformed-err-bytes")
    {
        malformed_err_bytes = value;
    }
    if(value_path == "malformed-err-pkts")
    {
        malformed_err_pkts = value;
    }
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Data()
    :
    	type{YType::enumeration, "type"}
    	,
    sf(std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sf>())
	,sff(std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sff>())
	,sff_local(std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::SffLocal>())
	,sfp(std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp>())
	,spi_si(std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::SpiSi>())
	,term(std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Term>())
{
    sf->parent = this;
    children["sf"] = sf.get();

    sff->parent = this;
    children["sff"] = sff.get();

    sff_local->parent = this;
    children["sff-local"] = sff_local.get();

    sfp->parent = this;
    children["sfp"] = sfp.get();

    spi_si->parent = this;
    children["spi-si"] = spi_si.get();

    term->parent = this;
    children["term"] = term.get();

    yang_name = "data"; yang_parent_name = "sff-name";
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::~Data()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::has_data() const
{
    return type.is_set
	|| (sf !=  nullptr && sf->has_data())
	|| (sff !=  nullptr && sff->has_data())
	|| (sff_local !=  nullptr && sff_local->has_data())
	|| (sfp !=  nullptr && sfp->has_data())
	|| (spi_si !=  nullptr && spi_si->has_data())
	|| (term !=  nullptr && term->has_data());
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::has_operation() const
{
    return is_set(operation)
	|| is_set(type.operation)
	|| (sf !=  nullptr && is_set(sf->operation))
	|| (sff !=  nullptr && is_set(sff->operation))
	|| (sff_local !=  nullptr && is_set(sff_local->operation))
	|| (sfp !=  nullptr && is_set(sfp->operation))
	|| (spi_si !=  nullptr && is_set(spi_si->operation))
	|| (term !=  nullptr && is_set(term->operation));
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";

    return path_buffer.str();

}

EntityPath ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sf")
    {
        if(sf != nullptr)
        {
            children["sf"] = sf.get();
        }
        else
        {
            sf = std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sf>();
            sf->parent = this;
            children["sf"] = sf.get();
        }
        return children.at("sf");
    }

    if(child_yang_name == "sff")
    {
        if(sff != nullptr)
        {
            children["sff"] = sff.get();
        }
        else
        {
            sff = std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sff>();
            sff->parent = this;
            children["sff"] = sff.get();
        }
        return children.at("sff");
    }

    if(child_yang_name == "sff-local")
    {
        if(sff_local != nullptr)
        {
            children["sff-local"] = sff_local.get();
        }
        else
        {
            sff_local = std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::SffLocal>();
            sff_local->parent = this;
            children["sff-local"] = sff_local.get();
        }
        return children.at("sff-local");
    }

    if(child_yang_name == "sfp")
    {
        if(sfp != nullptr)
        {
            children["sfp"] = sfp.get();
        }
        else
        {
            sfp = std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp>();
            sfp->parent = this;
            children["sfp"] = sfp.get();
        }
        return children.at("sfp");
    }

    if(child_yang_name == "spi-si")
    {
        if(spi_si != nullptr)
        {
            children["spi-si"] = spi_si.get();
        }
        else
        {
            spi_si = std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::SpiSi>();
            spi_si->parent = this;
            children["spi-si"] = spi_si.get();
        }
        return children.at("spi-si");
    }

    if(child_yang_name == "term")
    {
        if(term != nullptr)
        {
            children["term"] = term.get();
        }
        else
        {
            term = std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Term>();
            term->parent = this;
            children["term"] = term.get();
        }
        return children.at("term");
    }

    return nullptr;
}

std::map<std::string, Entity*> & ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::get_children()
{
    if(children.find("sf") == children.end())
    {
        if(sf != nullptr)
        {
            children["sf"] = sf.get();
        }
    }

    if(children.find("sff") == children.end())
    {
        if(sff != nullptr)
        {
            children["sff"] = sff.get();
        }
    }

    if(children.find("sff-local") == children.end())
    {
        if(sff_local != nullptr)
        {
            children["sff-local"] = sff_local.get();
        }
    }

    if(children.find("sfp") == children.end())
    {
        if(sfp != nullptr)
        {
            children["sfp"] = sfp.get();
        }
    }

    if(children.find("spi-si") == children.end())
    {
        if(spi_si != nullptr)
        {
            children["spi-si"] = spi_si.get();
        }
    }

    if(children.find("term") == children.end())
    {
        if(term != nullptr)
        {
            children["term"] = term.get();
        }
    }

    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "type")
    {
        type = value;
    }
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::SpiSi::SpiSi()
    :
    	processed_bytes{YType::uint64, "processed-bytes"},
	 processed_pkts{YType::uint64, "processed-pkts"}
{
    yang_name = "spi-si"; yang_parent_name = "data";
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::SpiSi::~SpiSi()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::SpiSi::has_data() const
{
    return processed_bytes.is_set
	|| processed_pkts.is_set;
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::SpiSi::has_operation() const
{
    return is_set(operation)
	|| is_set(processed_bytes.operation)
	|| is_set(processed_pkts.operation);
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::SpiSi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spi-si";

    return path_buffer.str();

}

EntityPath ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::SpiSi::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (processed_bytes.is_set || is_set(processed_bytes.operation)) leaf_name_data.push_back(processed_bytes.get_name_leafdata());
    if (processed_pkts.is_set || is_set(processed_pkts.operation)) leaf_name_data.push_back(processed_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::SpiSi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::SpiSi::get_children()
{
    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::SpiSi::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "processed-bytes")
    {
        processed_bytes = value;
    }
    if(value_path == "processed-pkts")
    {
        processed_pkts = value;
    }
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::Term::Term()
    :
    	terminated_bytes{YType::uint64, "terminated-bytes"},
	 terminated_pkts{YType::uint64, "terminated-pkts"}
{
    yang_name = "term"; yang_parent_name = "data";
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::Term::~Term()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::Term::has_data() const
{
    return terminated_bytes.is_set
	|| terminated_pkts.is_set;
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::Term::has_operation() const
{
    return is_set(operation)
	|| is_set(terminated_bytes.operation)
	|| is_set(terminated_pkts.operation);
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::Term::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "term";

    return path_buffer.str();

}

EntityPath ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::Term::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (terminated_bytes.is_set || is_set(terminated_bytes.operation)) leaf_name_data.push_back(terminated_bytes.get_name_leafdata());
    if (terminated_pkts.is_set || is_set(terminated_pkts.operation)) leaf_name_data.push_back(terminated_pkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::Term::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::Term::get_children()
{
    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::Term::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "terminated-bytes")
    {
        terminated_bytes = value;
    }
    if(value_path == "terminated-pkts")
    {
        terminated_pkts = value;
    }
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::Data()
    :
    	type{YType::enumeration, "type"}
    	,
    spi_si(std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::SpiSi>())
	,term(std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::Term>())
{
    spi_si->parent = this;
    children["spi-si"] = spi_si.get();

    term->parent = this;
    children["term"] = term.get();

    yang_name = "data"; yang_parent_name = "si-arr";
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::~Data()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::has_data() const
{
    return type.is_set
	|| (spi_si !=  nullptr && spi_si->has_data())
	|| (term !=  nullptr && term->has_data());
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::has_operation() const
{
    return is_set(operation)
	|| is_set(type.operation)
	|| (spi_si !=  nullptr && is_set(spi_si->operation))
	|| (term !=  nullptr && is_set(term->operation));
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";

    return path_buffer.str();

}

EntityPath ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "spi-si")
    {
        if(spi_si != nullptr)
        {
            children["spi-si"] = spi_si.get();
        }
        else
        {
            spi_si = std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::SpiSi>();
            spi_si->parent = this;
            children["spi-si"] = spi_si.get();
        }
        return children.at("spi-si");
    }

    if(child_yang_name == "term")
    {
        if(term != nullptr)
        {
            children["term"] = term.get();
        }
        else
        {
            term = std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::Term>();
            term->parent = this;
            children["term"] = term.get();
        }
        return children.at("term");
    }

    return nullptr;
}

std::map<std::string, Entity*> & ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::get_children()
{
    if(children.find("spi-si") == children.end())
    {
        if(spi_si != nullptr)
        {
            children["spi-si"] = spi_si.get();
        }
    }

    if(children.find("term") == children.end())
    {
        if(term != nullptr)
        {
            children["term"] = term.get();
        }
    }

    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "type")
    {
        type = value;
    }
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::SiArr::SiArr()
    :
    	si{YType::uint8, "si"}
    	,
    data(std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data>())
{
    data->parent = this;
    children["data"] = data.get();

    yang_name = "si-arr"; yang_parent_name = "sff-name";
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::SiArr::~SiArr()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::SiArr::has_data() const
{
    return si.is_set
	|| (data !=  nullptr && data->has_data());
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::SiArr::has_operation() const
{
    return is_set(operation)
	|| is_set(si.operation)
	|| (data !=  nullptr && is_set(data->operation));
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::SiArr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "si-arr";

    return path_buffer.str();

}

EntityPath ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::SiArr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (si.is_set || is_set(si.operation)) leaf_name_data.push_back(si.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::SiArr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "data")
    {
        if(data != nullptr)
        {
            children["data"] = data.get();
        }
        else
        {
            data = std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data>();
            data->parent = this;
            children["data"] = data.get();
        }
        return children.at("data");
    }

    return nullptr;
}

std::map<std::string, Entity*> & ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::SiArr::get_children()
{
    if(children.find("data") == children.end())
    {
        if(data != nullptr)
        {
            children["data"] = data.get();
        }
    }

    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::SiArr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "si")
    {
        si = value;
    }
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::SffName()
    :
    	name{YType::str, "name"}
    	,
    data(std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data>())
{
    data->parent = this;
    children["data"] = data.get();

    yang_name = "sff-name"; yang_parent_name = "sff-names";
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::~SffName()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::has_data() const
{
    for (std::size_t index=0; index<si_arr.size(); index++)
    {
        if(si_arr[index]->has_data())
            return true;
    }
    return name.is_set
	|| (data !=  nullptr && data->has_data());
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::has_operation() const
{
    for (std::size_t index=0; index<si_arr.size(); index++)
    {
        if(si_arr[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(name.operation)
	|| (data !=  nullptr && is_set(data->operation));
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sff-name" <<"[name='" <<name.get() <<"']";

    return path_buffer.str();

}

EntityPath ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "data")
    {
        if(data != nullptr)
        {
            children["data"] = data.get();
        }
        else
        {
            data = std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data>();
            data->parent = this;
            children["data"] = data.get();
        }
        return children.at("data");
    }

    if(child_yang_name == "si-arr")
    {
        for(auto const & c : si_arr)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::SiArr>();
        c->parent = this;
        si_arr.push_back(std::move(c));
        children[segment_path] = si_arr.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::get_children()
{
    if(children.find("data") == children.end())
    {
        if(data != nullptr)
        {
            children["data"] = data.get();
        }
    }

    for (auto const & c : si_arr)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffNames()
{
    yang_name = "sff-names"; yang_parent_name = "service-function-forwarder";
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::~SffNames()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::has_data() const
{
    for (std::size_t index=0; index<sff_name.size(); index++)
    {
        if(sff_name[index]->has_data())
            return true;
    }
    return false;
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::has_operation() const
{
    for (std::size_t index=0; index<sff_name.size(); index++)
    {
        if(sff_name[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sff-names";

    return path_buffer.str();

}

EntityPath ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sff-name")
    {
        for(auto const & c : sff_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName>();
        c->parent = this;
        sff_name.push_back(std::move(c));
        children[segment_path] = sff_name.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::get_children()
{
    for (auto const & c : sff_name)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::set_value(const std::string & value_path, std::string value)
{
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::ServiceFunctionForwarder()
    :
    local(std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local>())
	,sff_names(std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames>())
{
    local->parent = this;
    children["local"] = local.get();

    sff_names->parent = this;
    children["sff-names"] = sff_names.get();

    yang_name = "service-function-forwarder"; yang_parent_name = "process";
}

ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::~ServiceFunctionForwarder()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::has_data() const
{
    return (local !=  nullptr && local->has_data())
	|| (sff_names !=  nullptr && sff_names->has_data());
}

bool ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::has_operation() const
{
    return is_set(operation)
	|| (local !=  nullptr && is_set(local->operation))
	|| (sff_names !=  nullptr && is_set(sff_names->operation));
}

std::string ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-function-forwarder";

    return path_buffer.str();

}

EntityPath ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "local")
    {
        if(local != nullptr)
        {
            children["local"] = local.get();
        }
        else
        {
            local = std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local>();
            local->parent = this;
            children["local"] = local.get();
        }
        return children.at("local");
    }

    if(child_yang_name == "sff-names")
    {
        if(sff_names != nullptr)
        {
            children["sff-names"] = sff_names.get();
        }
        else
        {
            sff_names = std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames>();
            sff_names->parent = this;
            children["sff-names"] = sff_names.get();
        }
        return children.at("sff-names");
    }

    return nullptr;
}

std::map<std::string, Entity*> & ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::get_children()
{
    if(children.find("local") == children.end())
    {
        if(local != nullptr)
        {
            children["local"] = local.get();
        }
    }

    if(children.find("sff-names") == children.end())
    {
        if(sff_names != nullptr)
        {
            children["sff-names"] = sff_names.get();
        }
    }

    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::set_value(const std::string & value_path, std::string value)
{
}

ServiceFunctionChaining::Nodes::Node::Process::Process()
    :
    service_function(std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction>())
	,service_function_forwarder(std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder>())
	,service_function_path(std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath>())
{
    service_function->parent = this;
    children["service-function"] = service_function.get();

    service_function_forwarder->parent = this;
    children["service-function-forwarder"] = service_function_forwarder.get();

    service_function_path->parent = this;
    children["service-function-path"] = service_function_path.get();

    yang_name = "process"; yang_parent_name = "node";
}

ServiceFunctionChaining::Nodes::Node::Process::~Process()
{
}

bool ServiceFunctionChaining::Nodes::Node::Process::has_data() const
{
    return (service_function !=  nullptr && service_function->has_data())
	|| (service_function_forwarder !=  nullptr && service_function_forwarder->has_data())
	|| (service_function_path !=  nullptr && service_function_path->has_data());
}

bool ServiceFunctionChaining::Nodes::Node::Process::has_operation() const
{
    return is_set(operation)
	|| (service_function !=  nullptr && is_set(service_function->operation))
	|| (service_function_forwarder !=  nullptr && is_set(service_function_forwarder->operation))
	|| (service_function_path !=  nullptr && is_set(service_function_path->operation));
}

std::string ServiceFunctionChaining::Nodes::Node::Process::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "process";

    return path_buffer.str();

}

EntityPath ServiceFunctionChaining::Nodes::Node::Process::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ServiceFunctionChaining::Nodes::Node::Process::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "service-function")
    {
        if(service_function != nullptr)
        {
            children["service-function"] = service_function.get();
        }
        else
        {
            service_function = std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction>();
            service_function->parent = this;
            children["service-function"] = service_function.get();
        }
        return children.at("service-function");
    }

    if(child_yang_name == "service-function-forwarder")
    {
        if(service_function_forwarder != nullptr)
        {
            children["service-function-forwarder"] = service_function_forwarder.get();
        }
        else
        {
            service_function_forwarder = std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder>();
            service_function_forwarder->parent = this;
            children["service-function-forwarder"] = service_function_forwarder.get();
        }
        return children.at("service-function-forwarder");
    }

    if(child_yang_name == "service-function-path")
    {
        if(service_function_path != nullptr)
        {
            children["service-function-path"] = service_function_path.get();
        }
        else
        {
            service_function_path = std::make_unique<ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath>();
            service_function_path->parent = this;
            children["service-function-path"] = service_function_path.get();
        }
        return children.at("service-function-path");
    }

    return nullptr;
}

std::map<std::string, Entity*> & ServiceFunctionChaining::Nodes::Node::Process::get_children()
{
    if(children.find("service-function") == children.end())
    {
        if(service_function != nullptr)
        {
            children["service-function"] = service_function.get();
        }
    }

    if(children.find("service-function-forwarder") == children.end())
    {
        if(service_function_forwarder != nullptr)
        {
            children["service-function-forwarder"] = service_function_forwarder.get();
        }
    }

    if(children.find("service-function-path") == children.end())
    {
        if(service_function_path != nullptr)
        {
            children["service-function-path"] = service_function_path.get();
        }
    }

    return children;
}

void ServiceFunctionChaining::Nodes::Node::Process::set_value(const std::string & value_path, std::string value)
{
}

ServiceFunctionChaining::Nodes::Node::Node()
    :
    	node_name{YType::str, "node-name"}
    	,
    process(std::make_unique<ServiceFunctionChaining::Nodes::Node::Process>())
{
    process->parent = this;
    children["process"] = process.get();

    yang_name = "node"; yang_parent_name = "nodes";
}

ServiceFunctionChaining::Nodes::Node::~Node()
{
}

bool ServiceFunctionChaining::Nodes::Node::has_data() const
{
    return node_name.is_set
	|| (process !=  nullptr && process->has_data());
}

bool ServiceFunctionChaining::Nodes::Node::has_operation() const
{
    return is_set(operation)
	|| is_set(node_name.operation)
	|| (process !=  nullptr && is_set(process->operation));
}

std::string ServiceFunctionChaining::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-name='" <<node_name.get() <<"']";

    return path_buffer.str();

}

EntityPath ServiceFunctionChaining::Nodes::Node::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-pbr-vservice-ea-oper:service-function-chaining/nodes/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.operation)) leaf_name_data.push_back(node_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ServiceFunctionChaining::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "process")
    {
        if(process != nullptr)
        {
            children["process"] = process.get();
        }
        else
        {
            process = std::make_unique<ServiceFunctionChaining::Nodes::Node::Process>();
            process->parent = this;
            children["process"] = process.get();
        }
        return children.at("process");
    }

    return nullptr;
}

std::map<std::string, Entity*> & ServiceFunctionChaining::Nodes::Node::get_children()
{
    if(children.find("process") == children.end())
    {
        if(process != nullptr)
        {
            children["process"] = process.get();
        }
    }

    return children;
}

void ServiceFunctionChaining::Nodes::Node::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "node-name")
    {
        node_name = value;
    }
}

ServiceFunctionChaining::Nodes::Nodes()
{
    yang_name = "nodes"; yang_parent_name = "service-function-chaining";
}

ServiceFunctionChaining::Nodes::~Nodes()
{
}

bool ServiceFunctionChaining::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool ServiceFunctionChaining::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ServiceFunctionChaining::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";

    return path_buffer.str();

}

EntityPath ServiceFunctionChaining::Nodes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-pbr-vservice-ea-oper:service-function-chaining/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ServiceFunctionChaining::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "node")
    {
        for(auto const & c : node)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<ServiceFunctionChaining::Nodes::Node>();
        c->parent = this;
        node.push_back(std::move(c));
        children[segment_path] = node.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & ServiceFunctionChaining::Nodes::get_children()
{
    for (auto const & c : node)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void ServiceFunctionChaining::Nodes::set_value(const std::string & value_path, std::string value)
{
}

ServiceFunctionChaining::ServiceFunctionChaining()
    :
    nodes(std::make_unique<ServiceFunctionChaining::Nodes>())
{
    nodes->parent = this;
    children["nodes"] = nodes.get();

    yang_name = "service-function-chaining"; yang_parent_name = "Cisco-IOS-XR-pbr-vservice-ea-oper";
}

ServiceFunctionChaining::~ServiceFunctionChaining()
{
}

bool ServiceFunctionChaining::has_data() const
{
    return (nodes !=  nullptr && nodes->has_data());
}

bool ServiceFunctionChaining::has_operation() const
{
    return is_set(operation)
	|| (nodes !=  nullptr && is_set(nodes->operation));
}

std::string ServiceFunctionChaining::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pbr-vservice-ea-oper:service-function-chaining";

    return path_buffer.str();

}

EntityPath ServiceFunctionChaining::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* ServiceFunctionChaining::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "nodes")
    {
        if(nodes != nullptr)
        {
            children["nodes"] = nodes.get();
        }
        else
        {
            nodes = std::make_unique<ServiceFunctionChaining::Nodes>();
            nodes->parent = this;
            children["nodes"] = nodes.get();
        }
        return children.at("nodes");
    }

    return nullptr;
}

std::map<std::string, Entity*> & ServiceFunctionChaining::get_children()
{
    if(children.find("nodes") == children.end())
    {
        if(nodes != nullptr)
        {
            children["nodes"] = nodes.get();
        }
    }

    return children;
}

void ServiceFunctionChaining::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> ServiceFunctionChaining::clone_ptr()
{
    return std::make_unique<ServiceFunctionChaining>();
}

const Enum::Value VsNshStatsEnum::vs_nsh_stats_spi_si {0, "vs-nsh-stats-spi-si"};
const Enum::Value VsNshStatsEnum::vs_nsh_stats_ter_min_ate {1, "vs-nsh-stats-ter-min-ate"};
const Enum::Value VsNshStatsEnum::vs_nsh_stats_sf {2, "vs-nsh-stats-sf"};
const Enum::Value VsNshStatsEnum::vs_nsh_stats_sff {3, "vs-nsh-stats-sff"};
const Enum::Value VsNshStatsEnum::vs_nsh_stats_sff_local {4, "vs-nsh-stats-sff-local"};
const Enum::Value VsNshStatsEnum::vs_nsh_stats_sfp {5, "vs-nsh-stats-sfp"};
const Enum::Value VsNshStatsEnum::vs_nsh_stats_sfp_detail {6, "vs-nsh-stats-sfp-detail"};
const Enum::Value VsNshStatsEnum::vs_nsh_stats_max {7, "vs-nsh-stats-max"};


}
}

